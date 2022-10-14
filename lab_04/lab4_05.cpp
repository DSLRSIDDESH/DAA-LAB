#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int Ternary_Search(int array[], int x, int low, int high) 
{
    if (high >= low) 
    {
        int n1 = low+(high - low)/3;
        int n2 = n1+(high-low)/3;
        if(array[n1] == x)
            return n1;
        if(array[n2] == x)
            return n2;
        if(x < array[n1])
            return Ternary_Search(array,x,low,n1-1);
        if(x < array[n2])
            return Ternary_Search(array,x,n1,n2-1);
        return Ternary_Search(array,x,n2+1,high);
    }
    return -1;
}

int main() 
{
    int n,x;
    cin >> n >> x;
    int a[n];
    for(int i=0; i<n; i++)
        cin >> a[i];
    int result = Ternary_Search(a,x,0,n-1);
    if(result == -1)
        cout << "0";
    else
        cout << "1";
    
    return 0;
}