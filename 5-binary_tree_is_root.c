#include "binary_trees.h"
/**
 * binary_tree_is_root - Function
 * Description: to check the node is a root or not
 * @node: the node to be checked
 * Return: int 1(root) or 0(no root)
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	int res = 0;

	if (node == NULL)
	{
		return (res);
	}
	else if (node->right != NULL && node->left != NULL)
	{
		if (node->parent == NULL)
		{
			res = 1;
		}
	}
	return (res);
}
