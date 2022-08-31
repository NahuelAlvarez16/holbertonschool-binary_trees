#include "binary_trees.h"

/**
 * binary_tree_balance_r - that measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree to measure the balance factor
 * @is_first: is first node of the recursion
 * Return: that measures the balance factor of a binary tree
 */
int binary_tree_balance_r(const binary_tree_t *tree, int is_first)
{
	int left_count = 0, right_count = 0;

	if (!tree)
		return (0);
	if (tree->left)
		left_count = binary_tree_balance_r(tree->left, 0) + 1;
	if (tree->right)
		right_count = binary_tree_balance_r(tree->right, 0) + 1;
	if (!tree->left && !tree->right)
		return (0);
	if (is_first)
		return (left_count - right_count);
	return (left_count > right_count ? left_count : right_count);
}
/**
 * binary_tree_balance - that measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree to measure the balance factor
 * Return: that measures the balance factor of a binary tree
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	return (binary_tree_balance_r(tree, 1));
}
