//task 3
#include <iostream>
#include "context.hpp"
#include "fibers.cpp"
#include <stdio.h>
#include <threads.h>

extern scheduler s;//defines object s from class scheduler          

void funcation1(fiber f1)//finc1 uses the thread yield that allows you to run to state 
{
    f1.get_data(dp);
    std::cout<<"fiber 1 : befor"<<std::endl;
    thrd_yield();
    std::cout<<"fiber 1 : After"<<std::endl;
    s.fiber_exit();
}
void funcation2(fiber f2)// func2 prints fiber 2 and calles fiber exit 
{
    std::cout<<"fiber 2"<<std::endl;
    s.fiber_exit();
}
int main()
{
    fiber f1;
    fiber f2;
    funcation1(f1);
    funcation2(f2);
    s.spwan(&f1);
    s.spwan(&f2);
    s.do_it();
    return 0;
}
    
