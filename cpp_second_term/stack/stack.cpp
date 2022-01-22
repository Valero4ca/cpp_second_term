#include "stack.h"
#include <iostream>

//Инициализирует наш стек
void init(struct stack* stk)
{
	stk->top = 0; //Инициализация структуры номером её элемента top
}

//Добавляет элемент в стек
void put(struct stack* stk, float new_element)
{
	stk->elements[stk->top] = new_element;
	stk->top++;
}

//Извлекает элемент из стека
float get(struct stack* stk)
{
	float return_element;

	return_element = stk->elements[stk->top - 1];
	stk->elements[stk->top - 1] = 0;
	stk->top--;

	return return_element;
}

//Выводит стек в консоль
void view(struct stack* stk)
{
	if (!empty(stk)) {
		for (int i = stk->top - 1; i > 0; i--) {
			std::cout << "[" << i << "]:" << stk->elements[i] << std::endl;
		}
	}
	else {
		std::cout << "Стек пустой!" << std::endl;
	}
}

//Возвращает количество элементов в стеке
int number_of_elements(struct stack* stk)
{
	return stk->top;
}

//Возвращает нам информацию о том пустой стек или нет
bool empty(struct stack* stk)
{
	if (stk->top > 0) {
		return false;
	}
	return true;
}


