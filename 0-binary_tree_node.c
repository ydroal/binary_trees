#include "binary_trees.h"

/**
 * binary_tree_node - function
 * @parent: *binary_tree_t
 * @value: int
 *
 * Return: *binary_tree_node
*/
binary_tree_t	*binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t	*r;

	r = (binary_tree_t *) malloc(sizeof(binary_tree_t));
	if (r == 0)
		return (0);
	r->parent = parent;
	r->right = 0;
	r->left = 0;
	r->n = value;
	return (r);
}
