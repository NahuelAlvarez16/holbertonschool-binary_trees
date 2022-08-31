#include "binary_trees.h"
/**
 * binary_tree_delete - deletes an entire binary tree
 * @tree: a binary tree node
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (!tree)
		return;
	if (tree->right)
		binary_tree_delete(tree->right);
	if (tree->left)
		binary_tree_delete(tree->left);
	tree->right = NULL;
	tree->left = NULL;
	free(tree);
	tree = NULL;
}
