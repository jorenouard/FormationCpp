#ifndef __UTILS__
#define __UTILS__
    #include <iostream>
    #include <string>

    namespace utils
    {
        template <typename T>
        void swap (T &a, T &b)
        {
            T temp_b = b;
            b = a;
            a = temp_b;
        }

        template <typename T>
        T min (T a, T b)
        {
            return (a < b) ? a : b;
        }

        template <typename T>
        T max (T a, T b)
        {
            return (a > b) ? a : b;
        }
    }

#endif