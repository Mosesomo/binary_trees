#include "binary_trees.h"

/**
 * binary_tree_node - function that creates a binary node
 * @parent: a pointer to the parent node
 * @value: value of the new node
 * Return: a pointer to the created node
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
    binary_tree_t *new;

    new = malloc(sizeof(binary_tree_t));
    if (new == NULL)
    {
        return (NULL);
    }
    new->n = value;
    new->parent = parent;
    new->left = NULL;
    new->right = NULL;

    return (new);
}