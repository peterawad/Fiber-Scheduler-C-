# final_project_Advanced Systems Programming

#A Fiber Scheduler (C++) :: Assignment
## introduction 
- for this assignment we need to make a file using as header class and rename <b>"context.hpp"</b>
- this header contains a struct named context with pointers
    - rip point to function in execution body 
    - rsp point to the top of stack 
    - rbp base pointer
    - rbx , r12 to r15 call saved registers
- Also the file contain an extend functions set_context(), swap_context , get_context.
- this file add as include in each page or code.

## Task1

Task 1  is named <b>"ex1.cpp"</b> used to implement C++ app. , using the provided context library, iostream and for print we use namespace called std, it contains:
- function called foo just print " You called foo ",it's avoid ,can't return to main anything.
- function called to getcontext "get_context" and return value.
- if we said get we must make set "Set_cotext"check value of variable in our code.
- Main of this example work by allocate space for stack and mack stack get downwards.
- set variable called sp as pointer to character and this pointer grow each date +4096
- create object from empty context named c and set rib pointer to foo and set rsp to sp 
- call function set_context
- set sp with aligned 16-bytes (-16l)
-when calling function Sys V state a 128-byte space (sp-128) 

![task1](/uploads/f62ffa53d9b71cd30bb2c0d395bacc48/task1.jpg)

## Task 2

- we have 2 classes fiber and scheduler and functions and main.
    - class fiber with constructor fiber and destructor ~fiber  and function to getcontext ana another to get data.

    - class scheduler define dequeue from datatype fiber and context and default constructor and destructor  and function spwan to push data to stack,do_it(), fiber_exit() instead of loop.

    - we make set_context, function 1 and function 2 and foo to make a test.

    - main  function  just set variable called d with value 10pointer dp take address of d , set two object from class fiber named f1 ,f2 and call spawn twice time , first with address of f1 and second with address of F2 and execute do_it() function.

![task2](/uploads/cf56223529981d36964b3585690eaa27/task2.jpg)

## Task 3
- we separate task 3 in file called <b>"example.cpp"</b>.
- we have just 2 functions, but we will use in this task the thread and yield 
- we add code #include <threads.h>
- in function1 we want to test, just code print "fiber 1 before" and make thred_yield that return code and continue in function.
- We in main function create objects f1 and f2 from class fiber, and make spawn of addresses of f1 &f2 and just call do_it()method in schedular. 

![task3](/uploads/8fe5e2e3b7badee00eb68d4482b5d3ab/task3.jpg)

## link video:  https://uweacuk-my.sharepoint.com/:v:/g/personal/peter2_awad_live_uwe_ac_uk/ESgxCq3IrDJPkUqIhYfl22cBiZbRUK7Xd_U_Zoj2YkhKpA?e=EPM2xU



