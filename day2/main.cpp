#include <iostream>
#include <stack.h>
#include <Queue.h>
using namespace std;

int main()
{
    stack stk;
    stk.push(3);
    stk.push(5);
    stk.push(7);
    stk.push(9);
    stk.push(11);
    int isPusnSuccess = stk.push(13);
    cout << isPusnSuccess<<endl;

    int num; // var to send its address to pop fun

    if(stk.pop(num))
    {
         cout<< num ;
    }
    ////////////////////////////////////
    Queue qu(4); // of size 4
    qu.EnQueue(3);
    qu.EnQueue(5);
    qu.EnQueue(7);
    qu.EnQueue(9);


    // now queue is full

    int numq ; // var to send it's reference to dequeue
/*****old solution before i implement the shifting solution**************

    // if i tried to enqueue data after dequeuing element
    //cout<<qu.EnQueue(11); // 0 false which WRONG there an empty place.
*/
    qu.display();
    qu.DeQueue(numq);
    cout<<"after dequeue\n";
    qu.display();
    qu.DeQueue(numq);
    cout<<"after dequeue2\n";
    qu.display();

    cout<<"try to enqueue -->";
    cout<<qu.EnQueue(11)<<endl;
    qu.display();
    cout<<"try to enqueue2 -->";
    cout<<qu.EnQueue(13)<<endl;
    qu.display();





    return 0;
}
