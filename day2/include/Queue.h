#ifndef QUEUE_H
#define QUEUE_H

#include <iostream>
using namespace std;
class Queue
{
private:
    int *items;
    int sze;
    int frnt,rear;
public:
    //ask user to give me size
    Queue(int sz)
    {
        this->sze=sz;
        items = new int [sze];
        frnt=rear=-1;  // Queue is empty
    }
    /***************************************************this solution is wrong in logic***************************************/
    // i should not increment front EVERY DeQueue *people(data) move to the window(front) we do not move window to people*
    // we solve this with first type of Queue which is Shifting Queue.
    // every time we DeQueue we shift elements to the front which will be at index 0 BUT this is bad for performance . imagine a queue of 10.000 element
    // So , to improve the shifting solution performance . we don't shift elements every Dequeue (which means we will increment front as before). we shift when we need it == when the array (or the queue is full).
    // so before we EnQueue we will check if the queue is full (rear == size -1 && front == 0) , if (rear == size -1 and front !=0 HERE we do the shifting)



    /************************************************************************/

    /*
          int EnQueue(int data)
          {
              // what if the Queue is full? we should check that
              if(rear == sze-1)
              {
                  //Queue is full
                  return 0; // false . EnQueue failed.
              }
              // i do not want to increment front every time i enter data cuz it represents the first element that entered and should be served
              // i only need to increment it if it's the first item entering the Queue
              if(frnt == -1)
              {
                  frnt++;
              }


              rear++;
              // i add data to the Queue using rear
              items[rear]=data;
              return 1; // true .EnQueue succeeded.
          }
    */
    int DeQueue (int &data)
    {

        //check if queue is empty
        if(frnt == -1 )
        {
            //queue is empty
            return 0;// false .DeQueue failed.
        }
        data = items[frnt]; //DeQueue using front cuz it's the first element entered . FIFO
        frnt++;
        return 1;//true
    }


    int EnQueue(int data)
    {
        // is queue really full
        if(rear == sze -1 && frnt == 0)
        {
            //queue is really full
            return 0; // false .EnQueue failed
        }
        if(rear == sze -1 && frnt == rear -1  ) // there is a place . we need to shift

        {
            items[0] = items[frnt];
            frnt=0;
            items[1] = items[rear];
            rear=1;
        }

        if(frnt == -1 ) //first element
        {
            frnt++;
        }

        rear++;
        items [rear] = data;




        return 1; //true



    }

    void display()
    {
        for(int i=frnt; i<=rear; i++)
        {
            cout<<items[i]<<endl;
        }
        cout<<"front"<<frnt<<endl<<"rear"<<rear<<endl;
    }

protected:


};

#endif // QUEUE_H
