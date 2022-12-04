#include<stdio.h>
int main()
{
    int n,i,j,neg=0,pos=0,zeroo=0;
    
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
        if(a[i]<0)
        {
         neg++;   
        }
        else if(a[i]>0)
        {
            pos++;
        }
        else if(a[i]==0)
        {
            zeroo++;
        }
    }
    
    printf("positive no. are=%d\n",pos);
    printf("negative no. are=%d\n",neg);
    printf("zero no. are=%d",zeroo);
    
