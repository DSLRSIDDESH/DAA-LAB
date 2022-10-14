#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int x,k,sum = 0,c_sum = 0;
    cout << "Enter 'x' : ";
    cin >> x;
    cout << "Enter the number of denominations : ";
    cin >> k;
    int d[k],n_d[k];
    cout << "Enter the denominations : ";
    for(int i=0;i<k;i++)
        cin >> d[i];
    cout << "Enter the corresponding number of coins (should be >= 1): ";
    for(int i=0;i<k;i++)
    {
        cin >> n_d[i];
        c_sum += n_d[i];
        sum += d[i] * n_d[i];
    }
    if(sum < x)
    {
        cout << "THere is no change possible for " << x << "/-" << endl;
        return 0;
    }
    else if(sum == x)
    {
        cout << "Minimum number of coins used : " << c_sum << endl; 
    }
    else
    {
        int b[x];
        for(int i=0;i<k;i++)
            b[d[i]-1] = 1;
        for(int i=2;i<d[k];i++)
        {
            int sub_sum = 0,subc_sum = 0;
            int t = 0;
            for(int j=0;j<k;j++)
            {
                if(d[j] < i)
                    t = d[j];
                else
                    break;
            }
            for(int j=0;j<t;j++)
            {
                sub_sum += d[j] * n_d[j];
                subc_sum += n_d[j];
            }
            if(sub_sum < i)
                b[i] = 0;
            else if(sub_sum == i)
                b[i] = subc_sum;
            else
                b[i] = -1;
        }
        for(int i=0;i<d[k]-1;i++)
            cout << b[i] << " ";
        cout << endl;
    }
    
    return 0;
}