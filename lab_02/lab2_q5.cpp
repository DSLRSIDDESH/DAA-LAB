#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> v;

void binary_search(int a[], int l, int h)
{
    if (h >= l)
    {
        int mid = l + (h - l) / 2;
        if (mid == a[mid])
            v.push_back(mid);           
        if (mid + 1 <= a[h])
            binary_search(a, (mid + 1), h);
        if (mid - 1 >= a[l])
            binary_search(a, l, (mid - 1));
    }
}

int main()
{
    int size;
    cin >> size;
    int a[size];
    for(int i=0;i<size;i++)
        cin >> a[i];
    binary_search(a,0,size-1);
    if(v.size() == 0)
    {
        cout << "*" << endl;
        return 0;
    }
    sort(v.begin(),v.end());
    for(int i : v)
        cout << i << endl;
}