#include <iostream>
using namespace std;
int a(int b,int c)
{
    return b/c;
}
/**
 * @brief 
 * 异常处理的简单例子
 * 异常处理不适合所有异常
 * 所以这个例子只是演示如何使用异常处理
 * 分母为0并不会走异常处理
 * @param argc 
 * @param argv 
 * @return int 
 */
int main(int argc, char *argv[])
{
    try
    {
        cout<<a(1,0);
    }
    catch(const std::exception& e)
    {
        cout << e.what() << '\n';
        cout<<"Exception caught"<<endl;
    }
    
}
