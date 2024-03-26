#include "binary_trees.h"

/**
 * binary_tree_size - measures size of a binary_tree
 * @tree: pointer to the root node of the tree
 *
 * Return: soze of the tree or 0
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left_size, right_size;

	if (tree == NULL)
		return (0);

	left_size = binary_tree_size(tree->left);
	right_size = binary_tree_size(tree->right);

	return (left_size + right_size + 1);
}

/**
 * binary_tree_is_full - checks if a binary_tree_is_full
 * @tree: pointer to the root node
 *
 * Return: 1 0r 0
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	int left_side, right_side;

	if (tree == NULL)
		return (0);

	left_side = binary_tree_size(tree->left);
	right_side = binary_tree_size(tree->right);

	if ((left_side - right_side) % 2 == 0)
		return (1);

	return (0);
}
