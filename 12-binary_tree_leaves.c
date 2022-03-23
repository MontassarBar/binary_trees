#include "binary_trees.h"
/**
 *binary_tree_leaves - counts the leaves in a binary tree
 *@tree: a pointer to the root node of the tree to count the number of leaves
 *Return: x
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
size_t x = 0;
if (tree == NULL)
	return (0);
if (tree->right != NULL)
	x++;
if (tree->left != NULL)
	x++;
if (tree->parent != NULL && tree->right == NULL && tree->left == NULL)
	x++;
return (x);
}
