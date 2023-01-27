#define CATCH_CONFIG_MAIN

#include <vector>

#include "catch.hpp"
#include "functions_to_implement.cpp"

std::vector<int> squares1{(int)pow(1, 1), (int)pow(2, 2), (int)pow(3, 3), (int)pow(4, 4), (int)pow(5, 5)};

TEST_CASE("RemoveTwos computed", "[odd]")
{
  REQUIRE(RemoveTwos(1) == 1);
  REQUIRE(RemoveTwos(2) == 1);
  REQUIRE(RemoveTwos(16) == 1);
  REQUIRE(RemoveTwos(18) == 9);
  REQUIRE(RemoveTwos(21) == 21);
}

TEST_CASE("Multiples computed", "[multiples]")
{
  REQUIRE(Multiples(1, 1) == std::vector<int>{1});
  REQUIRE(Multiples(2, 5) == std::vector<int>{2, 4, 6, 8, 10});
  REQUIRE(Multiples(3, 7) == std::vector<int>{3, 6, 9, 12, 15, 18, 21});
}

TEST_CASE("Squares computed", "[squares]")
{
  REQUIRE(SquaresUntil(5) == std::vector<long long>{(long long)pow(1, 1), (long long)pow(2, 2), (long long)pow(3, 3), (long long)pow(4, 4), (long long)pow(5, 5)});
  REQUIRE(SquaresUntil(7) == std::vector<long long>{(long long)pow(1, 1), (long long)pow(2, 2), (long long)pow(3, 3), (long long)pow(4, 4), (long long)pow(5, 5), (long long)pow(6, 6), (long long)pow(7, 7)});
  REQUIRE(SquaresUntil(12) == std::vector<long long>{(long long)pow(1, 1), (long long)pow(2, 2), (long long)pow(3, 3), (long long)pow(4, 4), (long long)pow(5, 5), (long long)pow(6, 6), (long long)pow(7, 7), (long long)pow(8, 8), (long long)pow(9, 9), (long long)pow(10, 10), (long long)pow(11, 11), (long long)pow(12, 12)});
}

TEST_CASE("Factorials computed", "[factorial]")
{
  REQUIRE(Factorial(0) == 1);
  REQUIRE(Factorial(1) == 1);
  REQUIRE(Factorial(3) == 6);
  REQUIRE(Factorial(5) == 120);
}
