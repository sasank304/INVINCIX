#include <stdio.h>

int main()
{
    int a=0,b=1,n,s=0,i=0,sum=1;
    scanf("%d",&n);
    if(n==1)
    {
        printf("%d",sum);
    }
    
    else if(n>1)
    {
        for(i=2;i<=n;i++)
        {
            s=a+b;
           sum=sum+s;
           a=b;
           b=s;
        }
        printf("\n%d",sum);
    }

    return 0;
}