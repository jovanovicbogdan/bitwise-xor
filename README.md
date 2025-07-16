# Bitwise XOR

C implementation of using Bitwise XOR for finding a duplicate or a missing number in an array.

## XOR Rules

If we take a look at the XOR truth table:

| x | y | x ^ y |
| - | - | :---: |
| 1 | 1 |   0   |
| 1 | 0 |   1   |
| 0 | 1 |   1   |
| 0 | 0 |   0   |

This means that `x ^ x` will always equal to 0 and `x ^ 0` will always equals to x.

By following these rules we know for sure that duplicates will be excluded by themselves.

If we have an array `[ 1, 2, 3, 4, 4, 5 ]` and we apply the rules above we get:

```
a ^ b ^ c ^ d ^ d ^ e => a ^ b ^ c ^ 0 ^ e
```

we will get the duplicated number as it will equal to 0.

The same can be applied to find the missing number in the array.
