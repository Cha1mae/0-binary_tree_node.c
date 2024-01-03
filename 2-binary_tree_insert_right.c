#include "binary_trees.h"

/**
 * binary_tree_insert_right - Insert a node to the right of the parent.
 * If the parent has a right child, it move it down one level
 * and add the new node.
 * @parent: Parent of the specified node.
 * @value: Value of the new node.
 * Return: NULL if it fails, otherwise, return the new node.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
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

	if (parent->right != NULL)
	{
		cool_node->right = parent->right;
		parent->right->parent = cool_node;
	}

	parent->right = cool_node;
	return (cool_node);
}
