#include <iostream>
#include "Node.h"
#include "Linkedlist.h"
using namespace std;

int main()
{
    Linkedlist mylist;
    mylist.Add(3);
    mylist.Add(5);
    mylist.Add(7);
    mylist.Add(9);
    //mylist.Display();
   // mylist.countt();
    mylist.GetDataByIndex(0);
    mylist.insertafter(4,5);
    cout<<endl<<"Reverse Q\n";
   (mylist.Reverse())->Display(); //mylist.Reverse() will return pointer
    return 0;
}
