#include "TreeNode.h"

#include <cstddef>
#include <iostream>
using namespace std;

TreeNode::TreeNode() : left_(nullptr), right_(nullptr) { }

// helper function prototype
int get_height(TreeNode *);

int TreeNode::getHeight() 
{
    return get_height(this);
}

// helper function
int get_height(TreeNode *subRoot)
{
    // if node is NULL,
    // height == -1
    if(subRoot == nullptr)
    {
        return -1;
    }

    // recursive definition for height
    return 1 + std::max(get_height(subRoot->left_), get_height(subRoot->right_));
}