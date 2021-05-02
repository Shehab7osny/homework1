#include "catch2/catch2.hpp"
#include "fc_scara.h"


/*
    testing the init function
*/
TEST_CASE("dimensions should follow imposed constraints so","[fc_scara]"){

    REQUIRE(fc_scara_init(30, 190, 12, -30, -40, 150, 200) != NULL);

}