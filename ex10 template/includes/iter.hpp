#ifndef __ITER__
#define __ITER__

    #include<iostream>

    namespace iter
    {
        template <typename T>
        void iter(T* adressArray, int lengthArray, void (*func)(const T&))
        {
            for (int i = 0; i < lengthArray; i++)
            {
                func(adressArray[i]);
            }
        }

        template <typename T>
        void show(T& toShow)
        {
            std::cout << toShow << std::endl;
        }
    }

#endif