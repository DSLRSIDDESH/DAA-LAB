#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n,flag=0;
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
            for(int j=0;j<n-i+1;j++)
            {
                if(a[i] < a[j])
                {
                    int t= a[i];
                    a[i] = a[j];
                    a[j] = t;
                }
            }
        }
    }

    printf("%d\n",a[0]);
    for(int i=1;i<n;i++)
    {
        if(a[i]!=a[0])
        {
            flag = 1;
            printf("%d",a[i]);
            break;
        }
    }
    if(flag==0)
        printf("*");
    
    return 0;
}