#include<stdio.h>
int main()
{
    int n,n1,o,i,c=0;
    scanf("%d",&n);
    o=n;
    while(n!=0)
    {
       n1=n%10;
       c=c*10+n1;
       n=n/10;
    }
    if(c==o)
    printf("Yes");
    else
    printf("No");
    return 0;
}
