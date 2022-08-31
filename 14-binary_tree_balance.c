#include "binary_trees.h"
/**
 * binary_tree_balance - that measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree to measure the balance factor
 * Return: that measures the balance factor of a binary tree
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int count = 0;

	if (!tree)
		return (0);
	if (tree->left)
		count++;
	if (tree->right)
		count++;
	return (count == 1 ? -1 : count);
}
