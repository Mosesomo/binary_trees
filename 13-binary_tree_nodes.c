#include "binary_trees.h"

/**
 *binary_tree_nodes - counts the number of nodes
 *@tree: pointer to the root node
 *Return: number of nodes
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t node = 0;

	if (tree == NULL)
		return (0);
	if (tree->left || tree->right)
	{
		node = 1 + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right);
		return (node);
	}
	else
	{
		node = binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right);
		return (node);
	}
}
