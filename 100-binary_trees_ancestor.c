#include "binary_trees.h"

/**
 *binary_tree_ancestor - finds the lowest ancestor of the two nodes
 *@first: pointer to the first node
 *@second: pointer to the second node
 *Return: pointer to the lowest common ancestor node
 */

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	binary_tree_t *left_anc, *right_anc;

	if (first == NULL || second == NULL)
		return (NULL);
	if (first == second)
		return ((binary_tree_t *)first);

	left_anc = first->parent;
	right_anc = second->parent;

	if (first == right_anc || !left_anc || (!left_anc->parent && right_anc))
		return (binary_trees_ancestor(first, right_anc));
	else if (second == left_anc || !right_anc || (!right_anc->parent && left_anc))
		return (binary_trees_ancestor(second, left_anc));
	return (binary_trees_ancestor(left_anc, right_anc));
}
