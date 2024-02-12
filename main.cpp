/**************************
Name: Abul Imam
Assignment: 4
Purpose of the file: This file will create an 
object of stack (ADT) and test it extensively.
***************************/

#include "main.h"

int main (int argc, char** argv){

	/*********************************************
    This main function creates an object of stack class.
	Then it performs explicit tests using the Fundamental 
	Counting Theorem to test for all possible outcomes.
	(overflow, underflow, neither * push, peek, pop, isEmpty)
	(3 * 4 = 12 variations). Then it performs RANDOM TESTING 
	that adjusts based on the stack size and Multiplier.

    @param argc : argument count
    @param argv : argument vector/value

    @return 0 : successful execution

    @exception na : na
    *********************************************/

	cout << "Creating a STACK of size: " << STACKSIZE << endl;
	Stack stack;

	srand(time(nullptr));  //Random No Generator
	int random_int;

	cout << "\nBeginning EXPLICIT testing...\n";
	cout << "=============================\n";

	cout << "\n1. PUSHING to the stack..." << endl;

	for (int i=0; i<STACKSIZE*MULTIPLIER; i++){
		random_int = rand() % (2*MAX_INT+1) - MAX_INT; 
		if(stack.push(random_int)){
			cout << "pushed: " << random_int <<endl;
		}else{
			cout << "!!!   OVERFLOW ERROR   !!!  " << random_int << " not pushed" <<endl;	
		}
	}

	cout << "\n2. Checking if stack is EMPTY...\n";
	if (stack.isEmpty()){
		cout << "Stack is EMPTY\n";
	}else{
		cout << "Stack is NOT EMPTY\n";
	}
	
	cout << "\n3. PEEKING inside the stack...\n";
	try{
		cout << stack.peek() << " is the top of the stack.\n";
	}catch (int e){
		cout << "UNDERFLOW ERROR, stack is EMPTY. Peeking failed!!\n";
	}

	cout << "\n4. POPPING the stack...\n";
	try{
		cout << stack.pop() << " has been removed from the stack.\n";
	}catch (int e){
		cout << "UNDERFLOW ERROR, stack is EMPTY. Popping failed!!\n";
	}

	cout << "\n5. PEEKING inside the stack after popping...\n";
	try{
		cout << stack.peek() << " is the top of the stack.\n";
	}catch (int e){
		cout << "UNDERFLOW ERROR, stack is EMPTY. Peeking failed!!\n";
	}

	cout << "\n6. Checking if stack is EMPTY...\n";
	if (stack.isEmpty()){
		cout << "Stack is EMPTY\n";
	}else{
		cout << "Stack is NOT EMPTY\n";
	}

	cout << "\n7. POPPING the stack again...\n";
	try{
		cout << stack.pop() << " has been removed from the stack.\n";
	}catch (int e){
		cout << "UNDERFLOW ERROR, stack is EMPTY. Popping failed!!\n";
	}

	cout << "\n8. PUSHING to the stack again..." << endl;
	random_int = rand() % (2*MAX_INT+1) - MAX_INT; 
	if(stack.push(random_int)){
		cout << "pushed: " << random_int <<endl;
	}else{
		cout << "!!!   OVERFLOW ERROR   !!!  " << random_int << " not pushed" <<endl;	
	}

	cout << "\n9. POPPING the stack to EMPTY...\n";
	for (int i=0; i < STACKSIZE*MULTIPLIER; i++){
		try{
			cout << stack.pop() << " : removed\n";
		}catch (int e){
			cout << "!!!  UNDERFLOW ERROR  !!! stack is EMPTY. Popping failed\n";
		}
	}

	cout << "\n10. PEEKING inside the EMPTY stack...\n";
	try{
		cout << stack.peek() << " is the top of the stack.\n";
	}catch (int e){
		cout << "!!!  UNDERFLOW ERROR  !!! stack is EMPTY. Peekinging failed\n";
	}

	cout << "\n11. Checking if stack is EMPTY...\n";
	if (stack.isEmpty()){
		cout << "Stack is EMPTY\n";
	}else{
		cout << "Stack is NOT EMPTY\n";
	}

	cout << "\n12. PUSHING to the UNDERFLOW Stack..." << endl;
	random_int = rand() % (2*MAX_INT+1) - MAX_INT;
	if(stack.push(random_int)){
		cout << "pushed: " << random_int <<endl;
	}else{
		cout << "!!!   OVERFLOW ERROR   !!!  " << random_int << " not pushed" <<endl;	
	}

	cout << endl << "\nBeginning RANDOM testing..." << endl;
    cout << "===============================\n";

	
	for (int i=0; i<STACKSIZE*RANDOM_MULTIPLIER; i++){
		int choice = rand() % CHOICES + 1;
		random_int = rand() % (2*MAX_INT+1) - MAX_INT;

		switch(choice){
			case 1:
			case 2:
				cout << "\nPUSHING to the stack ..." << endl;
				if(stack.push(random_int)){
					cout << "pushed: " << random_int <<endl;
				}else{
					cout << "!!!   OVERFLOW ERROR   !!! Stack is FULL.. " << random_int << " not pushed" <<endl;
				}
				break;
			case 3:
			case 4:
				cout << "\nPOPPING the stack ...\n";
				try{
					cout << stack.pop() << " has been removed from the stack.\n";
				}catch (int e){
					cout << "!!!  UNDERFLOW ERROR  !!! stack is EMPTY. Popping failed!!\n";
				}
				break;
			case 5:
				cout << "\nPEEKING inside the stack...\n";
				try{
					cout << stack.peek() << " is the top of the stack.\n";
				}catch (int e){
					cout << "!!!  UNDERFLOW ERROR  !!! stack is EMPTY. Peeking failed\n";
				}
				break;
			case 6:
				cout << "\nChecking if stack is EMPTY...\n";
				if (stack.isEmpty()){
					cout << "Stack is EMPTY\n";
				}else{
					cout << "Stack is NOT EMPTY\n";
				}
				break;
		}
	}
	return 0;
}
