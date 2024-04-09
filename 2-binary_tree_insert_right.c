#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_right - insert a node as the right child of a node
 * @parent: pointer to the node to insert the right child in
 * @value: the value to store in
 *
 * Return: pointer to the new node,
 *         NULL if it fail or parent is NULL
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_right_node;

	if (parent == NULL)
		return (NULL);

	new_right_node = binary_tree_node(parent, value);
	if (new_right_node == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		new_right_node->right = parent->right;
		parent->right->parent = new_right_node;
	}

	parent->right = new_right_node;

	return (new_right_node);
}
