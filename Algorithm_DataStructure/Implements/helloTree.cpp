#include "../helloTree.h"

//complete after queue and stack
namespace HELLOWORLD
{
    /* Tree node */
    // Construction
    template<class T>
    TreeNode<T>::TreeNode(const T v, const TreeNode<T> *parent):_child()
    {
        _value = v;
        _parent = parent;
    }

    template<class T>
    TreeNode<T>::TreeNode(const TreeNode<T> &src):TreeNode<T>::TreeNode(src._value){}

    // Deconstruction
    template<class T>
    TreeNode<T>::~TreeNode(){}

    // Reload operator '='
    template<class T>
    TreeNode<T>&
    TreeNode<T>::operator=(const TreeNode<T> &src)
    {
        if (this != &src)
        {
            _value = src._value;
        }
        return *this;
    }

    /* Tree */
    // Construction
    template <class T>
    Tree<T>::Tree(const int branchNum)
    {
        _root = nullptr;
        _height = 0;
    }

    Tree(const vector<T> &src);

    Tree(const std::initializer_list<T> &src);

    Tree(const Tree<T> &);

    // Deconstruction
    virtual ~Tree();

    // Reload operator '='
    virtual Tree<T> &operator=(const Tree &src);

    // Clear
    virtual void clear();

    // Get pointer to root
    TreeNode<T> *root() const { return _root; }

    // Get height
    int height() const { return _height; }

    // Get number of branch
    int branch_number() const { return _branchNumber; }

    // Traversal
    using customFuc = void (*)(const TreeNode<T> &v, AnyClass &...params);
    void layer_order_traverse(customFuc fp = nullptr);

    void preorder_traverse(customFuc fp = nullptr);

    void postorder_traverse(customFuc fp = nullptr);
}