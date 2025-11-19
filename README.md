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

## 📁 Project Structure

```text
src/        # All ft_*.c files (implementations)
include/    # Public header: ft_printf.h
Makefile    # Builds the static library: libftprintf.a
```

🔧 Build Instructions

Clone the repository:
```text
git clone https://github.com/<TU_USUARIO>/libftprintf.git
cd libftprintf
```

Build the library:
```text
make
```

This will generate:
```text
./libftprintf.a
```

Clean object files:
```text
make clean
```

Remove objects + library:
```text
make fclean
```

Recompile everything:
```text
make re
```


🧪 Testing (Optional)

42 does not require official tests for this project,
but you can create simple tests such as:
```text
#include "ft_printf.h"

int main(void)
{
    ft_printf("Hello %s! Number: %d Hex: %x\n", "world", 42, 42);
    return 0;
}
```

Compile and run:
```text
cc tests/main.c -L. -lftprintf -Iinclude -o test_printf
./test_printf
```

Compare results with the original printf to validate correctness.


📚 Implemented Functionalities
**Core printing functions**

- `ft_printf`

- Parsing of format strings

- Handling of `va_list`

**Conversion handlers**

- Character output

- String output

- Signed/unsigned integer printing

- Hexadecimal conversion (lowercase & uppercase)

- Pointer address formatting

**Utility functions**

- Low-level printing helpers (`write`)

- Counting printed characters

- Integer-to-hex and integer-to-unsigned conversions


🧠 What I Learned

- How `printf` processes format strings internally

- Using `stdarg.h` and `va_list` for variadic functions

- Converting integers to different bases (decimal, hex)

- Manual implementation of printing logic without libc formatting

- Clean separation of modules in a small C library

- Building static archives with `ar`

- Writing structured, norm-compliant C code


📄 License

This project is licensed under the **MIT License**.
See the `LICENSE` file for more details.
