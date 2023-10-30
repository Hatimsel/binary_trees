#include "binary_trees.h"

/**
* binary_tree_node - Creates a binary tree node
*
* @parent: a pointer to the parent node
* @value: THe value to put in the new node
*
* Return: returns a pointer to the new node when success else NULL
*/

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
  binary_tree_t *new_node = malloc(sizeof(binary_tree_t));

  if (new_node == NULL)
  {
    return NULL;
  }
  new_node->left = NULL;
  new_node->right = NULL;
  new_node->n = value;

  if (parent == NULL)
  {
    new_node->parent = NULL;
    parent = new_node;
  }
  else 
  {
    new_node->parent = parent;
    if (parent->left == NULL)
    {
      parent->left = new_node;
    }
    else if (parent->right == NULL && parent->left != NULL) 
    {
      parent->right = new_node;
    }
    else
      return (NULL);
  }
  return (new_node);
}
