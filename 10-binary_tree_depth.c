#include "binary_trees.h"
/**
 * binary_tree_depth_r - the depth of a node in a binary tree
 * @tree: is a pointer to the node to measure the depth
 * @is_first: 0 - Isn't first node | 1 - Is first node
 * Return: return the depth of a node in a binary tree
 */
size_t binary_tree_depth_r(const binary_tree_t *tree, int is_first)
{
	if (!tree)
		return (0);
	return (!is_first + binary_tree_depth_r(tree, 0));
}
/**
 * binary_tree_depth - measures the depth of a node in a binary tree 
 * @tree: is a pointer to the node to measure the depth
 * Return: return the depth of a node in a binary tree
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	return (binary_tree_depth_r(tree, 1));
}
