#include<stdio.h>
#include<stdlib.h>

#define MAX 3

int stack[MAX];
int top=-1;

void push(int element)
{
	if(top == MAX-1)
	{
		printf("Stack is full\n");
	}
	else
	{
		printf("Enter element to push into stack : \n");
		scanf("%d", &element);
		top++;
		stack[top]=element;
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
		printf("Deleted element is : %d\n", stack[top]);
		top--;
	}
}

void print()
{
	int i;
	if(top == -1)
	{
		printf("Stack is empty\n");
	}
	else
	{
		printf("Stack is : ");
		for(int i = top; i >= 0; i--)
		{
			printf("%d ", stack[i]);
		}
	}
	printf("\n");
}

int main()
{
	int choice,element;
	while(1)
	{
		printf("1.Push\n2.Pop\n3.Print\n4.Exit stack\n");
		printf("Enter your choice : ");
		scanf("%d", &choice);
		switch(choice)
		{
			case 1: 
				push(element);
				break;
			case 2:
				pop();
				break;
			case 3:
				print();
				break;
			case 4: exit(0);
				break;
			default: printf("error: No valid option\n");
				 break;
		}
	}
}

