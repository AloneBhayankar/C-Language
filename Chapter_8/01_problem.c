// 1. Which of the following is used to appropriately read a multi-word string.
// 1. gets()
// 2. puts()
// 3. printf()
// 4. scanf()

// Answer: 1. gets()
// gets(): Can read a multi-word string (i.e., reads input until a newline is encountered).
// puts(): Used to output a string, not read it.
// printf(): Also used for output, not input.
// scanf(): Can read strings, but by default it stops at whitespace, so it doesn't properly handle multi-word strings unless special format specifiers are used.
// Note: gets() is deprecated and unsafe because it can cause buffer overflows. A safer alternative in modern C is fgets().