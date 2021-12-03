// Suraj Balaram Patil  || 38

#include <stdio.h>
#include <stdlib.h>

#define size 5

void enqueue(int);
int dequeue();
void display();

int queue[size];
int front = -1;
int rear = -1;

void main()
{
    int choice, item, num;

    do
    {
        printf("\n1.enqueue\n2.dequeue\n3.display\n4.exit");
        printf("Enter your choice");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("enter a number to be inserted");

            scanf("%d", &item);

            enqueue(item);
            break;
        case 2:
            num = dequeue();

            printf("element deleted from queue is=%d", num);
            break;

        case 3:
            display();
            break;

        case 4:
            exit(1);

        default:
            printf("invalid");
        }
    } while (1);
}
void enqueue(int n)
{
    if (front == 0 && rear == size - 1 || (rear + 1) % size == front)
    {
        printf("queue full");
        exit(1);
    }
    else if (front == -1)
    {
        front = 0;
        rear = 0;
    }
    else
    {
        rear = (rear + 1) % size;
    }
    queue[rear] = n;
}

int dequeue()
{
    int temp;
    if (front == -1)
    {
        printf("queue empty");
    }
    else if (front == rear)
    {
        temp = queue[front];
        front = -1;
        rear = -1;
    }
    else
    {
        temp = queue[front];
        front = (front + 1) % size;
    }
    return temp;
}

void display()
{
    int i;
    if (front == -1)
    {
        printf("queue empty");
    }
    else
    {
        printf("elements are:");

        for (i = front; i <= size - 1; i++)
        {
            printf("%d\t", queue[i]);
        }
        if (rear < front)
            for (i = 0; i <= rear; i++)
            {

                printf("%d\t", queue[i]);
            }
    }
}