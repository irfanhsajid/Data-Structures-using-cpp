#include <iostream>
using namespace std;

class Stack
{
private:
    int top;
    int arr[5];

public:
    Stack()
    {
        top = -1;
        for (int i = 0; i < 5; i++)
        {
            arr[i] = 0;
        }
    }
    // 1.checking the stack is empty or not
    bool isEmpty()
    {
        if (top == -1)
            return true;
        else
            return false;
    }
    // 2.checking the stack is full or not
    bool isFull()
    {
        if (top == 4)
            return true;
        else
            return false;
    }

    // 3. pushing value into the stack

    void push(int value)
    {
        if (isFull())
        {
            cout << "Stack Overflow" << endl;
        }
        else
        {
            top++; // for the first time incrementing top value from -1 to 0,1,2....
            arr[top] = value;
        }
    }
    // 4. removing value from the stack
    int pop()
    {
        if (isEmpty())
        {
            cout << "Stack Underflow" << endl;
            return 0;
        }
        else
        {
            int popValue = arr[top];
            arr[top] = 0;
            top--;
            return popValue;
        }
    }
    // 5. how many values are in the stack (counting)
    int count()
    {
        return (top + 1);
    }

    // 6. accessing any value/item at the i position
    int peek(int pos)
    {
        if (isEmpty())
        {
            cout << "Stack Underflow" << endl;
            return 0;
        }
        else
        {
            return arr[pos];
        }
    }
    // 7. changing the values inside a position of the stack
    void change(int pos, int value)
    {
        arr[pos] = value;
        cout << "Value changed at location" << pos << endl;
    }

    // 8.display all the values in the stack
    void display()
    {
        cout << "All the values in the stack are : " << endl;
        for (int i = 4; i >= 0; i--)
        {
            cout << arr[i] << endl;
        }
    }
};

int main()
{

    Stack s1;
    int option, position, value;

    do
    {
        cout << "What operation do you want to perform ? Select option number. Enter 0 to exit" << endl;
        cout << "1. Push()" << endl;
        cout << "2. Pop()" << endl;
        cout << "3. isEmpty()" << endl;
        cout << "4. isFull()" << endl;
        cout << "5. Peek()" << endl;
        cout << "6. count()" << endl;
        cout << "7. change()" << endl;
        cout << "8. display()" << endl;
        cout << "9. Clear Screen" << endl;
        cin >> option;
        switch (option)
        {
        case 0:
            break;
        case 1:
            cout << "Enter an item to push in the stack" << endl;
            cin >> value;
            s1.push(value);
            break;
        case 2:
            cout << "Pop function called. Poped value :" << s1.pop() << endl;
            break;
        case 3:
            if (s1.isEmpty())
                cout << "Stack is empty" << endl;
            else
                cout << "Stack is not empty" << endl;
            break;
        case 4:
            if (s1.isFull())
                cout << "Stack is Full" << endl;
            else
                cout << "Stack is not Full" << endl;
            break;
        case 5:
            cout << "Enter the position of item you want to peek : " << endl;
            cin >> position;
            cout << "Peek Function called - Value at position " << position << " is "
                 << s1.peek(position) << endl;
            break;
        case 6:
            cout << "Count function called - Number of items in the stack are : " << s1.count() << endl;
            break;
        case 7:
            cout << "Enter the position of item you want to change : ";
            cin >> position;
            cout << endl;
            cout << "Enter the value of item you want to change : ";
            cin >> value;
            s1.change(position, value);
            break;
        case 8:
            cout << "Display Function called" << endl;
            s1.display();
            break;
        case 9:
            system("clear screen");
            break;
        default:
            cout << "Enter proper Option Number " << endl;
        }

    } while (option != 0);
    return 0;
}