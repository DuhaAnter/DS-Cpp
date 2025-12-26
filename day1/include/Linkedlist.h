#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include "Node.h"
using namespace std;
class Linkedlist
{
public:
    Node *head,*tail;
    Linkedlist()
    {
        head = tail = NULL;
    }
    void Add(int data)
    {
        Node *node = new Node(data); //first create a node
        if(head==NULL) // see if its the first one,if yes its both head and tail
        {
            head=tail=node;
        }
        else
        {
            // we do not deal w head
            tail->Next=node; //3N=5
            node->Prev=tail; //5P=3 // 3 is head & tail
            tail=node; // tail =5
        }
    }
    void Display()
    {
        Node *current=head; //new * so i can grape a node to print and not miss w head
        while(current!=NULL)//as long as u r holding a node w data Do the following
        {
            cout<<current->Data <<"\t";
            current=current->Next; //first current is the old one,second is new
        }
    }

    int countt()
    {
        int c=0;
        Node *current=head;
        while(current!=NULL)
        {
            c++;
            current=current->Next;
        }
        cout << "Number of Nodes --> "<<c<<endl;
    }
//////////////////////////////////////////////////////////////////////////////////
    int GetDataByIndex(int index)
    {
        int c=0;
        Node *current=head;
        while(current!=NULL)
        {
            if(c==index)
            {
                cout<<"Data in index "<<c<<"--->"<<current->Data<<endl;
                break;
            }
            else
            {
                c++;
                current=current->Next;
            }
        }
    }
//////////////////////////////////////////////////////////////////////////////////////////
   void insertafter (int data,int after)
    {

        cout<<"Linkedlist before insertion \n";
        Display();
        cout<<"\n";

        Node *current=head;
        while(current!=NULL) //he will repeat the process We need loop
        {

            if(current->Data==after) // if found the required node
            {
                Node *node=new Node(data); // create new node
                node->Data=data; // set data and node N & P
                node->Prev=current;
                node->Next=current->Next;

                if(current->Next!=NULL)//make sure that current is not tail
                {
                    // only way to reach the 3 is via the 1
                    current->Next->Prev=node; // make 3 P refer to the new node

                }
                    current->Next=node; // now that i reached the 3 I can change the address peacefully
                    break; // no need to complete the loop if u done the job
            }
                current=current->Next;
        }
            cout<<"Linkedlist after insertion \n";
            Display();
    }
 ////////////////////////////////////////////////////////////////////////////////////
    Linkedlist* Reverse()
    {
        Linkedlist *revList = new Linkedlist();
        Node *current = tail;
        while(current)
        {
            revList->Add(current->Data);
            current=current->Prev;
        }
        return revList;
    }
protected:

private:

};

#endif // LINKEDLIST_H
