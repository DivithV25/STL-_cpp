#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void eraser()
{
    vector<int> v(5, 2);
    for (auto it : v)
    {
        cout << it << " ";
    }
    cout << endl;
    v.erase(v.begin() + 1);
    for (auto it : v)
    {
        cout << it << " ";
    }
    // deleting more than 2 elemets

    v.erase(v.begin() + 2, v.begin() + 4);
}
int main()
{

    eraser();
}