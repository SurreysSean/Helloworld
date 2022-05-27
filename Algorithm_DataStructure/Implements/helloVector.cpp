#include "../helloVector.h"

// NEED TEST
namespace HELLOWORLD
{
    // Construction
    template<class T>
    vector<T>::vector()
    {
        rear = len = 0;
        
        cap = defaultCapacity;
        container = new T[cap];
    }

    template <class T>
    vector<T>::vector(const int length)
    {
        rear = cap = len = length;
        container = new T[cap];

    }

    template <class T>
    vector<T>::vector(const int length, const T initElem)
    {
        rear = cap = len = length;
        container = new T[cap];
        for (int i = 0; i < length; i++)
        {
            container[i] = initElem;
        }
    }

    template <class T>
    vector<T>::vector(const vector<T> &src)
    {
        cap = src.capacity();
        rear = len = src.length();
        container = new T[cap];
        for (int i = 0; i < len;i++)
        {
            container[i] = src[i];
        }
    }

    // Deconstruction
    template<class T>
    vector<T>::~vector()
    {
        delete[] container;
    }

    // Get value by index
    template<class T>
    T
    vector<T>::at(const int index) const
    {
        return container[index];
    }

    // Reload operator '='
    template<class T>
    vector<T> 
    vector<T>::operator=(const vector<T>& src)
    {
        return vector(src);
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
    int vector<T>::length() const
    {
        return len;
    }

    // Get cap
    template <class T>
    int vector<T>::capacity() const
    {
        return cap;
    }

    // Add a elements to end
    template<class T> 
    void
    vector<T>::push_back(const T Elem)
    {
        if (len==cap)
        {
            extendCapacity();
        }
        else
        {
            container[rear++] = Elem;
        }
    }

    // Automatically extend cap of vector
    template <class T>
    void 
    vector<T>::extendCapacity()
    {
        cap *= 2;
        T *newContainer = new T[cap];
        for (int i = 0; i < len;i++)
        {
            newContainer[i] = container[i];
        }
        delete[] container;
        container = newContainer;
    }

    // clear the vector
    template<class T>
    void
    vector<T>::clear()
    {
        rear = len = 0;
    }
};