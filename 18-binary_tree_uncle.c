#include "binary_trees.h"

/**
 * binary_tree_uncle - finds the uncle of a node
 * @node: pointer to the node to find the uncle
 *
 * Return: pointer to the uncle node
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *uncle, *parent;

	parent = node->parent;

	if (node == NULL || parent->parent == NULL || parent == NULL)
		return (NULL);

	if (parent->parent->left == parent)
		uncle = parent->parent->right;
	else
		uncle = parent->parent->left;

	return (uncle);
}
