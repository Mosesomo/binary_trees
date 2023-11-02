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
 *binary_tree_size - measure the size of the tree
 *@tree: pointer to the root node of the tree to measure
 *
 *Return: size of the tree
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0;

	if (tree == NULL)
		return (0);

	size = 1 + binary_tree_size(tree->left) + binary_tree_size(tree->right);

	return (size);
}

/**
 *_pow_recursion - returns the value of x raised to the power of y
 *@x: the value to exponentiate
 *@y: the power to raise x to
 *Return: x to the power of y, or -1 if y is negative
 */

int _pow_recursive(int i, int j)
{
	if (j < 0)
		return (-1);
	if (j == 0)
		return (1);
	else
		return (i * _pow_recursive(i, j - 1));

}

/**
 *binary_tree_is_perfect - checks if a binary tree is perfect
 *@tree: pointer to the root node of the tree to check
 *
 *Return: always success
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t height = 0, node = 0, i = 0;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	
	height = binary_tree_height(tree);
	node = binary_tree_size(tree);
	i = (size_t)_pow_recursive(2, height + 1);

	return (i - 1 == node);
}
