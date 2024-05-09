
namespace shapes {
  class Square {
  private:
    double sideLength;
  public:
    Square();
    Square(double length);
    double getSideLength() const;
    ~Square();
  };
}

#include "square.h"
#include <iostream>
using namespace shapes;

Square::Square() : sideLength(0) {}

Square::Square(double length) : sideLength(length) {}

double Square::getSideLength() const {
  return sideLength;
}

Square::~Square() {
  std::cout << "Square object destroyed" << std::endl;
}

namespace shapes {
  class Triangle {
  private:
    double base;
    double height;
  public:
    Triangle();
    Triangle(double b, double h);
    double getBase() const;
    double getHeight() const;
    ~Triangle();
  };
}

#include "triangle.h"
#include <iostream>
using namespace shapes;

Triangle::Triangle() : base(0), height(0) {}

Triangle::Triangle(double b, double h) : base(b), height(h) {}

double Triangle::getBase() const {
  return base;
}

double Triangle::getHeight() const {
  return height;
}

Triangle::~Triangle() {
  std::cout << "Triangle object destroyed" << std::endl;
}

namespace shapes {
  class Circle {
  private:
    double radius;
  public:
    Circle();
    Circle(double r);
    double getRadius() const;
    ~Circle();
  };
}

#include "circle.h"
#include <iostream>
using namespace shapes;

Circle::Circle() : radius(0) {}

Circle::Circle(double r) : radius(r) {}

double Circle::getRadius() const {
  return radius;
}

Circle::~Circle() {
  std::cout << "Circle object destroyed" << std::endl;
}

namespace shapes {
  class Area {
  public:
    static double calculateArea(const Square& square);
    static double calculateArea(const Triangle& triangle);
    static double calculateArea(const Circle& circle);
  };
}

#include "area.h"
#include "square.h"
#include "triangle.h"
#include "circle.h"
#include <cmath>

namespace shapes {
  double Area::calculateArea(const Square& square) {
    return square.getSideLength() * square.getSideLength();
  }

  double Area::calculateArea(const Triangle& triangle) {
    return 0.5 * triangle.getBase() * triangle.getHeight();
  }

  double Area::calculateArea(const Circle& circle) {
    return 3.14159 * circle.getRadius() * circle.getRadius();
  }
}

#include "square.h"
#include "triangle.h"
#include "circle.h"
#include "area.h"
#include <iostream>
#include <string>

int main() {
  std::string input;
  while (true) {
    std::cout << "Options:" << std::endl;
    std::cout << "1. Calculate the area of a square" << std::endl;
    std::cout << "2. Calculate the area of a triangle" << std::endl;
    std::cout << "3. Calculate the area of a circle" << std::endl;
    std::cout << "4. Quit" << std::endl;
    std::cout << "Enter your choice: ";
    std::cin >> input;

    if (input == "1") {
      double length;
      std::cout << "Enter the side length of the square: ";
      std::cin >> length;
      shapes::Square square(length);
      std::cout << "Area of the square: " << shapes::Area::calculateArea(square) << std::endl;
    } else if (input == "2") {
      double base, height;
      std::cout << "Enter the base and height of the triangle: ";
      std::cin >> base >> height;
      shapes::Triangle triangle(base, height);
      std::cout << "Area of the triangle: " << shapes::Area::calculateArea(triangle) << std::endl;
    } else if (input == "3") {
      double radius;
      std::cout << "Enter the radius of the circle: ";
      std::cin >> radius;
      shapes::Circle circle(radius);
      std::cout << "Area of the circle: " << shapes::Area::calculateArea(circle) << std::endl;
    } else if (input == "4") {
      break;
    } else {
      std::cout << "Invalid option. Please try again." << std::endl;
    }
  }

  return ; 
}
