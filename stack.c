#include<stdio.h>
#define CAPACITY 3
int stack[CAPACITY];
int top=-1;
void push(int x)
{
    if(top<CAPACITY-1)
       {
           top=top+1;
           stack[top]=x;
           printf("Successfully added item %d\n",x);
       }else
       {
           printf("Exception! No space\n");
       }
}
int pop(){
    if(top>=0)
    {
        int val=stack[top];
        top=top-1;
        return val;
    }
    printf("Exception from pop! Empty stack\n");
    return -1;


}
int peek()
{
   if(top>=0)
   {
       return stack[top];
   }
   printf("Exception from peek! Empty stack\n");
   return -1;
}
int main()
{
    printf("Impleting my stack in c:\n");
    push(20);
    push(30);
    push(40);
    printf("Pop item:%d\n",pop());
    push(50);
    printf("Top of Stack: %d\n",peek());


return 0;
}

