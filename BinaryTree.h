#ifndef BINARYTREE_H
#define BINARYTREE_H
class BinaryTree
{
private:
    struct TreeNode
    {
        int value;
        TreeNode *left;
        TreeNode *right;
    };
    TreeNode *root;

    void insert(TreeNode *&, TreeNode *&);
    void displayPreOrder(TreeNode *) const;

public:
    BinaryTree()
    {
    	root = nullptr;
    }

    void insertNode(int);

    void displayPreOrder() const
    {
    	displayPreOrder(root);
    }

};
#endif
