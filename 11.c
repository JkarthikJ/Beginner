#include<stdio.h>
int main()
{
    int n,i,p,c=1;
    scanf("%d%d",&n,&p);
    c=n;
    for(i=1;i<p;i++)
    {
        c=c*n;
    }
    printf("%d",c);
    return 0;
}
