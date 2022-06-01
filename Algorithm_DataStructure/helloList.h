#ifndef helloList
#define helloList

#include "helloVector.h"
namespace HELLOWORLD
{
    template<class T>
    struct listNode
    {
        T _elem;
        listNode *_pre, *_next;

        // construction
        listNode();

        listNode(const T E, listNode *const nxt = nullptr, listNode *const prev = nullptr);

        listNode(const listNode &n);

        // deconstruction
        virtual ~listNode(){};

    };

    template<class T>
    class list
    {
        listNode<T> *_headNode;
        listNode<T> *_rear;
        bool _isLoop;
        int _len;

        void initMember() {
            _headNode = new listNode<T>();
            _rear = _headNode;
            _len = 0;
            _isLoop = false;
        }
        // Keep LoopList 
        void KeepLoop()
        {
            if (_isLoop)
            {
                _rear = _headNode;
                _headNode->_pre = _rear;
            }
        }

        

    public:
        // Construction
        list();

        list(const vector<T> &src, bool isLoop = false);

        list(const list<T> &src);

        list(const std::initializer_list<T> &, bool isLoop = false);

        // Deconstruction
        virtual ~list();

        // Reload operator '='
        list<T>& operator=(const list<T> &src);

        // Insert a element by position
        void insert(const T elem, int position);

        // Remove a element by position
        void remove(const int pos);

        // Get first element
        T front() const ;

        // Get last element
        T end() const;

        // Get len
        int size()const ;

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

        // Is a loop List
        bool isLoopList() const { return _isLoop; }

        // Find node by pos
        listNode<T> *findNode(int) const;

        // Get value by postion
        T find(const int pos) const;
    };
}

#endif