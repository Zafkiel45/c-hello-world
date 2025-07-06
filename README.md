# Start Point

Getting started with `C` for study computer science. Study started on 7/3/2025 at 4:31 O'clock

## Small Project

Implemented the project Fahreinheit => Celsious from Book C Programming language. Finished on 7/03/2025
at 9:21 PM.

## Celsius to Fahrenheit

implemented the opposite project of fahrenheit to celsius from book C programming language.
Finished on 07/04/2024 at 10:00 AM.

## Reverse Celsius

Implemented a small project to print celsius to fahrenheit from top to bottom instead of bottom to top.
Finished on 07/04/2025 at 10:05 AM.

## Symbolic Constants

07/04/2025 at 10:20 AM

I learned about Symbolic Constants. A way to improve readibility for "magical numbers".
A value dropped without a name is a bad practice, because the readibility will be poor for future readers.

Conventionally, the `symbolic constants` are wrote in uppercase. It cannot have a semicolon in the end of line.

When the compile finds a name occurence for some `symbolic constants`, the name will be subistuted by the value associated to name.

Example symbolic contants:

```c
#define FAVORITE_ANIME "Sousou no Frieren"
#define FAVORITE_GAME  "Darksouls Remastered" 
#define FAVORITE_MANGA "Vagabond" 
```

## Copying files

The functions from `stdion.h`, `getchar` and `putchar` allows me to get the next character and print it easily. The `EOF` represent the end of line, the stop condition.

`EOF` is an integer `-1`. The process is a bit complex. But, below is a simple algorithm as C read characters from memory.

- You input something using a keyboard.
- All characters are store in memory.
- The "C" get the bits from character in memory
- parse it into integer. This integer is a representation of character in ASCII. For example, `'a'` is `97`.
- Print it.

I know, the "C" language does not get the bits in memory. There are many tools, pointers and etc... But, I have not reach this topic yet.
