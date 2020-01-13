#include <template/methods.h>
#include <vector>
#include <iostream>
#include <fmt/format.h>

int main() {
  std::cout << "Hello, world!\n";

  std::cout << "1 + 2 + 3 = " << add_three_number(1, 2, 3) << "\n";

  fmt::print("This is a {} of fmt\n", "test");

  std::vector<int> vect;
  vect.push_back(4);
  vect.push_back(5);
  vect.push_back(6);

  std::cout << "This is my vector: ";
  display_vector(vect);
}
