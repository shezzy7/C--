// An Unsigned char example
#include <iostream>
using namespace std;
void fun1()
{
    unsigned char i;
    for (i = 0; i <257; i++)
        cout << i << " ";
}
  
int main()
{
    fun1();
    return 0;
}
