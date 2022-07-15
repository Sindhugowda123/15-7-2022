#include <stdio.h>
#include<stdlib.h>

#define SIZE 10

int top = -1;
int stack[SIZE];

void getmin()
{
	if(top == -1)
	{
		printf("Stack is empty\n");
	}
	else
	{
		int min = stack[top];
		for(int i = top-1; i >= 0; i--)
		{
			if(stack[i] < min)
			{
				min = stack[i];
			}
		}
		printf("Minimum element = %d\n", min);
	}
}

void push(int element )
{
	if(top == SIZE-1)
	{
		printf("Stack is full\n");
	}
	else
	{
		stack[++top] = element;
	}
}

void pop()
{
	if(top == -1)
	{
		printf("Stack is empty\n");
	}
	else
	{
		printf("Deleted element = %d\n", stack[top]);
		top--;
		getmin();
	}
}

void print()
{
	printf("Stack is : ");
	for(int i=top;i>=0;i--)
	{
		printf("%d ",stack[i]);
	}
	printf("\n");
}

int main()
{
	push(25);
	push(100);
	push(3);
	push(10);
	push(5);
	push(33);
	push(7);
	print();
	pop();
	pop();
	pop();
	pop();
	pop();
	pop();
	pop();
}

/*
Expected output:

push() -> 7
push() -> 33
push() -> 5
push() -> 10
push() -> 3
push() -> 100
push() -> 25
pop() -> 25 getmin() -> 3
pop() -> 100 getmin() -> 3
pop() -> 3 getmin() -> 5

*/

