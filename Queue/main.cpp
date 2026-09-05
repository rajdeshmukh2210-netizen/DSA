#include <iostream>
using namespace std;

class queue
{
    int arr[5];
    int front, rear;

public:
    queue()
    {
        front = -1;
        rear = -1;
    }

    void enqueue()
    {
        int num;

        if (rear == 4)
        {
            cout << "Queue Overflow\n";
        }
        else
        {
            cout << "Enter number: ";
            cin >> num;

            if (front == -1)
                front = 0;

            rear++;
            arr[rear] = num;
        }
    }

    void dequeue()
    {
        if (front == -1)
        {
            cout << "Queue Underflow\n";
        }
        else
        {
            cout << "Deleted element: " << arr[front] << endl;
            front++;

            if (front > rear)
            {
                front = rear = -1;
            }
        }
    }

    void display()
    {
        if (front == -1)
        {
            cout << "Queue is Empty\n";
        }
        else
        {
            cout << "Queue: ";
            for (int i = front; i <= rear; i++)
            {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
};

int main()
{
    queue q;
    int choice;

    do
    {
        cout << "\n1. Enqueue";
        cout << "\n2. Dequeue";
        cout << "\n3. Display";
        cout << "\n4. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            q.enqueue();
            break;

        case 2:
            q.dequeue();
            break;

        case 3:
            q.display();
            break;

        case 4:
            cout << "Program Ended";
            break;

        default:
            cout << "Invalid Choice";
        }

    } while (choice != 4);

    return 0;
}
