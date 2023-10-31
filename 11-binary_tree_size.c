#include "binary_trees.h"

/**
* binary_tree_size - Measures the size of a tree
*
* @tree: a pointer to the root node of the tree to measure
*
* Return: returns the size of a tree
*/

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size;

	if (tree == NULL)
		return (0);

	size = (binary_tree_size(tree->left) + 1 + binary_tree_size(tree->right));
	return (size);
}
