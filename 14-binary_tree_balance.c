#include "binary_trees.h"

/**
 * tree_hi - Measures the tree hight
 * @tree: Pointer to the tree node root
 * Return: tree hight
 */
size_t tree_hi(const binary_tree_t *tree)
{
	size_t left_height = 0;
	size_t right_height = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		left_height = tree->left ? 1 + tree_hi(tree->left) : 1;
		right_height = tree->right ? 1 + tree_hi(tree->right) : 1;
		return ((left_height > right_height) ? left_height : right_height);
	}
}

/**
 * binary_tree_balance - Measures the tree balance
 * @tree: root pointer
 * Return: The balance factor.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height = 0, right_height = 0, balance_factor = 0;

	if (tree)
	{
		left_height = (int)tree_hi(tree->left);
		right_height = (int)tree_hi(tree->right);
		balance_factor = left_height - right_height;
	}
	return (balance_factor);
}
