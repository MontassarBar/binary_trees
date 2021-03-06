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
return (x - y);
}
/**
 *binary_tree_balance - measures the balance factor of a binary tree
 *@tree: a pointer to the root node of the tree to measure the balance factor
 *Return: the balance factor of a binary tree
 */
int binary_tree_balance(const binary_tree_t *tree)
{
if (tree == NULL)
	return (0);
return (binary_tree_height(tree));
}
