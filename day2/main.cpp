#include <iostream>
#include <stack.h>
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



    return 0;
}
