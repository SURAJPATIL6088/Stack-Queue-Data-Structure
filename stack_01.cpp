#include<iostream>
#define size 5       //  here define the size of that array
int stack_arr[size];   // stack initialize the globally      
int top = -1;
using namespace std;

void push(int data);

int main()
{
    push(1);
    push(2);
    push(3);
    push(4);

    void display();
    return 0;
}
void push ( int data)
{
    if(top == size-1)
    {
        cout<<"Stack is Overflow "<<endl;
    }
    else
    {
        top ++;
        stack_arr[size]= data;
    }
}