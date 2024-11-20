#include <iostream>
#include <string>

using namespace std;
/*
template <typename T>: 这部分声明了一个模板，其中 T 是一个占位符类型名称。当你使用 Max 函数时，你实际上会指定 T 的具体类型，比如 int、double 或任何自定义类型，只要这个类型支持必要的操作。
inline: 这个关键字建议编译器尝试将 Max 函数的调用替换为函数体本身。这样做可以减少函数调用的开销，特别是在函数体很小且频繁调用的情况下。inline 是一个向编译器的建议，编译器可以选择忽略它。
T const&: 这表示函数参数是类型为 T 的常量引用。使用引用可以避免复制参数，从而提高效率。使用 const 保证了函数内部不会修改参数的值，这是一个好的实践，因为它增加了函数的通用性和安全性。
Max (T const& a, T const& b): 这是函数的声明。它接受两个类型为 T 的常量引用作为参数，并返回一个类型为 T 的常量引用。返回值是 a 和 b 中的较大者
*/
template <typename T>
 inline T const& Max (T const& a, T const& b) 
{
    return a < b ? b:a;
}
int main ()
{
 
    int i = 39;
    int j = 20;
    cout << "Max(i, j): " << Max(i, j) << endl; 

    double f1 = 13.5; 
    double f2 = 20.7; 
    cout << "Max(f1, f2): " << Max(f1, f2) << endl; 

    string s1 = "Hello"; 
    string s2 = "World"; 
    cout << "Max(s1, s2): " << Max(s1, s2) << endl; 

   return 0;
}
