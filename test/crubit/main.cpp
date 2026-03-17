#include <iostream>

#include "rust_lib.h"

int main() {
  std::cout << "Successfully linked crubit generated C++ api: "
            << rust_lib::add(1, 2) << std::endl;
  return 0;
}
