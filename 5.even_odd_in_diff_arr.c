#include<stdio.h>
int main()
{
    int n,i,neg=0,pos=0,zeroo=0,j=0,k=0;
    
    printf("enter size of array u need");
    scanf("%d",&n);
    int a[n];
    int b[50];
    int c[50];
    printf("enter elements of array\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            
               b[j]=a[i];
               j++;
            
        }
        else if(a[i]%2!=0)
        {
            
               c[k]=a[i];
               k++;
               
            
        }
        
    }
    printf("b array is\n");
    for(int i=0;i<j;i++)
    {
        printf("%d",b[i]);
    }
    printf("\nc array is\n");
    
    for(int i=0;i<k;i++)
    {
        printf("%d",c[i]);
    }

}
