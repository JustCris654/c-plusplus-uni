#!/usr/bin/env python3

zero = 48
nine = 57

num = '0'
key = 3

res = (ord(num)-zero-key)%10+zero

print(res, chr(res))
