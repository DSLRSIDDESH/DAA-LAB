#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n,min,max;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        if(i==0)
        {
        scanf("%d",&a[i]);
            min = max = a[i];
        }
        else
            scanf("%d",&a[i]);
        if(a[i] < min)
            min = a[i];
        if(a[i] > max)
            max = a[i];
    }
    
    printf("%d\n%d",min,max);
    
    return 0;
}