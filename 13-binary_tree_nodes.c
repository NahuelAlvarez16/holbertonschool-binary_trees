#include "binary_trees.h"
/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 * @tree:  a pointer to the root node of the tree to count the number of nodes
 * Return: return counts the nodes with at least 1 child in a binary tree
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	int left_count = 0, right_count = 0;

	if (!tree)
		return (0);
	if (tree->left)
		left_count = binary_tree_nodes(tree->left);
	if (tree->right)
		right_count = binary_tree_nodes(tree->right);
	if (!tree->left && !tree->right)
		return (0);
	return (1 + left_count + right_count);
}
