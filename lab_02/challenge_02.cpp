#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,k;
    cin>>n>>k;
    int a[n];
    int add = 0;
    for(int i = 0;i<n;i++){
        cin>>a[i];
        add += a[i];
    }
    int res = 0;
    for(int i = 0;i<n;i++){
        if(abs(2*res-add) == k){
            cout<<1<<endl;
            for(int j = 0;j<i;j++){
                cout<<a[j]<<endl;
            }
            cout<<2<<endl;
            for(int j = i;j<n;j++){
                cout<<a[j]<<endl;
            }
            return 0;
        }
        res += a[i];
    }
    cout<<"*"<<endl;
}