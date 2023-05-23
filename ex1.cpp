//Task 1

#include <iostream>
#include "context.hpp"

using namespace std;
int x;
void foo(void *x)//this function prints and exit
{
    std::cout << "you called foo" << std::endl;
    exit(1);
}
int get_context(Context *c)//this fuction makes get, gets the context c
{
        x=0;
        return x;
}
void set_context(Context *c)//this function makes get to context c
{
        if(x == 0)
        {
            x=x+1;
            set_context(c);
        }
} 
int main() 
{
    //clang++ -o hello ex1.cpp
    //Taskl
        
    char data[4096]; // defining array data with size 4096
    char *sp=data + 4096;// pointer that grows the size of data 

    Context c;

    x=get_context(&c);// calling context c 
    cout<<"   Task 1: \n";
    cout<<"Message \n";// print message 
    if(x == 0)// checks return x, if x = 0 will be increment by 1 
    {
        x=x+1;
        set_context(&c);
    }
    foo(c.rip);
    c.rsp=(char *)sp;
    set_context(&c);

    sp= (char *)((uintptr_t *) sp - 16l);//aligned to 16‑bytes in sys v
    sp= sp - 128;//128‑byte space is stored
    return 0;
}
