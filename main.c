/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adda-sil <adda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 10:55:09 by adda-sil          #+#    #+#             */
/*   Updated: 2019/10/10 15:21:49 by adda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
#include <stdlib.h>

void test_strs(char *str1, char *str2)
{
	printf("---- CMP STRINGS ----\n");
	printf("1 = '%s'\n", str1);
	printf("2 = '%s'\n", str2);
	printf("---------------------\n");
}

int test_isalpha()
{
	return isalpha('A') == ft_isalpha('A')
		&& isalpha('z') == ft_isalpha('z')
		&& isalpha(';') == ft_isalpha(';')
		;
}

int test_isalnum()
{
	return isalnum('A') == ft_isalnum('A')
		&& isalnum('z') == ft_isalnum('z')
		&& isalnum(';') == ft_isalnum(';')
		&& isalnum('0') == ft_isalnum('0')
		&& isalnum('9') == ft_isalnum('9')
		;
}

int test_isdigit()
{
	return isdigit('0') == ft_isdigit('0')
		&& isdigit('9') == ft_isdigit('9')
		;
}

int	test_isascii()
{
	return isascii('a') == ft_isascii('a')
		&& isascii(42) == ft_isascii(42)
		&& isascii(-1) == ft_isascii(-1)
		&& isascii(-123456789) == ft_isascii(-123456789)
		;
}

int test_isprint()
{
	return isprint(31) == ft_isprint(31)
		&& isprint(32) == ft_isprint(32)
		&& isprint(126) == ft_isprint(126)
		&& isprint(127) == ft_isprint(127)
		;
}

int test_toupper()
{
	return toupper(10) == ft_toupper(10)
		&& toupper(2147483647) == ft_toupper(2147483647)
		&& toupper(0) == ft_toupper(0)
		;
}

int test_tolower()
{
	return tolower(10) == ft_toupper(10)
		&& tolower(2147483647) == ft_tolower(2147483647)
		&& tolower('z') == ft_tolower('z')
		&& tolower(0) == ft_tolower(0)
		;
}

int test_strchr()
{
	//printf("\n yo '%s'\n", ft_strchr("Bonjour", 'z'));
	//printf("\nstrcmp %d\n", strcmp(0, 0));
	//printf("\nSTRCHR: '%s' VS '%s'\n", ft_strchr("Bonjour", 'z'), strchr("Bonjour", 'z'));
	return strcmp(strchr("Bonjour", 'o'),	ft_strchr("Bonjour", 'o')) == 0
		&& strcmp(strchr("Bonjour", 'B'),	ft_strchr("Bonjour", 'B')) == 0
		&& strcmp(strchr("Bonjour", 0),		ft_strchr("Bonjour", 0)) == 0
		&& strchr("Bonjour", 1) == ft_strchr("Bonjour", 1)
		&& strchr("Bonjour", 'z') == ft_strchr("Bonjour", 'z')
		;
}

int test_strrchr()
{
	return strcmp(strrchr("Bonjour", 'o'),   ft_strrchr("Bonjour", 'o')) == 0
		&& strcmp(strrchr("Bonjour", 0),   ft_strrchr("Bonjour", 0)) == 0
		&& strrchr("Bonjour", 'z') == ft_strrchr("Bonjour", 'z')
		&& strrchr("Bonjour", -10) == ft_strrchr("Bonjour", -10)
		;
}

int test_strncmp()
{
	printf("CMP TEST: '%d' VS '%d'\n", strncmp("Salut", "Salut", 5), ft_strncmp("Salut", "Salut", 5));
	printf("CMP TEST: '%d' VS '%d'\n", strncmp("est", "test", 3), ft_strncmp("est", "test", 3));
	printf("CMP TEST: '%d' VS '%d'\n", strncmp("Saluy", "Saluw", 5), ft_strncmp("Saluy", "Saluw", 5));
	printf("CMP TEST: '%d' VS '%d'\n", strncmp("Salu", "Salut", 3), ft_strncmp("Salu", "Salut", 3));
	printf("CMP TEST: '%d' VS '%d'\n", strncmp("Salut", "Salut", 3), ft_strncmp("Salut", "Salut", 3));
	printf("CMP TEST: '%d' VS '%d'\n", strncmp("Salu", "Salut", 20), ft_strncmp("Salu", "Salut", 20));
	printf("CMP TEST: '%d' VS '%d'\n", strncmp("Salut", "Salut", 20), ft_strncmp("Salut", "Salut", 20));
	return strncmp("Salut", "Salut", 5) == ft_strncmp("Salut", "Salut", 5)
		&& strncmp("Salu", "Salut", 5) == ft_strncmp("Salu", "Salut", 5)
		&& strncmp("Salu", "Salut", 3) == ft_strncmp("Salu", "Salut", 3)
		&& strncmp("Salut", "Salut", 3) == ft_strncmp("Salut", "Salut", 3)
		&& strncmp("Salu", "Salut", 20) == ft_strncmp("Salu", "Salut", 20)
		&& strncmp("Salut", "Salut", 20) == ft_strncmp("Salut", "Salut", 20)
		;
}

int test_strnstr()
{
	char *phrase = "Bonjour a tous les amis";
	char *tofind = "tous";
	//printf("\nTest: %s\n\n", strnstr(phrase, tofind, 14));
	//printf("\nTest: %s\n\n", ft_strnstr(phrase, tofind, 14));
	return strcmp(ft_strnstr(phrase, tofind, 50), strnstr(phrase, tofind, 50)) == 0
		&& ft_strnstr(phrase, tofind, 14) == strnstr(phrase, tofind, 14)
		&& ft_strnstr(phrase, tofind, 15) == strnstr(phrase, tofind, 15)
		;
	return 1;
}

int test_atoi()
{
	return atoi("    123") == ft_atoi("    123")
		&& atoi("  -123") == ft_atoi("  -123")
		&& atoi("  - 123") == ft_atoi("  - 123")
		&& atoi("  +123") == ft_atoi("  +123")
		&& atoi("  ---123") == ft_atoi("  ---123")
		&& atoi("  - 123ab") == ft_atoi("  - 123ab")
		&& atoi("  -2147483648") == ft_atoi("  -2147483648")
		&& atoi("2147483648") == ft_atoi("2147483648")
		;
	return 1;
}

int test_memset()
{
	char str[50];
	char str2[50];

	strcpy(str, "Bonjour a touuuuus");
	strcpy(str2, "Bonjour a touuuuus");
	memset(str,'x', 7);
	ft_memset(str2,'x', 7);

	return strcmp(str, str2) == 0
		;
}

int test_bzero()
{
	char str[50];
	char str2[50];

	strcpy(str, "Bonjour a touuuuus");
	strcpy(str2, "Bonjour a touuuuus");
	bzero(str, 7);
	ft_bzero(str2, 7);

	return memcmp(str, str2, 7) == 0
		;
}

int test_memmove()
{
	// char str[50];
	// char str2[50];
	// char *src = "Hello";
	// strcpy(str, "Bonjour a touuuuus");
	// strcpy(str2, "Bonjour a touuuuus");
	// memmove(src, str, 5);
	// ft_memmove(src, str2, 5);
	// //test_strs(str, str2);
	char str[11] = "0123456789";
	ft_memmove(&str[3], &str[0], 4); //might blow up
	char str2[11] = "0123456789";
	memmove(&str2[3], &str2[0], 4); //might blow up
	return strcmp(str, str2) == 0
		;
}

int test_memcpy()
{
	char str[50];
	char str2[50];
	char *src = "Hello";
	strcpy(str, "Bonjour a touuuuus");
	strcpy(str2, "Bonjour a touuuuus");
	memcpy(str, src, 5);
	ft_memcpy(str2, src, 5);
	return strcmp(str, str2) == 0
		;
}

int test_memccpy()
{
	char str[50];
	char str2[50];
	char *src = "Hello";
	strcpy(str, "Bonjour a touuuuus");
	strcpy(str2, "Bonjour a touuuuus");
	memcpy(str, src, 5);
	ft_memcpy(str2, src, 5);
	return strcmp(str, str2) == 0
		;
}

int test_memchr()
{
	char str[30] = { 'S', 'a', '\0', 'l', 'u', 't' };
	return strcmp(memchr(str, 'l', 30), ft_memchr(str, 'l', 30)) == 0
		&& memchr(str, 't', 5) == ft_memchr(str, 't', 5)
		&& memchr(str, 'l', 2) == ft_memchr(str, 'l', 2)
		&& strcmp(memchr(str, '\0', 30), ft_memchr(str, '\0', 30)) == 0
		;
}

int test_memcmp()
{
	char str[30] = { 'S', 'a', '\0', 'l', 'u', 't' };
	char str2[30] = { 'S', 'a', '\0', 'l', 'u', 't' };
	char str3[30] = { 'S', 'a', '\0', 'o', 'u', 't' };
	return memcmp(str, str2, 30) == ft_memcmp(str, str2, 30)
		&& memcmp(str2, str3, 30) == ft_memcmp(str2, str3, 30)
		&& memcmp(str, str2, 3) == ft_memcmp(str, str2, 3)
		&& memcmp(str3, str2, 3) == ft_memcmp(str3, str2, 3)
		;
}

int test_calloc()
{
	//char *str1 = calloc(10, 10);
	//char *str2 = ft_calloc(10, 10);
	
	//for (int i = 0; i < 106; i++)
	//	printf("idx %d -> Mine:'%p=%d' VS Them:'%p=%d' \n", i, &str1[i], str1[i], &str2[i], str2[i]);
	return memcmp(calloc(10, 10), ft_calloc(10, 10), 10*10) == 0
	 	&& memcmp(calloc(50, 50), ft_calloc(50, 50), 50*50) == 0
	 	;
	return (1);
}

int test_substr()
{
	char str[50];
	strcpy(str, "Bonjour tlm");
	//printf("\nSubstr '%s'\n\n\n\n", ft_substr(str, 50, 50));
	return strcmp(ft_substr(str, 0, 7), "Bonjour") == 0
		&& strcmp(ft_substr(str, 1, 7), "onjour ") == 0
		&& strcmp(ft_substr(str, 0, 6), "Bonjou") == 0
		&& strcmp(ft_substr(str, 8, 50), "tlm") == 0
		&& ft_substr(str, 50, 50)[0] == '\0'
		;
}

int test_strjoin()
{
	//printf("STRJOIN '%s'\n\n", ft_strjoin(str1, str2));
	return (strcmp(ft_strjoin("bonjour", " les gens"), "bonjour les gens") == 0);
}

int test_strtrim()
{
	//printf("STRTRIM = '%s'\n\n", ft_strtrim("..", " .sSu"));
	return (strcmp(ft_strtrim(".. bonjour  .", ". "), "bonjour") == 0);
}

int test_split()
{
	char **splited = ft_split(" Bonjour les gens  ", ' ');
	// printf("Splited: ");
	// while (*splited)
	// 	printf("'%s', ", *splited++);
	return (strcmp(splited[0], "Bonjour") == 0
		&& strcmp(splited[1], "les") == 0
		&& strcmp(splited[2], "gens") == 0)
		&& splited[3] == NULL;
}

int test_itoa()
{
	return strcmp(ft_itoa(-123), "-123") == 0
		&& strcmp(ft_itoa(-2147483648), "-2147483648") == 0
		&& strcmp(ft_itoa(2), "2") == 0
		&& strcmp(ft_itoa(-0), "0") == 0
		&& strcmp(ft_itoa(123), "123") == 0
		&& strcmp(ft_itoa(9999), "9999") == 0
		&& strcmp(ft_itoa(2147483647), "2147483647") == 0
	;
}

int even_case(unsigned int idx, char c)
{
	return (idx % 2 ? ft_tolower(c) : ft_toupper(c));
}

int test_strmapi()
{
	return strcmp(ft_strmapi("bOnjour a touS", even_case), "BoNjOuR A ToUs") == 0
	;
}

void test(char* name, int res)
{
	printf("--- test %s ---\n", name);
	printf(res ? "ok" : "XXXXXXXX NO XXXXXXXX");
	printf("\n--------------------\n");
}

int main()
{
	test("strncmp", test_strncmp());
	test("isalpha", test_isalpha());
	test("isalnum", test_isalnum());
	test("isdigit", test_isdigit());
	test("isascii", test_isascii());
	test("isprint", test_isprint());
	test("toupper", test_toupper());
	test("tolower", test_tolower());
	test("strchr", test_strchr());
	test("strrchr", test_strrchr());
	test("strnstr", test_strnstr());
	test("atoi", test_atoi());
	test("memset", test_memset());
	test("memmove", test_memmove());
	test("memcpy", test_memcpy());
	test("memccpy", test_memccpy());
	test("memchr", test_memchr());
	test("memcmp", test_memcmp());
	test("bzero", test_bzero());
	test("substr", test_substr());
	test("calloc", test_calloc());
	test("strjoin", test_strjoin());
	test("strtrim", test_strtrim());
	test("strsplit", test_split());
	test("itoa", test_itoa());
	test("strmapi", test_strmapi());	
	return (0);
}
