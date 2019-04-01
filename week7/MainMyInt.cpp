#include <iostream>
#include "MyInteger.hpp"


int main()
{

  MyInteger obj1(17);
  MyInteger obj2 = obj1;
  std::cout << obj1.getMyInt() << std::endl;
  std::cout << obj2.getMyInt() << std::endl;
  
  obj2.setMyInt(9);
  std::cout << obj1.getMyInt() << std::endl;
  std::cout << obj2.getMyInt() << std::endl;

  MyInteger obj3(42);
  obj2 = obj3;
  std::cout << obj2.getMyInt() << std::endl;
  std::cout << obj3.getMyInt() << std::endl;

  obj3.setMyInt(1);
  std::cout << obj2.getMyInt() << std::endl;
  std::cout << obj3.getMyInt() << std::endl;

  std::cout << std::endl << "The output should be:" << std::endl;
  std::cout << std::endl << "17\n17\n17\n9\n42\n42\n42\n1\n";

  MyInteger obj5(100);

  obj1 = obj2 = obj5;

  std::cout << "\nShould be 100:   " << obj1.getMyInt() << std::endl;
   
  return 0;
}
