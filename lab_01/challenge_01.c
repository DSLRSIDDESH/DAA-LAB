#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

char* clclt(char a[],char b[])
{
    int i,j,k=0;
    char *c;
    c=(char*)malloc(sizeof(char)*100);
    for(i=0;i<strlen(a);i++)
    {
        for(j=0;j<strlen(b);j++)
        {
            if(a[i]==b[j])
            {
                k=0;
                if(strlen(c)<strlen(b)-j+i)
                {
                    for(int t=0;t<=i;t++)
                    {
                        c[k]=a[t];
                        k++;
                   
                    }
                    for(int t=j+1;t<strlen(b);t++)
                    { 
                        c[k] = b[t];
                        k++;
                    }    
                }   
            }
        }
    }
   return c;
}

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    char a[100];
    char b[100];
    char* c;
    char* d;

    scanf("%s",a);
    scanf("%s",b);
    c = clclt(a,b);
    d = clclt(b,a);
    if (strlen(c)==0 && strlen(d)==0 )
        printf("*");
    else if(strlen(d)>strlen(c))
    {
        printf("%s\n",d);
        printf("%ld",strlen(d));
    }
    else
    {
        printf("%s\n",c);
        printf("%ld",strlen(c));
    }
        
    return 0;
}