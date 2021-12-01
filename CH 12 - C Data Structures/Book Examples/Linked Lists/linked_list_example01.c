#include <stdio.h>
#include <stdlib.h>

// self referenctail structure
typedef struct {
	char data; // each list node contains a character
	struct listNode *nextPtr; // pointer to the next node
} listNode;

typedef listNode *ListNodePtr; // synonym for ListNode*

// prototypes
void insert(ListNodePtr *sPtr, char value);
char delete(ListNodePtr *sPtr, char value);
int isEmpty(ListNodePtr sPtr);
void printList(ListNodePtr currentPtr);
void instructions(void);

int main() {
	ListNodePtr startPtr = NULL; // Initially there are no nodes
	char item; // char entered by the user
	
	instructions();
	printf("> ");
	unsigned int choice;
	scanf("%u", &choice);

	while(choice != 3) {
		switch(choice) {
			case 1:
				printf("Enter a character: ");
				scanf("\n%c", &item);
				insert(&startPtr, item);
				printList(startPtr);
				break;
			case 2:
				// if the list is not empty
				if(!isEmpty(startPtr)) {
					printf("Enter character to be deleted: ");
					scanf("\n%c", &item);
					if(delete(&startPtr, item)) {
						printf("%c deleted.\n", item);
						printList(startPtr);
					} else {
						printf("%c not found.\n\n", item);
					}
				} else {
					printf("List is empty.\n");
				}
				break;
			default:
				printf("Invalid choice.\n");
				instructions();
				break;
		}

		// Repeat the choice
		printf("> "); 
		scanf("\n%u", &choice);
	}

	printf("End of run.\n");
	return EXIT_SUCCESS;
}

// Display the instructions
void instructions(void) {
	printf("Enter your choice:\n"
			"1 to insert an element into the list.\n"
			"2 to delete an element from the list.\n"
			"3 to end.\n"
	);
}

// insert a new value into the list in sorted order
void insert(ListNodePtr *sPtr, char value) {
	ListNodePtr newPtr = malloc(sizeof(listNode)); // create node

	if(newPtr != NULL) { // is the space available?
		newPtr->data = value; // place the value into the node
		newPtr->nextPtr = NULL; // node does not link to another node

		ListNodePtr previousPtr = NULL;
		ListNodePtr currentPtr = *sPtr;

		// loop to find the correct location in the list to place it
		while(currentPtr != NULL && value > currentPtr->data) {
			previousPtr = currentPtr; // walk to ...
			currentPtr = currentPtr->nextPtr; // ... next node
		}
		
		// insert new node at beginning of list
		if(previousPtr == NULL) {
			newPtr->nextPtr = *sPtr;
			*sPtr = newPtr;
		} else {
			// insert new node between previousPtr and currentPtr
			previousPtr->nextPtr = newPtr;
			newPtr->nextPtr = currentPtr;
		}
	} else {
		printf("%c not inserted. No memory available.\n", value);
	}
}

// Delete a list element
char delete(ListNodePtr *sPtr, char value) {
	// delete first node if a match is found
	if(value == (*sPtr)->data) {
		ListNodePtr tempPtr = *sPtr; // hold onto the node being removed
		*sPtr = (*sPtr)->nextPtr; // de-thread the node
		free(tempPtr); // free the de-threaded node
		return value;
	} else {
		ListNodePtr previousPtr = *sPtr;
		ListNodePtr currentPtr = (*sPtr)->nextPtr;

		// loop to find the correct location in the list
		while(currentPtr != NULL && currentPtr->data != value) {
			previousPtr = currentPtr; // walk to ...
			currentPtr = currentPtr->nextPtr; // ... next node
		}

		// delete node at currentPtr
		if(currentPtr != NULL) {
			ListNodePtr tempPtr = currentPtr;
			previousPtr->nextPtr = currentPtr->nextPtr;
			free(tempPtr);
			return value;
		}
	}

	return '\0';
}

// return 1 if the list is empty, 0 otherwise
int isEmpty(ListNodePtr sPtr) {
	return sPtr == NULL;
}

// print the list
void printList(ListNodePtr currentPtr) {
	// if the list is empty
	if(isEmpty(currentPtr)) {
		printf("List is empty.\n");
	} else {
		printf("The list is: ");
		// while not the end of the list
		while(currentPtr != NULL) {
			printf("%c --> ", currentPtr->data);
			currentPtr = currentPtr->nextPtr;
		}
		
		printf("NULL\n");
	}
}