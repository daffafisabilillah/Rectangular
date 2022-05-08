#ifndef __RECTANGULAR_HPP__
#define __RECTANGULAR_HPP__

#include <iostream>

class PersegiPanjang
{
    private:
        double xmin, xmax, ymin, ymax;
    
    public: 
        
        PersegiPanjang(double width_X, double height_Y, double x_Center, double y_Center);

        bool operator==(const PersegiPanjang &) const;
        
        PersegiPanjang operator+(const PersegiPanjang &);
        PersegiPanjang operator-(const PersegiPanjang &);


        void operator++();
        void operator--();
        float operator[](int index);

        void print();
        
};      
#endif