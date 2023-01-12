#include "binary_trees.h"

/**
 * binary_tree_inorder - walks tree using in-order traversal
 * @tree: pointer to node
 * @func: function to call for each node
*/
void	binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == 0)
		return;
	if (func == 0)
		return;
	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
