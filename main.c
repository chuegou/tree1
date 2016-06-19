#include <stdio.h>
#include <stdlib.h>

#include "tree_practice.h"

/* the top of the tree */
static TREE_NODE *root = NULL;

int main(int argc, char *argv[])
{
    enter(&root, "1");

    tree_init(&root);
    root->tree_enter(&root, "2");
    
    enter(&root, "3");
    enter(&root, "4");
    enter(&root, "5");
    enter(&root, "6");
    enter(&root, "7");
    enter(&root, "8");
    enter(&root, "9");
    enter(&root, "0");
    
    print_tree(root);
    
    system("PAUSE");	
    return 0;
}
