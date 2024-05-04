#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void sets()
{
    set<int> st;
    st.insert(1);
    st.emplace(2);
    st.emplace(2);
    st.insert(3);
    st.insert(5);
    st.insert(4);
    int cnt= st.count(1);
//   cout<< cnt ;
    for (auto it : st)
    {
        cout << it << " ";
    }
    st.erase(5);
    auto it1 =st.find(3);
    auto it=st.lower_bound(2);
    auto it=st.upper_bound(2);

}
int main(){
    sets();
}

//multiset will not follow the unique property -> in this the erase operation will erase all the occurences

//unordered set follows the unique property but arranges elements in an unordered manner