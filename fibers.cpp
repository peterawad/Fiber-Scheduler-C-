//Task2
#include <iostream>
#include "context.hpp"
#include <deque>
class fiber//this is fiber class
{
public:
    Context context_;
    char* stack_bottom;
    char* stack_top;
    fiber()//default contructor
    {
    } 
    ~fiber()// destructor
    {
    }
    int get_context(Context *c)//get context 
    {
        return 0;
    }
    void get_data(int* data)//get data
    {
    }
};
void foo(void* x)// this function prints you called foo
{
    std::cout << "task2 - you called foo" << std::endl;
    exit(1);
}
void set_context(Context *c)
{
} 
class scheduler
{
    fiber f;
    Context c;
public:
    std::deque<fiber*> fibers_;
    Context* context_;
    scheduler()//default contructor
    {
    }
    ~scheduler()// destructo
    {

    }
    void spwan(fiber* f)//spawn makes push to th end of the stack
    {   
        fibers_.push_back(f);
    } 
    void do_it()//it makes get context and checks if the fiber is not empty makes pop
    {
        f.get_context(context_);
        if(!fibers_.empty())
        {
            fibers_.pop_front();
        }
        f.get_context(&c);
        set_context(&c);
           
    }
    void fiber_exit()//makes the looping for the set context
    {
        set_context(context_);
    }
};
scheduler s;
fiber f;
int* dp;
void func1(fiber f1)// this func takes the fiber then gets the data from it and prints it
{
    f1.get_data(dp);
    std::cout<<"fiber 1 : "<<*dp<<std::endl;
    *dp=*dp+1;
    s.fiber_exit();
}
void func2(fiber f2)// this is fiber2 
{
    f2.get_data(dp);
    std::cout<<"fiber 2: "<<*dp<<std::endl;
    s.fiber_exit();
}
int main()
{
    int d=10;
    dp=&d;
    fiber f2;
    fiber f1;
    func1(f1);
    func2(f2);
    s.spwan(&f1);
    s.spwan(&f2);
    s.do_it();
    return 0;
}
