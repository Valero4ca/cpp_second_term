#include "stack.h"
#include <iostream>

//�������������� ��� ����
void init(struct stack* stk)
{
	stk->top = 0; //������������� ��������� ������� � �������� top
}

//��������� ������� � ����
void put(struct stack* stk, float new_element)
{
	stk->elements[stk->top] = new_element;
	stk->top++;
}

//��������� ������� �� �����
float get(struct stack* stk)
{
	float return_element;

	return_element = stk->elements[stk->top - 1];
	stk->elements[stk->top - 1] = 0;
	stk->top--;

	return return_element;
}

//������� ���� � �������
void view(struct stack* stk)
{
	if (!empty(stk)) {
		for (int i = stk->top - 1; i > 0; i--) {
			std::cout << "[" << i << "]:" << stk->elements[i] << std::endl;
		}
	}
	else {
		std::cout << "���� ������!" << std::endl;
	}
}

//���������� ���������� ��������� � �����
int number_of_elements(struct stack* stk)
{
	return stk->top;
}

//���������� ��� ���������� � ��� ������ ���� ��� ���
bool empty(struct stack* stk)
{
	if (stk->top > 0) {
		return false;
	}
	return true;
}


