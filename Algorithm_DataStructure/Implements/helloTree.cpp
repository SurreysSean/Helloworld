#include "../helloTree.h"

//complete after queue and stack
namespace HELLOWORLD
{
    /* Tree node */
    // Construction
    template<class T>
    TreeNode<T>::TreeNode(const T value, TreeNode *pt, TreeNode *childs[])
    {
        _value = value;
        _parent = pt;
        _childs = childs;
    }

    // Deconstruction
    template<class T>
    TreeNode<T>::~TreeNode(){}

    /* Tree base */
    // Construction
    template<class T>
    Tree<T>::Tree(const int branchNumber)
    {
        _root = new TreeNode<T>;
        _height = 1;
        _branchNumber = branchNumber
    }

    template<class T>
    Tree<T>::Tree(const Tree<T> &src)
    {
        
    }

    // Deconstruction
    virtual ~TreeBase();

    // Reload operator '='
    virtual Tree<T> operator=(const TreeBase &);
}