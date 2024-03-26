#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree
 *
 * Return: the height of the tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height, height;

	if (tree == NULL)
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	if (left_height > right_height)
		height = left_height;

	else
		height = right_height;

	return (height + 1);
}

/**
 * binary_tree_balance - measures the balance factor
 * @tree: pointer to the root node of the tree
 *
 * Return: the balance factor of the tree or 0
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int left_side, right_side;

	if (tree == NULL)
		return (0);

	left_side = binary_tree_height(tree->left);
	right_side = binary_tree_height(tree->right);

	return (left_side - right_side);
}
