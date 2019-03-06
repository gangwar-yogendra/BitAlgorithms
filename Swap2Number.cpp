// swap two numbers without using a temporary variable
#include <iostream>

void SwapNumber(int &a, int &b)
{
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
}

int main()
{
    int a = 10;
    int b = 20;
    
    SwapNumber(a, b);
    
    std::cout<<"a:"<<a<<", "<<"b:"<<b<<"\n";
    return 0;
}
