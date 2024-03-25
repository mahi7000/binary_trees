#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: pointer to the root node
 *
 * Return: 0 or the number of leaves
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	size_t left_leaf = binary_tree_leaves(tree->left);
	size_t right_leaf = binary_tree_leaves(tree->right);

	return (left_leaf + right_leaf);
}
