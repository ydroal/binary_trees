#include "binary_trees.h"

/**
 * binary_tree_is_root - checks if given node is root
 * @node: pointer to node
 *
 * Return: whether node is root
*/
int	binary_tree_is_root(const binary_tree_t *node)
{
	if (node == 0)
		return (0);
	return (node->parent == 0);
}
