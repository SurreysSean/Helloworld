#ifndef helloTree
#define helloTree

#include "helloVector.h"
// complete after queue and stack

namespace HELLOWORLD
{
    template<class T>
    struct TreeNode
    {
        T _value;
        TreeNode *_parent;
        TreeNode *_childs[];

        // Construction
        TreeNode(const T v = 0, TreeNode *pt = nullptr, TreeNode *childs[] =nullptr);

        // Deconstruction
        virtual ~TreeNode();

    };

    template<class T>
    class Tree
    {
        TreeNode<T> *_root;
        int _height;
        int _branchNumber;

    public:
        // Construction
        Tree(const int branchNum = 2);

        Tree(const Tree<T> &);

        // Deconstruction
        virtual ~Tree();

        // Reload operator '='
        virtual Tree<T> operator=(const Tree &);

        // Get pointer to root
        TreeNode<T> *root() const { return _root; }

        // Get height
        int height() const { return _height; }

        // Get number of branch
        int branch_number() const { return _branchNumber; }

        // Traversal
        void layer_order_traverse

    };
}

#endif