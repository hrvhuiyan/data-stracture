#include<stdio.h>

int get_sum(int x,int y)
{
    int sum=x+y;
    return sum;

}
void say_hi()
{
    printf("hi\n");
}
int main()
{
    printf("Main start\n");
   say_hi() ;
   int result=get_sum(10,25);
   printf("My sum:=%d\n",result);
   return 0;
}

