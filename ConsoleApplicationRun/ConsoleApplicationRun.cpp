#include <iostream>

#include "../EntityComponentSystem/include/ECS/API.h"

int main()
{
    std::cout << "Hello World!\n";

    ECS::Memory::GlobalMemoryUser gmu;
    std::cout << "class from dll created\n";

    char* str10 = (char*)gmu.Allocate(10);
    
    for (int i = 0; i < 10; ++i) str10[i] = '9';
    str10[9] = 0; // without if in Debug print too long string
    std::cout << "Print from allocated: " << str10 << "\n";
    
    gmu.Free((void*)str10);
    std::cout << "memory free";
}

