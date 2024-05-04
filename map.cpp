#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void maps(){
    map<int ,int > mpp;
    map<pair<int,int> ,int > mpp1;
    map<int,pair<int,int>> mpp2;

     mpp[1]=2;
     mpp.insert({3,4});
     
     mpp1[{2,3}]=10;

     for(auto it :mpp){
        cout<< it.first<< " "<<it.second<<endl;
     }

     cout<< mpp[1];
     cout<<mpp1[{2,3}];
auto it=mpp.find(5);//if 5 is not there then it will return the pointer to the last element

  

}
int main(){
    maps();
}