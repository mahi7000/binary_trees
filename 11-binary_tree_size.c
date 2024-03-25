#include "binary_trees.h"

/**
 * binary_tree_size - measures size of a binary_tree
 * @tree: pointer to the root node of the tree
 *
 * Return: soze of the tree or 0
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	size_t left_size = binary_tree_size(tree->left);
	size_t right_size = binary_tree_size(tree->right);

	return (left_size + right_size + 1);
}
