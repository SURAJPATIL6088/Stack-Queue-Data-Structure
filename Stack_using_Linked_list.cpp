#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *link;
};
struct node *top = NULL;

#define size 100
int value;

void push(int value)
{
    struct node *newnode;

    newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = value;

    if (top == NULL)
    {
        newnode->link = NULL;
    }
    else
    {
        newnode->link = top;
    }
    top = newnode;
}

void pop()
{
    struct node *temp;

    if (top == NULL)
    {
        cout << "Stack is Empty!! " << endl;
    }
    else
    {
        temp = top;

        cout << "Deleted Element is " << "<-" << temp->data << "->";
        top = temp->link;
        free(temp);
    }
}

int peek()
{
    if (top == NULL)
    {
        cout << "Stack is Empty!!" << endl;
    }

    return top->data;
}

void display()
{
    struct node *temp;

    if (top == NULL)
    {
        cout << "Stack is Empty!!" << endl;
    }
    else
    {
        temp = top;

        while (temp != NULL)
        {
            cout << "<-" << temp->data << "->"
                 << " ";
            temp = temp->link;
        }
    }
}

int main()
{
    int choice;

    do
    {
        cout << "\nEnter the Choice of Operation " << endl;
        cin >> choice;

        cout << "Operation of the Stack " << endl;
        cout << "\t1. PUSH " << endl
             << "\t2. POP " << endl
             << "\t3. PEEK " << endl
             << "\t4. DISPLAY " << endl;

        switch (choice)
        {
        case 1:
        {
            cout << "Enter the PUSH element : " << endl;
            cin >> value;

            push(value);
            break;
        }
        case 2:
        {
            pop();
            break;
        }
        case 3:
        {
            cout << "Top element is " << "<-" << peek() << "->" << endl;
            break;
        }
        case 4:
        {
            display();
            break;
        }
        default:
        {
            cout << "Enter the Valid case Number " << endl;
            break;
        }
        }

    } while (choice != 5);
    return 0;
}