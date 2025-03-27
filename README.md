# FT PRINTF

This project is pretty straightforward, recreate the printf fucntion. The implementation of variadic functions was key to achieve the desired result. 

This project is crucial for understanding function pointers, buffer management, and how formatted output works under the hood.

---

## Project Objective

> int ft_printf(const char *format, ...);

- Mimics the behavior of the standard printf() function.
- Handles various format specifiers to print different types of data.
- Uses variadic arguments (stdarg.h) to process multiple inputs.
- Must not use the real printf() or other similar functions.
- Output should be formatted correctly with proper alignment and width.

## Required Format Specifiers

| Specifier | Description |
|-----------|------------|
| `%c` | Print a **single character** |
| `%s` | Print a **string** |
| `%p` | Print a **memory address (pointer)** |
| `%d` | Print a **decimal (integer)** |
| `%i` | Print an **integer** |
| `%u` | Print an **unsigned integer** |
| `%x` | Print a **hexadecimal (lowercase)** |
| `%X` | Print a **hexadecimal (uppercase)** |
| `%%` | Print a **percent sign (`%`)** |


## Key Concepts & Challenges

- Variadic Functions (stdarg.h)
- ft_printf() must accept a variable number of arguments.
- Uses va_list, va_start(), va_arg(), and va_end().

## String Manipulation & Output Handling

- Uses write() system call for output.
- Must handle NULL strings properly.

## Number Conversion (itoa, utoa, hex, etc.)

- Convert integers and unsigned numbers to strings.
- Implement base conversions (decimal, hexadecimal).

## Memory Management

- Avoid memory leaks and buffer overflows.
- Must handle large inputs efficiently.

## Edge Cases & Error Handling

- Ensure proper width and precision handling.
- Handle NULL pointers and empty strings.

