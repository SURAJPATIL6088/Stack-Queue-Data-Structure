#include <iostream>
using namespace std;

#define size 100

int queue[size];
int front = -1;
int rear = -1;

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

bool isEmpty()
{
    if (front == 1 && rear == 1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void Enqueue(int value)
{
    if (isFull())
    {
        cout << "Queue is Full!!" << endl;
    }
    else
    {
        if (front == -1)
        {
            front = 0;
        }
        rear++;
        queue[rear] = value;
    }
}

int Dequeue()
{
    int val;

    if (isEmpty())
    {
        cout << "Queue is Empty!!" << endl;
    }
    else

        val = queue[front];
    front++;
    return val;
}

void peek()
{
    if (isEmpty())
    {
        cout << "Queue is Empty!!" << endl;
        return;
    }
    int item = queue[front];
    cout << "Peek Element is " << item << endl;

    int item1 = queue[rear];
    cout << "Last Element is " << item1 << endl;
}

void display()
{
    if (isEmpty())
    {
        cout << "Queue is Empty!!" << endl;
    }
    else
    {
        for (int i = front; i <= rear; i++)
        {
            cout << queue[i] << " ";
        }
    }
}

int main()
{
    int choice;

    do
    {

        cout << "\nEnter the Choice of Operation : " << endl;
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            int push_ele;
            cout << "Enter the Value to be inserted : " << endl;
            cin >> push_ele;

            Enqueue(push_ele);
            break;
        }
        case 2:
        {
            cout << "Element is Deleted : " << Dequeue() << endl;

            break;
        }
        case 3:
        {
            peek();
            break;
        }
        case 4:
        {
            display();
            break;
        }
        case 5:
        {
            exit(0);
            break;
        }
        default:
        {
            cout << "Enter the Valid Choice !!" << endl;
            break;
        }
        }

    } while (choice != 5);

    return 0;
}