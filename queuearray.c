
/////Implementation of Queue Using Array


#include<stdio.h>
#include<stdlib.h>

#define N 5
int queue[N];
int front=-1;
int rear=-1;

void enqueue(int x)
{
   if(rear==N-1)
   {
       printf("Overflow OR Queue is Full");
   }
   else
   if(front==-1 && rear==-1)
   {
       front=rear=0;
       queue[rear]=x;

   }
       else
       {
           rear++;
           queue[rear]=x;

       }

}

void dequeue()
{
 if(front==-1 && rear==-1)
 {
     printf("Queue is empty OR Underflow");

 }
 else
 if(front == rear)
 {
     printf("deleted data is %d",queue[front]);
     front = rear=-1;

 }
 else
 {
     printf("deleted data is %d",queue[front]);
     front++;
 }

}

void display()
{
    if(front ==-1 && rear==-1)
    {
        printf("Queue is Empty");
    }
    else
    for(int i=front ; i<rear+1; i++)
    {
        printf(" %d\t",queue[i]);

    }
}

void peek()
{
    if(front==-1 && rear==-1)
    {
        printf("Queue is Empty");

    }
    else
    {
        printf("peek data is :%d",queue[front]);

    }
}



void main()
{
    int choice,n;
    do
    {
        printf("\n1.Enqueue\n2.dequeue\n3.peek\n4.display\n5.Exit\n");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                   printf("Enter the number to be Enqueue:");
                   scanf("%d",&n);

                   enqueue(n);
                   break;

            case 2:
                   dequeue();
                   break;

            case 3:
                   peek();
                   break;

            case 4:
                  display();
                  break;

            default:
                    printf("Invailid choice");



        }
    }while(choice !=5);
}
