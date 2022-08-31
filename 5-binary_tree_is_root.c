#include "binary_trees.h"
/**
 * binary_tree_is_root - checks if a node is a root
 * @node: node of binary_tree_t
 * Return: return 1 if node is a root, otherwise 0
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	return (node->parent ? 0 : 1);
}
