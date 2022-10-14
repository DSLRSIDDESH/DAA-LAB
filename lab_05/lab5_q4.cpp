#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() 
{
    int n;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }
    vector<int> v;
    vector<int>::iterator it;
    it = v.begin();
    int pos=0;
    int i=0,j=n-1;
    while(1)
    {
        if(i==j)
        {
            v.insert(it+pos,a[i]);
            it = v.begin();
            break;
        }
        if(a[i]==a[j])
        {
            v.insert(it+pos,a[i]);
            it = v.begin();
            v.insert(it+pos+1,a[j]);
            it = v.begin();
            pos++;
            i++;
            j--;
        }
        else
        {
            if(a[i]==a[j]+a[j-1])
            {
                v.insert(it+pos,a[i]);
                it = v.begin();
                v.insert(it+pos+1,a[j]+a[j-1]);
                it = v.begin();
                pos++;
                i++;
                j=j-2;
            }
            else if(a[i]+a[i+1]==a[j])
            {
                v.insert(it+pos,a[i]+a[i+1]);
                it = v.begin();
                v.insert(it+pos+1,a[j]);
                it = v.begin();
                pos++;
                i=i+2;
                j--;
            }
            else
            {
                break;
            }
        }
        if(i>j)
        {
            break;
        }
    }
    if(v.size()==0)
    {
        cout << "*" << endl;
        return 0;
    }
    for (i=0; i<v.size(); i++) 
    {
        cout << v[i] << endl;
    }
    return 0;
}