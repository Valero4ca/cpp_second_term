#include <iostream>


int main()
{
    setlocale(LC_ALL, "RUS");

    int a = 10;
    int* pointer = &a;

    std::cout << "Значение переменной:"<< a <<std::endl;
    std::cout << "Адрес переменной (&):"<< &a <<std::endl;
    std::cout << std::endl;
    std::cout << "Значение указателя:"<< pointer <<std::endl;
    std::cout << "Адрес указателя (&):"<< &pointer <<std::endl;
    std::cout << "Разименование указателя (*):"<< *pointer <<std::endl;

    *pointer = *pointer/2;
    std::cout << "Значение переменной:" << a << std::endl;
    
    a = a/2;
    std::cout << "Значение переменной:" << a << std::endl;

    return 0;
}

