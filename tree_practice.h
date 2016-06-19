#ifndef __TREE_PRACTICE_H__
#define __TREE_PRACTICE_H__

/* 將 "結構tree_node"型別 命名為 "TREE_NODE" 型別 */
typedef struct tree_node TREE_NODE; 

/* 定義 "結構tree_node" 的內容 
 * 自我引入部分使用新名稱 
 * 將 "結構tree_node" 型別 命名為 "結構tree_node" 型別 */
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
