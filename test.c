
#include <stdio.h>
#include "libft.h"

void	test_isalpha(void)
{
	int	c;

	c = 'c';
	printf("+======= ft_isalpha =======+\n");
	printf("\tchar: %c isalpha: %d\n\n", c, ft_isalpha(c));
}
void	test_isdigit(void)
{
	int	c;

	c = '6';
	printf("+======= ft_isdigit =======+\n");
	printf("\tchar: %c isdigit: %d\n\n", c, ft_isdigit(c));
}
void	test_isalnum(void)
{
	int	c;
	int	c2;

	c = '9';
	c2 = 'A';
	printf("+======= ft_isalnum =======+\n");
	printf("\tchar: %c isalnum: %d\n", c, ft_isalnum(c));
	printf("\tchar: %c isalnum: %d\n\n", c2, ft_isalnum(c2));
}
void	test_isascii(void)
{
	int	c;

	c = 123;
	printf("+======= ft_isascii =======+\n");
	printf("\tchar: %c isascii: %d\n\n", c, ft_isascii(c));
}
void	test_isprint(void)
{
	int	c;
	int	c2;

	c = '9';
	c2 = 0;
	printf("+======= ft_isprint =======+\n");
	printf("\tchar: %c isprint: %d\n", c, ft_isprint(c));
	printf("\tchar: %c isprint: %d\n\n", c2, ft_isprint(c2));
}
void	test_strlen(void)
{
	char	*s;

	s = "Hello";
	printf("+======= ft_strlen =======+\n");
	printf("\tsrc: %s strlen: %zu\n\n", s, ft_strlen(s));
}
void	test_memset(void)
{
	char s[20] = "Hello world!";
    int c;

    c = 'x';
    ft_memset(s, c, 5);
    printf("+======= ft_memset =======+\n");
    printf("\tbefore: Hello world! after: %s\n\n", s);
}
void	test_bzero(void)
{
	char	s[20] = "Hello world!";

	ft_bzero(s,5);
	printf("+======= ft_bzero =======+\n");
	printf("\tbefore: Hello world! afther: %s\n\n", s);
}
void	test_memcpy(void)
{
	char	s[20] = "Hello world!";
	char	d[20];

	//ft_memcpy(s + 1, s, 5);
	ft_memcpy(d, s, 5);
	printf("+======= ft_memcpy =======+\n");
	printf("\tsrc: %s dst: %s\n\n", s, d);
	//printf("\tsrc: Hello world! dst: %s\n\n", s);
}
void	test_memmove(void)
{
	char	s[20] = "Hello world!";

	ft_memmove(s + 1, s, 5);
	printf("+======= ft_memmove =======+\n");
	printf("\tsrc: Hello world! dst: %s\n\n", s);
}
void	test_strlcpy(void)
{
	char	s[20] = "Hello world!";
	char	d[20];
	int		n;

	n = ft_strlcpy(d, s, 6);
	printf("+======= ft_strlcpy =======+\n");
	printf("\tsrc: %s dst: %s len: %d\n\n", s, d, n);
}
void	test_strlcat(void)
{
	char	s[20] = "world!";
	char	d[20] = "Hello ";
	int		n;

	n = ft_strlcat(d, s, 12);
	printf("+======= ft_strlcat =======+\n");
	printf("\tdst: %s len: %d\n\n", d, n);
}
void	test_toupper(void)
{
	int	c;

	c = 'a';
	printf("+======= ft_toupper =======+\n");
	printf("\tchar: %c toupper: %c\n\n", c, ft_toupper(c));
}
void	test_tolower(void)
{
	int	c;

	c = 'A';
	printf("+======= ft_toupper =======+\n");
	printf("\tchar: %c tolower: %c\n\n", c, ft_tolower(c));
}
void	test_strchr(void)
{
	char	s[20] = "Hello world!";
	int		c;

	c = 'o';
	printf("+======= ft_strchr =======+\n");
	printf("\tsrc: %s result: %s\n\n", s, ft_strchr(s, c));
}
void	test_strrchr(void)
{
	char	s[20] = "Hello world!";
	int		c;

	c = 'o';
	printf("+======= ft_strrchr =======+\n");
	printf("\tsrc: %s result: %s\n\n", s, ft_strrchr(s, c));
}
void	test_strncmp(void)
{
	char	s[20] = "Hello world!";
	char		s2[20] = "Hello world!";

	printf("+======= ft_strncmp =======+\n");
	printf("\ts1: %s s2: %s result: %d\n\n", s, s2, ft_strncmp(s, s2, 4));
}
void	test_memchr(void)
{
	char	s[20] = "Hello world!";
	int		c;
	char	*s2;
	c = 'o';
	s2 = ft_memchr(s, c, 8);
	printf("+======= ft_memchr =======+\n");
	printf("\tresult: %s\n\n", s2);
}
void	test_memcmp(void)
{
	char	s[20] = "Hello world!";
	char	s2[20] = "Hello world!";

	printf("+======= ft_memcmp =======+\n");
	printf("\ts1: %s s2: %s result: %d\n\n", s, s2, ft_memcmp(s, s2, 4));
}
void	test_strnstr(void)
{
	char	s[20] = "Hello world!";
	char	s2[20] = "llo";

	printf("+======= ft_strnstr =======+\n");
	printf("\tsrc: %s search: %s result: %s\n\n", s, s2, ft_strnstr(s, s2, 12));
}
void	test_atoi(void)
{
	char	*s;

	s = "+2024";
	printf("+======= ft_atoi =======+\n");
	printf("\tsrc: %s int: %d\n\n", s, ft_atoi(s));
}
void	test_calloc(void)
{
	int	*arr;
	int	i;
	int n;

	i = 0;
	n = 5;
	arr = (int *)ft_calloc(n,sizeof(int));
	printf("+======= ft_calloc =======+\n");
	printf("\tresult: ");
	while (i < n)
		printf("%d", arr[i++]);
	printf("\n\n");
}
void	test_strdup(void)
{
	char	*s;
	char	*dup;

	s = "Hello World!";
	dup = ft_strdup(s);
	printf("+======= ft_strdup =======+\n");
	printf("\tduplicate: %s\n\n", dup);
}
void	test_substr(void)
{
	char	*s;
	char	*dup;

	s = "Hello World!";
	dup = ft_strdup(s);
	printf("+======= ft_substr =======+\n");
	printf("\tduplicate: %s\n\n", dup);
	printf("Pointer s: %p, Pointer dup: %p", s, dup);
}
int	main(void)
{
	test_isalpha();
	test_isdigit();
	test_isalnum();
	test_isascii();
	test_isprint();
	test_strlen();
	test_memset();
	test_bzero();
	test_memcpy();
	test_memmove();
	test_strlcpy();
	test_strlcat();
	test_toupper();
	test_tolower();
	test_strchr();
	test_strrchr();
	test_strncmp();
	test_memchr();
	test_memcmp();
	test_strnstr();
	test_atoi();
	test_calloc();
	test_strdup();
	test_substr();
	return (0);
}

/*
	cc -Wall -Wextra -Werror test.c ft_isalpha.c
	ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c
	ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c
	ft_memmove.c ft_strlcpy.c ft_strlcat.c
	ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c
	ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c
	ft_atoi.c ft_calloc.c ft_strdup.c
*/