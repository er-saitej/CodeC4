# Bitwise Operators
> Fastest operators in the computer
### Types of Operators
#### Binary AND - & - It is set if both bits are on
> 0&0 = 0
> 1&0 = 0
> 0&1 = 0
> 1&1 = 1
#### Binary OR - | - It is set if any bit is on
> 0|0 = 0
> 1|0 = 1
> 0|1 = 1
> 1|1 = 1
#### Binary XOR (Exclusive OR) - ^ - It is set if both bits are different
> 0^0 = 0
> 1^0 = 1
> 0^1 = 1
> 1^1 = 0
#### Binary One's Compliment - ~ - Flips 1's to 0's and 0's to 1's including most significant bits
> ~(bit)1 = 0
> ~(bit)0 = 1
> ~(int)1 = -2
> ~(int)0 = -1
#### Binary Left Shift - <<
> 5<<2
> 0000101 << 2 = 0010100 = 20
> 5<<2 = 5*(2**2) = 20
#### Binary Right Shift - >>
> 8>>2
> 0001000 >> 2 = 0000010 = 2
> 8/(2**2) = 2