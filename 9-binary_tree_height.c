#include "binary_trees.h"

/**
 *binary_tree_height - Measures the height of a tree
 *@tree: pointer to the roort node of the tree to measurie
 *Return: height of the tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t lh = 0, rh = 0;

	if (tree == NULL)
		return (0);

	if (tree->left)
	{
		lh = 1 + binary_tree_height(tree->left);
	}
	else
		lh = 0;
	if (tree->right)
	{
		rh = 1 + binary_tree_height(tree->right);
	}
	else
		rh = 0;

	if (lh > rh)
	{
		return (lh);
	}
	else
	{
		return (rh);
	}
}
