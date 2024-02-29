#include "binary_trees.h"
/**
 * binary_tree_delete - Function
 * Description: freeing the memory
 * @tree: pointer to root node
 * Return: (void)
 */
void binary_tree_delete(binary_tree_t *tree)
{

	if (tree == NULL)
		return;
	if (tree->left == NULL && tree->right == NULL)
		free(tree);
	else
	{
		binary_tree_delete(tree->left);
		binary_tree_delete(tree->right);
		free(tree);
	}
}
