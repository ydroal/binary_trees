#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: pointer to the root node of the tree to check
 *
 * Return: if the tree is full,1
*/
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	/* is leaf node?*/
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	/* if node has two chailds?*/
	if (tree->left != NULL && tree->right != NULL)
		return (binary_tree_is_full(tree->left)
			&& binary_tree_is_full(tree->right));

	return (0);
}
