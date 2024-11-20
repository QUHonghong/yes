#include <iostream>
#include <cstdlib>
#include <pthread.h>
using namespace std;
#define NUM_THREADS 5
//这里的threadid和之前学的cuda类似
void *PrintHello(void *threadid){
    int tid = *((int*)threadid);
    cout<<"hello 线程ID"<<tid<<endl;
    pthread_exit(NULL);
    return NULL;
}
int main(){
    pthread_t threads[NUM_THREADS];
    int indexes[NUM_THREADS];
    int rc;
    int i;
    for(i=0;i<NUM_THREADS;i++){
       cout << "main() : 创建线程, " << i << endl;
    
    indexes[i] = i; //先保存i的值
      // 传入的时候必须强制转换为void* 类型，即无类型指针
       rc = pthread_create(&threads[i], NULL, 
                          PrintHello, (void *)&(indexes[i]));
if (rc){
         cout << "Error:无法创建线程," << rc << endl;
         exit(-1);
      }
   }
   /*pthread_create 函数用于创建一个新的线程。这个函数的返回类型是 int，用于指示线程创建操作的成功或失败如果 pthread_create 成功创建了一个线程，它将返回 0。如果创建失败，它将返回一个非零的错误代码，这些错误代码在 <pthread.h> 头文件中定义，并且通常对应于特定的错误情况，比如资源不足、系统限制等。*/
  return 0;
}