#pragma once

#include <cmath>

template <class T>
struct Vec2 
{
    T x, y;
    Vec2()           : x(0) , y(0)  { };
    Vec2(T xn, T yn) : x(xn), y(yn) { };
};