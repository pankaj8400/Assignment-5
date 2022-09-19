#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter any num: ");
    scanf("%d",&n);

     if(n%2==0)
    {
         for(i=n;i>=1;i-=2)
         printf("%d ",i);
    }
    else
     {
         n=n-1;
         for(i=n;i>=1;i-=2)
         printf("%d ",i);
     }
    return 0;
}
