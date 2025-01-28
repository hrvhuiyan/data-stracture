#include<stdio.h>
int main()
{
    int n,i,j,temp;
    printf("Enter the Elements number:");
    scanf("%d",&n);
    int array[n];
    printf("Enter the value of elements \n%d");
    for(i=0;i<n;i++)
    scanf("%d",&array[i]);
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1;j++)
            {
                if(array[j]>array[j+1]){
                    temp=array[j];
                    array[j]=array[j+1];
                    array[j+1]=temp;
                }
            }
    }
    printf("\n After sorting:\n");
      for(i=0;i<n;i++){
        printf("%d",array[i]);
    }
    return 0;
}
