#include <stdio.h>
#include <stdlib.h>

#include "tree_practice.h"

/********************************************************
* memory_error -- Writes error and dies. *
********************************************************/
void memory_error(void)
{
	fprintf(stderr, "Error:Out of memory\n");
	exit(8);
}

/********************************************************
* save_string -- Saves a string on the heap. *
* *
* Parameters *
* string -- String to save. *
* *
* Returns *
* pointer to malloc-ed section of memory with *
* the string copied into it. *
********************************************************/
char *save_string(char *string)
{
	char *new_string; /* where we are going to put string */

	new_string = malloc((unsigned) (strlen(string) + 1));
	
	if (new_string == NULL)
		memory_error();
	
	strcpy(new_string, string);
	
	return (new_string);
}

/********************************************************
* enter -- Enters a word into the tree. *
* *
* Parameters *
* node -- Current node we are looking at. *
* word -- Word to enter. *
********************************************************/
void enter(TREE_NODE **node, char *word)
{
	int result; 			   /* result of strcmp */
	char *save_string(char*); 	/* save a string on the heap */
	// void memory_error(); 	/* tell user no more room */
	
	/*
	* If the current node is null, then we have reached the bottom
	* of the tree and must create a new node
	*/
	if ((*node) == NULL) {
		/* Allocate memory for a new node */
		(*node) = malloc(sizeof(TREE_NODE));

		if ((*node) == NULL)
			memory_error();

		/* Initialize the new node */
		(*node)->left = NULL;
		(*node)->right = NULL;
		(*node)->word = save_string(word);

		return;
	}

	/* Check to see where our word goes */
	result = strcmp((*node)->word, word);

	/* The current node
	* already contains the word,
	* no entry necessary */
	if (result == 0)
		return;
	
	/* The word must be entered in the left or right subtree */
	if (result < 0)
		enter(&(*node)->right, word);
	else
		enter(&(*node)->left, word);
}

void print_tree(TREE_NODE *top)
{
	if (top == NULL)
		return; /* short tree */
	
	print_tree(top->left);
	printf("%s\n", top->word);
	print_tree(top->right);
}

//void traversal_tree(TREE_NODE *top)
//{
//}
//
void tree_init(TREE_NODE **top)
{
	(*top)->tree_enter = enter;
}
