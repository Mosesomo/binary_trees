#include "binary_trees.h"

/**
 *binary_tree_balance - Measures the tree balnce
 *@tree: pointer to the root node of the tree to measure
 *
 *Return: balance factore on sucess, otherwise return 0
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int bf, lh = 0, rh = 0;

	if (tree == NULL)
		return (0);
	if (tree->left)
		lh = binary_tree_height(tree->left);
	if (tree->right)
		rh = binary_tree_height(tree->right);
	bf = lh - rh;

	return (bf);
}

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
		return (1);
	if (tree->right)
	{
		rh = 1 + binary_tree_height(tree->right);
	}
	else
		return (1);

	return (lh > rh ? lh : rh);
}
