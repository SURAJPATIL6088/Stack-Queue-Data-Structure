#include <iostream>
using namespace std;

#define max 100

int size;
int top = -1;
int arr[max];

bool isEmpty()
{
    if (top == -1)
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
    if (top == size - 1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void push_var(int var)
{
    if (isFull())
    {
        cout << "Stack is full " << endl;
    }
    top++;
    arr[top] = var;
}

void pop_var()
{
    if (isEmpty())
    {
        cout << "Stack is empty " << endl;
    }

    int var = arr[top];
    top--;
}

int peek()
{
    if(isEmpty())
    {
        cout << "Stack is empty " << endl;
    }
    return arr[top];
}

void display()
{
    if (isEmpty())
    {
        cout << "Stack is empty " << endl;
    }

    int i;
    cout << "Elements are : ";
    for (i = top; i >= 0; i--)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int choice, var;

    int size;

    cout << "Enter the size of the stack :" << endl;
    cin >> size;

    do
    {
        cout << "\nEnter the choice of operation" << endl;
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            cout << "Enter the push element : " << endl;
            cin >> var;
            push_var(var);
            break;
        }
        case 2:
        {
            cout << "Elements are deleted " << endl;
            pop_var();
            break;
        }
        case 3:
        {
            cout << "Top Element : ";
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
        }
        default:
        {
            cout << "Enter the valid operand " << endl;
            break;
        }
        }
    }while (4);


    return 0;
}