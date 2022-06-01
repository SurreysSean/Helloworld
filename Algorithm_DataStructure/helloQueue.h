#ifndef HELLOQUEUE
#define HELLOQUEUE
#include "helloList.h"

namespace HELLOWORLD
{
    template<class T>
    class queue
    {
        list<T> _container;

        public:
            // Construction
            queue():_container(){}

            queue(const std::initializer_list<T> &src) : _container(src){}

            queue(const vector<T> &src):_container(src){}

            queue(const queue<T> &src):_container(src.container()){}

            // Deconstruction
            ~queue(){}

            // Reload operator '='
            queue<T> &operator=(const queue<T> &src);

            // Push
            void push(const T value);

            // Pop
            void pop();

            // Clear
            void clear() { _container.clear(); }

            // Empty
            bool empty() { return _container.empty(); }

            // Get length
            int size() { return _container.size(); }

            // Get container
            const list<T> &container() const { return _container; }

            // Get front
            T front() { return _container.front(); }
    };
    template<class T>
    queue<T>&
    queue<T>::operator=(const queue<T> &src)
    {
        if (this!=&src)
        {
            _container = src.container();
        }
        return *this;
    }

    template<class T>
    void
    queue<T>::push(const T value)
    {
        _container.push_back(value);
    }

    template<class T>
    void 
    queue<T>::pop()
    {
        if (!empty())
        {
            _container.pop_front();
        }
    }

}


#endif