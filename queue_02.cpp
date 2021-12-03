// circular Queue

#include <iostream>
#include <queue>

using namespace std;

class Queue
{
private:
    int arr[5], front, rear;

public:
    Queue()
    {
        front = -1;
        rear = -1;
        for (int i = 0; i < 5; i++)
        {
            arr[i] = 0;
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
            arr[rear]= val;
        }
        else
        {
            rear = (rear + 1) % 5;
            arr[rear] = val;
        }
    }
    int del()
    {
        int val;
        if (empty())
        {
            cout << "Cicular Queue is Empty " << endl;
            return -1;
        }
        else if(rear == front)
        {
            val = arr[front];
            rear = -1;
            front = -1;
            return val;
        }
        else
        {
            val = arr[front];
            rear = (rear + 1) % 5;
            return val;
        }    
    }
    void display()
    {
        int i;
        for (i = 0; i < 5; i++)
        {
            cout << arr[i] << " ";
        }
    }
};

int main()
{
    Queue Q;
    int size, choice, push_ele;
    do
    {
        cout << "\nEnter the Choice of Operation : ";
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            cout << "Enter the Push Element : ";
            cin >> push_ele;

            Q.insert(push_ele);
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
            cout << "Enter the Valid choice Number " << endl;
            break;
        }
        }
    } while (choice != 0);

    return 0;
}