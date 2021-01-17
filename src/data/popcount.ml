external popcount_stub : (int64[@unboxed]) -> (int[@untagged])
  = "cc_popcount" "cc_popcount_native" [@@noalloc]
