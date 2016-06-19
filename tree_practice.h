#ifndef __TREE_PRACTICE_H__
#define __TREE_PRACTICE_H__

/* �N "���ctree_node"���O �R�W�� "TREE_NODE" ���O */
typedef struct tree_node TREE_NODE; 

/* �w�q "���ctree_node" �����e 
 * �ۧڤޤJ�����ϥηs�W�� 
 * �N "���ctree_node" ���O �R�W�� "���ctree_node" ���O */
typedef struct tree_node{
	/* members */
	char *word; 		/* word for this tree */
	TREE_NODE *root;	/* tree to the root */
	TREE_NODE *left; 	/* tree to the left */
	TREE_NODE *right; /* tree to the right */

	/* methods */
	void (*tree_enter)(TREE_NODE**, char*);

}tree_node;

void tree_init(TREE_NODE **);

void enter(TREE_NODE **, char *);
void print_tree(TREE_NODE *);

#endif /* __TREE_PRACTICE_H__ */
