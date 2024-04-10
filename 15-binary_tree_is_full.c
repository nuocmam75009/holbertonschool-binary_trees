#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: pointer to the root node of the tree to check
 *
 * Return: 1 if the tree is full, otherwise 0. If tree is NULL, return 0.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	// A leaf node is full
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	// If both left and right are not NULL, and left & right subtrees are full
	if ((tree->left != NULL) && (tree->right != NULL))
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));

	// We reach here when none of the above conditions are met, which means
	// the tree is not full
	return (0);
}
