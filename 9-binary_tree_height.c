#include "binary_trees.h"
/**
 * binary_tree_height_r -  measures the height of a binary tree in recursive
 * @tree: is a pointer to the root node of the tree to measure the height
 * @is_first: 0 - Isn't first node | 1 - Is first node
 * Return: return height of a binary tree
 */
size_t binary_tree_height_r(const binary_tree_t *tree, int is_first)
{
	int left_count = 0, right_count = 0;

	if (!tree)
		return (0);
	if (tree->left)
		left_count = binary_tree_height_r(tree->left, 0);
	if (tree->right)
		right_count = binary_tree_height_r(tree->right, 0);
	return (!is_first + (left_count > right_count ? left_count : right_count));
}
/**
 * binary_tree_height -  measures the height of a binary tree in recursive
 * @tree: is a pointer to the root node of the tree to measure the height
 * Return: return height of a binary tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	return (binary_tree_height_r(tree, 1));
}
