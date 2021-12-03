#include <stdio.h>
#include <stdlib.h>

#define MAX 5

int queue_arr[MAX];

int rear = -1;
int front = -1;


int empty();
int full();
void insert(val);
int dele();
void display();

int empty()
{
    if (front == -1 && rear == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int full()
{
    if ((front == 0 && rear == MAX -1) || (front == rear +1))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void insert(int val)
{
    if (full())
    {
        printf("Circular Queue is full \n");
        return;
    }

    if (front == -1)
    {
        front = 0;
    }

    if(rear == MAX -1)
    {
        rear = 0;
    }
    else
    {
        rear = rear +1;
    }
    queue_arr[rear] = val;
}

int dele()
{
    int val;
    if (empty())
    {
        printf("Cicular Queue is Empty \n");
        exit(1);
    }
    val = queue_arr[front];

    if (front == rear)
    {
        rear = -1;
        front = -1;
    }
    else if( front == MAX -1)
    {
        front = 0;
    }
    else
    {
        front = front + 1;
    }
    return val;
}

void display()
{
    int i;
    if(empty())
    {
        printf("Queue is empty \n");
        return;
    }

    printf("Queue Elements Are : \n");
   
    i = front;

    if ( front <= rear)
    {
        while(i<= rear)
        {
            printf("%d ",queue_arr[i++]);
        }
    }
    else
    {
        while(i<=MAX -1)
        {
            printf("%d ",queue_arr[i++]);
        }
        i =0; 

        while(i<=rear)
        {
            printf("%d ",queue_arr[i++]);
        }
        printf("\n");
    }
}

int main()
{
    int val, choice;

    do
    {
        printf("\nEnter the Choice of the Operation : ");
        scanf("%d",&choice);

        switch (choice)
        {
        case 1:
        {
            printf("Enter the Push Element : ");
            scanf("%d",&val);

            insert(val);
            break;
        }

        case 2:
        {
            printf("Deleted element is: %d \n ",dele());
            break;
        }

        case 3:
        {
            display();
            break;
        }
        default:
        {
            printf("Enter the valid choice");
            break;
        }
        }
    } while (choice != 0);

    return 0;
}