#include "binary_trees.h"

/**
 * binary_tree_balance - that measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree to measure the balance factor
 * @is_first: is first node of the recursion
 * Return: that measures the balance factor of a binary tree
 */
int binary_tree_balance(const binary_tree_t *tree, int is_first)
{
	int left_count = 0, right_count = 0;

	if (!tree)
		return (0);
	if (tree->left)
		left_count = binary_tree_balance(tree->left, 0);
	if (tree->right)
		right_count = binary_tree_balance(tree->right, 0);
	if (!tree->left && !tree->right)
		return (0);
	if (is_first)
		return (1 + left_count + right_count);
	return (1 + left_count + right_count);
}
