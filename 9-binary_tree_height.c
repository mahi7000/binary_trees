#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree
 *
 * Return: the height of the tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	size_t left_height = binary_tree_height(tree->left);
	size_t right_height = binary_tree_height(tree->right);
	size_t height;

	if (tree->left == NULL && tree->right == NULL)
		return (0);

	if (left_height > right_height)
		height = left_height;

	else
		height = right_height;

	return (height + 1);
}
