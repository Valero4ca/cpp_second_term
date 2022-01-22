#include <iostream>
#include "stack.h"

int main()
{
    setlocale(LC_ALL, "RUS");
    std::cout << "Стек" << std::endl;

    float get_element; //Переменная в которую мы получим последний элемент стека

    struct stack* my_stack; //Указатель на структуру
    my_stack = (struct stack*)malloc(sizeof(struct stack)); //Выделяем память под стек
    
    init(my_stack); //Инициализируем стек
    
    view(my_stack); //Пробуем вывести в консоль пустой стек
    
    //Добавляем элементы в стек
    put(my_stack, 2.5);
    put(my_stack, 5.5);
    put(my_stack, 7.5);
    put(my_stack, 9.5);
    put(my_stack, 11.5);
    
    //Пробуем вывести стек с элементами в нём
    view(my_stack);

    get_element = get(my_stack); //Достаём из стека последний элемент

    view(my_stack); //Пробуем вывести стек уже без элемента, который достали

    return 0;
}
