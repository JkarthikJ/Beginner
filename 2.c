#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n%2==0)
    printf("Even");
    else if(n<0)
    printf("Invalid");
    else
    printf("Odd");
    return 0;
}
