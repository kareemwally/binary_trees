#include "binary_trees.h"
/**
 * binary_tree_depth - Function
 * Description: gets number of nodes above some node(depth)
 * @tree: pointer to root node
 * Return: (int)
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	int res;

	if (tree == NULL)
		return (0);
	else if (tree->parent == NULL && tree != NULL)
		return (0);
	res = binary_tree_depth(tree->parent) + 1;
	return (res);
}
