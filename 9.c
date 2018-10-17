#include<stdio.h>
int main()
{
    int n,n1,a[100],i,s=0;
    scanf("%d%d",&n,&n1);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=1;i<=n1;i++)
    s=s+i;
    printf("%d",s);
    return 0;
}
