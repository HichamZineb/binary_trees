#include "binary_trees.h"

/**
 * binary_tree_leaves - Counts the leaves in a binary tree.
 * @tree: A pointer to the root node of the tree to count the number of leaves.
 *
 * Return: The number of leaves.
 **/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaf = 0;
	size_t right = 0;
	size_t left = 0;

	if (tree == NULL)
		return (0);

	right = binary_tree_leaves(tree->right);
	left = binary_tree_leaves(tree->left);
	leaf = right + left;

	return ((!right && !left) ? leaf + 1 : leaf + 0);
}
