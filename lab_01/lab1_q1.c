#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n=0,z=0,i;
    
    scanf("%d",&n);
    scanf("%d",&z);
    
    int a[n];
    
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    int check = 0;
    for(i=0;i<n;i++)
    {
            for(int j=0;j<n;j++)
            {
                if(i!=j && a[i]+a[j]==z)
                {
                    printf("%d\n%d",a[i],a[j]);
                    check++;
                    break;
                }
            }
            if(check==1)
                break;
    }
    if(check==0)
        printf("*");

    return 0;
}