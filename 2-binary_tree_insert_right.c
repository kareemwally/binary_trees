#include "binary_trees.h"
/**
 * binary_tree_insert_right - tree function
 * Description: a function to insert node at right of parent node
 * @value: the data to be inserted into node
 * @parent: the parent node
 * Return: pointer to new node (Success) or NULL (fail)
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
binary_tree_t *res;

if (parent == NULL)
{
return (NULL);
}
res = malloc(sizeof(binary_tree_t));
if (res == NULL)
{
return (NULL);
}
res->n = value;
res->parent = parent;
res->left = NULL;
res->right = parent->right;
if (parent->left != NULL)
{
parent->right->parent = res;
}
parent->right = res;
return (res);
}
