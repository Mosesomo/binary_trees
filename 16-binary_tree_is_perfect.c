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
 *binary_tree_is_perfect - checks if a binary tree is a perfect tree
 *@tree: pointer to the root node of the tree to check
 *Return: always true
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t height = 0;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	height = binary_tree_height(tree);
	return (binary_tree_is_perfect(tree->left) &&
			binary_tree_is_perfect(tree->right) && height > 0);
}
