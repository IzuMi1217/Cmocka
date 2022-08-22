#include <stdarg.h>
#include <stddef.h>
#include <setjmp.h>
#include <stdint.h>

#include "cmocka.h"
#include "sample.h" // include the header file in order to use the functions in the source code

/* 
Compile: gcc -o test unit-tests.c  -DTESTING  -L . -l cmocka-static
Run: ./test

*/
static void some_test(void **state)
{
    assert_int_equal(42, func()); // very similar to JUnit in terms of usage and stylax, more resource can be found in README
}


int main(void)
{
    const struct CMUnitTest tests[] = {
        cmocka_unit_test(some_test), // add more tests here
    };

    return cmocka_run_group_tests(tests, NULL, NULL);
}