#include "binary_trees.h"

/**
 * binary_tree_height - function that measures the height of a binary
 * tree
 * @tree: pointer to the root node of the tree to measure the height
 * Return: If tree is NULL, your function must return (0),
 * else return height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t lt = 0, rt = 0;

		lt = tree->left ? 1 + binary_tree_height(tree->left) : 1;
		rt = tree->right ? 1 + binary_tree_height(tree->right) : 1;
		return ((lt > rt) ? lt : rt);
	}
	return (0);
}

/**
 * binary_tree_balance - function that measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree to measure the balance factor
 * Return: If tree is NULL, return 0, else return balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree)
		return (binary_tree_height(tree->left) - binary_tree_height(tree->right));

	return (0);
}