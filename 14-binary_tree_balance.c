#include "binary_trees.h"

/**
 *binary_tree_height - checks the height of the tree
 *@tree: pointer to the root node of the tree
 *Return: the height of the tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t rh = 0, lh = 0;

	if (tree == NULL)
	{
		return  (0);
	}
	else
	{
		if (tree)
		{
			lh = tree->left ? 1 + binary_tree_height(tree->left) : 1;
			rh = tree->right ? 1 + binary_tree_height(tree->right) : 1;
		}
		return ((lh > rh) ? lh : rh);
	}
}

/**
 *binary_tree_balance - Measures the tree balnce
 *@tree: pointer to the root node of the tree to measure
 *
 *Return: balance factore on sucess, otherwise return 0
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int lh = 0, rh = 0, bf = 0;

	if (tree)
	{
		lh = ((int)binary_tree_height(tree->left));
		rh = ((int)binary_tree_height(tree->right));
		bf = lh - rh;
	}
	return (bf);
}

