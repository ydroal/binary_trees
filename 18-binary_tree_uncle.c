#include "binary_trees.h"

/**
 * binary_tree_uncle - finds the uncle of a node
 * @node: pointer to the node to find the uncle
 *
 * Return: pointer to the uncle node
*/
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *g_parent;

	if (node == NULL || node->parent == NULL)
		return (NULL);

	g_parent = node->parent->parent;
	if (g_parent == NULL)
		return (NULL);

	if (!(g_parent->left && g_parent->right))
		return (NULL);

	if (g_parent->left != node->parent)
		return (g_parent->left);
	else
		return (g_parent->right);
}
