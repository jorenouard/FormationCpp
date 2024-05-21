#ifndef __ITER__
#define __ITER__

    #include<iostream>

    namespace iter
    {
        template <typename T>
        void iter(T* adressArray, int lengthArray, T funtion)
        {
            for (int i = 0; i < lengthArray; i++)
            {
                function(*(adressArray+i));
            }
        }

        template <typename T>
        T show(T* toShow)
        {
            std::cout << *toShow << std::endl;
        }
    }

#endif