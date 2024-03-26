#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least 1 child
 * @tree: pointer to the root node of the tree
 *
 * Return: number of nodes with atleast 1 child
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->right == NULL || tree->left == NULL)
	{
		return (0);
	}

	size_t left_node = binary_tree_nodes(tree->left);
	size_t right_node = binary_tree_nodes(tree->right);

	return (left_node + right_node + 1);
}
