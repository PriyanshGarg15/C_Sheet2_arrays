#include<stdio.h>
int main()
{
    int n,p,i;
    printf("enter size of array u need");
    scanf("%d",&n);
    int a[n];
    printf("enter elements of array");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    p=a[0];
    for(i=1;i<n;i++)
    {
        if(a[i]<p)
        {
            p=a[i];
        }
    }
    printf("\nmin is=%d",p);
}
