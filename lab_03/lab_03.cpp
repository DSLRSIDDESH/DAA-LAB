#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int *merge(int a[],int b[],int n,int m)
{
    int n3 = n+m;
    int *c = new int[n3];
    int i1=0,i2=0,count=0;
    while(i1<n && i2<m)
    {
        if(a[i1]<b[i2])
        {
            c[count++]=a[i1++];
        }
        else if(a[i1]>b[i2])
        {
            c[count++]=b[i2++];
        }
        else
        {
            c[count++]=b[i2];
            i1++;
            i2++;
        }
    }
    while(i1<n)
    {
        c[count++]=a[i1++];
    }
    while(i2<m)
    {
        c[count++]=b[i2++];
    }
    
    return c;
}


int main()
{
    int n1,n2,n3;
    cin >> n1 >> n2;
    if(n1==0 && n2==0)
    {
        cout << "0";
        return 0;
    }
    n3 = n1+n2;
    int a[n1],b[n2],*c;
    for(int i=0;i<n1;i++)
        cin >> a[i];
    for(int i=0;i<n2;i++)
        cin >> b[i];
    c = merge(a,b,n1,n2);
    
    if(n3%2 == 0)
        cout << (c[n3/2]+c[n3/2-1])*1.0/2;
    else
        cout << c[n3/2];

    return 0;
}