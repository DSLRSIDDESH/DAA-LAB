#include <bits/stdc++.h>
using namespace std;

int findNumbers(vector<int> &arr, int sum, int i)
{
    if (i > arr.size())
    {
        return 0;
    }
    if (sum < 0)
    {
        return 0;
    }
    if (i == arr.size())
    {
        if (sum == 0)
        {
            return 1;
        }
        return 0;
    }

    int l = findNumbers(arr, sum - arr[i], i);
    int r = findNumbers(arr, sum, i + 1);
    return l + r;
}

int main()
{
    vector<int> arr;
    int n, a;
    cout << "Enter no of coins : ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << i + 1 << " coin : ";
        cin >> a;
        arr.push_back(a);
    }
    int sum;
    cout << "Enter sum : ";
    cin >> sum;
    int ways = findNumbers(arr, sum, 0);
    cout << " No of ways : " << ways << endl;
    return 0;
}