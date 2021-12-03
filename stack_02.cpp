/*

In stack 

first of all check the top pointer 

** for full stack 
top == size - 1;

** for empty stack 
top == -1;

** insert operation 
check the stack is full or not

top ++;
arr[top] = item

** delete operation
check the stack is empty or not 

item = arr[top];
return item;
top--;

** display
check the stack is empty or not 

for loop 
i start from top
i <=0
i--

*/
#include <iostream>
#include <string>

using namespace std;
int size, i, val;

class stack
{
private:
    int stack_arr[100];
    int top = -1;

public:
    stack()
    {
        top = -1;
        for (i = 0; i < size; i++)
        {
            stack_arr[size] = 0;
        }
    }

    bool isFull()
    {
        if (top == size - 1)
        {
            cout << "Stack is Overflow" << endl;
            return true;
        }
        else
        {
            return false;
        }
    }
    bool isEmpty()
    {
        if (top == -1)
        {
            cout << "Stack is Underflow" << endl;
            return true;
        }
        else
        {
            return false;
        }
    }

    void push(int val)
    {
        if (isFull())
        {
            cout << "Stack is Overflow" << endl;
        }
        else
        {
            top++;
            stack_arr[top] = val;
        }
    }
    int pop()
    {
        if (isEmpty())
        {
            cout << "Stack is underflow" << endl;
            return 0;
        }
        else
        {
            int pop_val = stack_arr[top];
            stack_arr[top] = 0;

            return pop_val;
            top--;
        }
    }
    void display()
    {
        if (isEmpty())
        {
            cout << "Stack is underflow" << endl;
        }
        else
        {
            cout << "Elements of STACK" << endl;
            for (i = top; i >= 0; i--)
            {
                cout<< stack_arr[i]<<endl;
            }
        }
    }
};

int main()
{
    stack st;

    cout << "size of stack" << endl;
    cin >> size;
    int choice;
    do
    {
        cout << "What are the operation Do you want to perform" << endl;
        cout << "1. PUSH()" << endl;
        cout << "2. POP()" << endl;
        cout << "3. Display()" << endl;

        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            cout << "Enter the PUSH element" << endl;
            cin >> val;
            st.push(val);
            break;
        }
        case 2:
        {
            st.pop();
            cout << "The elment is poped " << endl;
            break;
        }
        case 3:
        {
            cout << "Display Function Called" << endl;
            st.display();
            break;
        }
        default:
        {
            cout << "Enter the valid operation Id ( 1/2/3)" << endl;
        }
        }
    } while (choice != 5);

    return 0;
}