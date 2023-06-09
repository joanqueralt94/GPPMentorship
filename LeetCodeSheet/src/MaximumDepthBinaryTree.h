#pragma once

#include "../utils/Log.h"

struct TreeNode {
	int val;
	TreeNode* left;
	TreeNode* right;
	TreeNode() : val(0), left(nullptr), right(nullptr) {}
	TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
	TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {}
};


class MaximumDepthBinaryTree
{

public:
	int maxDepth(TreeNode* root);

	MaximumDepthBinaryTree()
	{

	}
};

