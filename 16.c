#include<stdio.h>
int main()
{
    int n,n1,j,i,c=0;
    scanf("%d%d",&n,&n1);
    for(i=n+1;i<n1;i++)
    {  c=0;
       for(j=2;j<=(i/2);++j)
       {
           if(i%j==0)
           {c=1;
           break;}
       }
       if(c==0)
       printf("%d ",i);
    }
    return 0;
}
