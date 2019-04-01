#include <iostream>
#include "Rectangle.hpp"
#include "Square.hpp"


int main()
{
  Square test(3);

  Rectangle test1(3.0,5.0);

  test1.setWidth(6.0);
  test.setWidth(4.0);

  std::cout << test.area() << std::endl << test1.area();

  
  return 0;
}
