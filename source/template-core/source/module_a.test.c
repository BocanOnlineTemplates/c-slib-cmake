////////////////////////////////////////////////////////////////////////////////
// organization: Bocan Online Templates
// author: Matthew Buchanan
//
// project: c-slib-cmake
// file: module_a.test.c
// license: The Unlicense
////////////////////////////////////////////////////////////////////////////////
#include <assert.h>
#include <stdio.h>

int main(void) {

    printf("Running tests...\n");

    assert(1 + 1 == 2);

    printf("All tests passed.\n");
    return 0;
}
