//#include <ctype.h>
//#include <stdio.h>
//#include <string.h>
//#include <stddef.h>
//#include <stdlib.h>
#include "./src/libft.h"

//int		ft_isalpha(int c);
//int		ft_isdigit(int c);
//int		ft_isalnum(int c);
//int		ft_isascii(int c);
//int		ft_isprint(int c);
//size_t	ft_strlen(const char *s);
//void	*ft_memset(void	*str, int c, size_t len);
//void	ft_bzero(void	*s, size_t n);
//void	*ft_memcpy(void	*restrict	dst, const void	*restrict src, size_t n);
//void	*ft_memmove(void *dst, const void *src, size_t len);
//size_t ft_strlcpy(char * restrict dst, const char * restrict src, size_t dstsize);
//size_t ft_strlcat(char  * restrict dst, const char  * restrict src, size_t  dstsize);
//int		ft_toupper(int c);
//int		ft_tolower(int c);
//char	*ft_strchr(const char *s, int c);
//char	*ft_strrchr(const char *s, int c);
//int		ft_strncmp(const char *s1, const char *s2, size_t n);
//void	*ft_memchr(const void *s, int c, size_t n);
//int		ft_memcmp(const void *s1, const void *s2, size_t n);
//char    *ft_strnstr(const char *haystack, const char *needle, size_t len);
//int		ft_atoi(const char *str);
//void	*ft_calloc(size_t count, size_t size);
//char	*ft_strdup(const char *s1);

int	main(void)
{
///////////////////////////////////////////////////////////////////////////////////////////////////////////////
	printf ("\n~~~~~~~~~~~~~~~~~~~~\n");
	printf ("ISALPHA:\n");
	printf ("~~~~~~~~~~~~~~~~~~~~\n");
	printf ("%d\n", isalpha(101));
	printf ("%d\n\n", ft_isalpha(101));
	printf ("%d\n", isalpha(106));
	printf ("%d\n\n", ft_isalpha(106));
	printf ("%d\n", isalpha(113));
	printf ("%d\n\n", ft_isalpha(113));
	printf ("%d\n", isalpha(64));
	printf ("%d\n\n", ft_isalpha(64));
	printf ("%d\n", isalpha(32));
	printf ("%d\n", ft_isalpha(32));
///////////////////////////////////////////////////////////////////////////////////////////////////////////////
	printf ("\n~~~~~~~~~~~~~~~~~~~~\n");
	printf ("ISDIGIT:\n");
	printf ("~~~~~~~~~~~~~~~~~~~~\n");
	printf ("%d\n", isdigit(47));
	printf ("%d\n\n", ft_isdigit(47));
	printf ("%d\n", isdigit(48));
	printf ("%d\n\n", ft_isdigit(48));
	printf ("%d\n", isdigit(49));
	printf ("%d\n\n", ft_isdigit(49));
	printf ("%d\n", isdigit(50));
	printf ("%d\n\n", ft_isdigit(50));
	printf ("%d\n", isdigit(55));
	printf ("%d\n\n", ft_isdigit(55));
	printf ("%d\n", isdigit(57));
	printf ("%d\n\n", ft_isdigit(57));
	printf ("%d\n", isdigit(59));
	printf ("%d\n\n", ft_isdigit(59));
	printf ("%d\n", isdigit(113));
	printf ("%d\n", ft_isdigit(113));
///////////////////////////////////////////////////////////////////////////////////////////////////////////////
	printf ("\n~~~~~~~~~~~~~~~~~~~~\n");
	printf ("ISALNUM:\n");
	printf ("~~~~~~~~~~~~~~~~~~~~\n");
	printf ("%d\n", isalnum(32));
	printf ("%d\n\n", ft_isalnum(32));
	printf ("%d\n", isalnum(47));
	printf ("%d\n\n", ft_isalnum(47));
	printf ("%d\n", isalnum(48));
	printf ("%d\n\n", ft_isalnum(48));
	printf ("%d\n", isalnum(57));
	printf ("%d\n\n", ft_isalnum(57));
	printf ("%d\n", isalnum(112));
	printf ("%d\n", ft_isalnum(112));
///////////////////////////////////////////////////////////////////////////////////////////////////////////////
	printf ("\n~~~~~~~~~~~~~~~~~~~~\n");
	printf ("ISASCII:\n");
	printf ("~~~~~~~~~~~~~~~~~~~~\n");
	printf ("%d\n", isascii(0));
	printf ("%d\n\n", ft_isascii(0));
	printf ("%d\n", isascii(32));
	printf ("%d\n\n", ft_isascii(32));
	printf ("%d\n", isascii(256));
	printf ("%d\n", ft_isascii(256));
///////////////////////////////////////////////////////////////////////////////////////////////////////////////
	printf ("\n~~~~~~~~~~~~~~~~~~~~\n");
	printf ("ISPRINT:\n");
	printf ("~~~~~~~~~~~~~~~~~~~~\n");
	printf ("%d\n", isprint(0));
	printf ("%d\n\n", ft_isprint(0));
	printf ("%d\n", isprint(103));
	printf ("%d\n\n", ft_isprint(103));
	printf ("%d\n", isprint(127));
	printf ("%d\n\n", ft_isprint(127));
	printf ("%d\n", isprint(245));
	printf ("%d\n", ft_isprint(245));
///////////////////////////////////////////////////////////////////////////////////////////////////////////////
	printf ("\n~~~~~~~~~~~~~~~~~~~~\n");
	printf ("STRLEN:\n");
	printf ("~~~~~~~~~~~~~~~~~~~~\n");
	char	*s1;
	char	*s2;
	char	*s3;
	char str1[] = "Hello, World!";
	s1 = &str1[0];
	printf ("Hello, world! = %lu\n", strlen(s1));
	printf ("Hello, world! = %lu\n", ft_strlen(s1));
	char str2[] = "Hello";
	s2 = &str2[0];
	printf ("Hello = %lu\n", strlen(s2));
	printf ("Hello = %lu\n", ft_strlen(s2));
	char str3[] = "World!";
	s3 = &str3[0];
	printf ("World! = %lu\n", strlen(s3));
	printf ("World! = %lu\n", ft_strlen(s3));
///////////////////////////////////////////////////////////////////////////////////////////////////////////////
	printf ("\n~~~~~~~~~~~~~~~~~~~~\n");
	printf ("MEMSET:\n");
	printf ("~~~~~~~~~~~~~~~~~~~~\n");
	char	*s4;
	char	*s5;
	char	*s6;
	char	*s7;
	char str4[] = "Hello, World!";
	s4 = &str4[0];
	char str5[] = "Hello, World!";
	s5 = &str5[0];
	memset(s4 + 1, '.', 3);
	ft_memset(s5 + 1, '.', 3);
	printf ("Hello, world! = %s\n", s4);
	printf ("Hello, world! = %s\n\n", s5);
	char str6[] = "I like the lady horses best.";
	s6 = &str6[0];
	char str7[] = "I like the lady horses best.";
	s7 = &str7[0];
	memset(s6 + 4, '.', 10);
	ft_memset(s7 + 4, '.', 10);
	printf ("I like the lady horses best. = %s\n", s6);
	printf ("I like the lady horses best. = %s\n", s7);
///////////////////////////////////////////////////////////////////////////////////////////////////////////////
	printf ("\n~~~~~~~~~~~~~~~~~~~~\n");
	printf ("BZERO:\n");
	printf ("~~~~~~~~~~~~~~~~~~~~\n");
	char	*s8;
	char	*s9;
	char	*s10;
	char	*s11;
	char str8[] = "how they make it all look easy";
	s8 = &str8[0];
	char str9[] = "how they make it all look easy";
	s9 = &str9[0];
	bzero(s8 + 10, 3);
	ft_bzero(s9 + 10, 3);
	printf ("how they make it all look easy = %s\n", s8);
	printf ("how they make it all look easy = %s\n\n", s9);
	char str10[] = "how they make it all look easy";
	s10 = &str10[0];
	char str11[] = "how they make it all look easy";
	s11 = &str11[0];
	bzero(s10 + 1, 7);
	ft_bzero(s11 + 1, 7);
	printf ("how they make it all look easy = %s\n", s10);
	printf ("how they make it all look easy = %s\n", s11);
///////////////////////////////////////////////////////////////////////////////////////////////////////////////
	printf ("\n~~~~~~~~~~~~~~~~~~~~\n");
	printf ("MEMCPY:\n");
	printf ("~~~~~~~~~~~~~~~~~~~~\n");
	char	*s12;
	char	*s13;
	char	*s14;
	char str12[] = "is as fun as taking a nap, or grass.";
	s12 = &str12[0];
	char str13[] = "I like";
	s13 = &str13[0];
	char str14[] = "is as fun as taking a nap, or grass.";
	s14 = &str14[0];
	memcpy(s12, s13, 3);
	ft_memcpy(s14, s13, 3);
	printf ("is as fun as taking a nap, or grass. = %s\n", s12);
	printf ("is as fun as taking a nap, or grass. = %s\n", s14);
///////////////////////////////////////////////////////////////////////////////////////////////////////////////
	printf ("\n~~~~~~~~~~~~~~~~~~~~\n");
	printf ("MEMMOVE:\n");
	printf ("~~~~~~~~~~~~~~~~~~~~\n");
	char	*s15;
	char	*s16;
	char	*s17;
	char str15[] = "after winning. Ears up, girls, ears up!";
	s15 = &str15[0];
	char str16[] = "BOOM";
	s16 = &str16[0];
	char str17[] = "after winning. Ears up, girls, ears up!";
	s17 = &str17[0];
	memmove((s15 + 10), s16, 29);
	ft_memmove((s17 + 10), s16, 29);
	printf ("after winning. Ears up, girls, ears up! = %s\n", s15);
	printf ("after winning. Ears up, girls, ears up! = %s\n", s17);
///////////////////////////////////////////////////////////////////////////////////////////////////////////////
	printf ("\n~~~~~~~~~~~~~~~~~~~~\n");
	printf ("STRLCPY:\n");
	printf ("~~~~~~~~~~~~~~~~~~~~\n");
	char	*s18;
	char	*s19;
	char	*s20;
	char	*s21;
	int	a;
	int	b;
	char str18[] = "BOOM";
	s18 = &str18[0];
	char str19[] = "bada-boooooooooom";
	s19 = &str19[0];
	char str20[] = "BOOM";
	s20 = &str20[0];
	char str21[] = "bada-boooooooooom";
	s21 = &str21[0];
	printf("'%s' = %lu <--- '%s' = %lu\n", str18, sizeof (str18), str19, sizeof (str19));
	printf("'%s' = %lu <--- '%s' = %lu\n", str20, sizeof (str20), str21, sizeof (str21));
	a = strlcpy(s18, s19, sizeof (str18));
	b = ft_strlcpy(s20, s21, sizeof (str20));
	printf ("return value = %d (library)\n", a);
	printf ("return value = %d (my function)\n", b);
	printf("'%s' = %lu\n", str18, sizeof (str18));
	printf("'%s' = %lu\n", str20, sizeof (str20));
///////////////////////////////////////////////////////////////////////////////////////////////////////////////
	printf ("\n~~~~~~~~~~~~~~~~~~~~\n");
	printf ("STRLCAT:\n");
	printf ("~~~~~~~~~~~~~~~~~~~~\n");
	char	*s22;
	char	*s23;
	char	*s24;
	char	*s25;
	int	c;
	int	d;
	char str22[] = "BOOM";
	s22 = &str22[0];
	char str23[] = "bada-boooooooooom";
	s23 = &str23[0];
	char str24[] = "BOOM";
	s24 = &str24[0];
	char str25[] = "bada-boooooooooom";
	s25 = &str25[0];
	printf("'%s' = %lu <--- '%s' = %lu\n", str18, sizeof (str18), str19, sizeof (str19));
	printf("'%s' = %lu <--- '%s' = %lu\n", str20, sizeof (str20), str21, sizeof (str21));
	c = strlcat(s22, s23, sizeof (str18));
	d = ft_strlcat(s24, s25, sizeof (str20));
	printf ("return value = %d (library)\n", c);
	printf ("return value = %d (my function)\n", d);
	printf("'%s' = %lu\n", str22, sizeof (str22));
	printf("'%s' = %lu\n", str24, sizeof (str24));
///////////////////////////////////////////////////////////////////////////////////////////////////////////////
	printf ("\n~~~~~~~~~~~~~~~~~~~~\n");
	printf ("TOUPPER:\n");
	printf ("~~~~~~~~~~~~~~~~~~~~\n");
	printf("31 = %d = %c\n", toupper(31), (char)toupper(31));
	printf("31 = %d = %c\n", ft_toupper(31), (char)ft_toupper(31));
	printf("33 = %d = %c\n", toupper(33), (char)toupper(33));
	printf("33 = %d = %c\n", ft_toupper(33), (char)ft_toupper(33));
	printf("90 = %d = %c\n", toupper(90), (char)toupper(90));
	printf("90 = %d = %c\n", ft_toupper(90), (char)ft_toupper(90));
	printf("122 = %d = %c\n", toupper(122), (char)toupper(122));
	printf("122 = %d = %c\n", ft_toupper(122), (char)ft_toupper(122));
///////////////////////////////////////////////////////////////////////////////////////////////////////////////
	printf ("\n~~~~~~~~~~~~~~~~~~~~\n");
	printf ("TOLOWER:\n");
	printf ("~~~~~~~~~~~~~~~~~~~~\n");
	printf("31 = %d = %c\n", tolower(31), (char)tolower(31));
	printf("31 = %d = %c\n", ft_tolower(31), (char)ft_tolower(31));
	printf("33 = %d = %c\n", tolower(33), (char)tolower(33));
	printf("33 = %d = %c\n", ft_tolower(33), (char)ft_tolower(33));
	printf("90 = %d = %c\n", tolower(90), (char)tolower(90));
	printf("90 = %d = %c\n", ft_tolower(90), (char)ft_tolower(90));
	printf("122 = %d = %c\n", tolower(122), (char)tolower(122));
	printf("122 = %d = %c\n", ft_tolower(122), (char)ft_tolower(122));
///////////////////////////////////////////////////////////////////////////////////////////////////////////////
	printf ("\n~~~~~~~~~~~~~~~~~~~~\n");
	printf ("STRCHR:\n");
	printf ("~~~~~~~~~~~~~~~~~~~~\n");
	char	*s26;
	int		e;
	char	str26[] = "Hello!Hello!"; s26 = &str26[0];
	e = 101;
	printf("'Hello!Hello!' = '%s' <--- '%c' (%d)\n", strchr(s26, e), (char)e, e);
	printf("'Hello!Hello!' = '%s' <--- '%c' (%d)\n", ft_strchr(s26, e), (char)e, e);
	e = 104;
	printf("'Hello!Hello!' = '%s' <--- '%c' (%d)\n", strchr(s26, e), (char)e, e);
	printf("'Hello!Hello!' = '%s' <--- '%c' (%d)\n", ft_strchr(s26, e), (char)e, e);
	e = 108;
	printf("'Hello!Hello!' = '%s' <--- '%c' (%d)\n", strchr(s26, e), (char)e, e);
	printf("'Hello!Hello!' = '%s' <--- '%c' (%d)\n", ft_strchr(s26, e), (char)e, e);
	e = 247;
	printf("'Hello!Hello!' = '%s' <--- '%c' (%d)\n", strchr(s26, e), (char)e, e);
	printf("'Hello!Hello!' = '%s' <--- '%c' (%d)\n", ft_strchr(s26, e), (char)e, e);
	e = 0;
	printf("'Hello!Hello!' = '%s' <--- '%c' (%d)\n", strchr(s26, e), (char)e, e);
	printf("'Hello!Hello!' = '%s' <--- '%c' (%d)\n", ft_strchr(s26, e), (char)e, e);
//////////////////////////////////////////////////////////////////////////////////////////////////////
	printf ("\n~~~~~~~~~~~~~~~~~~~~\n");
	printf ("STRRCHR:\n");
	printf ("~~~~~~~~~~~~~~~~~~~~\n");
	char	*s27;
	char	str27[] = "Hello!Hello!"; s27 = &str27[0];
	e = 72;
	printf("'Hello!Hello!' = '%s' <--- '%c' (%d)\n", strrchr(s27, e), (char)e, e);
	printf("'Hello!Hello!' = '%s' <--- '%c' (%d)\n", ft_strrchr(s27, e), (char)e, e);
	e = 108;
	printf("'Hello!Hello!' = '%s' <--- '%c' (%d)\n", strrchr(s27, e), (char)e, e);
	printf("'Hello!Hello!' = '%s' <--- '%c' (%d)\n", ft_strrchr(s27, e), (char)e, e);
	e = 0;
	printf("'Hello!Hello!' = '%s' <--- '%c' (%d)\n", strrchr(s27, e), (char)e, e);
	printf("'Hello!Hello!' = '%s' <--- '%c' (%d)\n", ft_strrchr(s27, e), (char)e, e);
	e = 100;
	printf("'Hello!Hello!' = '%s' <--- '%c' (%d)\n", strrchr(s27, e), (char)e, e);
	printf("'Hello!Hello!' = '%s' <--- '%c' (%d)\n", ft_strrchr(s27, e), (char)e, e);
//////////////////////////////////////////////////////////////////////////////////////////////////////	
	printf ("\n~~~~~~~~~~~~~~~~~~~~\n");
	printf ("STRNCMP:\n");
	printf ("~~~~~~~~~~~~~~~~~~~~\n");
	char	*s28;
	char	*s29;
	int		h;
	char	str28[] = "Hello, World!"; s28 = &str28[0];
	char	str29[] = "Hello, WORLD!"; s29 = &str29[0];
	h = 10;
	printf ("  Hello, World!\n- Hello, WORLD!\n ----------------   <--- %i symbols\n        %d\n\n", h, strncmp(s28, s29, h));
	printf ("  Hello, World!\n- Hello, WORLD!\n ----------------   <--- %i symbols\n        %d\n\n", h, ft_strncmp(s28, s29, h));
	h = 0;
	printf ("  Hello, World!\n- Hello, WORLD!\n ----------------   <--- %d symbols\n        %d\n\n", h, strncmp(s28, s29, h));
	printf ("  Hello, World!\n- Hello, WORLD!\n ----------------   <--- %d symbols\n        %d\n\n", h, ft_strncmp(s28, s29, h));
	h = 13;
	printf ("  Hello, WORLD!\n- Hello, World!\n ----------------   <--- %d symbols\n        %d\n\n", h, strncmp(s29, s28, h));
	printf ("  Hello, WORLD!\n- Hello, World!\n ----------------   <--- %d symbols\n        %d\n\n", h, ft_strncmp(s29, s28, h));
//////////////////////////////////////////////////////////////////////////////////////////////////////	
	printf ("\n~~~~~~~~~~~~~~~~~~~~\n");
	printf ("MEMCHR:\n");
	printf ("~~~~~~~~~~~~~~~~~~~~\n");
	char	*s30;
	char	*s31;
	char	str30[] = "Hello!Hello!"; s30 = &str30[0];
	char	str31[] = "Hello!Hello!"; s31 = &str31[0];
	int f = 111; int g = 4;
	char	*mem_st =  memchr(s30, f, g);
	char	*mem_ft = ft_memchr(s31, f, g);
	printf("\n'Hello! Hello!' = '%s' <--- '%c' / %d\n", mem_st, (char)f, g);
	printf("'Hello! Hello!' = '%s' <--- '%c' / %d\n\n", mem_ft, (char)f, g);	
	g = 6;
	printf("\n'Hello! Hello!' = '%s' <--- '%c' / %d\n", mem_st, (char)f, g);
	printf("'Hello! Hello!' = '%s' <--- '%c' / %d\n\n", mem_ft, (char)f, g);
	g = 0;
	printf("\n'Hello! Hello!' = '%s' <--- '%c' / %d\n", mem_st, (char)f, g);
	printf("'Hello! Hello!' = '%s' <--- '%c' / %d\n\n", mem_ft, (char)f, g);
//////////////////////////////////////////////////////////////////////////////////////////////////
	printf ("\n~~~~~~~~~~~~~~~~~~~~\n");
	printf ("MEMCMP:\n");
	printf ("~~~~~~~~~~~~~~~~~~~~\n");
	int	str32[] = {1, 2, 3, 4}; int	*s32 = &str32[0];
	h = 10;
	printf ("  1234\n- Hello, WORLD!\n ----------------   <--- %i symbols\n        %d\n\n", h, memcmp(s32, s29, h));
	printf ("  1234\n- Hello, WORLD!\n ----------------   <--- %i symbols\n        %d\n\n", h, ft_memcmp(s32, s29, h));
	h = 3;
	printf ("  Hello, World!\n- Hello, WORLD!\n ----------------   <--- %i symbols\n        %d\n\n", h, memcmp(s28, s29, h));
	printf ("  Hello, World!\n- Hello, WORLD!\n ----------------   <--- %i symbols\n        %d\n\n", h, ft_memcmp(s28, s29, h));
	h = 13;
	printf ("  Hello, World!\n- Hello, WORLD!\n ----------------   <--- %i symbols\n        %d\n\n", h, memcmp(s28, s29, h));
	printf ("  Hello, World!\n- Hello, WORLD!\n ----------------   <--- %i symbols\n        %d\n\n", h, ft_memcmp(s28, s29, h));
	//////////////////////////////////////////////////////////////////////////////////////////////////
	printf ("\n~~~~~~~~~~~~~~~~~~~~\n");
	printf ("STRNSTR:\n");
	printf ("~~~~~~~~~~~~~~~~~~~~\n\n");
	char	str33[] = "One more story he said in a restaurant in Amsterdam";
	char	str33_n[] = "said";
	char	*s33 = &str33[0];
	char	*s33_n = &str33_n[0];
	printf("%s <---22--- %s  ==  %s\n", s33, s33_n, strnstr(s33, s33_n, 22));
	printf("%s <---22--- %s  ==  %s\n\n", s33, s33_n, ft_strnstr(s33, s33_n, 22));
	char	str33_n_1[] = "Amsterdam";
	s33_n = &str33_n_1[0];
	printf("%s <---22--- %s  ==  %s\n", s33, s33_n, strnstr(s33, s33_n, 22));
	printf("%s <---22--- %s  ==  %s\n\n", s33, s33_n, ft_strnstr(s33, s33_n, 22));
	printf("%s <---45--- %s  ==  %s\n", s33, s33_n, strnstr(s33, s33_n, 45));
	printf("%s <---45--- %s  ==  %s\n\n", s33, s33_n, ft_strnstr(s33, s33_n, 45));
	printf("%s <---60--- %s  ==  %s\n", s33, s33_n, strnstr(s33, s33_n, 60));
	printf("%s <---60--- %s  ==  %s\n\n", s33, s33_n, ft_strnstr(s33, s33_n, 60));
//////////////////////////////////////////////////////////////////////////////////////////////////
	printf ("\n~~~~~~~~~~~~~~~~~~~~\n");
	printf ("CALLOC:\n");
	printf ("~~~~~~~~~~~~~~~~~~~~\n\n");
	int	count;
	int	*arr_1;
	int	*arr_2;
	int i;
	count = 5;
	arr_1 = (int *)calloc(count, sizeof(int));
	arr_2 = (int *)ft_calloc(count, sizeof(int));
	i = 0;
	if (arr_1 == NULL)
		printf("No memory to allocate standart.\n");
	else
	{
		printf("Print elements standart:\n");
		for (i = 0; i < count; ++i)
			printf("%d\n", *(arr_1 + i));
	}
	i = 0;
	if (arr_2 == NULL)
		printf("No memory to allocate my func.\n");
	else
	{
		printf("Print elements my func:\n");
		for (i = 0; i < count; ++i)
			printf("%d\n", *(arr_2 + i));
	}
	//////////////////////////////////////////////////////////////////////////////////////////////////
	printf ("\n~~~~~~~~~~~~~~~~~~~~\n");
	printf ("STRDUP:\n");
	printf ("~~~~~~~~~~~~~~~~~~~~\n\n");
	const char	*s34_1;
	const char	*s34_2;
	const char	s34[] = "Hello, World!";
	s34_1 = &s34[0];
	s34_2 = &s34[0];
	printf("Standart: %s\n", strdup(s34_1));
	printf("My  Func: %s\n\n", ft_strdup(s34_2));
	const char	*s35_1;
	const char	*s35_2;
	const char	s35[0];
	s35_1 = &s35[0];
	s35_2 = &s35[0];
	printf("Standart: %s\n", strdup(s35_1));
	printf("My  Func: %s\n", ft_strdup(s35_2));
	printf ("~~~~~~~~~~~~~~~~~~~~\n\n");
//////////////////////////////////////////////////////////////////////////////////////////////////
	printf ("\n~~~~~~~~~~~~~~~~~~~~\n");
	printf ("SUBSTR:\n");
	printf ("~~~~~~~~~~~~~~~~~~~~\n\n");

	printf ("~~~~~~~~~~~~~~~~~~~~\n\n");
//////////////////////////////////////////////////////////////////////////////////////////////////
	printf ("\n~~~~~~~~~~~~~~~~~~~~\n");
	printf ("STRJOIN:\n");
	printf ("~~~~~~~~~~~~~~~~~~~~\n\n");

	printf ("~~~~~~~~~~~~~~~~~~~~\n\n");
//////////////////////////////////////////////////////////////////////////////////////////////////
	printf ("\n~~~~~~~~~~~~~~~~~~~~\n");
	printf ("SPLIT:\n");
	printf ("~~~~~~~~~~~~~~~~~~~~\n\n");
	// char const *s40; 
	// char c_split;
	// char str40[] = "      split       this for   me  !       ";
	// char **s41 = ft_split(s40, ' ');


	// printf ("~~~~~~~~~~~~~~~~~~~~\n\n");

	// char const *s42; 
	// char str42[] = "      split       this for   me  !       ";
	// char **s43;
	// char c_split;
	
	// c_split = ' ';
	// s43 = ft_split(s42, c_split);
	// printf("Word1 = %s, word2 = %s\n", s43[0], s43[1]);
	printf ("~~~~~~~~~~~~~~~~~~~~\n\n");
//////////////////////////////////////////////////////////////////////////////////////////////////
	printf ("\n~~~~~~~~~~~~~~~~~~~~\n");
	printf ("ITOA:\n");
	printf ("~~~~~~~~~~~~~~~~~~~~\n\n");
	int	input;

	input = 0;
	printf("~~~~~~~~~~~~~~~~~~~~~~Input = %d; output = '%s'\n", input, ft_itoa(input));
	input = -0;
	printf("~~~~~~~~~~~~~~~~~~~~~~Input = %d; output = '%s'\n", input, ft_itoa(input));
	input = -11;
	printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~Input = %d; output = '%s'\n", input, ft_itoa(input));
	input = 16;
	printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~Input = %d; output = '%s'\n", input, ft_itoa(input));
	input = 163;
	printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~Input = %d; output = '%s'\n", input, ft_itoa(input));
	input = -163;
	printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~Input = %d; output = '%s'\n", input, ft_itoa(input));
	printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~Input = %d; output = '%s'\n", input, ft_itoa(input));
	input = -2147483648;
	printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~Input = %d; output = '%s'\n", input, ft_itoa(input));
	printf ("~~~~~~~~~~~~~~~~~~~~\n\n");
//////////////////////////////////////////////////////////////////////////////////////////////////
	printf ("\n~~~~~~~~~~~~~~~~~~~~\n");
	printf ("STRMAPI:\n");
	printf ("~~~~~~~~~~~~~~~~~~~~\n\n");
	char *s45;
	char str45[] = "123";

	
	printf ("~~~~~~~~~~~~~~~~~~~~\n\n");
	return (0);
}
