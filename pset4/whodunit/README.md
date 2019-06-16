https://docs.cs50.net/2018/x/psets/4/whodunit/whodunit.html

# Questions

## What's `stdint.h`?

stdint.h is a header file in the C library introduced in the C99 standard library to allow programmers to write more portable code by providing a set of typedefs that specify exact-width integer types, together with the defined minimum and maximum allowable values for each type, using macros.

## What's the point of using `uint8_t`, `uint32_t`, `int32_t`, and `uint16_t` in a program?

Used for defining the exact size of the int variable or an unsigned int variable, with the syntax intN_t and uintN_t which defines limits of integer types like 8, 32, 16 bits

## How many bytes is a `BYTE`, a `DWORD`, a `LONG`, and a `WORD`, respectively?

1, 4, 4, 2

## What (in ASCII, decimal, or hexadecimal) must the first two bytes of any BMP file be? Leading bytes used to identify file formats (with high probability) are generally called "magic numbers."

The file type; must be BM.

## What's the difference between `bfSize` and `biSize`?

bfSize | biSize
---------|---------
The size, in bytes, of the bitmap file.|The number of bytes required by the structure.

## What does it mean if `biHeight` is negative?

The bitmap is a top-down DIB and its origin is the upper-left corner.

## What field in `BITMAPINFOHEADER` specifies the BMP's color depth (i.e., bits per pixel)?

biBitCount

## Why might `fopen` return `NULL` in lines 24 and 32 of `copy.c`?

It will return if the infile and outfile is not specified as command line args

## Why is the third argument to `fread` always `1` in our code?

This is the number of elements, each one with a size of 1 byte.

## What value does line 63 of `copy.c` assign to `padding` if `bi.biWidth` is `3`?

3

## What does `fseek` do?

Sets the file position of the stream to the given offset. With a syntax ```int fseek(FILE *stream, long int offset, int whence)```

## What is `SEEK_CUR`?

Current position of the file pointer

## Whodunit?

it was Professor Plum with the candlestick in the library.
