#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least 1 child
 * @tree: pointer to the root node of the tree
 *
 * Return: number of nodes with atleast 1 child
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t left_node, right_node;

	if (tree == NULL || (tree->right == NULL && tree->left == NULL))
		return (0);

	left_node = binary_tree_nodes(tree->left);
	right_node = binary_tree_nodes(tree->right);

	return (1 + left_node + right_node);
}
