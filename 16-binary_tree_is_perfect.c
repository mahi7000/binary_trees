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
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree
 *
 * Return: 1 if it is perfect otherwise 0
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	binary_tree_t *left_side, *right_side;

	if (tree == NULL)
		return (0);

	left_side = tree->left;
	right_side = tree->right;

	if (left_side == NULL && right_side == NULL)
		return (1);

	if (binary_tree_height(left_side) == binary_tree_height(right_side))
	{
		if (binary_tree_is_perfect(left_side) && binary_tree_is_perfect(right_side))
			return (1);
	}
	return (0);
}
