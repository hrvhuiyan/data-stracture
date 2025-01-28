#include<stdio.h>
int main()
{
    int i,
    int item;
    int left,right,midle;
    printf("Enter the value:");
    scanf("%d",&item);
    int a[n];
    printf("Enter the elements :\n");
    for(int i=0;i<item;i++)
    {
            scanf("%d",&a[i]);
        printf("Enter the value to find:);
    }

    while(left<=right){
            midle=(left+right)/2;
        if(a[midle]==item){
            printf("Item found at index:%d\n",midle);
            return 0;
        }else if(a[midle]<item){
            left=midle+1;
        }
    else{
        right=midle-1;
    }
    }

    printf("Item is not found" );
           return 0;

}
