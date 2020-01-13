#include <template/methods.h>
#include <template/sub_methods.h>
#include <iostream>

int add_three_number(int a, int b, int c) {
  return add_two_number(a, add_two_number(b, c));
}

void display_vector(const std::vector<int>& vect) {
  for (auto& element: vect) {
    std::cout << element << " ";
  }
  std::cout << '\n';
}
