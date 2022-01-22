#pragma once
#include <cstring>

//Структура стека
struct stack {
	int top; //Хранит номер последнего элемента стека
	float elements[64]; //Хранит массив елементов стека
};

void init(struct stack *stk);
void put(struct stack* stk, float new_element);
float get(struct stack* stk);
void view(struct stack* stk);
int  number_of_elements(struct stack* stk);
bool empty(struct stack* stk);