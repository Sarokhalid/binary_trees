#include "binary_trees.h"
/**
 * binary_tree_size - calculate size of binary  tree
 * @tree: is a pointer to the root node of the tree to measure the size
 * Return: if tree NULL 0
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0, r = 0, l = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		l = binary_tree_size(tree->left);
		r = binary_tree_size(tree->right);
		size = r + l + 1;
	}
	return (size);
}
