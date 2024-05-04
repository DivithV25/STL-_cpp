#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool comp(pair<int , int> p1,pair<int ,int > p2){
    if(p1.second<p2.second) return true;
    if(p1.second>p2.second) return false;
    
    if(p1.first>p2.first) return true;
    return false;
}
void sorting(){
    int n=7;
    int a[n]={1,2,5,4,6,9,8};
    sort(a,a+n, greater <int> ());
    // sort(a,a+n);
    for(int i=0;i<n;i++){
        cout<<a[i]<<endl;
    }
    int n1=3;
pair<int ,int> a1[n1]={{1,2},{2,1},{4,1}};
sort(a1,a1+n1,comp);

string s="123";
sort(s.begin(),s.end());
do{
    cout<<s<<endl;
}while(next_permutation(s.begin(),s.end()));
}
int main(){
    sorting();

}