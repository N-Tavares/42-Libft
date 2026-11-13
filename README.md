*This project has been created as part of the 42 curriculum by nunda-si.*

# Libft

## Description

**Libft** is the first project of the 42 curriculum: a custom C static library, `libft.a`, built from scratch and reusable in all future projects.

It reimplements standard libc functions (same prototypes and behaviour, prefixed with `ft_`), adds extra utilities for strings and file descriptors, and provides a small toolkit to manipulate singly linked lists.

---

**Goals**

- Learn how the standard C functions work.
- Practice pointers, dynamic memory allocation and memory-leak-free code.
- Follow the 42 Norm and compile cleanly with `-Wall -Wextra -Werror`.
- Build a library to reuse in later projects.

---

## Library Structure

### Part 1 – Libc functions

**Character checks**

| Function | Prototype | Behaviour |
|---|---|---|
| `ft_isalpha` | `int ft_isalpha(int c)` | 1 if `c` is a letter, 0 otherwise. |
| `ft_isdigit` | `int ft_isdigit(int c)` | 1 if `c` is a digit, 0 otherwise. |
| `ft_isalnum` | `int ft_isalnum(int c)` | 1 if `c` is a letter or digit, 0 otherwise. |
| `ft_isascii` | `int ft_isascii(int c)` | 1 if `c` is in the ASCII range, 0 otherwise. |
| `ft_isprint` | `int ft_isprint(int c)` | 1 if `c` is printable, 0 otherwise. |

**Character conversion**

| Function | Prototype | Behaviour |
|---|---|---|
| `ft_toupper` | `int ft_toupper(int c)` | Converts a lowercase letter to uppercase. |
| `ft_tolower` | `int ft_tolower(int c)` | Converts an uppercase letter to lowercase. |

**String manipulation**

| Function | Prototype | Behaviour |
|---|---|---|
| `ft_strlen` | `size_t ft_strlen(const char *s)` | Length of `s`, excluding the null terminator. |
| `ft_strlcpy` | `size_t ft_strlcpy(char *dst, const char *src, size_t size)` | Copies up to `size - 1` chars and null-terminates. Returns `ft_strlen(src)`. |
| `ft_strlcat` | `size_t ft_strlcat(char *dst, const char *src, size_t size)` | Appends `src` to `dst` within `size` bytes. Returns the length it tried to create. |
| `ft_strchr` | `char *ft_strchr(const char *s, int c)` | Pointer to the first occurrence of `c`, or `NULL`. |
| `ft_strrchr` | `char *ft_strrchr(const char *s, int c)` | Pointer to the last occurrence of `c`, or `NULL`. |
| `ft_strncmp` | `int ft_strncmp(const char *s1, const char *s2, size_t n)` | Compares at most `n` chars of two strings. |
| `ft_strnstr` | `char *ft_strnstr(const char *big, const char *little, size_t len)` | Finds `little` in the first `len` chars of `big`, or `NULL`. |

**Memory manipulation**

| Function | Prototype | Behaviour |
|---|---|---|
| `ft_memset` | `void *ft_memset(void *s, int c, size_t n)` | Fills `n` bytes with `c`. |
| `ft_bzero` | `void ft_bzero(void *s, size_t n)` | Sets `n` bytes to zero. |
| `ft_memcpy` | `void *ft_memcpy(void *dest, const void *src, size_t n)` | Copies `n` bytes (areas must not overlap). |
| `ft_memmove` | `void *ft_memmove(void *dest, const void *src, size_t n)` | Copies `n` bytes, safe for overlapping areas. |
| `ft_memchr` | `void *ft_memchr(const void *s, int c, size_t n)` | First occurrence of `c` in `n` bytes, or `NULL`. |
| `ft_memcmp` | `int ft_memcmp(const void *s1, const void *s2, size_t n)` | Compares `n` bytes of two memory areas. |

**Type conversion**

| Function | Prototype | Behaviour |
|---|---|---|
| `ft_atoi` | `int ft_atoi(const char *nptr)` | Converts the initial part of a string to `int`. |

**Memory allocation** (uses `malloc`)

| Function | Prototype | Behaviour |
|---|---|---|
| `ft_calloc` | `void *ft_calloc(size_t nmemb, size_t size)` | Allocates zero-initialised memory. If `nmemb` or `size` is 0, returns a unique pointer that can be passed to `free()`. |
| `ft_strdup` | `char *ft_strdup(const char *s)` | Allocated copy of `s`. |

### Part 2 – Additional functions

**String creation** (allocation with `malloc`)

| Function | Prototype | Behaviour |
|---|---|---|
| `ft_substr` | `char *ft_substr(char const *s, unsigned int start, size_t len)` | Allocated substring of `s` starting at `start`, at most `len` chars. |
| `ft_strjoin` | `char *ft_strjoin(char const *s1, char const *s2)` | New string: `s1` followed by `s2`. |
| `ft_strtrim` | `char *ft_strtrim(char const *s1, char const *set)` | Copy of `s1` without the chars of `set` at both ends. |
| `ft_split` | `char **ft_split(char const *s, char c)` | NULL-terminated array of strings split by `c`. Returns `NULL` and frees everything if any allocation fails. |

**Type conversion** (allocation with `malloc`)

| Function | Prototype | Behaviour |
|---|---|---|
| `ft_itoa` | `char *ft_itoa(int n)` | Allocated string of `n`, handling negative numbers. |

**String iteration**

| Function | Prototype | Behaviour |
|---|---|---|
| `ft_strmapi` | `char *ft_strmapi(char const *s, char (*f)(unsigned int, char))` | New string built by applying `f(index, char)` to each char. |
| `ft_striteri` | `void ft_striteri(char *s, void (*f)(unsigned int, char *))` | Applies `f(index, &char)` to each char, modifying `s` in place. |

**Output** (uses `write`)

| Function | Prototype | Behaviour |
|---|---|---|
| `ft_putchar_fd` | `void ft_putchar_fd(char c, int fd)` | Writes a char to `fd`. |
| `ft_putstr_fd` | `void ft_putstr_fd(char *s, int fd)` | Writes a string to `fd`. |
| `ft_putendl_fd` | `void ft_putendl_fd(char *s, int fd)` | Writes a string followed by `\n` to `fd`. |
| `ft_putnbr_fd` | `void ft_putnbr_fd(int n, int fd)` | Writes an integer to `fd`. |

### Part 3 – Linked list

```c
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;
```

- `content`: data stored in the node (`void *` allows any type).
- `next`: next node, or `NULL` for the last one.

**Creation**

| Function | Prototype | Behaviour |
|---|---|---|
| `ft_lstnew` | `t_list *ft_lstnew(void *content)` | Allocates a node with the given content and `next = NULL`. |

**Insertion**

| Function | Prototype | Behaviour |
|---|---|---|
| `ft_lstadd_front` | `void ft_lstadd_front(t_list **lst, t_list *new)` | Inserts `new` at the beginning of the list. |
| `ft_lstadd_back` | `void ft_lstadd_back(t_list **lst, t_list *new)` | Appends `new` at the end of the list. |

**Query**

| Function | Prototype | Behaviour |
|---|---|---|
| `ft_lstsize` | `unsigned int ft_lstsize(t_list *lst)` | Number of nodes. |
| `ft_lstlast` | `t_list *ft_lstlast(t_list *lst)` | Last node of the list. |

**Deletion** (memory freeing)

| Function | Prototype | Behaviour |
|---|---|---|
| `ft_lstdelone` | `void ft_lstdelone(t_list *lst, void (*del)(void *))` | Frees the node's content with `del`, then the node. Does not free the next node. |
| `ft_lstclear` | `void ft_lstclear(t_list **lst, void (*del)(void *))` | Frees a node and all its successors, then sets `*lst` to `NULL`. |

**Iteration and transformation**

| Function | Prototype | Behaviour |
|---|---|---|
| `ft_lstiter` | `void ft_lstiter(t_list *lst, void (*f)(void *))` | Applies `f` to each node's content. |
| `ft_lstmap` | `t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))` | New list from applying `f` to each content. Uses `del` and frees the new list if an allocation fails. |

---

## How Lists Work in Memory

Each node is allocated separately on the heap, and the content is allocated separately from the node:

```
head
 |
 v
[content|next] -> [content|next] -> [content|next] -> NULL
    |                 |                 |
    v                 v                 v
 "First"           "Second"          "Third"
```

## Instructions

```sh
make          # builds libft.a
make clean    # removes object files
make fclean   # removes object files and libft.a
make re       # rebuilds everything
```

Compiled with `cc -Wall -Wextra -Werror` and archived with `ar`. To use the library:

```sh
cc main.c -L. -lft -o program
```

---

## Resources

**References**

- `man` pages of the reimplemented functions (e.g. `man 3 memmove`)
- [GeeksforGeeks – C Programming Language Tutorial](https://www.geeksforgeeks.org/c/c-programming-language/)

**Use of AI**

AI was used as a learning aid, acting as a C programming teacher:

- To help me understand how the functions work.
- To help debug some functions.
