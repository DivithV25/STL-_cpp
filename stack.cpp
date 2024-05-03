#include <bits/stdc++.h>
#include <iostream>
using namespace std;
void stacks()
{
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    cout << st.top() << "\n";
    st.pop();
    cout << st.top() << endl;
    cout << st.size() << endl;
    cout << st.empty();
    stack<int> st1, st2;
    st1.swap(st2);
}
int main()
{
    stacks();
}