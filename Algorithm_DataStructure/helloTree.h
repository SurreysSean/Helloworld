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
        vector<TreeNode *> _child;

        // Construction
        TreeNode(const T v = T(),const TreeNode<T>* parent = nullptr) =default;

        TreeNode(const TreeNode<T> &src);

        // Deconstruction
        virtual ~TreeNode();

        // Reload operator '='
        TreeNode<T> &operator=(const TreeNode<T> &src);
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

        Tree(const vector<T> &src);

        Tree(const std::initializer_list<T> &src);

        Tree(const Tree<T> &);

        // Deconstruction
        virtual ~Tree();

        // Reload operator '='
        virtual Tree<T>& operator=(const Tree &src);

        // Clear
        virtual void clear();

        // Get pointer to root
        TreeNode<T> *root() const { return _root; }

        // Get height
        int height() const { return _height; }

        // Get number of branch
        int branch_number() const { return _branchNumber; }

        // Traversal
        using customFuc = void (*)(const TreeNode<T> &v, ...);
        void layer_order_traverse(customFuc fp = nullptr);

        void preorder_traverse(customFuc fp = nullptr);

        void postorder_traverse(customFuc fp = nullptr);
    };
}

#endif