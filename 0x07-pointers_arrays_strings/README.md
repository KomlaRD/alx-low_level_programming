# 0x07. C - Even more pointers, arrays and strings

This project is about pointers, arrays and strings.

The following prototypes were used to complete the assignments for this project.

1. Write a function that fills memory with a constant byte: `char *_memset(char *s, char b, unsigned int n);`
2. Write a function that copies memory area: `char *_memcpy(char *dest, char *src, unsigned int n);`
3. Write a function that locates a character in a string: `char *_strchr(char *s, char c);`
4. Write a function that gets the length of a prefix substring: `unsigned int _strspn(char *s, char *accept);`
5. Write a function that searches a string for any of a set of bytes: `char *_strpbrk(char *c, char *accept);`
6. Write a function that locates a substring: `char *_strstr(char *haystack, char *needle);`
7. Write a function that prints the chessboard: `void print_chessboard(char (*a)[8]);`
8. Write a function that prints the sum of the two diagonals of a square matrix of integers: `void print_diagsums(int *a, int size);`

## Advanced tasks
9. Write a function that sets the value of a pointer to a char: `void set_string(char **s, char *to);`
10. Create a file that contains the password for the crackme2 executable:

```
- File should contain the exact password, no new line, no extra space
- ltrace, ldd, gdb and objdump can help
- You may need openssl library to run crackme2: `sudo apt install libssl-dev`
- Edit the source list: sudo nano /etc/apt/sources.list to add the following:
deb http://security.ubuntu.com/ubuntu xenial-security main then sudo apt update and sudo apt install libssl1.0.0
```
