#include "binary_trees.h"

/**
 * tree_is_perfect - Checks if a binary tree is perfect.
 * A tree is considered perfect if it has the same quantity of levels
 * in the left and right, and each node has either two children or 0
 * @tree: Pointer to the root tree node
 * Return: The height of the tree if it is perfect, 0 otherwise.
 */
int tree_is_perfect(const binary_tree_t *tree)
{
	int perf_l = 0, perf_r = 0;

	if (tree->left && tree->right)
	{
		perf_l = 1 + tree_is_perfect(tree->left);
		perf_r = 1 + tree_is_perfect(tree->right);
		if (perf_r == perf_l && perf_r != 0 && perf_l != 0)
			return (perf_r);
		return (0);
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

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 * check top comment for more details
 * @tree: Pointer to the tree node
 * Return: 1 if the tree is perfect, 0 otherwise.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int result = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		result = tree_is_perfect(tree);
		if (result != 0)
		{
			return (1);
		}
		return (0);
	}
}
