#include "binary_trees.h"

/**
 * binary_tree_is_full - Checks if a binary tree is full ofc
 * A tree is considered full if each node has two or no kids
 * @tree: Pointer to the root node of the tree.
 * Return: 1 if the tree is full, 0 otherwise.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int prolly_left = 0, prolly_right = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		if (tree->left && tree->right)
		{
			prolly_left = binary_tree_is_full(tree->left);
			prolly_right = binary_tree_is_full(tree->right);
			if (prolly_left == 0 || prolly_right == 0)
			{
				return (0);
			}
			return (1);
		}
		else if (!tree->left && !tree->right)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
}
