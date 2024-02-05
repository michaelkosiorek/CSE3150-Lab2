#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"

#include "fisher_yates.h"

int array0[] = {};
int array1[] = {-1, 1};

int first = -99;
int second = 4;

swap(&first, &second);

TEST_CASE("fisher-yates") {

    SUBCASE("swap tests") {
        
        CHECK_EQ(save_first1, second1);

    };



}