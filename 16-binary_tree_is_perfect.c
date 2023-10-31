#include "binary_trees.h"

/**
* binary_tree_is_perfect - Checks if a tree is perfect
*
* @tree: a pointer to the root node of the tree to check
*
* Return: returns 1 if perfect else 0
*/

int binary_tree_is_full(const binary_tree_t *tree);
size_t binary_tree_height(const binary_tree_t *tree);
int binary_tree_balance(const binary_tree_t *tree);

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int is_full, is_balanced;

	if (tree == NULL)
		return (0);

	is_full = binary_tree_is_full(tree);

	if (is_full == 1)
	{
		is_balanced = binary_tree_balance(tree);
		if (is_balanced == 0)
			return (1);
		else
			return (0);
	}
	else
		return (0);
}

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

/**
* binary_tree_balance - Measures the balance factor of a binary tree
*
* @tree: a pointer to the root node of the tree to measure the balance factor
*
* Return: returns an integer balance factor
*/


int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height, right_height;

	if (tree == NULL)
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	return (left_height - right_height);
}

/**
* binary_tree_height - Measures the height of a binary tree
*
* @tree: a pointer to the root node of the tree to Measures
*
* Return: returns the hight of a tree
*/

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height = 0, right_height = 0;

	if (tree == NULL)
		return (-1);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	if (left_height > right_height)
		return (left_height + 1);
	return (right_height + 1);
}
