#include "catch.hpp"
#include "functions_to_implement.cpp"

TEST_CASE("RemoveTwos returns odd", "[odd]")
{
  REQUIRE(RemoveTwos(2) == 1);
  REQUIRE(RemoveTwos(16) == 1);
  REQUIRE(RemoveTwos(18) == 9);
}
