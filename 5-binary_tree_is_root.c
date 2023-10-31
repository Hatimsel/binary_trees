#include "binary_trees.h"

/**
* binary_tree_is_root - Checks if a given node is root
*
* @node: a pointer to the node to check
*
* Return: returns 1 if root else 0
*/

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->parent == NULL)
		return (1);
	return (0);
}
