#include "binary_trees.h"

/**
 * binary_tree_rotate_left - rotates the binary tree to the left.
 * @tree: The root node of the three
 * Return: Pointer node of the new node
*/

binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *driv;

	if (tree == NULL || tree->right == NULL)
	{
		return (NULL);
	}
	driv = tree->right;
	tree->right = driv->left;
	if (driv->left != NULL)
	{
		driv->left->parent = tree;
	}
	driv->left = tree;
	driv->parent = tree->parent;
	tree->parent = driv;
	return (driv);
}