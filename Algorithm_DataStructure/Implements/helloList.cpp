#include "../helloList.h"
// NEED TEST
namespace HELLOWORLD
{
    // -- node --

    // construction
    template<class T>
    listNode<T>::listNode()
    {
        _next = _pre = nullptr;
        _elem = 0;
    }

    template<>
    listNode<std::string>::listNode()
    {
        _next = _pre = nullptr;
        _elem = "";
    }

    template<class T>
    listNode<T>::listNode(const T E, listNode *const nxt , listNode *const prev)
    {
        _elem = E;
        _pre = prev;
        _next = nxt;
    }

    template<class T>
    listNode<T>::listNode(const listNode &n)
    {
        _elem = n._elem;
        _pre = n._pre;
        _next = n._next;
    }

    // -- list --
    // Construction
    template<class T>
    list<T>::list()
    {
        initMember();
    }

    template<class T>
    list<T>::list(const vector<T> &src, bool pIsLoop)
    {
        initMember();
        _len = src.size();
        this->_isLoop = pIsLoop;
        for (int i = 0; i < src.size();i++)
        {
            push_back(src[i]);
        }
        KeepLoop();
    }

    template<class T>
    list<T>::list(const list<T> &src)
    {
        initMember();
        listNode<T>* srcPtr = src.findNode(1); //The fst node of list 'src'
        _isLoop = src.isLoopList();
        while (srcPtr != nullptr)
        {
            push_back(srcPtr->_elem);
            srcPtr = srcPtr->_next;
        }
        KeepLoop();
    }

    template<class T>
    list<T>::list(const std::initializer_list<T> &src, bool isLoopList)
    {
        initMember();
        _isLoop = isLoopList;
        for (const T *iter = src.begin(); iter != src.end();++iter)
        {
            push_back(*iter);
        }
        KeepLoop();
    }

    // Deconstruction
    template<class T>
    list<T>::~list()
    {
        if (!empty())
        {
            clear();
        }
    }

    // Reload operator '='
    template<class T>
    list<T>& 
    list<T>::operator=(const list<T> &src)
    {
        if (this == &src)
        {
            return *this;
        }
        clear();
        listNode<T>* ptr = src.findNode(1);
        int srcLen = src.size();
        _isLoop = src.isLoopList();
        while (srcLen)
        {
            push_back(ptr->_elem);
            ptr = ptr->_next;
            --srcLen;
        }
        KeepLoop();
        return *this;
    }

    // Insert a element by position
    template<class T>
    void 
    list<T>::insert(const T elem, const int position)
    {
        listNode<T> *prePtr = findNode(position - 1);
        if (prePtr == _rear)
        {
            push_back(elem);
        }
        else if(prePtr == _headNode)
        {
            push_front(elem);
        }
        else
        {
            listNode<T> *newNode = new listNode<T>(elem,prePtr->_next,prePtr);
            prePtr->_next->_pre = newNode;
            prePtr->_next = newNode;
            ++_len;
        }
    }

    // Remove a element by position
    template<class T>
    void 
    list<T>::remove(const int position)
    {
        listNode<T> *delPtr = findNode(position);
        if (delPtr == _rear)
        {
            pop_back();
        }
        else if(delPtr == _headNode->_next)
        {
            pop_front();
        }
        else
        {
            delPtr->_pre->_next = delPtr->_next;
            delPtr->_next->_pre = delPtr->_pre;
            delete delPtr;
            --_len;
        }
    }

    // Get first element
    template<class T>
    T
    list<T>::front() const
    {
        return _headNode->_next->_elem;
    }

    // Get last element
    template<class T>
    T
    list<T>::end() const
    {
        return _rear->_elem;
    }

    // Get len
    template<class T>
    int
    list<T>::size() const
    {
        return _len;
    }

    // Add a element at the end
    template<class T>
    void
    list<T>::push_back(const T elem)
    {
        listNode<T> *newNode = new listNode<T>(elem, _rear->_next, _rear);
        if (_isLoop)
        {
            _headNode->_pre = newNode;
        }
        _rear->_next = newNode;
        _rear = newNode;
        ++_len;
    }

    // Remove a element at the end
    template<class T>
    void
    list<T>::pop_back()
    {
        listNode<T> *pre = _rear->_pre;
        pre->_next = _rear->_next;
        if (_isLoop)
        {
            _headNode->_pre = pre;
        }
        delete _rear;
        _rear = pre;
        --_len;
    }

    // Add a element at the beginning
    template<class T>
    void
    list<T>::push_front(const T elem)
    {
        listNode<T> *newNode = new listNode<T>(elem, _headNode->_next, _headNode);
        _headNode->_next->_pre = newNode;
        _headNode->_next = newNode;
        ++_len;
    }

    // Remove a element at the beginning
    template<class T>
    void
    list<T>::pop_front()
    {
        listNode<T> *delPtr = _headNode->_next;
        _headNode->_next = delPtr->_next;
        delPtr->_next->_pre = _headNode;
        delete delPtr;
        --_len;
    }

    // Clear the list
    template<class T>
    void
    list<T>::clear()
    {
        while(_rear!= _headNode)
        {
            pop_back();
        }
    }

    // Is empty
    template<class T>
    bool
    list<T>::empty()
    {
        return (_len == 0);
    }

    // Find node by index
    template<class T>
    listNode<T>*
    list<T>::findNode(int pos) const
    {
        if (pos > _len || pos < 0)
        {
            return nullptr;
        }
        listNode<T> *ptr = _headNode;
        while(pos--)
        {
            ptr = ptr->_next;
        }
        return ptr;
    }
    // Get value by postion
    template<class T>
    T
    list<T>::find(const int pos) const
    {
        T res;
        listNode<T> *ptr = findNode(pos);
        if (ptr)
        {
            res = ptr->_elem;
        }
        return res;
    }
}