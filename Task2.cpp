#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle {
private:
    float length;
    float width;

public:
    Rectangle();
    Rectangle(float l, float w);
    ~Rectangle();

    void setLength(float l);
    void setWidth(float w);
    float getLength() const;
    float getWidth() const;
    float calculateArea() const;
};

#endif
Rectangle.cpp (Implementation file):
#include "Rectangle.h"
#include <iostream>

Rectangle::Rectangle() : length(0), width(0) {}

Rectangle::Rectangle(float l, float w) : length(l), width(w) {}

Rectangle::~Rectangle() {}

void Rectangle::setLength(float l) {
    length = l;
}

void Rectangle::setWidth(float w) {
    width = w;
}

float Rectangle::getLength() const {
    return length;
}

float Rectangle::getWidth() const {
    return width;
}

float Rectangle::calculateArea() const {
    return length * width;
}
Main.cpp:
#include <iostream>
#include "Rectangle.h"

int main() {
    Rectangle rect1;
    float length, width;

    std::cout << "Enter the length of the first rectangle: ";
    std::cin >> length;
    rect1.setLength(length);

    std::cout << "Enter the width of the first rectangle: ";
    std::cin >> width;
    rect1.setWidth(width);

    std::cout << "Area of the first rectangle: " << rect1.calculateArea() << std::endl;

    float length2, width2;
    std::cout << "Enter the length of the second rectangle: ";
    std::cin >> length2;

    std::cout << "Enter the width of the second rectangle: ";
    std::cin >> width2;

    Rectangle rect2(length2, width2);

    std::cout << "Area of the second rectangle: " << rect2.calculateArea() << std::endl;

    return 0;
}
