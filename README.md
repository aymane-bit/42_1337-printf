# ft_printf

**Description:**

`ft_printf` is a project from 42 School that re-implements the standard C library function `printf`. This function allows for formatted output, providing a versatile way to print text to the standard output.

**Features:**

- Modular design for easy extensibility.
- Supports variadic arguments using `va_list`.
- Handles various format specifiers for different data types.

**Getting Started:**

1. Clone the repository:

    ```bash
    https://github.com/aymane-bit/42_1337-printf.git
    ```

2. Navigate to the project directory:

    ```bash
    cd 42_1337-printf/
    ```

3. Build the project:

    ```bash
    make
    ```

**Usage:**

Include the `ft_printf.h` header in your C file:

```c
#include "ft_printf.h"

Use the ft_printf function as you would use the standard printf:

int main() {
    ft_printf("Hello, %s!\n", "world");
    return 0;
}


Supported Format Specifiers:

%c: Character
%s: String
%d, %i: Integer
%u: Unsigned Integer
%x, %X: Hexadecimal
%p: Pointer
%f: Floating-point


Contributions are welcome! If you find a bug or have a suggestion, please open an issue or submit a pull request.
