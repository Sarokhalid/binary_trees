#include "binary_trees.h"
/**
 ** binary_tree_insert_right - insert a node as a right child of another node
 ** @parent: pointer to the node to insert child in
 ** @value: value to store in newnode
 ** Return: pointer to the created node or NULL on faliure or if parent is NULL
 **/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
		return (NULL);
	new_node = binary_tree_node(parent, value);
	if (new_node == NULL)
		return (NULL);
	if (parent->right != NULL)
	{
		new_node->right = parent->right;
		parent->right->parent = new_node;
	}
	parent->right = new_node;
	return (new_node);
}
