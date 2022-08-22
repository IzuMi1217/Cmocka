#include <stdarg.h>
#include <stddef.h>
#include <setjmp.h>
#include <stdint.h>

#include "cmocka.h"
#include "sample.h" // include the header file in order to use the functions in the source code

/* 

- Compile: gcc -o test unit-tests.c  -DTESTING  -L . -l cmocka-static
- Run: ./test

*/



// Setup for all tests, like `@BeforeAll` in JUnit4 
static int setup(void **state) {

}


// Tear down the memory allocated in heap
static int teardown(void **state) {
    free(*state);
    return 0;
}


static void some_test(void **state)
{
    (void) state; /* unused */
    assert_int_equal(42, func()); // very similar to JUnit in terms of usage and stylax, more resource can be found in README
}


int main(void)
{
    const struct CMUnitTest tests[] = {
        cmocka_unit_test(some_test, setup, teardown)
        // add more tests here
    };

    return cmocka_run_group_tests(tests, NULL, NULL);
}