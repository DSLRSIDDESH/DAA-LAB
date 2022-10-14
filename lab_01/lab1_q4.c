#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n;
    float p;
    scanf("%d",&n);
    
    p = log(n)/log(3);
    int q = p*10000;
    float m = q/10000.0;
    
    printf("%0.4f",m);
    
    return 0;
}