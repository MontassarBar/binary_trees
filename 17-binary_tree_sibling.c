#include "binary_trees.h"
/**
 *binary_tree_sibling - finds the sibling of a node
 *@node: a pointer to the node to find the sibling
 *Return: the sibling or NULL
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
if (node == NULL)
	return (NULL);
binary_tree_t *parent;
binary_tree_t *sibling;
parent = node->parent;
if (parent == NULL)
	return (NULL);
if (node == parent->left)
{
	if (parent->right == NULL)
		return (NULL);
	sibling = parent->right;
}
else
{
	if (parent->left == NULL)
		return (NULL);
	sibling = parent->left;
}
return (sibling);
}
