#include "binary_trees.h"
/**
 * binary_tree_leaves - that counts the leaves in a binary tree
 * @tree: count the number of leaves
 * Return: return count the number of leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	int count = 0;
	count = tree ? (!!tree->left + !!tree->right) : 0;
	return ((count) ? count : tree ? 1 : 0);
}
