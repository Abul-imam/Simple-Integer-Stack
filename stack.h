/**************************
Name: Abul Imam
Assignment: 4
Purpose of the file: This file contains all
the directives needed for stack.cpp to run.
***************************/

#ifndef STACK_STACK_H
#define STACK_STACK_H

#define STACKSIZE 10

class Stack{
	/*********************************************
    This class defines a stack for storing integers.
	The integers are stored in an array.
	Top is used to track if the stack is empty/full.

    @attrib top: index of the top element. -1 = empty
	@ATTRIB stack[STACKSIZE] : used to store the integers 
    *********************************************/
	public:
		/**********************
        Constructors/Destructor
        ***********************/
		Stack();

		/**********************
        Getters
        ***********************/
	    int pop();
	    int peek();
		bool isEmpty();

		/**********************
        Setters
        ***********************/
		bool push(int);
		
	private:
		int top;
		int stack[STACKSIZE];
};
		
#endif //STACK_STACK_H