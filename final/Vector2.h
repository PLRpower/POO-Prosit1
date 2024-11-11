#pragma once

#include <iostream>
#include <math.h>

class Vector2 {
private:
    float x, y;

public:
    Vector2();
    Vector2(float x, float y);

    float getX() const;
    float getY() const;

    float dot(const Vector2& other) const;
    Vector2 dot(float scalar) const;
    float cross(const Vector2& other) const;
};