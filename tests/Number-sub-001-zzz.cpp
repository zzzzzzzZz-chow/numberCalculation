#include <number.h>
#include "assert.h"

int main() {
  ASSERT((Number{"1"} - Number{"1"}).num, "0");
  ASSERT((Number{"1000000000"} - Number{"1"}).num, "999999999");
  for(int i = -10000; i < 10000; ++i) {
    for(int j = -10000; j < 10000; ++j) {
      ASSERT((Number{std::to_string(i)} - Number{std::to_string(j)}).num, std::to_string(i - j));
    }
  }
  return 0;
}
