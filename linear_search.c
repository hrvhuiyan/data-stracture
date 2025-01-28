#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    int arry[n];
    printf("Enter the Elements of value:\n");
    for(i=0;i<n;i++)
    scanf("%d",&arry[i]);
    int value,pos=-1;
    printf("Enter the value of found:");
    scanf("%d",&value);
    for(i=0;i<n;i++)
    {
        if(value==arry[i])
        {
            pos=i+1;
            break;
        }
    }

    if(pos==-1)
    {
        printf("Item is not found");
    }
    else
        printf("the value is found at %d:",pos);
    return 0;

}
