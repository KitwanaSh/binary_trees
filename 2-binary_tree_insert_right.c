#include "binary_trees.h"

/**
 * binary_tree_insert_right - insert a node to the right
 * parent: the parent child or new parent
 * value: the value to inset in the one
 * Return: a pointer to the created node
*/

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
	{
		return (NULL);
	}

	new_node = binary_tree_node(parent, value);

	if (parent->right != NULL)
	{
		new_node->right = parent->right;
		parent->right->parent = new_node;
	}
	parent->right = new_node;

	return (new_node);
}
