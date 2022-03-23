#include "binary_trees.h"
/**
 *binary_tree_height - measures the height of a binary tree
 *@tree: a pointer to the root node of the tree to measure the height
 *Return: x
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
size_t x;
size_t y;
if (tree == NULL)
	return (0);
x = tree->left ? 1 + binary_tree_height(tree->left) : 0;
y = tree->right ? 1 + binary_tree_height(tree->right) : 0;
return (x > y ? x : y);
}
