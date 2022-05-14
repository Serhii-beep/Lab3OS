#include <iostream>
#include <string>

int main()
{
    int n = 7;

    int* p = (int*)0x000000349E8FFA54;
    std::cout << *p;
}
