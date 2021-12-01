#include <stdio.h>
#include <stdlib.h>

// self-referencial structure
typedef struct stackNode {
	int data;
	struct stackNode *nextPtr;
} stackNode;

typedef stackNode *StackNodePtr;

// prototypes
void push(StackNodePtr *topPtr, int info);
int pop(StackNodePtr *topPtr);
int isEmpty(StackNodePtr topPtr);
void printStack(StackNodePtr currentPtr);
void instructions(void);

int main() {
	StackNodePtr stackPtr = NULL; // points to the top of the stack
	int value; // input from the user

	instructions(); // display the menu
	printf("> ");
	unsigned int choice;
	scanf("%u", &choice);

	// main loop
	while(choice != 3) {
		switch(choice) {
			// push value onto the stack
			case 1:
				printf("Enter an integer: ");
				scanf("%d", &value);
				push(&stackPtr, value);
				break;
			// pop value off stack
			case 2:
				// if stack is not empty
				if(!isEmpty(stackPtr)) {
					printf("The popped value is %d.\n", pop(&stackPtr));
				}

				printStack(stackPtr);
				break;
			default:
				printf("Invalid choice.\n");
				instructions();
				break;
		}

		// get user input again
		printf("> ");
		scanf("%u", &choice);
	}

	printf("End of run.\n");
	return EXIT_SUCCESS;
}

// display program instructions
void instructions(void) {
	printf("Enter choice:\n"
		"1 to push value on the stack\n"
		"2 to pop value off the stack\n"
		"3 to end program\n"
	);
}

// insert a node at the stack top
void push(StackNodePtr *topPtr, int info) {
	StackNodePtr newPtr = malloc(sizeof(stackNode));

	// insert the note at stack top
	if(newPtr != NULL) {
		newPtr->data = info;
		newPtr->nextPtr = *topPtr;
		*topPtr = newPtr;
	}
}

// remove a note from the stack top
int pop(StackNodePtr *topPtr) {
	StackNodePtr tempPtr = *topPtr;
	int popValue = (*topPtr)->data;
	*topPtr = (*topPtr)->nextPtr;
	free(tempPtr);
	return popValue;
}

// print the stack
void printStack(StackNodePtr currentPtr) {
	// if stack is empty
	if(currentPtr == NULL) {
		printf("The stack is empty.\n");
	} else {
		printf("The stack is: ");
		// while not the end of the stack
		while(currentPtr != NULL) {
			printf("%d --> ", currentPtr->data);
			currentPtr = currentPtr->nextPtr;
		}
		printf("NULL\n");
	}
}

// return 1 if the stack is empty, 0 otherwise
int isEmpty(StackNodePtr topPtr) {
	return topPtr == NULL;
}