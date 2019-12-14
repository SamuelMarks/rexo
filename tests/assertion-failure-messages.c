#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <rexo.h>

#define ASSERT(x)                                                              \
    (void)(                                                                    \
        (x)                                                                    \
        || (printf(__FILE__ ":%d: assertion ‘" #x "’ failed\n", __LINE__), 0)  \
        || (abort(), 0))

RX_TEST_CASE(my_test_suite, all_check_failures_simple_msg)
{
    RX_CHECK(123 == 456, "hello, world!");
    RX_BOOL_CHECK_TRUE(123 == 456, "hello, world!");
    RX_BOOL_CHECK_FALSE(123 == 123, "hello, world!");
    RX_INT_CHECK_EQUAL(123, 456, "hello, world!");
    RX_INT_CHECK_NOT_EQUAL(123, 123, "hello, world!");
    RX_INT_CHECK_GREATER(123, 456, "hello, world!");
    RX_INT_CHECK_LESSER(456, 123, "hello, world!");
    RX_INT_CHECK_GREATER_OR_EQUAL(123, 456, "hello, world!");
    RX_INT_CHECK_LESSER_OR_EQUAL(456, 123, "hello, world!");
    RX_UINT_CHECK_EQUAL(123, 456, "hello, world!");
    RX_UINT_CHECK_NOT_EQUAL(123, 123, "hello, world!");
    RX_UINT_CHECK_GREATER(123, 456, "hello, world!");
    RX_UINT_CHECK_LESSER(456, 123, "hello, world!");
    RX_UINT_CHECK_GREATER_OR_EQUAL(123, 456, "hello, world!");
    RX_UINT_CHECK_LESSER_OR_EQUAL(456, 123, "hello, world!");
    RX_REAL_CHECK_EQUAL(1.23, 4.56, "hello, world!");
    RX_REAL_CHECK_NOT_EQUAL(1.23, 1.23, "hello, world!");
    RX_REAL_CHECK_GREATER(1.23, 4.56, "hello, world!");
    RX_REAL_CHECK_LESSER(4.56, 1.23, "hello, world!");
    RX_REAL_CHECK_GREATER_OR_EQUAL(1.23, 4.56, "hello, world!");
    RX_REAL_CHECK_LESSER_OR_EQUAL(4.56, 1.23, "hello, world!");
    RX_REAL_CHECK_EQUAL_FUZZY(1.23, 4.56, 0.001, "hello, world!");
    RX_REAL_CHECK_NOT_EQUAL_FUZZY(1.23, 1.23, 0.001, "hello, world!");
    RX_STR_CHECK_EQUAL("hello", "world!", "hello, world!");
    RX_STR_CHECK_NOT_EQUAL("hello", "hello", "hello, world!");
    RX_STR_CHECK_EQUAL_NO_CASE("hello", "world!", "hello, world!");
    RX_STR_CHECK_NOT_EQUAL_NO_CASE("hello", "hello", "hello, world!");
}

RX_TEST_CASE(my_test_suite, require_failure_simple_msg)
{
    RX_REQUIRE(123 == 456, "hello, world!");
}

RX_TEST_CASE(my_test_suite, bool_require_true_failure_simple_msg)
{
    RX_BOOL_REQUIRE_TRUE(123 == 456, "hello, world!");
}

RX_TEST_CASE(my_test_suite, bool_require_false_failure_simple_msg)
{
    RX_BOOL_REQUIRE_FALSE(123 == 123, "hello, world!");
}

RX_TEST_CASE(my_test_suite, int_require_equal_failure_simple_msg)
{
    RX_INT_REQUIRE_EQUAL(123, 456, "hello, world!");
}

RX_TEST_CASE(my_test_suite, int_require_not_equal_failure_simple_msg)
{
    RX_INT_REQUIRE_NOT_EQUAL(123, 123, "hello, world!");
}

RX_TEST_CASE(my_test_suite, int_require_greater_failure_simple_msg)
{
    RX_INT_REQUIRE_GREATER(123, 456, "hello, world!");
}

RX_TEST_CASE(my_test_suite, int_require_lesser_failure_simple_msg)
{
    RX_INT_REQUIRE_LESSER(456, 123, "hello, world!");
}

RX_TEST_CASE(my_test_suite, int_require_greater_or_equal_failure_simple_msg)
{
    RX_INT_REQUIRE_GREATER_OR_EQUAL(123, 456, "hello, world!");
}

RX_TEST_CASE(my_test_suite, int_require_lesser_or_equal_failure_simple_msg)
{
    RX_INT_REQUIRE_LESSER_OR_EQUAL(456, 123, "hello, world!");
}

RX_TEST_CASE(my_test_suite, uint_require_equal_failure_simple_msg)
{
    RX_UINT_REQUIRE_EQUAL(123, 456, "hello, world!");
}

RX_TEST_CASE(my_test_suite, uint_require_not_equal_failure_simple_msg)
{
    RX_UINT_REQUIRE_NOT_EQUAL(123, 123, "hello, world!");
}

RX_TEST_CASE(my_test_suite, uint_require_greater_failure_simple_msg)
{
    RX_UINT_REQUIRE_GREATER(123, 456, "hello, world!");
}

RX_TEST_CASE(my_test_suite, uint_require_lesser_failure_simple_msg)
{
    RX_UINT_REQUIRE_LESSER(456, 123, "hello, world!");
}

RX_TEST_CASE(my_test_suite, uint_require_greater_or_equal_failure_simple_msg)
{
    RX_UINT_REQUIRE_GREATER_OR_EQUAL(123, 456, "hello, world!");
}

RX_TEST_CASE(my_test_suite, uint_require_lesser_or_equal_failure_simple_msg)
{
    RX_UINT_REQUIRE_LESSER_OR_EQUAL(456, 123, "hello, world!");
}

RX_TEST_CASE(my_test_suite, real_require_equal_failure_simple_msg)
{
    RX_REAL_REQUIRE_EQUAL(1.23, 4.56, "hello, world!");
}

RX_TEST_CASE(my_test_suite, real_require_not_equal_failure_simple_msg)
{
    RX_REAL_REQUIRE_NOT_EQUAL(1.23, 1.23, "hello, world!");
}

RX_TEST_CASE(my_test_suite, real_require_greater_failure_simple_msg)
{
    RX_REAL_REQUIRE_GREATER(1.23, 4.56, "hello, world!");
}

RX_TEST_CASE(my_test_suite, real_require_lesser_failure_simple_msg)
{
    RX_REAL_REQUIRE_LESSER(4.56, 1.23, "hello, world!");
}

RX_TEST_CASE(my_test_suite, real_require_greater_or_equal_failure_simple_msg)
{
    RX_REAL_REQUIRE_GREATER_OR_EQUAL(1.23, 4.56, "hello, world!");
}

RX_TEST_CASE(my_test_suite, real_require_lesser_or_equal_failure_simple_msg)
{
    RX_REAL_REQUIRE_LESSER_OR_EQUAL(4.56, 1.23, "hello, world!");
}

RX_TEST_CASE(my_test_suite, real_require_equal_fuzzy_failure_simple_msg)
{
    RX_REAL_REQUIRE_EQUAL_FUZZY(1.23, 4.56, 0.001, "hello, world!");
}

RX_TEST_CASE(my_test_suite, real_require_not_equal_fuzzy_failure_simple_msg)
{
    RX_REAL_REQUIRE_NOT_EQUAL_FUZZY(1.23, 1.23, 0.001, "hello, world!");
}

RX_TEST_CASE(my_test_suite, str_require_equal_failure_simple_msg)
{
    RX_STR_REQUIRE_EQUAL("hello", "world!", "hello, world!");
}

RX_TEST_CASE(my_test_suite, str_require_not_equal_failure_simple_msg)
{
    RX_STR_REQUIRE_NOT_EQUAL("hello", "hello", "hello, world!");
}

RX_TEST_CASE(my_test_suite, str_require_equal_no_case_failure_simple_msg)
{
    RX_STR_REQUIRE_EQUAL_NO_CASE("hello", "world!", "hello, world!");
}

RX_TEST_CASE(my_test_suite, str_require_not_equal_no_case_failure_simple_msg)
{
    RX_STR_REQUIRE_NOT_EQUAL_NO_CASE("hello", "hello", "hello, world!");
}

RX_TEST_CASE(my_test_suite, all_check_failures_format_msg)
{
    RX_CHECK(123 == 456, "hello, %s", "world!");
    RX_BOOL_CHECK_TRUE(123 == 456, "hello, %s", "world!");
    RX_BOOL_CHECK_FALSE(123 == 123, "hello, %s", "world!");
    RX_INT_CHECK_EQUAL(123, 456, "hello, %s", "world!");
    RX_INT_CHECK_NOT_EQUAL(123, 123, "hello, %s", "world!");
    RX_INT_CHECK_GREATER(123, 456, "hello, %s", "world!");
    RX_INT_CHECK_LESSER(456, 123, "hello, %s", "world!");
    RX_INT_CHECK_GREATER_OR_EQUAL(123, 456, "hello, %s", "world!");
    RX_INT_CHECK_LESSER_OR_EQUAL(456, 123, "hello, %s", "world!");
    RX_UINT_CHECK_EQUAL(123, 456, "hello, %s", "world!");
    RX_UINT_CHECK_NOT_EQUAL(123, 123, "hello, %s", "world!");
    RX_UINT_CHECK_GREATER(123, 456, "hello, %s", "world!");
    RX_UINT_CHECK_LESSER(456, 123, "hello, %s", "world!");
    RX_UINT_CHECK_GREATER_OR_EQUAL(123, 456, "hello, %s", "world!");
    RX_UINT_CHECK_LESSER_OR_EQUAL(456, 123, "hello, %s", "world!");
    RX_REAL_CHECK_EQUAL(1.23, 4.56, "hello, %s", "world!");
    RX_REAL_CHECK_NOT_EQUAL(1.23, 1.23, "hello, %s", "world!");
    RX_REAL_CHECK_GREATER(1.23, 4.56, "hello, %s", "world!");
    RX_REAL_CHECK_LESSER(4.56, 1.23, "hello, %s", "world!");
    RX_REAL_CHECK_GREATER_OR_EQUAL(1.23, 4.56, "hello, %s", "world!");
    RX_REAL_CHECK_LESSER_OR_EQUAL(4.56, 1.23, "hello, %s", "world!");
    RX_REAL_CHECK_EQUAL_FUZZY(1.23, 4.56, 0.001, "hello, %s", "world!");
    RX_REAL_CHECK_NOT_EQUAL_FUZZY(1.23, 1.23, 0.001, "hello, %s", "world!");
    RX_STR_CHECK_EQUAL("hello", "world!", "hello, %s", "world!");
    RX_STR_CHECK_NOT_EQUAL("hello", "hello", "hello, %s", "world!");
    RX_STR_CHECK_EQUAL_NO_CASE("hello", "world!", "hello, %s", "world!");
    RX_STR_CHECK_NOT_EQUAL_NO_CASE("hello", "hello", "hello, %s", "world!");
}

RX_TEST_CASE(my_test_suite, require_failure_format_msg)
{
    RX_REQUIRE(123 == 456, "hello, %s", "world!");
}

RX_TEST_CASE(my_test_suite, bool_require_true_failure_format_msg)
{
    RX_BOOL_REQUIRE_TRUE(123 == 456, "hello, %s", "world!");
}

RX_TEST_CASE(my_test_suite, bool_require_false_failure_format_msg)
{
    RX_BOOL_REQUIRE_FALSE(123 == 123, "hello, %s", "world!");
}

RX_TEST_CASE(my_test_suite, int_require_equal_failure_format_msg)
{
    RX_INT_REQUIRE_EQUAL(123, 456, "hello, %s", "world!");
}

RX_TEST_CASE(my_test_suite, int_require_not_equal_failure_format_msg)
{
    RX_INT_REQUIRE_NOT_EQUAL(123, 123, "hello, %s", "world!");
}

RX_TEST_CASE(my_test_suite, int_require_greater_failure_format_msg)
{
    RX_INT_REQUIRE_GREATER(123, 456, "hello, %s", "world!");
}

RX_TEST_CASE(my_test_suite, int_require_lesser_failure_format_msg)
{
    RX_INT_REQUIRE_LESSER(456, 123, "hello, %s", "world!");
}

RX_TEST_CASE(my_test_suite, int_require_greater_or_equal_failure_format_msg)
{
    RX_INT_REQUIRE_GREATER_OR_EQUAL(123, 456, "hello, %s", "world!");
}

RX_TEST_CASE(my_test_suite, int_require_lesser_or_equal_failure_format_msg)
{
    RX_INT_REQUIRE_LESSER_OR_EQUAL(456, 123, "hello, %s", "world!");
}

RX_TEST_CASE(my_test_suite, uint_require_equal_failure_format_msg)
{
    RX_UINT_REQUIRE_EQUAL(123, 456, "hello, %s", "world!");
}

RX_TEST_CASE(my_test_suite, uint_require_not_equal_failure_format_msg)
{
    RX_UINT_REQUIRE_NOT_EQUAL(123, 123, "hello, %s", "world!");
}

RX_TEST_CASE(my_test_suite, uint_require_greater_failure_format_msg)
{
    RX_UINT_REQUIRE_GREATER(123, 456, "hello, %s", "world!");
}

RX_TEST_CASE(my_test_suite, uint_require_lesser_failure_format_msg)
{
    RX_UINT_REQUIRE_LESSER(456, 123, "hello, %s", "world!");
}

RX_TEST_CASE(my_test_suite, uint_require_greater_or_equal_failure_format_msg)
{
    RX_UINT_REQUIRE_GREATER_OR_EQUAL(123, 456, "hello, %s", "world!");
}

RX_TEST_CASE(my_test_suite, uint_require_lesser_or_equal_failure_format_msg)
{
    RX_UINT_REQUIRE_LESSER_OR_EQUAL(456, 123, "hello, %s", "world!");
}

RX_TEST_CASE(my_test_suite, real_require_equal_failure_format_msg)
{
    RX_REAL_REQUIRE_EQUAL(1.23, 4.56, "hello, %s", "world!");
}

RX_TEST_CASE(my_test_suite, real_require_not_equal_failure_format_msg)
{
    RX_REAL_REQUIRE_NOT_EQUAL(1.23, 1.23, "hello, %s", "world!");
}

RX_TEST_CASE(my_test_suite, real_require_greater_failure_format_msg)
{
    RX_REAL_REQUIRE_GREATER(1.23, 4.56, "hello, %s", "world!");
}

RX_TEST_CASE(my_test_suite, real_require_lesser_failure_format_msg)
{
    RX_REAL_REQUIRE_LESSER(4.56, 1.23, "hello, %s", "world!");
}

RX_TEST_CASE(my_test_suite, real_require_greater_or_equal_failure_format_msg)
{
    RX_REAL_REQUIRE_GREATER_OR_EQUAL(1.23, 4.56, "hello, %s", "world!");
}

RX_TEST_CASE(my_test_suite, real_require_lesser_or_equal_failure_format_msg)
{
    RX_REAL_REQUIRE_LESSER_OR_EQUAL(4.56, 1.23, "hello, %s", "world!");
}

RX_TEST_CASE(my_test_suite, real_require_equal_fuzzy_failure_format_msg)
{
    RX_REAL_REQUIRE_EQUAL_FUZZY(1.23, 4.56, 0.001, "hello, %s", "world!");
}

RX_TEST_CASE(my_test_suite, real_require_not_equal_fuzzy_failure_format_msg)
{
    RX_REAL_REQUIRE_NOT_EQUAL_FUZZY(1.23, 1.23, 0.001, "hello, %s", "world!");
}

RX_TEST_CASE(my_test_suite, str_require_equal_failure_format_msg)
{
    RX_STR_REQUIRE_EQUAL("hello", "world!", "hello, %s", "world!");
}

RX_TEST_CASE(my_test_suite, str_require_not_equal_failure_format_msg)
{
    RX_STR_REQUIRE_NOT_EQUAL("hello", "hello", "hello, %s", "world!");
}

RX_TEST_CASE(my_test_suite, str_require_equal_no_case_failure_format_msg)
{
    RX_STR_REQUIRE_EQUAL_NO_CASE("hello", "world!", "hello, %s", "world!");
}

RX_TEST_CASE(my_test_suite, str_require_not_equal_no_case_failure_format_msg)
{
    RX_STR_REQUIRE_NOT_EQUAL_NO_CASE("hello", "hello", "hello, %s", "world!");
}

int
main(int argc, const char **argv)
{
    size_t i;
    rx_size test_case_count;
    struct rx_test_case *test_cases;

    (void)(argc);
    (void)(argv);

    rx_test_cases_enumerate(&test_case_count, NULL);
    test_cases
        = (struct rx_test_case *)malloc(sizeof *test_cases * test_case_count);
    if (test_cases == NULL) {
        printf("failed to allocate the test cases\n");
        return 1;
    }

    rx_test_cases_enumerate(&test_case_count, test_cases);
    for (i = 0; i < test_case_count; ++i) {
        size_t j;
        const struct rx_test_case *test_case;
        struct rx_summary summary;

        test_case = &test_cases[i];

        if (rx_summary_initialize(&summary, test_case) != RX_SUCCESS) {
            printf("failed to initialize a summary\n");
            return 1;
        }

        if (rx_test_case_run(&summary, test_case) != RX_SUCCESS) {
            printf("failed to run a test case\n");
            rx_summary_terminate(&summary);
            return 1;
        }

        for (j = 0; j < summary.failure_count; ++j) {
            ASSERT(strcmp(summary.failures[j].msg, "hello, world!") == 0);
        }

        rx_summary_terminate(&summary);
    }

    free(test_cases);
    return 0;
}
