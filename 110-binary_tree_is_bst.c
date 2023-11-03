#include "binary_trees.h"
#include "limits.h"

/**
 *is_Bst_Util - check if a binary tree is a bst
 *@tree: pointer to the root node of the tree
 *@min_val: represents the least value in the tree
 *@max_val: represents the largest value in the tree
 *
 *Return: always success
 */

int is_Bst_Util(const binary_tree_t *tree, int min_val, int max_val)
{
	if (tree)
	{
		if (tree->n < min_val || tree->n > max_val)
			return (0);
		return (is_Bst_Util(tree->left, min_val, tree->n - 1) &&
				is_Bst_Util(tree->right, tree->n + 1, max_val));
	}
	return (1);
}

/**
 *binary_tree_is_bst - checks if a tree is abinary search tree
 *@tree: pointer to the root node of the tree
 *Return: 1 if the tree is bst otherwise 0
 */

int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (is_Bst_Util(tree, INT_MIN, INT_MAX));
}
