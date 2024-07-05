#include <bits/stdc++.h>
using namespace std;

void knapsack(int wt[], int pr[], int w, int n)
{
    int k[n + 1][w + 1];

    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= w; j++)
        {
            if (i == 0 || j == 0)
            {
                k[i][j] = 0;
            }
            else if (wt[i] <= j)
            {
                k[i][j] = max(pr[i] + k[i - 1][j - wt[i]], k[i - 1][j]);
            }
            else
            {
                k[i][j] = k[i - 1][j];
            }
        }
    }

    cout << "Maximum profit: " << k[n][w] << endl;

    int i = n, j = w;
    while (i > 0 && j > 0)
    {
        if (k[i][j] == k[i - 1][j])
        {
            // cout << "Item " << i << " not included" << endl;
            i--;
        }
        else
        {
            cout << "Item " << i << " included" << endl;
            j -= wt[i];
            i--;
        }
    }
}

int main()
{
    int pr[] = {0,1,2,5,6};
    int wt[] = {0,2,3,4,5};
    int w = 8; // The maximum weight capacity of the knapsack
    int n = 4; // Number of items
    knapsack(wt, pr, w, n);

    return 0;
}
