#include "binary_trees.h"

/**
 * binary_tree_postorder - walks tree using  post-order traversal
 * @tree: pointer to node
 * @func: function to call for each node
*/
void	binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == 0)
		return;
	if (func == 0)
		return;
	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
