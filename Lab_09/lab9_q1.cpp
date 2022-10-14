//1. Variant of KnapSack Problem
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

bool cmp(pair<int,int> &a,pair<int,int> &b){
    if(a.second == b.second){
        return a.first < b.first;
    }
    return a.second < b.second;
}

int Greedy(int cap,int n,vector<pair<int,int>> &V,int cnt,int* ContributionVector){
    if(cnt ==  n-1 || cap == 0){
        cout << "Contribution Vector : " << endl;
        for (int i = 0;i<n;i++) {
            cout << ContributionVector[i] << " ";
        }
        cout << endl;
        return 0;
    }
    pair <int,int> P = V[cnt];
    int W = P.second;
    int index = P.first;
    if(cap >= W){
        ContributionVector[index] = 1;
        return 1+Greedy(cap-W,n,V,cnt+1,ContributionVector);
    }
    else{
        cout << "Contribution Vector : " << endl;
        for (int i = 0;i<n;i++) {
            cout << ContributionVector[i] << " ";
        }
        cout << endl;
        return 0;
    }
}

int main() {
    cout << "Enter no.of objects : ";
    int obj;
    cin >> obj;
    int capacity;
    cout << "Enter capacity of bag : ";
    cin >> capacity;
    cout << "Enter weight of each individual object : " << endl;
    int *weight = (int *) malloc(sizeof(int) * obj);
    vector <pair <int, int> > vec;
    for (int i = 0; i < obj; i++) {
        cin >> weight[i];
    }
    for(int i = 0; i < obj; i++){
        pair <int, int> wei = make_pair(i, weight[i]);
        vec.push_back(wei);
    }
    int *contri_vector = (int*) malloc(sizeof(int) * obj);
    for(int i = 0; i < obj; i++){
        contri_vector[i] = 0;
    }
    sort(vec.begin(), vec.end(), cmp);
    int cnt = 0;
    int total = Greedy(capacity, obj, vec, cnt, contri_vector);
    cout << "Maximum no.of items that can be included are : " << total << endl;
}
