#include <stdio.h>
#include <stdlib.h>

void enqueue();
void dequeue();
void display();
int queue[10];
int front = -1;
int rear = -1;
int data;

int main()
{
	int choice; int choice2; int i=0;
	do
	{
	    printf("Choose an option: \n 1.Enqueue \n 2.Dequeue \n");
	    scanf("%d",&choice);
		switch (choice)
    	{
		case 1: enqueue();
		break;
		case 2: dequeue();
		break;
		case 3: display();
    	}
    	
        printf("Do you want to continue? \n");
	    scanf("%d",&choice2);
    	switch (choice2)
    	{
    		case 1: 
    		break;
    		case 2: break;
    		break;
		}
    	
	}
	while()
	
	
	return 0;
}

void enqueue()
{
	if (rear==9)
	{
		printf("Overflow \n");

	}
	else 
	{
		printf("Enter data \n");
		scanf("%d", &data);
		rear++;
		queue[rear]=data;
		if (front==-1)
		{
			front=0;
		}
	}
}

void dequeue()
{
	if ((front==-1)||(front=rear+1))
	{
		printf("Underflow \n");
	}
	else if (front==rear)
	{
		front = -1;
		rear = -1;
	}
	else
	{
		front++;
	}
}

void display ()
 {
    int i; 
    if (array[i]==-1)
	{
		printf("Stack is empty");
	}
	else 
	{
		for (i=0;i<=9;i++)
                {
			printf("%d",array[i]);
		}
	 }

}














