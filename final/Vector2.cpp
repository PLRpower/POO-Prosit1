#include "Vector2.h"
#include <cmath>

Vector2::Vector2() : x(0), y(0) {}
Vector2::Vector2(float x, float y) : x(x), y(y) {}

float Vector2::getX() const { return x; }
float Vector2::getY() const { return y; }

float Vector2::dot(const Vector2& other) const {
    return x * other.getX() + y * other.getY();
}

Vector2 Vector2::dot(float scalar) const {
    return Vector2(this->getX() * scalar, this->getY() * scalar);
}

float Vector2::cross(const Vector2& other) const {
    return x * other.getY() - y * other.getX();
}
