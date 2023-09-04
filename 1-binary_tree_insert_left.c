#include "binary_trees.h"


binary_tree_t
*binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (!parent)
	{
	return (NULL);
	}
	node = binary_tree_t(parent, value);
	if (!node)
	{
	return NULL;
	}
	if (parent->left != NULL)
	{
	parent->left->parent = node;
	node->left = parent->left;
	}
	parent->left = node;

return (node);
}
