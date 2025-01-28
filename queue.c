#include<stdio.h>
#include<stdbool.h>
#define CAPACITY 4

int ourQueue[CAPACITY];
int front=0,rear=-1,totalitem=0;

bool isFull()
{
    if(totalitem==CAPACITY)
    {
        return true;
    }
    return false;

}
bool isEmpty() {
    if(totalitem==0){
        return true;
    }
    return false;
}
void enqueue (int item)
{
   if(isFull()) {
    printf("Sorry,the Queue is full.\n");
    return;
   }
   rear=(rear+1)%CAPACITY;
   ourQueue[rear]=item;
   totalitem++;
}
int dequeue()
{
  if(isEmpty()){
    printf("Sorry.the Queue is empty.\n");
    return-1;
  }
  int frontitem=ourQueue[front];
  ourQueue[front]=-1;
   front=(front+1)%CAPACITY;
    totalitem--;
    return frontitem;
}
void printQueue(){
    int i;
    printf("Queue:");
    for(i=0;i<CAPACITY;i++){
        printf("%d",ourQueue[i]);
    }
    printf("\n");
}
int main()
{
   printf("\nImplement is Queue:\n\n");
    enqueue(10);
    enqueue(20);
    enqueue(30);
    printQueue();
    enqueue(40);
    printQueue();
    enqueue(50);
    printf("Dequeue:%d\n",dequeue());
    printQueue();
    return 0;
}




