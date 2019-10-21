#include <assert.h>

#include <rexo.h>

static int step = 0;

RX_TEST_CASE(my_test_suite, my_test_case)
{
    ++step;
    assert(step == 2);
}

int
main(int argc, const char **argv)
{
    ++step;
    assert(step == 1);

    assert(rx_run(argc, argv, 0, NULL) == RX_SUCCESS);

    ++step;
    assert(step == 3);

    return 0;
}