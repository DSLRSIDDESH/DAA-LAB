#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int m;
    cin >> m;
    if(m == 1){
        cout<<"*"<<endl;
        return 0;
    }
    int a[m];
    int b[m];
    for(int j = 0; j < m; j++){
        cin>>a[j];
        b[j] = a[j];
    }
    sort(b, b + m);
    int Mark = 0;
    for(int i = 0; i < m; i++){
        if(a[i] != b[i]){
            Mark = 1;
        }
    }
    if(Mark == 0){
        cout<<"*"<<endl;
        return 0;
    }
    int startIndex = 0;
    int endIndex = 0;
    int count = 0;
    for(int i = 0; i < m; i++){
        if(b[i] != a[i]){
            if(count == 0){
                startIndex = i;
                count = 1;
            }
            else{
                endIndex = i;
            }
        }
    }
    cout<<startIndex<<endl<<endIndex<<endl;
}