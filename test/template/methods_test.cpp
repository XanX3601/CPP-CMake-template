#include <catch2/catch.hpp>
#include <template/methods.h>

SCENARIO("Test my method") {
  GIVEN("1, 2, and 3") {
    int a = 1;
    int b = 2;
    int c = 3;

    WHEN("summing them") {
      THEN("the result should be 3") {
        REQUIRE(add_three_number(a, b, c) == 6);
      }
    }
  }
}
