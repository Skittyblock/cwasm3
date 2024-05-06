// implementation of `m3_Yield` that will yield for us after calling `set_should_yield_next`,
// essentially just stopping the current execution.

#include "yield.h"

__thread _Bool should_yield_next = 0;

void set_should_yield_next(void) {
    should_yield_next = 1;
}

M3Result m3_Yield(void) {
    if (should_yield_next) {
        should_yield_next = 0;
        return m3Err_trapAbort;
    } else {
        return m3Err_none;
    }
}
