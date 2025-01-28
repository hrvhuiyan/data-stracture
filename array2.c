#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    int a[n],b[n];
    printf("Enter the value of array \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(i==0)
        {
            b[i]=a[i]+a[i+1];
        }else if(i>0&&i<n-1)
        {
            b[i]=a[i-1]+a[i+1];
        }
        else{
            b[i]=a[i-1]+a[i];
        }
    }
    for(i=0;i<n;i++){
        printf("%d",b[i]);}
        return 0;
}
