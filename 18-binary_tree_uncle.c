#include "binary_trees.h"

/**
* binary_tree_uncle - Finds the uncle of a node
*
* @node: a pointer to the node to find the uncle of
*
* Return: returns a pointer to the uncle of node else NULL
*/

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL)
		return (NULL);

	if (node->parent != NULL)
	{
		if (node->parent->parent == NULL)
			return (NULL);
		else
		{
			if (node->parent->parent->left == node->parent)
				return (node->parent->parent->right);
			return (node->parent->parent->left);
		}
	}
	return (NULL);
}
