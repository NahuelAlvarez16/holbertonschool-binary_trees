#include "binary_trees.h"
/**
 * binary_tree_is_full_r - checks if a binary tree is full in recursive
 * @tree: is a pointer to the root node of the tree to check
 * @is_first: is first node in the recursive function
 * @current_height: height number where it is
 * @max_height: height of binary tree
 * Return: if 0, the node is incomplete, 1 the node is full
 */
int binary_tree_is_full_r(const binary_tree_t *tree, int is_first,
	int current_height, int max_height)
{
	int is_imperfect = 0;

	if (!tree)
		return (0);
	if (tree->left)
		is_imperfect += binary_tree_is_full_r(tree->left, 0,
				current_height + 1, max_height);
	if (tree->right)
		is_imperfect += binary_tree_is_full_r(tree->right, 0,
			       current_height + 1, max_height);
	if (!tree->left ^ !tree->right)
		return (1 + is_imperfect);
	if (!is_first && !tree->right && !tree->left)
		return (current_height == max_height ? 0 : 1);
	return (is_first ? !is_imperfect : is_imperfect);
}
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
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: is a pointer to the root node of the tree to check
 * Return: if 0, the node is imperfect, 1 the node is perfect
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	return (binary_tree_is_full_r(tree, 1, 0, binary_tree_height_r(tree, 1)));
}
