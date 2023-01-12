#include "binary_trees.h"

/**
 * binary_tree_height_runtime - recursively walk through tree
 * @t: pointer to tree
 * @r: pointer to max height result
 * @l: current depth level
*/
void	binary_tree_height_runtime(const binary_tree_t *t, size_t *r, size_t l)
{
	if (t == 0)
		return;
	if (l >= (*r))
		*r = l;
	binary_tree_height_runtime(t->left, r, l + 1);
	binary_tree_height_runtime(t->right, r, l + 1);
}

/**
 * binary_tree_height - get height of a node tree
 * @tree: pointer to tree
 *
 * Return: height of tree
*/
size_t	binary_tree_height(const binary_tree_t *tree)
{
	size_t	r;

	r = 0;
	binary_tree_height_runtime(tree, &r, 0);
	return (r);
}
