#include "binary_trees.h"
/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 * @tree: is a pointer to the node to measure the depth
 * Return: return the depth of a node in a binary tree
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	return (tree ? (!tree->left + !tree->right) : 0);
}
