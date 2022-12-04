
#include<stdio.h>
int main()
{
    int arr[45],n,max,i,count =0,count1=0,temp,pos,value,max1;

    printf("enter n = ");
    scanf("%d",&n);


printf("enter array :\n");
for(i=0;i<n;i++){           
    scanf("%d",&arr[i]);
}

printf("array is : \n");
for(i=0;i<n;i++){
    printf("%d\n",arr[i]);
}



printf("enter vslue = ");
scanf("%d",&value);



for(i=0;i<n;i++)
{
    if(arr[i]==value)
    {
        printf("\npos of entered ellement is = %d\n",i+1);
    
    }
    else if(arr[i]!=value)
    {
        printf("\nellement not found ");
        break;
    }
}




}
