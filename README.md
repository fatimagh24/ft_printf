# ft_printf 🖨️

## 🚀 Overview
**ft_printf** is a project where you recreate the standard C `printf` function from scratch.  
The goal is to handle formatted output for various data types while learning about **variadic functions**, **format specifiers**, and **low-level output management**.

---

## 🛠 Features
- Supports multiple format specifiers:
  - `%c` → character  
  - `%s` → string  
  - `%p` → pointer address  
  - `%d` / `%i` → signed integers  
  - `%u` → unsigned integers  
  - `%x` / `%X` → hexadecimal numbers  
  - `%%` → percent sign  
- Handles **flags, width, and precision** as in the standard `printf`.  
- Efficient memory management, no leaks.  
- Works with **variadic arguments** using `stdarg.h`.

---

## ⚡ Usage

```c
#include "ft_printf.h"

int main(void)
{
    ft_printf("Hello %s!\n", "World");
    ft_printf("Number: %d, Hex: %x\n", 42, 42);
    return 0;
}
