#include "binary_trees.h"
/**
 * binary_tree_is_leaf - Function
 * Description: to check the node is a leaf or not
 * @node: the node to be checked
 * Return: int 1(leaf) or 0(no leaf)
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	int res = 0;

	if (node == NULL)
	{
		return (res);
	}
	if (node->right == NULL && node->left == NULL)
	{
		res = 1;
	}
	return (res);
}
