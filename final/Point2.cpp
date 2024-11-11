#include "Point2.h"

Point2::Point2() : x(0), y(0) {}
Point2::Point2(float x, float y) : x(x), y(y) {}

float Point2::getX() const { return x; }
float Point2::getY() const { return y; }

Vector2 Point2::sub(const Point2& other) const {
    return Vector2(x - other.x, y - other.y);
}

Point2 Point2::add(const Vector2& v) const {
    return Point2(x + v.getX(), y + v.getY());
}
