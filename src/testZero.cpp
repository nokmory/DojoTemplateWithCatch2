#include "catch2/catch_all.hpp"

TEST_CASE("failed_succesfully")
{
  REQUIRE(true == false);
}