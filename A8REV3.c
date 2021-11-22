#include<stdio.h>
#define size 5
int isEmpty(int arr[],int n,int front, int rear){
 	if(front==rear)
  		return 1;
 	else
		return 0;
}
int isFull(int arr[], int n,int rear){
	if(rear==n-1)
  		return 1;
	else
   		return 0;
}
int insert(int arr[],int n,int item,int rear){
	if(rear==size-1)
  		printf("Queue is FULL\n");
	else
	{
		rear=rear+1;
		arr[rear]=item;
	}
	return rear;
}
int del(int arr[], int n,int front, int rear){
	if(front==rear){
		printf("Queue is EMPTY\n");
	return -9999;
}
	else
	{
		front=front+1;
	int data=arr[front];
	printf("Deleted element is %d\n",data);
	return front;
	}
}
void display(int arr[],int n, int front, int rear){
	if(front==rear)
  		printf("Queue is empty!!!");
	else{
	int i;
	for(i=front+1;i<=rear;i++)
   	printf("%d ",arr[i]);
}
}
int main()
{
	int arr[size],front, rear;
	front=-1;
	rear=-1;
	int choice;
	char another;
	printf("ENTER 1 TO CHECK WHETHER THE QUEUE IS EMPTY OR NOT\n");
	printf("ENTER 2 TO CHECK WHETHER THE QUEUE IS FULL OR NOT\n");
	printf("ENTER 3 TO INSERT AN ITEM IN QUEUE\n");
	printf("ENTER 4 TO REMOVE AN ELEMENT FROM QUEUE\n");
	printf("ENTER 5 TO DISPLAY THE QUEUE\n");
	printf("\n");
	do{
		printf("Enter your choice: ");
		scanf("%d",&choice);
		printf("\n");
		switch(choice)
	{
		case 1:
		{
			int res;
   			res=isEmpty(arr,size,front,rear);
   			if(res==1)
      			printf("The queue is EMPTY\n");
   			else
       			printf("The queu is NOT empty\n");
		}
		break;
		case 2:
		{
			int res;
			res=isFull(arr,size,rear);
   			if(res==1)
      			printf("The queue is FULL\n");
   			else
       			printf("The queu is NOT full\n");
		}
		break;
		case 3:
		{
			int item;
   			printf("Enter the item you want to insert: ");
   			scanf("%d",&item);
   			rear=insert(arr,size,item,rear);
		}
		break;
		case 4:
		{
			front=del(arr,size,front,rear);
		}
		break;	
		case 5:
		{
			display(arr,size,front,rear);
		}
		break;
		default:
		printf("YOU HAVE ENTERED A WRONG CHOICE!!!\n");
		}
		printf("\n\n");
   		printf("Do yo want to enter a choice again?\n Enter 'y' for YES and any key to exit: ");
   		getchar();
   		scanf("%c",&another);
   		printf("\n\n");
	}while(another=='y');
	return 0;
}
