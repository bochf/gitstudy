#include <vector>
#include <iostream>
#include <cstring>

char * flag(std::vector<char> v) {
  return &v[0];
}

int main(int argc, char * argv[]) {
  std::vector<char> v;
  if (argc > 1) {
    v.assign(argv[1], argv[1] + strlen(argv[1]));
  }

  v.push_back(0);
  std::cout << flag(v) << std::endl;

  return 0;
}
