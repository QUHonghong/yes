#include <iostream>
using namespace std;


class Box
{
   public:
      Box() { 
         cout << "调用构造函数！" <<endl; 
      }
      ~Box() { 
         cout << "调用析构函数！" <<endl; 
      }
};

int main ()
{
    
   Box* myBoxArray = new Box[4];

   delete [] myBoxArray; // Delete array
   double* pvalue  = NULL; // 初始化为 null 的指针
   pvalue  = new double;   // 为变量请求内存
 
   *pvalue = 29494.99;     // 在分配的地址存储值
   cout << "Value of pvalue : " << *pvalue << endl;

   delete pvalue;         // 释放内存

   return 0;
}