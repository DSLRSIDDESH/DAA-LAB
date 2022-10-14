#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n,m,min=0,max=0;
    scanf("%d%d",&n,&m);
    int a[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
            if(i==0 && j==0)
                min = max = a[0][0];
            if(a[i][j] < min)
                min = a[i][j];
            else if(a[i][j] > max)
                max = a[i][j];
        }
    }
    
    printf("%d\n%d",min,max);
    
    return 0;
}