#include<stdio.h>
int main()
{
    int n,i,indexmin,indexmax,p,temp;
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
            indexmin=i;
        }
    }
    for(i=1;i<n;i++)
    {
        if(a[i]>p)
        {
            p=a[i];
            indexmax=i;
        }
    }
    temp=a[indexmax];
    a[indexmax]=a[indexmin];
    a[indexmin]=temp;
    printf("\narray after swap will be\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
}
