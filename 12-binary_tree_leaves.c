#include "binary_trees.h"
/**
 * binary_tree_leaves - that counts the leaves in a binary tree
 * @tree:  a pointer to the root node of the tree to count the number of leaves
 * Return: return count the leaves of a binary tree
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	int left_count = 0, right_count = 0;

	if (!tree)
		return (0);
	if (tree->left)
		left_count = binary_tree_leaves(tree->left);
	if (tree->right)
		right_count = binary_tree_leaves(tree->right);
	if (tree->left || tree->right)
		return (left_count + right_count);
	return (1);
}
