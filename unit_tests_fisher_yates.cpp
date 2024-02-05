#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "fisher_yates.h"

int array0[] = {};
int array1[] = {-1, 1};

int first1 = -99;
int second1 = 4;
int save_first1 = first1;
int save_second1 = second1;

TEST_CASE("fisher-yates") {

    SUBCASE("swap tests") {
        
        swap(&first1, &second1);
        CHECK_EQ(save_first1, second1);
        CHECK_EQ(save_second1, first1);

        // swapping back test
        swap(&first1, &second1);
        CHECK_EQ(save_first1, first1);
        CHECK_EQ(save_second1, second1);

        // array-swapping
        swap(&array1[0], &array1[1]);
        CHECK_EQ(array1[1], -1);
        CHECK_EQ(array1[0], 1);

        // array-swapping back
        swap(&array1[0], &array1[1]);
        CHECK_EQ(array1[1], 1);
        CHECK_EQ(array1[0], -1);

        swap(nullptr, nullptr); // would love to learn about exceptions to handle stuff like this
    };

    SUBCASE("pseudo-random") {


    };




}

