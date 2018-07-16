#include "curl_setup.h"

// Test fork modifications

void foo() {
  static_assert(SIZEOF_SIZE_T == sizeof(size_t), "");
  static_assert(SIZEOF_LONG == sizeof(long), "");
  static_assert(SIZEOF_SHORT == sizeof(short), "");
  static_assert(SIZEOF_INT == sizeof(int), "");
  static_assert(sizeof(ssize_t) == sizeof(size_t), "");
  static_assert(SIZEOF_TIME_T == sizeof(time_t), "");
}
