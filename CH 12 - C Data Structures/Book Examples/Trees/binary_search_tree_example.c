#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct treeNode {
	struct treeNode *leftPtr;
	int data;
	struct treeNode *rightPtr;
} treeNode;

typedef struct treeNode TreeNode;
typedef TreeNode *TreeNodePtr;

void insertNode(TreeNodePtr *treePtr, int value);
void inOrder(TreeNodePtr treePtr);
void preOrder(TreeNodePtr treePtr);
void postOrder(TreeNodePtr treePtr);

int main() {
	TreeNodePtr rootPtr = NULL; // tree is initially empty

	srand(time(NULL));
	printf("The number being placed in the tree are: ");

	// insert random values between 0 and 14 in the tree
	for(unsigned int i = 1; i <= 10; i++) {
		int val = rand() % 15;
		printf("%3i", val);
		insertNode(&rootPtr, val);
	}

	// traverse the tree preOrder
	printf("\n\nThe preOrder traversal is: ");
	preOrder(rootPtr);

	//traverse the tree inOrder
	printf("\n\nThe inOrder traveral is: ");
	inOrder(rootPtr);

	printf("\n\nThe postOrder traversal is: ");
	postOrder(rootPtr);

	printf("\n");
	return EXIT_SUCCESS;
}

// insert the node into the tree
void insertNode(TreeNodePtr *treePtr, int value) {
	// if empty
	if(*treePtr == NULL) {
		*treePtr = malloc(sizeof(TreeNode));

		// if memory was allocated
		if(*treePtr != NULL) {
			(*treePtr)->data = value;
			(*treePtr)->leftPtr = NULL;
			(*treePtr)->rightPtr = NULL;
		} else {
			printf("%i not inserted. No memory available.\n", value);
		}
	} else {
		if(value < (*treePtr)->data) { // data to insert is less than data in current node
			insertNode(&((*treePtr)->leftPtr), value);
		} else if(value > (*treePtr)->data) { // data to insert is less than data in current node
			insertNode(&((*treePtr)->rightPtr), value);
		} else { // duplicate data found
			printf("%3c", 'd');
		}
	}
}

// begin inorder traversal
void inOrder(TreeNodePtr treePtr) {
	// if tree is not empty, then traverse
	if(treePtr != NULL) {
		inOrder(treePtr->leftPtr);
		printf("%3i", treePtr->data);
		inOrder(treePtr->rightPtr);
	}
}

// begin preorder traversal
void preOrder(TreeNodePtr treePtr) {
	// if not empty
	if(treePtr != NULL) {
		printf("%3i", treePtr->data);
		inOrder(treePtr->leftPtr);
		inOrder(treePtr->rightPtr);
	}
}

// begin postorder traversal
void postOrder(TreeNodePtr treePtr) {
	// if not empty
	if(treePtr != NULL) {
		inOrder(treePtr->leftPtr);
		inOrder(treePtr->rightPtr);
		printf("%3i", treePtr->data);
	}	
}