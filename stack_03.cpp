// Stack:top()
// Stack:size()

#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<int> mystack;
 
    mystack.push(10);
    mystack.push(20);
    mystack.push(30);
    mystack.push(40);

    cout << "The top most element of the stack : " << mystack.top() << endl; // stack.top()
    cout << "The size of the stack : " << mystack.size() << endl;            // stack.size( )

    return 0;
}