#include "binary_trees.h"

/**
* binary_tree_delete - Deletes the whole tree
*
* @tree: a pointer to the root node of the tree
*/

void binary_tree_delete(binary_tree_t *tree)
{
  if (tree == NULL)
    return;

  free(tree);
  binary_tree_delete(tree->left);
  binary_tree_delete(tree->right);
}
