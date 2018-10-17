#include<stdio.h>
int main()
{
    int n,n1,i,c=0;
    scanf("%d%d",&n,&n1);
    for(i=n+1;i<n1;i++)
    { if(i%2!=0)
       printf("%d ",i);
    }
    return 0;
}
