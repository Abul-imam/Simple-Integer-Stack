/**************************
Name: Abul Imam
Assignment: 4
Purpose of the file: This file contains 
all the methods needed for STACK class. 
***************************/

#include "stack.h"

Stack::Stack(){
    /*********************************************
    Constructor. Doesn't have any parameters. Initializes
    top to -1 to show stack is empty.

    @param na : na
    @return na : na
    @exception na : na
    *********************************************/
    top = -1;
}

bool Stack::isEmpty(){
    /*********************************************
    Checks if the stack is empty or not. When top = -1
    it means the stack is empty. 

    @param na : na
    @return (bool) : top = -1 (TRUE) means the stack is empty.
    Otherwise False.
    @exception na : na
    *********************************************/
    return (top == -1);
}

int Stack::pop(){
    /*********************************************
    Checks if stack is empty or not before popping/
    removing. Returns the integer stored in the top 
    index and decrements top by 1.

    @param na : na
    @return stack[top] : the top integer of the stack.
    @exception -1 : UNDERFLOW ERROR. stack is empty so
    nothing can be popped/removed
    *********************************************/
    if (isEmpty()){
        throw -1;
    }
    return stack[top--];
}

int Stack::peek(){
    /*********************************************
    Checks if stack is empty or not before peeking.
    Returns the integer stored in the top index.
    Same as pop() except it doesn't decrement top.

    @param na : na
    @return stack[top] : the top integer of the stack.
    @exception -1 : UNDERFLOW ERROR. stack is empty so
    nothing can be peeked.
    *********************************************/
    if (isEmpty()){
        throw -1;
    }
    return stack[top];
}

bool Stack::push(int value){
    /*********************************************
    Checks if stack is Full or not. Inserts a new 
    integer into the stack. Then increments top by 1
    before value is stored into the new index.

    @param value : integer passed from caller to enter 
    in the stack.
    @return pushed : true = integer inserted successfully
    false = inserting failed. Overflow Error.
    @exception na : na
    *********************************************/
    bool pushed = false;
    if (top < STACKSIZE-1){
        stack[++top] = value;
        pushed = true;
    }
    return pushed;
}


