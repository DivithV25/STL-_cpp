#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void deques()
{
    deque<int> dq;
    dq.push_back(1);
    dq.emplace_back(2);
    dq.push_front(4);

    dq.pop_back();
    dq.pop_front();
}

int main()
{
    deques();
}