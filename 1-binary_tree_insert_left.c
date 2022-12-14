#include "binary_trees.h"

/**
 * binary_tree_insert_left: inserts a node as a
    left-child node of another
 * parent: the parent node
 * value: the value of the node
 * Return: a pointer to the created node
        or NULL on failure of if parent is NULL
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
    binary_tree_t *left_node;
    
    left_node = malloc(sizeof(binary_tree_t));
    
    if (left_node == NULL)
    {
        return (NULL);
    }
    left_node->n = value;
    left_node->parent = left_node;
    left_node->right = NULL;
    left_node->left = parent;
    
    return (left_node);
}