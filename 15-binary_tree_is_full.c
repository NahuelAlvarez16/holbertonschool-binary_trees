#include "binary_trees.h"
/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: is a pointer to the root node of the tree to check
 * Return: if 0, the node is incomplete, 1 the node is full
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	return ((tree && ((tree->left && tree->right) || (!tree->left && !tree->right))) ? 1 : 0);
}
