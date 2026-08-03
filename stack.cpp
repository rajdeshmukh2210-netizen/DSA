#include <iostream>
using namespace std;

class Stack
{
public:
    int size = 5;
    int a[5];
    int top;
    Stack()
    {
        top = -1;
    }
    void push(int value)
    {
        if (top == size - 1)
        {
            cout << "Stack Overflow!" << endl;
        }
        else
        {
            top++;
            a[top] = value;
            cout << value << " inserted into the stack." << endl;
        }
    }

    void pop()
    {
        if (top == -1)
        {
            cout << "Stack Underflow!" << endl;
        }
        else
        {
            cout << a[top] << " deleted from the stack." << endl;
            top--;
        }
    }

    void print()
    {
        if (top == -1)
        {
            cout << "Stack is empty." << endl;
        }
        else
        {
            cout << "Stack elements are: ";
            for (int i = top; i >= 0; i--)
            {
                cout << a[i] << " ";
            }
            cout << endl;
        }
    }
};

int main()
{
    Stack s;
    int choice, value;

    do
    {
        cout << "\n1. Push";
        cout << "\n2. Pop";
        cout << "\n3. Print";
        cout << "\n4. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter value: ";
            cin >> value;
            s.push(value);
            break;

        case 2:
            s.pop();
            break;

        case 3:
            s.print();
            break;

        case 4:
            cout << "Program Ended." << endl;
            break;

        default:
            cout << "Invalid Choice!" << endl;
        }

    } while (choice != 4);

    return 0;
}
