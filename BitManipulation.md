## Bit Manipulation:
N = 6163<sub>10</sub> = (6×10<sup>3</sup>) + (1×10<sup>2</sup>) + (6×10<sup>1</sup>) + (3×10<sup>0</sup>)<br>
In base 2 (binary) instead of 10's power we represent in 2's power. To convert keep dividing number by two and append remainder to a string. In the end reverse the string.

AND = A.B<br>
OR = A + B<br>
NOT = 1 - A = !A<br>
XOR = A!B + !AB<br>

Moore's Law: <br>
!(A + B) = A!.B!<br>
!(A.B) = A! + B!

XNOR = !XOR = (A + B!).(A! + B)<br>
NOR = !OR = A!.B!<br>
NAND = !AND = A! + B!<br>

> If XOR of two numbers/string/any data is 0 then both are same.

If between two number there's a bit difference of exactly one by XOR then it is called Gray Code. It is used in signal detection to check if there's any wrong signal.
<center>

| Type          | Size (bit)   | Range                              |
| ------------- |:-------------|:-----------------------------------|
| Bit           | 1            | 0 or 1                             |
| Nibble        | 4            | 0 to 2<sup>4</sup>-1               |
| Byte          | 8            | 0 to 2<sup>8</sup>-1               |
| Word          | 16           | 0 to 2<sup>16</sup>-1              |
| Double        | 32           | 0 to 2<sup>32</sup>-1              |
| Qword         | 64           | 0 to 2<sup>64</sup>-1              |

</center>

Gb (Gigabits), GB (Gigabytes), Gib (10<sup>3</sup> bits), GiB (10<sup>3</sup> bytes)

Hexadecimals: **0x<span style="color:blue">AA</span><span style="color:red">BB</span><span style="color:green">CC</span><span style="color:orange">DD</span>**<br>
Different colors represent a byte (AA 1 byte). Nibble has 4 bits i.e. 2<sup>4</sup> so a hexadecimal value which is from 0-15 (10 - A, B, C, D, E, F)

Least Significant Bit (LSB) & Most Significant Bit (MSB): 99 in binary (MSB part)01100011(LSB part) so in MSB 01100011 in LSB 11000110<br>
Endiness (Storing data in memory) : Little Endian (LSB), Big Endian (MSB)
>We use LSB

Finding i<sup>th</sup> bit:<br>
```c++
X(1<<4) >> 4
output:
010x00
00010x
000x00
x
```

1's Complement: Toggling every bit ~<br>
2's Complement:<br>
-X = !X + 1<br>
X = !(-X-1)

<center>

| Decimal       | Binary       | Hexadecimal  | Decimal       | Binary       | Hexadecimal  |
| ------------- |:-------------|:-------------| :------------ |:-------------|:-------------|
| 0             | 0000         | 0x0          | 0             | 0000         | 0x9          |
| 1             | 0001         | 0x1          | -1            | 1111         | 0xA          |
| 2             | 0010         | 0x2          | -2            | 1110         | 0xB          |
| 3             | 0011         | 0x3          | -3            | 1101         | 0xC          |
| 4             | 0100         | 0x4          | -4            | 1011         | 0xD          |
| 5             | 0101         | 0x5          | -5            | 1011         | 0xE          |
| 6             | 0110         | 0x6          | -6            | 1010         | 0xF          |
| 7             | 0111         | 0x7          | -7            | 1001         | 0x7          |
| 8             | 1000         | 0x8          | -8            | 1000         | 0x8          |

1 in 8th first value means it's a negative number which is not true so range is -8 to 7 only
</center>

```c++
0000111110110011
// << 3 yields:
0111110110011000
// >> 3 yields:
0000000111110110

// Multiplication
i * 8; // normal
i << 3; // bitwise [8 = 2^3, so use 3]
 
// Division
i / 16; // normal
i >> 4; // bitwise [16 = 2^4, so use 4]
 
// Modulus
i % 4; // normal
i & 3; // bitwise [4 = 1 << 2, apply ((1 << 2) - 1), so use 3]
i % 2^i = n & (2^i - 1)

Bitwise shifts << >> shouldn't be used on negative numbers.
```
```c
/*
Booth's Multiplication Algo: (01011 x 01011)
   01011 x 1 =    01011
  010110 x 1 =   010110
 0101100 x 0 =  0000000
01011000 x 1 = 01011000
                1111001
*/

int mul(int a, int b)
{
    int ans = 0;
    for (int i = 0 ; i < 32; i++)
    {
        if (b & 1) ans += a;
        b = b>>1;
        a = a<<1;
    }
    return ans;
}
```
