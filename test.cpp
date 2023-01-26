#define CATCH_CONFIG_MAIN

#include "catch.hpp"
#include "functions_to_implement.cpp"

std::vector<int> multiples;
std::vector<int> squares;

TEST_CASE("RemoveTwos computed", "[odd]") {
  REQUIRE(RemoveTwos(1) == 1);
  REQUIRE(RemoveTwos(2) == 1);
  REQUIRE(RemoveTwos(16) == 1);
  REQUIRE(RemoveTwos(18) == 9);
}

TEST_CASE("Multiples computed", "[multiples]") {}
