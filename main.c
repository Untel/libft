/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adda-sil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 10:55:09 by adda-sil          #+#    #+#             */
/*   Updated: 2019/10/07 18:48:26 by adda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"
#include <ctype.h>
int test_isalpha()
{
	return isalpha('A') == ft_isalpha('A')
		&& isalpha('z') == ft_isalpha('z')
		&& isalpha(';') == ft_isalpha(';');
}

int test_isalnum()
{
	return isalnum('A') == ft_isalnum('A')
		&& isalnum('z') == ft_isalnum('z')
		&& isalnum(';') == ft_isalnum(';')
		&& isalnum('0') == ft_isalnum('0')
		&& isalnum('9') == ft_isalnum('9');
}

int test_isdigit()
{
	return isdigit('0') == ft_isdigit('0')
		&& isdigit('9') == ft_isdigit('9');
}

int	test_isascii()
{
	return isascii('a') == ft_isascii('a')
		&& isascii(42) == ft_isascii(42)
		&& isascii(-1) == ft_isascii(-1)
		&& isascii(-123456789) == ft_isascii(-123456789);
}

int test_isprint()
{
	return isprint(31) == ft_isprint(31)
		&& isprint(32) == ft_isprint(32)
		&& isprint(126) == ft_isprint(126)
		&& isprint(127) == ft_isprint(127);
}

int test_toupper()
{
	return toupper(10) == ft_toupper(10)
		&& toupper(2147483647) == ft_toupper(2147483647)
		&& toupper(0) == ft_toupper(0);
}

int test_tolower()
{
	return tolower(10) == ft_toupper(10)
		&& tolower(2147483647) == ft_tolower(2147483647)
		&& tolower('z') == ft_tolower('z')
		&& tolower(0) == ft_tolower(0);
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

void test(char* name, int res)
{
	printf("--- test %s ---\n", name);
	printf(res ? "ok" : "XXXXXXXXXX NO XXXXXXXXX");
	printf("\n--------------------\n");
}

int main()
{
	test("isalpha", test_isalpha());
	test("isalnum", test_isalnum());
	test("isdigit", test_isdigit());
	test("isascii", test_isascii());
	test("isprint", test_isprint());
	test("toupper", test_toupper());
	test("tolower", test_tolower());
	test("strchr", test_strchr());
	test("strrchr", test_strrchr());
	test("strncmp", test_strncmp());
	test("strnstr", test_strnstr());
	test("atoi", test_atoi());
	return (0);
}
