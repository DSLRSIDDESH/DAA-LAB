#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n,min=0,min2=0,t=0;
    scanf("%d",&n);
    int a[n];
    
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    
    if(n==1)
    {
        printf("%d\n*",a[0]);
        exit(0);
    }  
    else
    {
        for(int i=0;i<n;i++)
        {
            if(a[i]<min)
                min = a[i];
        }
        for(int i=0;i<n;i++)
        {
            if(a[i]!=min)
            {
                if(a[i]<min2)
                {
                    min2 = a[i];
                }
            }
        }
    }
    for(int i=0;i<n-1;i++)
    {
        if(a[i]!=a[i+1])
        {
            t=1;
            break;
        }
    }
    if(t==0)
        printf("%d\n*",a[0]);
    else
        printf("%d\n%d",min,min2);
    
    return 0;
}