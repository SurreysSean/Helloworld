#ifndef helloVector
#define helloVector
#include <initializer_list>
namespace HELLOWORLD
{
    const int defaultCapacity = 10;

    template <class T> class vector
    {
        int _len;
        int _cap;
        int _rear;
        T *_container;


        private:
            // Automatically extend capacity of vector
            void extendCapacity();


        public :
            
            // Construction
            vector();

            vector(const int length);

            vector(const int length, const T initElem);

            vector(const vector<T> &src);

            vector(const std::initializer_list<T> &src);

            // Deconstruction
            virtual ~vector();

            // Get value by index
            T at(const int index) const;

            // Reload operator '='
            vector<T>& operator=(const vector<T>& src);

            // Reload operator '[]'
            T operator[](const int index) const;
            
            // Get length
            int size() const;

            // Get capacity
            int capacity() const;

            // Get rear
            int rear() const { return _rear; }

            // Add a element to end
            void push_back(const T Elem);

            // clear the vector
            void clear();

            // is empty
            bool empty() const { return _len == 0; }

            // Remove a element at the end
            void pop_back();
    };
};

#endif