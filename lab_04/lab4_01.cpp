#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void Heapify(int arr[], int n, int i)
{
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;
    if (left < n && arr[left] > arr[largest])
      largest = left;
    if (right < n && arr[right] > arr[largest])
      largest = right;
    if (largest != i)
    {
      swap(arr[i], arr[largest]);
      Heapify(arr, n, largest);
    }
}
void HeapSort(int arr[], int n)
{
    for (int i = n / 2 - 1; i >= 0; i--)
      Heapify(arr, n, i);
    for (int i = n - 1; i >= 0; i--)
    {
      swap(arr[0], arr[i]);
      Heapify(arr, i, 0);
    }
}
int main()
{
    int n;
    cin>>n;
    if(n == 1)
    {
        cout<<"*";
        return 0;
    }
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    HeapSort(a,n);
    for(int i=0;i<n;i++)
    {
        if(a[i]==a[i+(n/2)])
        {
           cout<<a[i]; 
            return 0;
        }   
    }
    cout<<"*";
    return 0;
}