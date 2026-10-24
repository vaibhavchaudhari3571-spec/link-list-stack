#include<iostream>
#define MAX 5
using namespace std;

class queue
{
    private:
    int a[MAX];
    int front;
    int rear;

    public:
    queue()
    {
        front=-1;
        rear=-1;
    }

    int empty()
    {
        return (front==-1 && rear==-1);
    }

    int full()
    {
        return (rear==MAX-1);
    }

    int peek()
    {
        if(empty())
        {
            cout<<"Queue is Empty!!"<<endl;
            return -1;
        }
        return (a[front]);
    }

    void display(void)
    {
        if(empty())
        {
            cout<<" Queue is Empty!!"<<endl;
            return;
        }

        for(int i=front; i<=rear; i++)
            cout<<" "<<a[i];
    }

    void enqueue(int x)
    {
        if(full())
        {
            cout<<"Queue is Full!!"<<endl;
            return;
        }

        if(empty())
        {
            front=0;
            rear=0;
        }
        else
        {
            rear++;
        }
        a[rear]=x;
    }

    int dequeue()
    {
        if(empty())
        {
            cout<<"Queue is Empty!!"<<endl;
            return -1;
        }

        int x=a[front];
        if(front==rear)
        {
            front=-1;
            rear=-1;
        }
        else
        {
            front++;
        }
        return x;
    }
};


int main()
{
    queue q;

    if(q.full())
    {
        cout<<" Queue is Full!!"<<endl;
    }
    else
    {
        q.enqueue(10);
        cout<<"Queue Contents after a Enqueue Operation:"<<endl;
        q.display(); cout<<endl;
    }

    if(q.full())
    {
        cout<<" Queue is Full!!"<<endl;
    }
    else
    {
        q.enqueue(20);
        cout<<"Queue Contents after a Enqueue Operation:"<<endl;
        q.display();cout<<endl;
    }

    if(q.full())
    {
        cout<<" Queue is Full!!"<<endl;
    }
    else
    {
        q.enqueue(30);
        cout<<"Queue Contents after a Enqueue Operation:"<<endl;
        q.display();cout<<endl;
    }

    if(q.full())
    {
        cout<<" Queue is Full!!"<<endl;
    }
    else
    {
        q.enqueue(40);
        cout<<"Queue Contents after a Enqueue Operation:"<<endl;
        q.display();cout<<endl;
    }

    if(q.full())
    {
        cout<<" Queue is Full!!"<<endl;
    }
    else
    {
        q.enqueue(50);
        cout<<"Queue Contents after a Enqueue Operation:"<<endl;
        q.display();cout<<endl;
    }

    if(q.full())
    {
        cout<<" Queue is Full!!"<<endl;
    }
    else
    {
        q.enqueue(60);
        cout<<"Queue Contents after a Enqueue Operation:"<<endl;
        q.display();cout<<endl;
    }






    if(q.empty())
    {
        cout<<"Queue is Empty!!"<<endl;
    }
    else
    {
        cout<<"Removed Element is:"<<q.dequeue()<<endl;
    }
    cout<<"Queue After Dequeue Operation:"<<endl;
    q.display();cout<<endl;


    if(q.empty())
    {
        cout<<"Queue is Empty!!"<<endl;
    }
    else
    {
        cout<<"Removed Element is:"<<q.dequeue()<<endl;
    }
    cout<<"Queue After Dequeue Operation:"<<endl;
    q.display();cout<<endl;


    if(q.empty())
    {
        cout<<"Queue is Empty!!"<<endl;
    }
    else
    {
        cout<<"Removed Element is:"<<q.dequeue()<<endl;
    }
    cout<<"Queue After Dequeue Operation:"<<endl;
    q.display();cout<<endl;


    if(q.empty())
    {
        cout<<"Queue is Empty!!"<<endl;
    }
    else
    {
        cout<<"Removed Element is:"<<q.dequeue()<<endl;
    }
    cout<<"Queue After Dequeue Operation:"<<endl;
    q.display();cout<<endl;


    if(q.empty())
    {
        cout<<"Queue is Empty!!"<<endl;
    }
    else
    {
        cout<<"Removed Element is:"<<q.dequeue()<<endl;
    }
    cout<<"Queue After Dequeue Operation:"<<endl;
    q.display();cout<<endl;


    if(q.empty())
    {
        cout<<"Queue is Empty!!"<<endl;
    }
    else
    {
        cout<<"Removed Element is:"<<q.dequeue()<<endl;
    }
    cout<<"Queue After Dequeue Operation:"<<endl;
    q.display();cout<<endl;

    return 0;
}


/*
OUTPUT

PS C:\Users\Welcome\Downloads\linklist 444> cd "c:\Users\Welcome\Downloads\linklist 444\" ; if ($?) { g++ queue_by_Array.cpp -o queue_by_Array } ; if ($?) { .\queue_by_Array }
Queue Contents after a Enqueue Operation:
 10
Queue Contents after a Enqueue Operation:
 10 20
Queue Contents after a Enqueue Operation:
 10 20 30
Queue Contents after a Enqueue Operation:
 10 20 30 40
Queue Contents after a Enqueue Operation:
 10 20 30 40 50
 Queue is Full!!
Removed Element is:10
Queue After Dequeue Operation:
 20 30 40 50
Removed Element is:20
Queue After Dequeue Operation:
 30 40 50
Removed Element is:30
Queue After Dequeue Operation:
 40 50
Removed Element is:40
Queue After Dequeue Operation:
 50
Removed Element is:50
Queue After Dequeue Operation:
 Queue is Empty!!

Queue is Empty!!
Queue After Dequeue Operation:
 Queue is Empty!!
*/