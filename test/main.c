#define CTEST_MAIN

#include "ctest.h"
#include "ttt.h"

CTEST(win_check, correct_win_check)
{
    int arr[3][3];
    for(int i = 0; i < 3; i++)
        arr[i][i] = 1;
    int result = test_for_win(0, 0, arr);
    int expected = 1;
    ASSERT_EQUAL(result, expected);
}

CTEST(win_check, incorrect_win_check)
{
    int arr[3][3];
        arr[2][1] = 1;
    int result = test_for_win(1, 1, arr);
    int expected = 0;
    ASSERT_EQUAL(result, expected);
}

int main(int argc, const char** argv)
{
    return ctest_main(argc, argv);
}
