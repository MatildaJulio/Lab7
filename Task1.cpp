Rectangle.h:
#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle {
private:
 float length;
 float width;

public:
 Rectangle();
 ~Rectangle();

 void setLength(float len);
 void setWidth(float wid);

 float getLength();
 float getWidth();

 float calculateArea();
};

#endif
Rectangle.cpp:
#include "Rectangle.h"

Rectangle::Rectangle() {
 length = 0.0;
 width = 0.0;
}

Rectangle::~Rectangle() {
}

void Rectangle::setLength(float len) {
 length = len;
}

void Rectangle::setWidth(float wid) {
 width = wid;
}

float Rectangle::getLength() {
 return length;
}

float Rectangle::getWidth() {
 return width;
}

float Rectangle::calculateArea() {
 return length * width;
}
main.cpp:
#include
#include "Rectangle.h"

int main() {
 Rectangle rectangle;

 float length, width;

 std::cout << "Enter the length of the rectangle: ";
 std::cin >> length;
 rectangle.setLength(length);

 std::cout << "Enter the width of the rectangle: ";
 std::cin >> width;
 rectangle.setWidth(width);

 float area = rectangle.calculateArea();

 std::cout << "The area of the rectangle is: " << area << std::endl;

 return 0;
}
