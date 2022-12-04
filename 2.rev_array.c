#include<stdio.h>
int main()
{
    int n,i,j;
    
    printf("enter size of array u need");
    scanf("%d",&n);
    int a[n];
    printf("enter elements of array\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n/2;i++)
    {
        int t=a[i];
        a[i]=a[n-1-i];
        a[n-1-i]=t;
    
    }
    for(i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
}
