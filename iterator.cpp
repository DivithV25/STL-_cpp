#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void iterators(){
vector<int> v;
v.push_back(10);
v.push_back(20);
v.push_back(30);
vector<int>::iterator it=v.begin();//v.begin is will give you the address of the first element
it++;
cout<<*(it)<<endl;   
cout<<v[0]<<" "<<v.at(0)<<endl;
cout<<v.back()<<endl;

for(vector<int>::iterator it=v.begin();it!=v.end();it++){
    cout<<*(it)<<" ";
}
for(auto it=v.begin();it!=v.end();it++){
    cout<<*(it)<<" ";
}

for(auto it :v){
    cout<<it<<" ";
}
}
int main(){
    iterators();

}