#include <catch2/catch.hpp>
#include <template/sub_methods.h>

SCENARIO("Testing my sub methods") {
  GIVEN("1 and 2") {
    WHEN("summing them") {
      THEN("the result is 3") {
        REQUIRE(add_two_number(1, 2));
      }
    }
  }
}
