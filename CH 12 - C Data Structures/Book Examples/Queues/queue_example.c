#include <stdio.h>
#include <stdlib.h>

typedef struct {
	char data;
	struct queueNode *nextPtr;
} QueueNode;

typedef QueueNode *QueueNodePtr;

void printQueue(QueueNodePtr currentPtr);
int isEmpty(QueueNodePtr headPtr);
char dequeue(QueueNodePtr *headPtr, QueueNodePtr *tailPtr);
void enqueue(QueueNodePtr *headPtr, QueueNodePtr *tailPtr, char value);
void instructions();

int main() {
	QueueNodePtr headPtr = NULL;
	QueueNodePtr tailPtr = NULL;
	char item;

	instructions();
	printf("> ");
	unsigned int choice;
	scanf("%u", &choice);

	while(choice != 3) {
		switch(choice) {
			// enqueue value
			case 1:
				printf("Enter a character: ");
				scanf("\n%c", &item);
				enqueue(&headPtr, &tailPtr, item);
				printQueue(headPtr);
			break;

			// dequeue value
			case 2:
				// if queue is not empty
				if(!isEmpty(headPtr)) {
					item = dequeue(&headPtr, &tailPtr);
					printf("%c has been dequeued.\n", item);
				} 
				printQueue(headPtr);
			break;
			default:
				printf("Invalid choice.\n");
				instructions();
			break;
		}
		printf("> ");
		scanf("%u", &choice);
	}

	printf("End of run.\n");
	return EXIT_SUCCESS;
}

// display program instructions
void instructions() {
	printf("Enter your choice: \n"
		"\t1 to add an item to the queue.\n"
		"\t2 to remove an item from the queue.\n"
		"\t3 to end.\n"
	);
}

// insert a node at queue tail
void enqueue(QueueNodePtr *headPtr, QueueNodePtr *tailPtr, char value) {
	QueueNodePtr newPtr = malloc(sizeof(QueueNode));
	
	if(newPtr != NULL) { // is there memory available
		newPtr->data = value;
		newPtr->nextPtr = NULL;

		// if empty, insert node at head
		if(isEmpty(*headPtr)) {
			*headPtr = newPtr;
		} else {
			(*tailPtr)->nextPtr = newPtr;
		}
		
		*tailPtr = newPtr;
	} else {
		printf("%c not inserted. No memory available.\n", value);
	}
}

// remove node from queue head
char dequeue(QueueNodePtr *headPtr, QueueNodePtr *tailPtr) {
	char value = (*headPtr)->data;
	QueueNodePtr tempPtr = *headPtr;
	*headPtr = (*headPtr)->nextPtr;

	// if queue is empty
	if(*headPtr == NULL) {
		*tailPtr = NULL;
	}

	free(tempPtr);
	return value;
}

// return 1 if the queue is empty, 0 otherwise
int isEmpty(QueueNodePtr headPtr) {
	return headPtr == NULL;
}

// print the queue
void printQueue(QueueNodePtr currentPtr) {
	// if queue is empty
	if(currentPtr == NULL) {
		printf("Queue is empty.\n");
	} else {
		printf("The queue is: ");

		// while not end of queue
		while(currentPtr != NULL) {
			printf("%c --> ", currentPtr->data);
			currentPtr = currentPtr->nextPtr;
		}
		printf("NULL\n");
	}
}