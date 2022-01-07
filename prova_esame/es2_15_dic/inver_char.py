#!/usr/bin/env python3

def invert_char(c1):
    res = ord('Z') - (ord(c1)-ord('a'))
    print(chr(res))


c_1 = 'y'
invert_char(c_1)
