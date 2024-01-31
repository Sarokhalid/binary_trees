#include "binary_trees.h"
/**
 * binary_tree_height_b - meature hirht of a binary tree
 * @tree: tree to go through
 * Return: the height
 */

size_t binary_tree_height_b(const binary_tree_t *tree)
{
	size_t l = 0;
	size_t r = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		if (tree)
		{
			l = tree->left ? 1 + binary_tree_height_b(tree->left) : 1;
			r tree->right ? 1 + binary_tree_height_b(tree->right) : 1;
		}
		return ((l > r) ? l : r);
	}
}

/**
 * binary_tree_balance - measures the balance factor of
 * a binary tree
 * @tree: a pointer to the root node of the tree
 * to measure the balance factor
 * Return: if tree NULL, 0
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int r = 0, l = 0, t = 0;

	if (tree)
	{
		l = ((int) binary_tree_height_b(tree->left));
		r = ((int) binary_tree_height_b(tree->right));
		t = l - r;
	}
	return (t);
}
