#include "binary_trees.h"
/**
 *binary_tree_depth - measures the depth of a node in a binary tree
 *@tree:  a pointer to the node to measure the depth
 *Return: x
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
if (tree == NULL)
	return (0);
size_t x = 0;
while (tree->parent != NULL)
{
	x++;
	tree = tree->parent;
}
return (x);
}
