
#include <catch2/catch_test_macros.hpp>
#include <NyuTestUtil.hpp>

#include <VParityShift.h>


TEST_CASE("ParityShift, reset") {
  VParityShift ps;

  nyu::reset(ps);

  REQUIRE(ps.shiftReg == 0);

  ps.in = 1;
  nyu::tick(ps, 10);


  REQUIRE(ps.shiftReg == 0xFF);

  nyu::reset(ps);

  REQUIRE(ps.shiftReg == 0);
}
