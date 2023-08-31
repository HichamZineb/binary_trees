#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the height.
 *
 * Return: The height.
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t right = 0;
	size_t left = 0;

	if (tree == NULL)
		return (0);

	right = binary_tree_height(tree->right);
	left = binary_tree_height(tree->left);

	return ((left > right) ? left + 1 : right + 1);
}
