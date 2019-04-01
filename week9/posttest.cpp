#include <iostream>
#include <cstdlib>

double postfixEval(char[]);


int main()
{

  char corndog[] = {'6', ' ', '1', '.', '2',  ' ', '5', ' ', '+' , ' ', '*'};
  int i = 0;

  while (corndog[i] != '\0')
    {
      std::cout << corndog[i] << "\n";
      i++;
    }
  
  std::cout << "Result: " << postfixEval(corndog);

  return 0;

}
