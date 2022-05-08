#include <iostream>
#include <cmath>
#include "include/rectangular.hpp"

using namespace std;

PersegiPanjang::PersegiPanjang(double x_Center, double y_Center, double width_X, double height_Y)
{
    this->xmin = x_Center - (width_X / 2);
    this->xmax = x_Center + (width_X / 2);
    this->ymin = y_Center - (height_Y / 2);
    this->ymin = y_Center + (height_Y / 2);
}

void PersegiPanjang::print()
{
    cout << "x min      : " << this->xmin << endl;
    cout << "x max      : " << this->xmax << endl;
    cout << "y min      : " << this->ymin << endl;
    cout << "y max      : " << this->ymax << endl;
    cout << "Panjang x  : " << (this->xmax - this->xmin) << endl;
    cout << "Panjang y  : " << (this->ymax - this->ymin) << endl;
    cout << "Titik tengah y  : " << (this->ymax - this->ymin) / 2 + this->ymin << endl;
    cout << "Titik tengah x  : " << (this->xmax - this->xmin) / 2 + this->xmin << endl;
}

bool PersegiPanjang::operator==(const PersegiPanjang& rhs) const
{
    if (this->xmin >= rhs.xmax || rhs.xmin >= this->xmax)
    return false;
    if (this->ymin >= rhs.ymax || rhs.ymin >= this->ymax)
    return false;

    return true;
}

PersegiPanjang PersegiPanjang::operator+(const PersegiPanjang& rhs)
{
    PersegiPanjang res (0,0,0,0);

    if(*this == rhs)
    {
        res.xmin = min (this->xmin, rhs.xmin);
        res.xmax = max (this->xmax, rhs.xmax);
        res.ymin = min (this->ymin, rhs.ymin);
        res.ymax = max (this->ymax, rhs.ymax);
    }else
    cout << "Persegi Panjang tidak beririsan";
    return res;
}

PersegiPanjang PersegiPanjang::operator-(const PersegiPanjang& rhs)
{
    PersegiPanjang res (0,0,0,0);

    if(*this == rhs)
    {
        res.xmin = max (this->xmin, rhs.xmin);
        res.xmax = min (this->xmax, rhs.xmax);
        res.ymin = max (this->ymin, rhs.ymin);
        res.ymax = min (this->ymax, rhs.ymax);
    }else
    cout << "Persegi Panjang tidak beririsan";
    return res;
}

void PersegiPanjang::operator++()
{
    double width_x = (this->xmax - this->xmin) * 2;
    double height_y = (this->ymax - this->ymin) * 2;
    double x_Center = (this->xmax + this->xmin) / 2;
    double y_Center = (this->ymax + this->ymin) / 2;

    this->xmax = x_Center + (width_x / 2);
    this->xmin = x_Center - (width_x / 2);

    this->ymax = y_Center + (height_y / 2);
    this->ymin = y_Center - (height_y / 2);
}

void PersegiPanjang::operator--()
{
    double width_x = (this->xmax - this->xmin) / 2;
    double height_y = (this->ymax - this->ymin) / 2;
    double x_Center = (this->xmax + this->xmin) / 2;
    double y_Center = (this->ymax + this->ymin) / 2;

    this->xmax = x_Center + (width_x / 2);
    this->xmin = x_Center - (width_x / 2);

    this->ymax = y_Center + (height_y / 2);
    this->ymin = y_Center - (height_y / 2);
}