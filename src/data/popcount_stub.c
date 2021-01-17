#include <stdint.h>
#include <caml/mlvalues.h>

intnat cc_popcount_native(uint64_t v) {
  return __builtin_popcountll (v);
}

CAMLprim value cc_popcount(value v) {
  return Val_long (__builtin_popcountll (Int64_val (v)));
}
