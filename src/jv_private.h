#ifndef JV_PRIVATE
#define JV_PRIVATE

#include <limits.h>
#include <math.h>
#include "jv.h"

int jvp_number_cmp(jv, jv);
int jvp_number_is_nan(jv);

// Convert double to int, clamping to [INT_MIN, INT_MAX].
// Returns INT_MIN for NaN.
static inline int jvp_dtoi(double d) {
  if (d > INT_MAX) return INT_MAX;
  if (d < INT_MIN || isnan(d)) return INT_MIN;
  return (int)d;
}

#endif //JV_PRIVATE
