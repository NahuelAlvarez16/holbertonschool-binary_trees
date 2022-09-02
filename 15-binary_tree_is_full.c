#include "binary_trees.h"
/**
 * binary_tree_is_full_r - checks if a binary tree is full in recursive
 * @tree: is a pointer to the root node of the tree to check
 * @is_first: is first node in the recursive function
 * Return: if 0, the node is incomplete, 1 the node is full
 */
int binary_tree_is_full_r(const binary_tree_t *tree, int is_first)
{
	int is_incomplete = 0;

	if (!tree)
		return (0);
	if (tree->left)
		is_incomplete += binary_tree_is_full(tree->left);
	if (tree->right)
		is_incomplete += binary_tree_is_full(tree->right);
	if (!tree->left ^ !tree->right)
		return (1 + is_incomplete);
	if (!tree->right && !tree->left)
		return (0);
	return (is_incomplete);
}
