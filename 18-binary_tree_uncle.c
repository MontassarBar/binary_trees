#include "binary_trees.h"
/**
 *binary_tree_uncle - finds the uncle of a node
 *@node: a pointer to the node to find the uncle
 *Return: the uncle or NULL
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
binary_tree_t *grand_father;
binary_tree_t *uncle;
if (node == NULL)
	return (NULL);
if (node->parent == NULL)
	return (NULL);
grand_father = node->parent->parent;
if (grand_father == NULL)
	return (NULL);
if (grand_father->left == NULL)
	return (NULL);
if (grand_father->right == NULL)
	return (NULL);
if (node == grand_father->left->left || node == grand_father->left->right)
{
	uncle = grand_father->right;
}
else
{
	uncle = grand_father->left;
}
return (uncle);
}
