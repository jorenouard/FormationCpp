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
                function(adressArray)
            }
        }

        template <typename T>
        T show(T toShow)
        {
            std::cout << *(toShow+i) << std::endl;
        }
    }

#endif