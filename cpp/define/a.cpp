/* # 运算符会把 replacement-text 令牌转换为用引号引起来的字符串。*/
#include <iostream>
using namespace std;

#define MKSTR( x ) #x

int main ()
{
    cout << MKSTR(HELLO C++) << endl;

    return 0;
} 