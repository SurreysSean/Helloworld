#include "../helloList.h"
// NEED TEST
namespace HELLOWORLD
{
    // -- node --

    // construction
    template<class T>
    node<T>::node()
    {
        elem = NULL;
        next = pre = nullptr;
    }

    template<class T>
    node<T>::node(const T E, const node *const nxt = nullptr, const node *const prev = nullptr)
    {
        elem = E;
        pre = prev;
        next = nxt;
    }

    template<class T>
    node<T>::node(const node &n)
    {
        elem = n.elem;
        pre = n.pre;
        next = n.next;
    }

    // reload operator '='
    template<class T>
    node<T> 
    node<T>::operator=(const node &n)
    {
        return node(n);
    }


    // -- list --
    // Construction
    template<class T>
    list<T>::list()
    {
        initMember();
    }

    template<class T>
    list<T>::list(const vector<T> &src)
    {
        initMember();
        node<T> *tempPtr = nullptr;
        len = src.length();
        for (int i = 0; i < src.length();i++)
        {
            tempPtr = new node<T>(src[i],nullptr,rear);
            rear->next = tempPtr;
            rear = rear->next;
        }
    }

    template<class T>
    list<T>::list(const list<T> &src)
    {
        initMember();
        node<T> tempPtr = nullptr;
        node<T> srcPtr = src.head();
        len = src.length();
        while(srcPtr!= nullptr)
        {
            tempPtr = new node<T>(srcPtr->elem,nullptr,rear);
            rear->next = tempPtr;
            rear = rear->next;
            srcPtr = srcPtr->next;
        }
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
    list<T> 
    list<T>::operator=(const list &src)
    {
        return list<T>(src);
    }

    // Insert a element by position
    template<class T>
    void 
    list<T>::insert(const T elem, node<T>* const ptr)
    {
        node<T> *pre_ptr = ptr->pre;
        node<T> *newNode = new node<T>(elem,ptr,pre_ptr);
        ptr->pre = newNode;
        pre_ptr->next = newNode;
        ++len;
    }

    // Remove a element by position
    template<class T>
    void 
    list<T>::remove(node<T>* const ptr)
    {
        if (ptr == rear)
        {
            pop_back();
        }
        else
        {
            ptr->pre->next = ptr->next;
            ptr->next->ptr = ptr->pre;
            delete ptr;
            --len;
        }
    }

    // Get first element
    template<class T>
    T
    list<T>::front() const
    {
        return headNode.next->elem;
    }

    // Get last element
    template<class T>
    T
    list<T>::end() const
    {
        return rear->elem;
    }

    // Get len
    template<class T>
    int
    list<T>::length() const
    {
        return len;
    }

    // Add a element at the end
    template<class T>
    void
    list<T>::push_back(const T elem)
    {
        node<T> *newNode(elem, nullptr, rear);
        rear->next = newNode;
        rear = newNode;
        ++len;
    }

    // Remove a element at the end
    template<class T>
    void
    list<T>::pop_back()
    {
        node<T> *pre = rear->pre;
        pre->next = nullptr;
        delete rear;
        rear = pre;
        --len;
    }

    // Add a element at the beginning
    template<class T>
    void
    list<T>::push_front(const T elem)
    {
        insert(elem, head());
    }

    // Remove a element at the beginning
    template<class T>
    void
    list<T>::pop_front()
    {
        remove(head());
    }

    // Clear the list
    template<class T>
    void
    list<T>::clear()
    {
        while(rear!=headNode)
        {
            pop_back()
        }
    }

    // Is empty
    template<class T>
    bool
    list<T>::empty()
    {
        return (len == 0);
    }

    // Find node by value
    template<class T>
    node<T>*
    list<T>::find(int pos) const
    {
        node<T> *ptr = head();
        while(!(--pos))
        {
            ptr = ptr->next;
        }
        return ptr;
    }
}