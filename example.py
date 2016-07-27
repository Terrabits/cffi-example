#!/usr/bin/env python
from cffi import FFI

ffi = FFI()
ffi.cdef("""
void foo(char *string, const int LENGTH);
""")
C = ffi.dlopen("./c/libfoo.so")

string = b' '*20
C.foo(string, len(string))
print(string)
