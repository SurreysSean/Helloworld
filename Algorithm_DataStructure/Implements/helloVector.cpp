#include "../helloVector.h"

// NEED TEST
namespace HELLOWORLD
{
    // Construction
    template<class T>
    vector<T>::vector()
    {
        _rear = _len = 0;
        
        _cap = defaultCapacity;
        _container = new T[_cap];
    }

    template <class T>
    vector<T>::vector(const int length)
    {
        _rear = _cap = _len = length;
        _container = new T[_cap];

    }

    template <class T>
    vector<T>::vector(const int length, const T initElem)
    {
        _rear = _cap = _len = length;
        _container = new T[_cap];
        for (int i = 0; i < length; i++)
        {
            _container[i] = initElem;
        }
    }

    template <class T>
    vector<T>::vector(const vector<T> &src)
    {
        _cap = src.capacity();
        _rear = _len = src.size();
        _container = new T[_cap];
        for (int i = 0; i < _len;i++)
        {
            _container[i] = src[i];
        }
    }

    template<class T>
    vector<T>::vector(const std::initializer_list<T> &src)
    {
        _rear = _cap = _len = src.size();
        _container = new T[_cap];
        int i = 0;
        for (const T *iter = src.begin(); iter != src.end();++iter)
        {
            _container[i] = *iter;
            ++i;
        }
    }


    // Deconstruction
    template<class T>
    vector<T>::~vector()
    {
        delete[] _container;
    }

    // Get value by index
    template<class T>
    T
    vector<T>::at(const int index) const
    {
        return _container[index];
    }

    // Reload operator '='
    template<class T>
    vector<T>& 
    vector<T>::operator=(const vector<T>& src)
    {
        if (this == &src)
        {
            return *this;
        }
        clear();
        for (int i = 0; i < src.size();++i)
        {
            push_back(src[i]);
        }
        return *this;
    }

    // Reload operator '[]'
    template<class T>
    T
    vector<T>::operator[](const int index) const 
    {
        return this->at(index);
    }

    // Get len
    template <class T>
    int vector<T>::size() const
    {
        return _len;
    }

    // Get cap
    template <class T>
    int vector<T>::capacity() const
    {
        return _cap;
    }

    // Add a elements to end
    template<class T> 
    void
    vector<T>::push_back(const T Elem)
    {
        if (_len==_cap)
        {
            extendCapacity();
        }
        _container[_rear++] = Elem;
        ++_len;
    }

    // Automatically extend cap of vector
    template <class T>
    void 
    vector<T>::extendCapacity()
    {
        _cap *= 2;
        T *newContainer = new T[_cap];
        for (int i = 0; i < _len;i++)
        {
            newContainer[i] = _container[i];
        }
        delete[] _container;
        _container = newContainer;
    }

    // clear the vector
    template<class T>
    void
    vector<T>::clear()
    {
        _rear = _len = 0;
    }

    // pop
    template<class T>
    void 
    vector<T>::pop_back()
    {
        if (!empty())
        {
            --_len;
            --_rear;
        }
    }
};