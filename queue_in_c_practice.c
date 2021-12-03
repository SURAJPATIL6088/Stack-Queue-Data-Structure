#include <stdio.h>
#include <stdbool.h>

void insert(int push_ele);
int del();
bool isEmpty();
bool isFull();
int peek();
void display();

int size, queue_arr[100], i;
int front = -1;
int rear = -1;

bool isEmpty()
{
    if (front == -1 || front > rear)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool isFull()
{
    if (rear == size - 1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void insert(int push_ele)
{
    if (isFull())
    {
        printf("Queue is full ");
    }
    rear++;
    queue_arr[rear] = push_ele;

    if (front == -1)
    {
        front++;
    }
}

int del()
{
    if (isEmpty())
    {
        printf("Queue is empty ");
    }
    front++;
    int push_ele = queue_arr[front];
    return push_ele;
}

int peek()
{
    if (isEmpty())
    {
        printf("Queue is empty ");
        return -1;
    }
    return queue_arr[front];
}

void display()
{
    if (isEmpty())
    {
        printf("Queue is empty ");
    }

    for (i = front; i <= rear; i++)
    {
        printf("%d ", queue_arr[i]);
    }
}

int main()
{
    int choice, push_ele;

    printf("enter the Size of Queue ");
    scanf("%d", &size);

    for (i = 0; i < size; i++)
    {
        queue_arr[size];
    }

    do
    {
        printf("\nEnter the Choice of operation ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
        {
            printf("Enter the push Element : ");
            scanf("%d", &push_ele);

            insert(push_ele);
            break;
        }
        case 2:
        {
            del();
            printf("Element is deleted ");
            break;
        }
        case 3:
        {
            peek();
            printf("Front element is %d", peek());
            break;
        }
        case 4:
        {
            display();
            break;
        }
        default:
        {
            printf("Enter the Valid Operand ");
            break;
        }
        }
    } while (choice != 0);

    return 0;
}