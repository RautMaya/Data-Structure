#include<iostream>
using namespace std;
#define max 3
class Circularqueue
{
public:
int item,front,rear,cq[max];
Circularqueue()
    {
        front=rear=-1;
    }
};
void enqueue()
{
    if((rear==max-1 && front==0)||(front==-1 && rear==-1))
    {
        cout<<"\nCircular Queue is Full(Overflow Condition)";
    }
    else if(rear==max-1 && front!=0)
    {
        rear=(rear+1)%max size;
        cq[rear]=item;
        cout<<"\nInserted element is:"<<item;
    }
    else if(front==-1 && rear==-1)
    {
       rear=front=0;
       cq[rear]=item;
       cout<<"\nInserted element is:"<<item;
    }
    else
    {
        rear=rear+1;
        cq[rear]=item;
        cout<<"Inserted element is:"<<item;
    }
}
void dequeue()
{
    if(front==-1 && rear==-1)
    {
        cout<<"\nCircular Queue is Empty(Underflow Condition)";
    }
    else if(front==rear)
    {
        front=rear=0;
        item=cq[front];
        cout<<"Deleted element is:"<<item;
    }
    else if(front=max-1 && rear==0)
    {
        front=(front +1)%max size;
        item=cq[front];
        cout<<"Deleted element is:"<<item;
    }
    else
    {
        front=front+1;
        item=cq[front];
        cout<<"Deleted element is:"<<item;
    }

}
void display()
{
    if(front==-1 && rear==-1)
    {

        int i=front;
        cout<<"\nCircular Queue element are:";
        while(i!=rear)
        {
            cout<<"  "<<cq[i];
            i=(i+1)%max size;
        }
        cout<<"  "<<cq[i];
    }
}
int main()
{
    Circularqueue cq;
    cq.enqueue(10);
    cq.enqueue(20);
    cq.enqueue(30);
    cq.enqueue(40);
    cq.display();
    cq.dequeue();
    cq.dequeue();
    cq.dequeue();
    cq.dequeue();
    return 0;
}

