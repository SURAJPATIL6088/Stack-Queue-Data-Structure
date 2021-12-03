#include <iostream>
#include <queue>

using namespace std;

int size, i;

class Queue
{

private:
    int queue_arr[100];
    int REAR;
    int FRONT;

public:
    Queue()
    {
        for (i = 0; i < size; i++)
        {
            queue_arr[size];
        }
        REAR = -1;
        FRONT = -1;
    }
    bool(isFull())
    {
        if (REAR == size - 1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    bool(isEmpty())
    {
        if (FRONT == -1 || FRONT > REAR)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    void insert(int item)
    {
        if (isFull())
        {
            cout << "QUEUE is OVERFLOW" << endl;
        }
        REAR++;
        queue_arr[REAR] = item;

        if (FRONT == -1) // if it is empty increment by +1
        {
            FRONT ++; //
        }
    }

    int del()
    {
        if (isEmpty())
        {
            cout << "QUEUE is UNDERFLOW" << endl;
            return -1;
        }
        int item = queue_arr[FRONT];
        FRONT = FRONT +1;
        return item;
    }

    int peek()
    {
        if (isEmpty())
        {
            cout << "QUEUE is EMPTY" << endl;
            return -1;
        }
        return queue_arr[FRONT];
    }

    void display()
    {
        if (isEmpty())
        {
            cout << "QUEUE is EMPTY" << endl;
        }

        for (i = FRONT; i < REAR; i++)
        {
            cout << queue_arr[i] << " "<<endl;
        }
    }
};

int main()
{
    int choice, push_ele;

    cout << "Enter the Size of the QUEUE : ";
    cin >> size;

    cout << "==============================================" << endl;
    cout << "************ QUEUE IMPLEMENTATION ************" << endl;

    cout << "1. PUSH " << endl
         << "2. POP " << endl
         << "3. PEEK " << endl
         << "4. DISPLAY " << endl;

    Queue q; // class declaration

    do
    {
    cout << "Enter the Choice of Operation : ";
    cin >> choice;

        switch (choice)
        {

        case 1:
        {
            cout << "Enter the PUSH element : ";
            cin >> push_ele;

            q.insert(push_ele);
            break;
        }
        case 2:
        {
            cout << "This element is Deleted : " << q.del() << endl;
            break;
        }
        case 3:
        {
            q.peek();
            cout << "FRONT element is " << q.peek() << endl;
            break;
        }
        case 4:
        {
            q.display();
            break;
        }
        default:
        {
            cout << "Enter the Valid Operand ( 1 to 4 )" << endl;
        }
        }

    } while (choice != 0);

    return 0;
}

// End of the program