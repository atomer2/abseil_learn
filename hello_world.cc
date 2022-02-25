#include <iostream>
#include <string>
#include <vector>
#include "absl/container/btree_map.h"

int main() {
  absl::btree_map<int, std::string> ducks = {
      {2, "dewey"},
      {1, "huey"},
      {3, "louie"},
  };

  // Prints "huey, dewey, louie "
  for (const auto &n : ducks) {
    std::cout << n.second << ", ";
  }
}
