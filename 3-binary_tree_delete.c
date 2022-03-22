#include "binary_trees.h"
/**
 *binary_tree_delete -  inserts a node as the right-child of another node
 *@tree: a pointer to the root node of the tree to delete
 */
void binary_tree_delete(binary_tree_t *tree)
{
if (tree == NULL)
	return;
if (tree != NULL)
{
	binary_tree_delete(tree->right);
	binary_tree_delete(tree->left);
	free(tree);
}
}
