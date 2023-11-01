#include "binary_trees.h"

/**
 *binary_tree_insert_left - insert a node as the left child
 *@parent: pointer to the root node
 *@value: value to be inserted
 *Return: the pointer to the created node
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	new = binary_tree_node(parent, value);
	if (new == NULL)
		return (NULL);

	parent->left = new;

	return (new);
}
