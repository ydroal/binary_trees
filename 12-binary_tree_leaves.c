#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: pointer to the root node of the tree
 *
 * Return: number of leaves
*/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t res;

	res = 0;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	res += binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right);

	return (res);
}
