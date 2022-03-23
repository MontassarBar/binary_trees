#include "binary_trees.h"
/**
 *binary_tree_height - measures the height of a binary tree
 *@tree: a pointer to the root node of the tree to measure the height
 *Return: x
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
if (tree == NULL)
	return (0);
size_t x = 0;
if (tree->right != NULL)
	x++;
if (tree->left != NULL)
	x++;
return (x);
}
