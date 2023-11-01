#include "binary_trees.h"

/**
* binary_tree_node - Creates a binary tree node.
*
* @parent: Is a pointer to the parent node of the node to create.
* @value: Is the value to put in the new node.
*
* Return: NULL on failure,
*		  else a pointer to the new node
*
* Description: When a created the node does not have child
*/

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (new_node == NULL)
		return (NULL);

	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;

	return (new_node);
}