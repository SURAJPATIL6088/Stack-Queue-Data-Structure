#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *link;
};

struct node *front = NULL;
struct node *rear = NULL;

// empty condition
/*
    rear == NULL
*/


void Enqueue(int value)
{
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = value;

    newnode->link = NULL;  // it store the address of the next node

    if(front == NULL)
    {
        front = rear = newnode;
    }
    else
    {
        rear->link = newnode;
        rear = newnode;
    }
}

void Dequeue()
{     
    if(front == NULL)
    {
        cout<<"Queue is Empty!!"<<endl;
    }
    else
    {
        struct node *temp;
        temp = front; //initializing for the traversing

        cout<<"The Deleted Element is "<<temp->data<<endl;

        front = temp->link;
        free(temp);
    }
}

void peek()
{
    if(front == NULL)
    {
        cout<<"Queue is Empty!!"<<endl;
    }
    cout<<"Peek Element is "<<front->data<<endl;
}

void display()
{                                                                                       
    if(front == NULL)
    {
        cout<<"Queue is Empty!!"<<endl;
    }
    else
    {
        struct node *temp;
        temp = front;

        while(temp != NULL)
        {
            cout<<temp->data<<" ";
            temp= temp->link;
        }
    }
}
int main()
{
    cout<<"\n:: Queue implementation using Linked List ::"<<endl;
    int choice;

    do
    {
        cout<<"\nEnter the choice of operation : "<<endl;
        cin>>choice;

        switch(choice)
        {
            case 1:
            {
                int value;

                cout<<"Enter the Element to be inserted : "<<endl;
                cin>>value;

                Enqueue(value);
                break;
            }
            case 2:
            {
                Dequeue();
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
                cout<<"Enter the Valid choice !!!"<<endl;
                break;
            }
        }
    } while (choice != 5);
    

    return 0;
}