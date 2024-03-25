#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts node as right childe
 * @parent: pointer to node to insert right child in
 * @value: value to store in the new node
 *
 * Return: NULL or pointer to new node
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = malloc(sizeof(binary_tree_t));

	if (new_node == NULL || parent == NULL)
		return (NULL);

	new_node->parent = parent;
	new_node->n = value;
	new_node->right = parent->right;
	new_node->left = NULL;

	if (new_node->right != NULL)
	{
		parent->right->parent = new_node;
	}

	parent->right = new_node;

	return (new_node);
}
