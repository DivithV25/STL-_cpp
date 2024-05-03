#include <iostream>
using namespace std;
void explainPair()
{
    pair<int, int> p = {1, 3};
    cout << p.first << " " << p.second << endl;
    pair<int, pair<int, int>> p1 = {1, {3, 4}};
    cout << p1.first << " " << p1.second.second << " " << p1.second.first << endl;
    pair<int, int> arr[] = {{1, 3}, {2, 5}, {5, 3}};
    cout << arr[1].second;
}
int main()
{
    explainPair();
}