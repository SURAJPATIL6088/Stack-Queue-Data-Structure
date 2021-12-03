// reversing the stack

#include <iostream>
#include <stack>

using namespace std;

void reverseStatement(string s)
{
    stack<string> st;

    for (int i = 0; i < s.length(); i++)
    {
        cout << "";
        string word;
        while (s[i] != ' ' && i < s.length())
        {
            word = word + s[i];
            i++;
        }
        st.push(word);
    }
    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;
}

int main()
{
    string s = "Hey, My name is suraj";

    reverseStatement(s);
    return 0;
}