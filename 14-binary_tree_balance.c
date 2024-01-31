#include "binary_trees.h"
/**
 * binary_tree_balance - measures the balance factor of
 * a binary tree
 * @tree: a pointer to the root node of the tree
 * to measure the balance factor
 * Return: if tree NULL, 0
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	size_t node = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		node += ((tree->left || tree->right) ? 1 : 0);
		node += binary_tree_balance(tree->left);
		node += binary_tree_balance(tree->right);
		return (node);
	}
}
