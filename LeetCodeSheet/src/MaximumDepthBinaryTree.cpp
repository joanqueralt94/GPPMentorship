#include "MaximumDepthBinaryTree.h"

int MaximumDepthBinaryTree::maxDepth(TreeNode* root)
{
    if (root == nullptr)
    {
        return 0;
    }

    std::queue<TreeNode*> nodesList;
	nodesList.push(root);

	int maximumDepth = 0;

	while (!nodesList.empty()) {

		int nodesListSize = nodesList.size();

		for (int i = 0; i < nodesListSize; i++) {
			TreeNode* node = nodesList.front();
			nodesList.pop();

			if (node->left != nullptr) {
				nodesList.push(node->left);
			}

			if (node->right != nullptr) {
				nodesList.push(node->right);
			}
		}

		maximumDepth++;
	}

	return maximumDepth;
}
