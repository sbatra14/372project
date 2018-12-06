#include<stdio.h>
#include<stdlib.h>

//This program represents a linked list. A linked list contains elements that each have pointers to the next element
//in that list. The list can be accessed through the head pointer which points at the first element in the list. 
//The very last element in the list points to null. 

//struct to contain a single element in a linked lis

struct Node
{
	int info;
	struct Node *nextElement;
};

//In the main method we can construct a linked list using the Node elements

int main()
{
	struct Node *head = NULL; //this represents the first element in the list
	struct Node *elem1 = NULL;
	struct Node *elem2 = NULL;
	struct Node *elem3 = NULL;
	struct Node *elem4 = NULL;
	struct Node *elem5 = NULL;
	
	//Now we need to allocate memory for these nodes
	head = (struct Node*)malloc(sizeof(struct Node));
	elem1 = (struct Node*)malloc(sizeof(struct Node));
	elem2 = (struct Node*)malloc(sizeof(struct Node));
	elem3 = (struct Node*)malloc(sizeof(struct Node));
	elem4 = (struct Node*)malloc(sizeof(struct Node));
	elem5 = (struct Node*)malloc(sizeof(struct Node));

	//Insert data and have nextElement pointers referenece the next item in the linked list
	head->info = 14526;
	head->nextElement = elem1;

	elem1->info = 93583;
	elem1->nextElement = elem2;

	elem2->info = 87923;
	elem2->nextElement = elem3;

	elem3->info = 35457;
	elem3->nextElement = elem4;

	elem4->info = 85421;
	elem4->nextElement = elem5;

	elem5->info = 234959;
	elem5->nextElement = NULL; //represents the end of the list

	struct Node *ptr = NULL;
	ptr = (struct Node*)malloc(sizeof(struct Node));
	ptr = head;

	while (ptr != NULL)
	{
		printf("%i\n", ptr->info);
		ptr = ptr->nextElement;
	}
	return 0; 
}
