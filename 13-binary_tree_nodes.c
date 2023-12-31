#include "binary_trees.h"

/**
 * binary_tree_nodes - a function that counts nodes with at least 1 child in a
 *                     binary tree (i.e. number of internal nodes)
 * @tree: pointer to the root node of the tree
 *
 * Return: number of internal nodes
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree != NULL && (tree->left != NULL || tree->right != NULL))
		return (binary_tree_nodes(tree->left) +
				binary_tree_nodes(tree->right) + 1);
	return (0);
}
