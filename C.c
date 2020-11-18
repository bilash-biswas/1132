#include<stdio.h>
int main()
{
    int a,b,x,y,sum=0,i;
    scanf("%d",&a);
    scanf("%d",&b);
    if(a>b)
    {
        x=b;
        y=a;
    }
    if(b>a)
    {
        x=a;
        y=b;
    }
    if(a==b)
    {
        printf("%d\n",0);
        goto bilash;
    }
    for(i=x;i<=y;i++)
    {
        if(i%13!=0)
        {
         sum=sum+i;
        }
    }

    printf("%d\n",sum);
    bilash:
    return 0;
}
