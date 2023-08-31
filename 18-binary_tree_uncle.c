#include "binary_trees.h"

/**
 * binary_tree_uncle - Finds the uncle of a node.
 * @node: A pointer to the node to find the uncle.
 *
 * Return: A pointer to the uncle node.
 **/
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node)
		return (NULL);

	if (node->parent && node->parent->parent)
	{
		if (node->parent->parent->right == node->parent)
			return (node->parent->parent->left);
		if (node->parent->parent->left == node->parent)
			return (node->parent->parent->right);
	}
	return (NULL);
}
