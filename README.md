*This project has been created as part of the 42 curriculum by nunda-si.*

## Description

**Libft** is the first project of the 42 curriculum: a custom C static library, `libft.a`, built from scratch and reusable in all future projects.

It reimplements standard libc functions (same prototypes and behaviour, prefixed with `ft_`), adds extra utilities for strings and file descriptors, and provides a small toolkit to manipulate singly linked lists.

**Goals**

- Learn how the standard C functions work.
- Practice pointers, dynamic memory allocation and memory-leak-free code.
- Follow the 42 Norm and compile cleanly with `-Wall -Wextra -Werror`.
- Build a library to reuse in later projects.

## Library Structure

### Part 1 – Libc functions

**Character checks**

```c
int ft_isalpha(int c);
int ft_isdigit(int c);
int ft_isalnum(int c);
int ft_isascii(int c);
int ft_isprint(int c);
```

**Character conversion**

```c
int ft_toupper(int c);
int ft_tolower(int c);
```

**String manipulation**

```c
size_t ft_strlen(const char *s);
size_t ft_strlcpy(char *dst, const char *src, size_t size);
size_t ft_strlcat(char *dst, const char *src, size_t size);
char *ft_strchr(const char *s, int c);
char *ft_strrchr(const char *s, int c);
int ft_strncmp(const char *s1, const char *s2, size_t n);
char *ft_strnstr(const char *big, const char *little, size_t len);
```

**Memory manipulation**

```c
void *ft_memset(void *s, int c, size_t n);
void ft_bzero(void *s, size_t n);
void *ft_memcpy(void *dest, const void *src, size_t n);
void *ft_memmove(void *dest, const void *src, size_t n);
void *ft_memchr(const void *s, int c, size_t n);
int ft_memcmp(const void *s1, const void *s2, size_t n);
```

**Type conversion**

```c
int ft_atoi(const char *nptr);
```

**Memory allocation** (uses `malloc`)

```c
void *ft_calloc(size_t nmemb, size_t size);
char *ft_strdup(const char *s);
```

### Part 2 – Additional functions

**String creation** (allocation with `malloc`)

```c
char *ft_substr(char const *s, unsigned int start, size_t len);
char *ft_strjoin(char const *s1, char const *s2);
char *ft_strtrim(char const *s1, char const *set);
char **ft_split(char const *s, char c);
```

**Type conversion** (allocation with `malloc`)

```c
char *ft_itoa(int n);
```

**String iteration**

```c
char *ft_strmapi(char const *s, char (*f)(unsigned int, char));
void ft_striteri(char *s, void (*f)(unsigned int, char *));
```

**Output** (uses `write`)

```c
void ft_putchar_fd(char c, int fd);
void ft_putstr_fd(char *s, int fd);
void ft_putendl_fd(char *s, int fd);
void ft_putnbr_fd(int n, int fd);
```

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

```c
t_list *ft_lstnew(void *content);
```

**Insertion**

```c
void ft_lstadd_front(t_list **lst, t_list *new);
void ft_lstadd_back(t_list **lst, t_list *new);
```

**Query**

```c
unsigned int ft_lstsize(t_list *lst);
t_list *ft_lstlast(t_list *lst);
```

**Deletion** (memory freeing)

```c
void ft_lstdelone(t_list *lst, void (*del)(void *));
void ft_lstclear(t_list **lst, void (*del)(void *));
```

**Iteration and transformation**

```c
void ft_lstiter(t_list *lst, void (*f)(void *));
t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
```

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

## Resources

**References**

- `man` pages of the reimplemented functions (e.g. `man 3 memmove`)
- [GeeksforGeeks – C Programming Language Tutorial](https://www.geeksforgeeks.org/c/c-programming-language/)

**Use of AI**

AI was used as a learning aid, acting as a C programming teacher:

- To help me understand how the functions work.
- To help debug some functions.
