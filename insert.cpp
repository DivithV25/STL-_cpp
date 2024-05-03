#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void iterators(){
vector<int> v;
v.push_back(10);
v.push_back(20);
v.push_back(30);

v.insert(v.begin(),300);
v.insert(v.begin()+1,2,5);
for(auto it : v){
    cout<<it<<" ";
}
vector<int> v1,v2;
cout<<endl<<v.size();//displays the size of the array
v.pop_back();//pops the last element
v1.swap(v2);//swap these to vectors
v.clear();//emptys the entire vector
}
int main(){
    iterators();
}