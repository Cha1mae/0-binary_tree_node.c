#include "binary_trees.h"

/**
 * binary_tree_node - Creates a binary tree node with given parent and value.
 * @parent: Pointer to the parent node.
 * @value: Value of the new node.
 * Return: Pointer to the newly created node.
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *cool_node = malloc(sizeof(binary_tree_t));

	if (cool_node == NULL)
	{
		return (NULL);
	}

	cool_node->n = value;
	cool_node->parent = parent;
	cool_node->left = NULL;
	cool_node->right = NULL;

	return (cool_node);
}
