#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int find(int a[],int n,int min)
{
    int b[n/2];
    int j = 0;
    for(int i=0;i<n;i=i+2)
    {
        if(a[i]!=min)
        {
            if(a[i] < a[i+1])
            b[j] = a[i];
        else
            b[j] = a[i+1];
        }
        else if(a[i] == min)
            b[j] = a[i+1];
        else
            b[j] = a[i];
        j++;
    }
    
    if(n/2 == 1)
        return b[0];
    else
        return find(b,n/2+1,min);
}

int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    if(n == 1)
    {
        printf("*");
        return 0;
    }
    else
    {
        int min = a[0];
        for(int i=0;i<n;i++)
        {
            if(a[i] < min)
                min = a[i];
        }

        int min2 = find(a,n,min);
        printf("%d\n%d",min,min2);
    }
    
    return 0;
}