#include<iostream>
#include<stack>
using namespace std;


void solve(stack<int> &s, int count, int size){
    if(count == size/2){
        s.pop();
        return;
    }
    int num = s.top();
    s.pop();
    solve(s, count+1, size);
    s.push(num);
}


void deleteMiddle(stack<int> &s,  int n){
    int count = 0;
    solve(s, count, n);
}

int main()
{
    stack<int> st;

    //push elements into the stack
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);


    deleteMiddle(st, st.size());

    // Printing stack after deletion
    // of middle.
    while (!st.empty())
    {
        int p=st.top();
        st.pop();
        cout << p << " ";
    }
    return 0;
}
