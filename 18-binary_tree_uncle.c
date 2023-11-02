#include "binary_trees.h"

/**
 *binary_tree_uncle - finds the uncle auncle of the node
 *@node: pointer to the root node
 *
 *Return: auncle
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *parent;

	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
		return (NULL);
	parent = node->parent;
	if (parent->parent->left == node->parent)
		return (parent->parent->right);
	return (parent->parent->left);
}
