#include "binary_trees.h"

/**
* binary_tree_is_full - Checks if a binary tree is full
*
* @tree: a pointer to the root node of the tree to check
*
* Return: returns 1 if full else 0
*/

int binary_tree_is_full(const binary_tree_t *tree)
{
	int left_tree, right_tree;

	if (tree == NULL)
		return (0);

	if ((!tree->left && !tree->right) || (tree->left && tree->right))
	{
		left_tree = binary_tree_is_full(tree->left);
		right_tree = binary_tree_is_full(tree->right);
	}

	else
		return (0);

	if (left_tree == right_tree)
		return (1);
	return (0);
}
