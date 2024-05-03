#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void explainlist(){
    list<int> ls;
    ls.push_back(2);
    ls.emplace_back(4);

    ls.push_front(5);

    ls.emplace_front(10);
    for(auto it : ls){
        cout<<it<<" ";
    }
    //everything else is similar to vector

}


int main(){
explainlist();

}