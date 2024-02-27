#include "binary_trees.h"
/**
 * binary_tree_insert_left - tree function
 * Description: a function to insert node at the left
 * @value: the data to be inserted into node
 * @parent: the parent node
 * Return: pointer to new node (Success) or NULL (fail)
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *res;

	res = malloc(sizeof(binary_tree_t));
	if (res == NULL || parent == NULL)
	{
		return (NULL);
	}
	res->n = value;
	res->right = NULL;
	res->parent = parent;
	if (parent->left == NULL)
	{
		parent->left = res;
		res->left = NULL;
	}
	else
	{
		parent->left->parent = res;
		res->left = parent->left;
		parent->left = res;
	}
	return (res);
}
