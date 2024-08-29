#include<bits/stdc++.h>
#define bb "\n"

using namespace std;

class Stack
{
    private:

    int stack_arr[100]={-1};
    int ptr=-1;

    public:
    void push(int number)
    {
        stack_arr[++ptr] = number;
        cout<<"pushed the number "<<number<<" successfully.."<<endl;
    }
    void pop()
    {
        stack_arr[ptr--]=-1;
        cout<<"poped the number successfully.."<<endl;
    }
    int top()
    {
        return stack_arr[ptr];
    }

};

int main() 
{
    Stack st;
    st.push(10);
    st.push(20);
    st.push(30);

    cout<<st.top()<<endl;
    st.pop();

    cout<<st.top()<<endl;
    st.pop();

    cout<<st.top()<<endl;
    st.pop();

    return 0;
}