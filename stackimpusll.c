#include <stdio.h>
#include <stdlib.h>

struct node
{
	int info;
	struct node *next;
};

struct node *top = NULL;
struct node *current = NULL;
struct node *new1 = NULL;

void push()
{
	int item;
	new1 = (struct node *)malloc(sizeof(struct node));

	printf("\nEnter Integer Item - ");
	scanf("%d", &item);
	new1->info = item;

	if (top == NULL)
	{
		new1->next = NULL;
		top = new1;
	}
	else
	{
		new1->next = top;
		top = new1;
	}
}

void pop()
{
	new1 = (struct node *)malloc(sizeof(struct node));

	if (top == NULL)
	{
		printf("\nStack UnderFlow\n\n");
	}
	else
	{
		printf("\nPopped Item is - %d ", top->info);
		current = top;
		top = top->next;
		current->next = NULL;
		free(current);
	}
}

void disp()
{
	new1 = (struct node *)malloc(sizeof(struct node));

	if (top == NULL)
	{
		printf("\nStack UnderFlow\n");
	}
	else
	{
		current = top;
		while (current != NULL)
		{
			printf("%d \t", current->info);
			current = current->next;
		}
	}
}

void main()
{
	int choice;
	do
	{
		printf("\nSTACK USING LINKED LIST\n");
		printf("\n 1.Push");
		printf("\n 2.Pop");
		printf("\n 3.Display");
		printf("\n 4.Exit");
		printf("\n Enter your choice : ");
		scanf("%d", &choice);
		switch (choice)
		{
		case 1:
			push();
			break;
		case 2:
			pop();
			break;
		case 3:
			disp();
			break;
		case 4:
			exit(0);
			break;
		default:
			printf("\nInvalid Input \n\n");
			break;
		}
	} while (1);
}
