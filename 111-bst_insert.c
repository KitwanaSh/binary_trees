#include "binary_trees.h"

/**
 * bst_insert - insert nodes in order to create a BST tree
 * @tree: tree to create with type BST
 * @value: insert value of node
 * Return: BST tree
*/

bst_t *bst_insert(bst_t **tree, int value)
{
	bst_t *new, *temp;
	binary_tree_t *thm;

	if (tree == NULL)
		return (NULL);

	if (*tree == NULL)
	{
		thm = binary_tree_node((binary_tree_t *)(*tree), value);
		new = (bst_t *)thm;
		*tree = new;
	}
	else
	{
		temp = *tree;
		if (value < temp->n)
		{
			if (temp->left)
				new = bst_insert(&temp->left, value);
			else
			{
				thm = binary_tree_node((binary_tree_t *)temp, value);
				new = temp->left = (bst_t *)thm;
			}
		}
		else if (value > temp->n)
		{
			if (temp->right)
				new = bst_insert(&temp->right, value);
			else
			{
				thm = binary_tree_node((binary_tree_t *)temp, value);
				new = temp->right = thm;
			}
		}
		else
			return (NULL);
	}
	return (new);
}
