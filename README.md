# Convert Little Endian to Big Endian
U can try this C code
```c
  int value;
  printf("size=%d\n",sizeof(value));
```
Output is **"4"**  
Now U know that integers is 4 Bytes  
And Range is `0x00000000` ~ `0xFFFFFFFF`  
  
  
  
_How do we complete the conversion from 0x12345678 to 0x78563412?_  
_The answer is in the main.c_
