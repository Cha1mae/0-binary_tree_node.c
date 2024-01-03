#include "binary_trees.h"

/**
 * binary_tree_insert_left - Insert a node to the left of the parent.
 * If the parent has a left child, it moves down one level and
 * add the new node.
 * @parent: Parent of the specified node.
 * @value: Value of the new node.
 * Return: NULL if it fails, otherwise, return the new node.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *cool_node;

	if (parent == NULL)
	{
		return (NULL);
	}

	cool_node = binary_tree_node(parent, value);
	if (cool_node == NULL)
	{
		return (NULL);
	}

	if (parent->left != NULL)
	{
		cool_node->left = parent->left;
		parent->left->parent = cool_node;
	}

	parent->left = cool_node;
	return (cool_node);
}
