#include <iostream>
#include <vector>
using namespace std;
int greedy(int n,int a[],int k)
{
    int i = k-1,count = 0;
    while(i >= 0)
    {
        count += n/a[i];
        n %= a[i];
        i--;
    }
    return count;
}
int main()
{
    int x,k;
    cout << "Enter 'x' : ";
    cin >> x;
    cout << "Enter the number of denominations : ";
    cin >> k;
    int a[k];
    cout << "Enter the denominations : ";
    for(int i=0;i<k;i++)
        cin >> a[i];
    sort(a,a+k);
    int n = a[k-1];
    vector<int> b;
    for(int i=0;i<n;i++)
    {
        b.push_back(greedy(i+1,a,k));
    }
    for(int i=n+1;i<=x;i++)
    {
        int ac[k];
        int l = 0;
        for(int j = 0;j < k;j++)
        {
            ac[l] = b[i-a[j]-1];
            l++;
        }
        b.push_back(1 + *min_element(ac,ac+k));
    }

    cout << "Minimum number of coins required : " << b[x-1] << endl;

    return 0;
}