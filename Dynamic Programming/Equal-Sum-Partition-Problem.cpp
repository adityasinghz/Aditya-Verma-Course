#include <bits/stdc++.h>
using namespace std;

bool EqualSumPartition(int arr[], int n)
{
    int sum = accumulate(arr, arr + n, 0);
    int dp[n + 1][sum + 1];
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= sum; j++)
        {
        }
    }
}

int main()
{
    int n = 4;
    int arr[n]{1, 5, 11, 5};
    cout << EqualSumPartition(arr, n);
}