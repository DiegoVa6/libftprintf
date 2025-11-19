# ft_printf

Reimplementation of a simplified version of the printf function for the **42** curriculum.
This project provides a custom implementation capable of printing formatted output using
variadic arguments, hexadecimal conversions, pointers, and basic numeric/string types.

> Project developed at **42 Telefónica** by **Diego Valladares Ortega**.

---

`ft_printf` is a static C library that recreates part of the functionality of the standard
C `printf` function. It handles formatted output parsing, type conversions, and printing
to the standard output.

Supported format specifiers:

`%c` — print a character

`%s` — print a string

`%p` — print a pointer in hexadecimal format

`%d` / `%i` — print a signed decimal integer

`%u` — print an unsigned decimal integer

`%x` / `%X` — print a number in lowercase/uppercase hexadecimal

`%%` — print a literal percent sign

The goal is to understand formatted output internals, manage `va_list`,
and implement type-safe printing without relying on libc's `printf`.

---
