#ifndef HELLOSTACK
#define HELLOSTACK

#include "helloVector.h"
namespace HELLOWORLD
{
    template<class T>
    class stack 
    {
        vector<T> _container;

    public:
        // Construction
        stack():_container(){}

        stack(const vector<T> &vec):_container(vec){}

        stack(const std::initializer_list<T> &initList) : _container(initList){}

        stack(const stack<T> &src):_container(src.container()){}

        // Deconstruction
        ~stack(){}

        // Reload operator '='
        stack<T>& operator=(const stack<T> &src)
        {
            if (this != &src)
            {
                _container = src.container();
            }
            return *this;
        }

        // Get top
        T top() const { return _container[_container.rear() - 1]; }

        // Push
        void push(const T value) { _container.push_back(value); }

        // Pop
        void pop() 
        {
            if (!empty())
            {
                _container.pop_back();
            }
        }

        // Get length
        int size() const { return _container.size(); }

        // Get container
        const vector<T> &container() const { return _container; }
    
        // Clear
        void clear() { _container.clear(); }

        // Empty
        bool empty() const { return _container.empty(); }
    };
}


#endif