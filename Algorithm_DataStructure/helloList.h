#ifndef helloList
#define helloList

#include "helloVector.h"
namespace HELLOWORLD
{
    template<class T>
    struct node
    {
        T elem;
        node *pre, *next;

        // construction
        node();

        node(const T E, const node *const nxt, const node *const prev);

        node(const node &n);

        // deconstruction
        virtual ~node();

        // reload operator '='
        node<T> operator=(const node &n);
    };

    template<class T>
    class list
    {
        node<T> headNode;
        node<T> *rear;
        int len;
        void initMember() { 
            rear = headNode;
            len = 0;
        }

    public:
        // Construction
        list();

        list(const vector<T> &src);

        list(const list<T> &src);

        // Deconstruction
        virtual ~list();

        // Reload operator '='
        list<T> operator=(const list<T> &src);

        // Insert a element by position
        void insert(const T elem,  node<T> *const);

        // Remove a element by position
        void remove(node<T> *const);

        // Get first element
        T front() const ;

        // Get last element
        T end() const;

        // Get len
        int length()const ;

        // Add a element at the end
        void push_back(const T);

        // Remove a element at the end
        void pop_back();

        // Add a element at the beginning
        void push_front(const T);

        // Remove a element at the beginning
        void pop_front();

        // Clear the list
        void clear();

        // Is empty
        bool empty();

        // Get head ptr
        node<T> *head() const 
        {
            node<T> *ptr = headNode->next;
            return ptr;
        };

        // Find node by pos
        node<T> *find(int) const;
    };
}

#endif