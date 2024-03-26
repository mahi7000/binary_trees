#include "binary_trees.h"

/**
 * binary_tree_depth - measures depth of a node
 * @tree: pointer to the node
 *
 * Return: depth of the node or 0
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t height;

	if (tree == NULL || tree->parent == NULL)
		return (0);

	height = binary_tree_depth(tree->parent);

	return (height + 1);
}
