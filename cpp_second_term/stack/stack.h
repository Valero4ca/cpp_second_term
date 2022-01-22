#pragma once
#include <cstring>

//��������� �����
struct stack {
	int top; //������ ����� ���������� �������� �����
	float elements[64]; //������ ������ ��������� �����
};

void init(struct stack *stk);
void put(struct stack* stk, float new_element);
float get(struct stack* stk);
void view(struct stack* stk);
int  number_of_elements(struct stack* stk);
bool empty(struct stack* stk);