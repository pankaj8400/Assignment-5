#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter any num: ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
        printf("Square of %d = %d\n",i,i*i);
    return 0;
}
