#include<iostream>
using namespace std;
#define max 3
class Queue
{
public:
    int item,front,rear,arr[max];
    Queue()
    {
        front=rear=-1;
    }
    void enqueue (int item);
    void dequeue();
    void peek();
    void display();
};
void Queue::enqueue(int item)
{
    if(rear==max-1)
    {
        cout<<"\nQueue is full(overflow condition)";
    }
    else if(front==-1 && rear==-1)
    {
        front=rear=0;
        arr[rear]=item;
        cout<<"\nInserted element is:"<<item;
    }
    else
    {
        rear=rear+1;
        arr[rear]=item;
        cout<<"\nInserted element is:"<<item;
    }
}
void Queue :: dequeue()
{
    if (front==-1 && rear==-1)
    {
        cout<<"\nQueue is Empty(Underflow condition)";
    }
    else if(front==rear)
    {
        item=arr[front];
        cout<<"\nDeleted element is"<<item;
        front=rear=-1;
    }
    else
    {
        item=arr[front];
        cout<<"\nDeleted item is:"<<item;

        front=front+1;


    }
}
    void Queue :: peek()


{


        if(front==-1 && rear==-1)
        {
            cout<<"\nQueue is empty:";
        }
        else
        {
            item=arr[front];
            cout<<"\nItem at the front position: "<<item;
        }


}
void Queue :: display()
{

    if(front==-1 && rear==-1)
    {
        cout<<"Queue is empty";
    }
    else
    {
        cout<<"\nQueue item is:";
        for(int i=front;i<=rear;i++)
        {
            cout<<"  "<<arr[i];
        }
    }
}
int main()
{
    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.display();
    q.peek();
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.display();
    q.dequeue();
    return 0;

}
