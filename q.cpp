#include<iostream>
using namespace std;

class Queue
{
private:
    int queue[4];
    int front;
    int rear;
    int size;

public:
    Queue(){

        size = 5;
        front = -1;
        rear = -1;
    }

    void enqueue(int value){

        if(rear== size -1){
            cout<<"\n Queue is Full!\n";
        }
        if(front == -1){

            front = 0;
        }
        rear++;
        queue[rear] = value;

        cout << "\nElement Inserted Successfully.\n";
    }

    void dqueue(){

    if(front == -1 || front > rear)
        {
            cout << "\n Queue is Empty.\n";

            front = rear = -1;
            return;
        }
    }

    void display()
    {

        if(front == -1)
        {
            cout << "\nQueue is Empty.\n";
            return;
        }

        cout << "\nQueue Elements : ";

        for(int i = front; i <= rear; i++)
        {
            cout << queue[i] << " ";
        }

        cout << endl;
    }

    void peek()
    {
        if(front == -1)
        {
            cout << "\nQueue is Empty.\n";
            return;
        }

        cout << "\nFront Element : " << queue[front] << endl;
    }

};

int main()
{
    Queue q;

    int choice, value;

    do
    {
        cout << "\n 1. Enqueue";
        cout << "\n 2. Dequeue";
        cout << "\n 3. Display";
        cout << "\n 4. Peek";
        cout << "\n 5. Exit";

        cout << "\n Enter Your Choice : ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                cout << "\nEnter Element : ";
                cin >> value;

                q.enqueue(value);
                break;

            case 2:
                q.dqueue();
                break;

            case 3:
                q.display();
                break;

            case 4:
                q.peek();
                break;

            case 5:
                cout<<"\n Code Terminated!";
                break;

            default:
                cout<<"\n Invalid Choice!";
                break;
        }

    }
    while(choice != 5);

    return 0;

}
