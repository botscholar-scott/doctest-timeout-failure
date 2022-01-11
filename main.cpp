#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest/doctest.h"

void foo() {
    for(int inx=0; inx < 500000; inx++)
        std::cout << "." ;
    std::cout << "\n";
}


TEST_SUITE("My TestSuite") {

TEST_CASE("timeout test"
              * doctest::description("shouldn't take more than 250ms")
              * doctest::timeout(0.25)) {
        foo();
        CHECK_FALSE(false);
    }
}

