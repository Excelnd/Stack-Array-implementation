// Stack Array implementation.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <vector>
#include <iostream>
#include <algorithm>
#define MAX_SIZE 101

using namespace std;

int A[MAX_SIZE];
int top = -1;

void Push(int x)
{
	if (top == MAX_SIZE - 1) {
		cout << "Error: stack overflow\n";
		return;
	}
	A[++top] = x;
}

void Pop()
{
	if (top == -1) {
		cout << "Error: No element to pop\n";
		return;
	}
	top--;
}

int Top()
{
	return A[top];
}


int isEmpty()
{
	if (top == -1) return 1;
	return 0;
}

void Print() {
	int i;
	printf("Stack: ");
	for (i = 0; i <= top; i++)
		printf(" %d",A[i]);
	printf("\n");
}

int main()
{
	Push(2); Print();
	Push(3); Print();
	Push(5); Print();
	Push(9); Print();
	Push(10); Print();
	Pop(); Print();
	Push(12); Print();
	Push(16); Print();
    return 0;
}

