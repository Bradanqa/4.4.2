#include <iostream>
#include <vector>
#include <algorithm>


int main()
{
   std::cout << "[IN]:" << std::endl;

   int n;
   std::cin >> n;

   std::vector<int> vault;
   std::vector<int> numbers;

   for (int i = 0; i < n; ++i)
   {
      int number;
      std::cin >> number;

      vault.push_back(number);
   }

   for (auto elem : vault)
   {
      if (std::find(numbers.begin(), numbers.end(), elem) == numbers.end())
      {
         numbers.push_back(elem);
      }
   }
   
   std::sort(numbers.begin(), numbers.end(), std::greater<int>());

   std::cout << "[OUT]:" << std::endl;

   for (int number : numbers)
   {
      std::cout << number << std::endl;
   }

   return 0;
}
