#include "binary_trees.h"

binary_tree_t
*binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	node = malloc(sizeof(binary_tree_t));

	if (!node)
	{
		return (NULL);
	}

	node->right = NULL;
	node->left = NULL;
	node->parent = parent;
	node->n = value;

	return (node);
}
