#include "binary_trees.h"

/**
 * bst_search - search for a special value in the tree
 * @tree: the actual tree
 * @value: value to search
 * Return: a node
*/

bst_t *bst_search(const bst_t *tree, int value)
{
	bst_t *elements;

	if (tree == NULL)
		return (NULL);

	if (value < tree->n)
	{
		elements = bst_search(tree->left, value);
	}
	else if (value > tree->n)
	{
		elements = bst_search(tree->right, value);
	}
	else if (value == tree->n)
		return ((bst_t *)tree);
	else
		return (NULL);
	return (elements);
}