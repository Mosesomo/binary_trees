#include "binary_trees.h"

/**
 *binary_tree_depth - measures the depth of the tree
 *@tree: pointer to the root node to measure
 *Return: depth of the tree
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree == NULL)
		return (0);
	if (tree && tree->parent)
	{
		depth = 1 + binary_tree_depth(tree->parent);
	}
	return (depth);
}
