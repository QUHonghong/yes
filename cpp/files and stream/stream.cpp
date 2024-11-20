#include <fstream>
#include <iostream>
using namespace std;
int main(){
    char data[100];

    // 以写模式打开文件使用ofstream对象以及open()函数成员
    ofstream outfile;
  outfile.open("afile.dat");
  cout<<"Writing to the file"<<endl;
  //了解cin.getline()函数输入流
    cout<<"Enter your name: ";
    cin.getline(data,100);

    // 向文件写入用户输入的数据使用<<流插入运算符
    outfile<<data<<endl;
    cout<<"Enter your age: ";
    cin>>data;
    cin.ignore();

    // 再次向文件写入用户输入的数据
    outfile<<data<<endl;

    // 关闭打开的文件
    outfile.close();

    // 以读模式打开文件使用ifstream对象以及open()函数成员
    ifstream infile;
    infile.open("afile.dat");

    cout<<"Reading from the file"<<endl;
    infile>>data;

    // 在屏幕上写入数据 

    cout<<data<<endl;
    // 再次从文件读取数据，并显示它
   infile >> data; 
   cout << data << endl; 

   // 关闭打开的文件
   infile.close();

   return 0;

    
}