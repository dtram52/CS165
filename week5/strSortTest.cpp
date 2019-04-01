
#include <iostream>
#include <string>
using namespace std;

void stringSort(std::string[], int);

int main()
{

  const int ARRAY_SIZE = 7;
  string corndogs[ARRAY_SIZE];

  corndogs[0] = "Zebras";
  corndogs[1] = "Beans";
  corndogs[2] = "bacon";
  corndogs[3] = "zebras";
  corndogs[4] = "alligator";
  corndogs[5] = "Alligatorm";
  corndogs[6] = "alligatorl";

  stringSort(corndogs, ARRAY_SIZE);

  for (int i = 0; i < ARRAY_SIZE; i++)
    {
      cout << corndogs[i] << '\n';
    }

  return 0;
}
 	
