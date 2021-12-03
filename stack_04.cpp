#include <iostream>
#include <string>
using namespace std;

int push_ele, i, size, choice, top;  // declaring the global variable 

class stack    // create the class
{
private:
    int stack_arr[100];  // initialize the array size
    int top;

public:
    stack()    // constructor invoked
    {
        top = -1;
        for (i = 0; i < size; i++)    // for the size of that array 
        {
            stack_arr[size] = 0;
        }
    }

    bool isFull()    // create the bool data type for checking
    {
        if (top == size - 1)  // stack is full or not 
        {
            return 1;  // true
        }
        else
        {
            return 0;  // flase
        }
    }

    bool isEmpty()
    {
        if (top == -1)    // stack is empty or not
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }

    void push(int push_ele)    // for inserting the new element 
    { 
        if (isFull())
        {
            cout << "Stack is Overflow" << endl;
        }
        else
        {
            top++;
            stack_arr[top] = push_ele;
        }
    }
    int pop()      // for deleting the top- most element 
    {
        if (isEmpty())
        {
            cout << "Stack is Underflow" << endl;
        }
        else
        {
            stack_arr[top] = push_ele;
            top--;
        }
        return push_ele;
    }

    int peek()    // it returns the top-most element
    {
        if( isEmpty())
        {
            cout<<"Stack is Underflow "<<endl;
        }
        else
            return top;
    }

    void display()
    {
        if (isEmpty())
        {
            cout << "Stack is underflow" << endl;
        }
        else
        {
            cout << "Elements in the stack " << endl;
            for (i = top; i >= 0; i--)
            {
                cout << stack_arr[i];
            }
        }
    }
};

int main()
{
    class stack st;

    cout << "Enter the size of the stack " << endl;
    cin >> size;

    do
    {
        cout << "\nEnter the Choice of Operation " << endl;
        cin >> choice;

        cout << "Operation of the Stack " << endl;
        cout << "\t1. PUSH " << endl
             << "\t2. POP " << endl
             << "\t3. DISPLAY " << endl;

        switch (choice)
        {
        case 1:
        {
            cout << "Enter the PUSH element : " << endl;
            cin >> push_ele;

            st.push(push_ele);
            break;
        }
        case 2:
        {
            st.pop();
            cout << push_ele << " is Pop element " << endl;
            break;
        }
        case 3:
        {
            st.display();
            break;
        }
        case 4:
        {
            st.peek();
            cout<<"Top element is "<<push_ele<<endl;
            break;
        }
        default:
        {
            cout << "Enter the Valid  case Number " << endl;
            break;
        }
        }

    } while (choice != 5);

    return 0;
}