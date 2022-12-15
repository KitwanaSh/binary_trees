#include "binary_trees.h"

/**
 * binary_tree_rotate_right - rotates the binary tree to right.
 * @tree: The root node of the three
 * Return: Pointer node of the new node
*/

binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *driv;

	if (tree == NULL || tree->left == NULL)
	{
		return (NULL);
	}

	driv = tree->left;
	tree->left = driv->right;
	if (driv->right != NULL)
	{
		driv->right->parent = tree;
	}

	driv->right = tree;
	driv->parent = tree->parent;
	tree->parent = driv;
	return (driv);
}