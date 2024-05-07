#include <bits/stdc++.h>
#include <iostream>
using namespace std;
void queues()
{

    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.emplace(4);
    q.back() += 5;
    cout << q.back() << endl;
    cout << q.front() << endl;
}
int main()
{
    queues();
}