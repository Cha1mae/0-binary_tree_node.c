#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts the number of tree children
 * @tree: Pointer to the root of the tree.
 * Return: The number of nodes with children.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t  ln = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		ln += ((tree->left || tree->right) ? 1 : 0);
		ln += binary_tree_nodes(tree->left);
		ln += binary_tree_nodes(tree->right);
		return (ln);
	}
}
