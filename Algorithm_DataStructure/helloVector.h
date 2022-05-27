#ifndef helloVector
#define helloVector
namespace HELLOWORLD
{
    const int defaultCapacity = 10;

    template <class T> class vector
    {
        int len;
        int cap;
        int rear;
        T *container;


        private:
            // Automatically extend capacity of vector
            void extendCapacity();


        public :
            
            // Construction
            vector();

            vector(const int length);

            vector(const int length, const T initElem);

            vector(const vector<T> &src);


            // Deconstruction
            ~vector();
            // Get value by index
            T at(const int index) const;
            // Reload operator '='
            vector<T> operator =(const vector<T>& src);
            // Reload operator '[]'
            T operator[](const int index) const;
            // Get length
            int length() const;
            // Get capacity
            int capacity() const;
            // Add a elements to end
            void push_back(const T Elem);
            // clear the vector
            void clear();
            // is empty
            bool empty() { return len == 0; }
    };
};

#endif