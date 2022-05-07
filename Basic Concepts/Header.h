// All header (.h) files start with "#pragma once":
#pragma once

// A class is defined with the `class` keyword, the name
// of the class, curly braces, and a required semicolon
// at the end:
class Cube 
{
  public:  // Public members:
    double getVolume();
    double getSurfaceArea();
    void setLength(double length);

  private: // Private members:
    double length_;
};

// Include using: #include "Cube.h"

// #include "Cube.h"

// double Cube::getVolume() 
// {
//   return length_ * length_ * length_;
// }

// double Cube::getSurfaceArea() 
// {
//   return 6 * length_ * length_;
// }

// void Cube::setLength(double length) 
// {
//   length_ = length;
// }

// Main file

// #include <iostream>
// #include "Cube.h"

// int main() 
// {
//   Cube c;

//   c.setLength(3.48);
//   double volume = c.getVolume();
//   std::cout << "Volume: " << volume << std::endl;

//   return 0;
// }