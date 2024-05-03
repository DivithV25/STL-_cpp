#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void vectors()
{
    vector<int> v;
    v.push_back(1);
    v.emplace_back(2);

    vector<pair<int, int>> vec;

    vec.push_back({1, 2});
    vec.emplace_back(1, 2);

    vector<int> v1(5, 20); // the container will conatin the 5 variables of value 20
    vector<int> v2(v1);    // copying
}
int main()
{
    vectors();
    
}