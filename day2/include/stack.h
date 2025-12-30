#ifndef STACK_H
#define STACK_H

// u can implement stack using array or linked list
//1- using array
class stack
{
private:

    int *items;
    int sze;
    int top; // represent where i stand in the stack . if its = -1 ---> stack is empty.

public:

    stack()
    {
        sze=5;
        top=-1;
        items = new int[5]; // reserved 5 places(behind each other) in heap type int and i got back the address of the first place . i called it items.

    }
    int push (int data)
    {
        if(top == sze -1) // which means stack is full
        {
            return 0; // false . the push process did not succeed.
        }
        top++;
        items[top]= data;
        return 1; // true.
    }

    int pop (int &data) // receives Reference to a variable created in main to change its value with the popped element.
    {
        if(top == -1)
        {
            return 0; // false . pop up process did not succeed.
        }
        data = items[top];
        top--;
        return 1; // true. // we did not use boolean cuz its not ANSCII C++.
    }

protected:


};

#endif // STACK_H
