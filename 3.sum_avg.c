#include<stdio.h>
int main()
{
    int n,i,j,sum=0;
    float avg;
    
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
        sum=sum+a[i];
    
    }
    printf("%d\n",sum);
    avg=(float)sum/(float)n;
    printf("%0.2f",avg);
    
    
    
}
