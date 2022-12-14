#include "binary_trees.h"
#include <stdio.h>
/**
 * binary_tree_uncle - finds the uncle of a node
 * @node: is a pointer to the node to find the uncle
 * Return: return a pointer to the uncle node
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node)
		return (NULL);
	if (!node->parent)
		return (NULL);
	if (!node->parent->parent)
		return (NULL);
	if (!node->parent->parent->right || !node->parent->parent->left)
		return (NULL);
	if (node->parent->parent->right == node->parent)
		return (node->parent->parent->left);
	if (node->parent->parent->left == node->parent)
		return (node->parent->parent->right);
	return (NULL);
}
