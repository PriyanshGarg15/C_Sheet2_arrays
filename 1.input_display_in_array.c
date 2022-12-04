#include<stdio.h>
int main()
{
    int n,i;
    
    printf("enter size of array u need");
    scanf("%d",&n);
    int a[n];

    
    printf("enter elements of array\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
}
