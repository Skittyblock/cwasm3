#ifndef yield_h
#define yield_h

#include <stdio.h>
#include "wasm3.h"

void set_should_yield_next(void);
M3Result m3_Yield(void);

#endif /* yield_h */
