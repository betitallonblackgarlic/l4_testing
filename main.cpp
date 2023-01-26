#include "functions_to_implement.cpp"

int main() {
  // RemoveTwos int
  // Multiples std::vector<int>
  // SquaresUntil std::vector<int>
  int twos = RemoveTwos(92);
  std::vector<int> multiples = Multiples(3, 5);
  std::vector<int> squares = SquaresUntil(6);

  std::cout << twos << '\n';
  for (auto m : multiples) {
    std::cout << m << ' ';
  }
  std::cout << '\n';

  for (auto k : squares) {
    std::cout << k << ' ';
  }
  std::cout << std::endl;

  return 0;
}