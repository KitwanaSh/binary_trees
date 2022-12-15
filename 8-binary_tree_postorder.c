#include "binary_trees.h"
/**
 * binary_tree_postorder - use post-order traversal to print elements
 * @tree: the actual tree
 * @func: the used function
 * Return: Nothing
*/

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		return;
	}
	else
	{
		binary_tree_postorder(tree->left, func);
        binary_tree_postorder(tree->right, func);
	}
	func(tree->n);
}