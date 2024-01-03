#include "binary_trees.h"
/**
 * binary_tree_delete - Recursively frees a tree when both left
 * and right are NULL.
 * @tree: Tree to free.
 * Return: Nothing.
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return;
	}
	else
	{
		if (tree != NULL)
		{
			binary_tree_delete(tree->left);
			binary_tree_delete(tree->right);
		}
		free(tree);
	}

}
