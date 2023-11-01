#include "binary_trees.h"

/**
 *binary_tree_insert_right - insert a node as the right child
 *@parent: pointer to the root of the tree
 *@value: value to be inserted in the node
 *Return: newly created node if success
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);
	new = binary_tree_node(parent, value);
	if (new == NULL)
		return (NULL);
	if (parent->right != NULL)
	{
		new->right = parent->right;
		parent->right->parent = new;
	}
	parent->right = new;

	return (new);
}
