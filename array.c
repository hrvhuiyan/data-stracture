#include<stdio.h>
int main()
{
    int a[100],i,n,sum=0;
    printf("Enter size of the array:");
    scanf("%d",&n);
    printf("Enter the value of elements:");
    for(i=0;i<n;i++){

        scanf("%d",&a[i]);}

    for(i=0;i<n;i++){
            sum=sum+a[i];
} printf("Sum of array :%d",sum);
return 0;
}
