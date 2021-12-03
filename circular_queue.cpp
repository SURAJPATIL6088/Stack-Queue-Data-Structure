#include <iostream>
#include <queue>

using namespace std;

int val, i; 

class Queue 
{
private:
    int rear, front, queue_arr[5];

public:
    Queue()
    {
        rear = -1;
        front = -1;
        for (i = 0; i < 5; i++)
        {
            queue_arr[i] = 0;
        }
    }
    bool empty()
    {
        if (front == -1 && rear == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    bool full()
    {
        if ((rear + 1) % 5 == front)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    void insert(int val)
    {
        if (full())
        {
            cout << "Circular Queue is full " << endl;
            return ;
        }

        else if(empty())
        {
            front = 0;
            rear = 0;
            queue_arr[rear]= val;
        }
        else
        {
            rear = (rear + 1) % 5;
            queue_arr[rear] = val;
        }
    }

    int del()
    {
        int val =0;
        if (empty())
        {
            cout << "Cicular Queue is Empty " << endl;
            return -1;
        }
        else if(rear == front)
        {
            val = queue_arr[front];
            rear = -1;
            front = -1;
            return val;
        }
        else
        {
            val = queue_arr[front];
            rear = (rear + 1) % 5;
            return val;
        }    
    }

    void display()
    {
        for( i=0; i<5; i++)
        {
            cout<<queue_arr[i]<<" ";
        }
    }
};
int maun()
{
    Queue Q;
    int val, choice;

    do
    {
        cout << "Enter the Choice of the Operation : ";
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            cout << "Enter the Push Element : ";
            cin >> val;

            Q.insert(val);
            break;
        }

        case 2:
        {
            cout << "Deleted element is " << Q.del() << endl;
            break;
        }

        case 3:
        {
            Q.display();
            break;
        }
        default:
        {
            cout << "Enter the valid choice" << endl;
            break;
        }
        }
    }while(choice != 0);

    return 0;
}