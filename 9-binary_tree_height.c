#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of the binary tree
 * @tree: pointer to the root node of the tree
 *
 * Return: height of the tree
*/
size_t	binary_tree_height(const binary_tree_t *tree)
{
	size_t lh, rh;

	/* if the current node is a leaf node? */
	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);

	lh = binary_tree_height(tree->left);
	rh = binary_tree_height(tree->right);

	if (lh > rh)
		return (lh + 1);
	else
		return (rh + 1);
}
