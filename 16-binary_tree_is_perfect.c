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
		lh = 1 + binary_tree_height(tree->left);
	else
		return (1);

	if (tree->right)
		rh = 1 + binary_tree_height(tree->right);
	else
		return (1);

	return ((lh > rh) ? lh : rh);
}

/**
 *binary_tree_is_perfect - checks if a binary tree is perfect
 *@tree: pointer to the root node of the tree to check
 *
 *Return: always success
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int height;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	if (tree->left && tree->right)
	{
		height = binary_tree_height(tree);
		return (binary_tree_is_perfect(tree->left) &&
				binary_tree_is_perfect(tree->right) && height > 0);
	}
	return (0);
}
