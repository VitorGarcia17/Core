/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mymain.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipinhei <vipinhei@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 14:57:37 by vipinhei          #+#    #+#             */
/*   Updated: 2025/04/08 14:57:39 by vipinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>
#include <string.h>
#include <strings.h>
#include <ctype.h>
#include <bsd/string.h>

void tst_ft_isalpha()
{
	printf("%s\n", "########### BEGIN TESTE ft_isalpha");
	int c1 = ' ';
	int c2 = '1';
	int c3 = 'a';
	int c4 = 'A';

	printf("isalpha(%c) %i <\n", c1, isalpha(c1));
	printf("isalpha(%c) %i <\n", c2, isalpha(c2));
	printf("isalpha(%c) %i <\n", c3, isalpha(c3));
	printf("isalpha(%c) %i <\n", c4, isalpha(c4));
	printf("ft_isalpha(%c) %i <\n", c1, ft_isalpha(c1));
	printf("ft_isalpha(%c) %i <\n", c2, ft_isalpha(c2));
	printf("ft_isalpha(%c) %i <\n", c3, ft_isalpha(c3));
	printf("ft_isalpha(%c) %i <\n", c4, ft_isalpha(c4));

	printf("%s\n", "########### END TESTE ft_isalpha");
}

void tst_ft_isdigit()
{
	printf("%s\n", "########### BEGIN TESTE ft_isdigit");
	int c1 = ' ';
	int c2 = '1';
	int c3 = 'a';
	int c4 = 'A';

	printf("isdigit(%c) %i <\n", c1, isdigit(c1));
	printf("isdigit(%c) %i <\n", c2, isdigit(c2));
	printf("isdigit(%c) %i <\n", c3, isdigit(c3));
	printf("isdigit(%c) %i <\n", c4, isdigit(c4));
	printf("ft_isdigit(%c) %i <\n", c1, ft_isdigit(c1));
	printf("ft_isdigit(%c) %i <\n", c2, ft_isdigit(c2));
	printf("ft_isdigit(%c) %i <\n", c3, ft_isdigit(c3));
	printf("ft_isdigit(%c) %i <\n", c4, ft_isdigit(c4));

	printf("%s\n", "########### END TESTE ft_isdigit");
}

void tst_ft_isalnum()
{
	printf("%s\n", "########### BEGIN TESTE ft_isalnum");
	int c1 = ' ';
	int c2 = '1';
	int c3 = 'a';
	int c4 = 'A';

	printf("isalnum(%c) %i <\n", c1, isalnum(c1));
	printf("isalnum(%c) %i <\n", c2, isalnum(c2));
	printf("isalnum(%c) %i <\n", c3, isalnum(c3));
	printf("isalnum(%c) %i <\n", c4, isalnum(c4));
	printf("ft_isalnum(%c) %i <\n", c1, ft_isalnum(c1));
	printf("ft_isalnum(%c) %i <\n", c2, ft_isalnum(c2));
	printf("ft_isalnum(%c) %i <\n", c3, ft_isalnum(c3));
	printf("ft_isalnum(%c) %i <\n", c4, ft_isalnum(c4));

	printf("%s\n", "########### END TESTE ft_isalnum");
}

void tst_ft_isascii()
{
	printf("%s\n", "########### BEGIN TESTE ft_isascii");
	int c1 = ' ';
	int c2 = '1';
	int c3 = 'a';
	int c4 = 'A';

	printf("isascii(%c) %i <\n", c1, isascii(c1));
	printf("isascii(%c) %i <\n", c2, isascii(c2));
	printf("isascii(%c) %i <\n", c3, isascii(c3));
	printf("isascii(%c) %i <\n", c4, isascii(c4));
	printf("ft_isascii(%c) %i <\n", c1, ft_isascii(c1));
	printf("ft_isascii(%c) %i <\n", c2, ft_isascii(c2));
	printf("ft_isascii(%c) %i <\n", c3, ft_isascii(c3));
	printf("ft_isascii(%c) %i <\n", c4, ft_isascii(c4));

	printf("%s\n", "########### END TESTE ft_isascii");
}

void tst_ft_isprint()
{
	printf("%s\n", "########### BEGIN TESTE ft_isprint");
	int c1 = ' ';
	int c2 = '1';
	int c3 = 'a';
	int c4 = 'A';

	printf("isprint(%c) %i <\n", c1, isprint(c1));
	printf("isprint(%c) %i <\n", c2, isprint(c2));
	printf("isprint(%c) %i <\n", c3, isprint(c3));
	printf("isprint(%c) %i <\n", c4, isprint(c4));
	printf("ft_isprint(%c) %i <\n", c1, ft_isprint(c1));
	printf("ft_isprint(%c) %i <\n", c2, ft_isprint(c2));
	printf("ft_isprint(%c) %i <\n", c3, ft_isprint(c3));
	printf("ft_isprint(%c) %i <\n", c4, ft_isprint(c4));

	printf("%s\n", "########### END TESTE ft_isprint");
}

void tst_ft_strlen()
{
	printf("%s\n", "########### BEGIN TESTE ft_strlen");
	char str1[] = "";
	char str2[] = " ";
	char str3[] = "1234567890";
	char str4[] = "	<-tab->	 <-space-> abcdef";

	printf("strlen(%s) %li <\n", str1, strlen(str1));
	printf("strlen(%s) %li <\n", str2, strlen(str2));
	printf("strlen(%s) %li <\n", str3, strlen(str3));
	printf("strlen(%s) %li <\n", str4, strlen(str4));
	printf("ft_strlen(%s) %li <\n", str1, ft_strlen(str1));
	printf("ft_strlen(%s) %li <\n", str2, ft_strlen(str2));
	printf("ft_strlen(%s) %li <\n", str3, ft_strlen(str3));
	printf("ft_strlen(%s) %li <\n", str4, ft_strlen(str4));
	printf("%s\n", "########### END TESTE ft_strlen");
}

void tst_ft_memset()
{
	printf("%s\n", "########### BEGIN TESTE ft_memset");
	char str1[] = "";
	char str2[] = "ab";
	char str3[] = "123";
	char str4[] = "qwerty";
	char str5[] = "QWERTYUIOP";
	char ft_str1[] = "";
	char ft_str2[] = "ab";
	char ft_str3[] = "123";
	char ft_str4[] = "qwerty";
	char ft_str5[] = "QWERTYUIOP";

	//memset(str1, 'a', 3);
	//printf("memset(, a, 3) %s <\n", str1);
	memset(str2, 'a', 3);
	printf("memset(ab, a, 3) %s <\n", str2);
	memset(str3, 'a', 3);
	printf("memset(123, a, 3) %s <\n", str3);
	memset(str4, 'a', 3);
	printf("memset(qwerty, a, 3) %s <\n", str4);
	memset(str5, 'a', 3);
	printf("memset(QWERTYUIOP, a, 3) %s <\n", str5);

	//ft_memset(ft_str1, 'a', 3);
	//printf("ft_memset(, a, 3) %s <\n", ft_str1);
	ft_memset(ft_str2, 'a', 3);
	printf("ft_memset(ab, a, 3) %s <\n", ft_str2);
	ft_memset(ft_str3, 'a', 3);
	printf("ft_memset(123, a, 3) %s <\n", ft_str3);
	ft_memset(ft_str4, 'a', 3);
	printf("ft_memset(qwerty, a, 3) %s <\n", ft_str4);
	ft_memset(ft_str5, 'a', 3);
	printf("ft_memset(QWERTYUIOP, a, 3) %s <\n", ft_str5);

	printf("%s\n", "########### END TESTE ft_memset");
}

void tst_ft_bzero()
{
	printf("%s\n", "########### BEGIN TESTE ft_bzero");
	char str2[] = "ab";
	char str3[] = "123";
	char str4[] = "qwerty";
	char str5[] = "QWERTYUIOP";
	char ft_str2[] = "ab";
	char ft_str3[] = "123";
	char ft_str4[] = "qwerty";
	char ft_str5[] = "QWERTYUIOP";
	
	bzero(str2, 3);
	printf("bzero(ab, 3) %s <\n", str2);
	bzero(str3, 3);
	printf("bzero(123, 3) %s <\n", str3);
	bzero(str4, 3);
	printf("bzero(qwerty, 3) %s <\n", str4);
	bzero(str5, 3);
	printf("bzero(QWERTYUIOP, 3) %s <\n", str5);
	
	ft_bzero(ft_str2, 3);
	printf("ft_bzero(ab, 3) %s <\n", ft_str2);
	ft_bzero(ft_str3, 3);
	printf("ft_bzero(123, 3) %s <\n", ft_str3);
	ft_bzero(ft_str4, 3);
	printf("ft_bzero(qwerty, 3) %s <\n", ft_str4);
	ft_bzero(ft_str5, 3);
	printf("ft_bzero(QWERTYUIOP, 3) %s <\n", ft_str5);

	printf("%s\n", "########### END TESTE ft_bzero");
}

void tst_ft_memcpy()
{
	printf("%s\n", "########### BEGIN TESTE ft_memcpy");
	char src[] = "0123456789";
	char dest1[10] = "";
	char dest2[10] = "";

	memcpy(dest1, src, 5);
	printf("memcpy: %s <\n", dest1);
	ft_memcpy(dest2, src, 5);
	printf("ft_memcpy: %s <\n", dest2);

	printf("%s\n", "########### END TESTE ft_memcpy");
}

void tst_ft_memmove()
{
	printf("%s\n", "########### BEGIN TESTE ft_memmove");
	char src[] = "0123456789";
	char dest1[10] = "";
	char dest2[10] = "";

	memmove(dest1, src, 5);
	printf("memmove: %s <\n", dest1);
	ft_memmove(dest2, src, 5);
	printf("ft_memmove: %s <\n", dest2);

	printf("%s\n", "########### END TESTE ft_memmove");
}

void tst_ft_strncmp()
{
	printf("%s\n", "########### BEGIN TESTE ft_strncmp");
	char str1[] = "aaaaa";
	char str2[] = "bbbbb";
	char str3[] = "aAAAa";

	printf("ft_strncmp(%s, %s, 3): %i <\n", str1, str1, ft_strncmp(str1, str1, 3));
	printf("ft_strncmp(%s, %s, 3): %i <\n", str1, str2, ft_strncmp(str1, str2, 3));
	printf("ft_strncmp(%s, %s, 3): %i <\n", str1, str3, ft_strncmp(str1, str3, 3));
	printf("ft_strncmp(%s, %s, 1): %i <\n", str1, str3, ft_strncmp(str1, str3, 1));

	printf("strncmp(%s, %s, 3): %i <\n", str1, str1, strncmp(str1, str1, 3));
	printf("strncmp(%s, %s, 3): %i <\n", str1, str2, strncmp(str1, str2, 3));
	printf("strncmp(%s, %s, 3): %i <\n", str1, str3, strncmp(str1, str3, 3));
	printf("strncmp(%s, %s, 1): %i <\n", str1, str3, strncmp(str1, str3, 1));

	printf("%s\n", "########### END TESTE ft_strncmp");
}

void tst_ft_memchr()
{
	printf("%s\n", "########### BEGIN TESTE ft_memchr");
	char s[] = "Escape is not alowed";

	printf("memchr (%s x a x 8): %p <\n", s, memchr(s, 'a', 8));
	printf("ft_memchr (%s x a x 8): %p <\n", s, ft_memchr(s, 'a', 8));

	printf("%s\n", "########### END TESTE ft_memchr");
}

void tst_ft_atoi()
{
	printf("%s\n", "########### BEGIN TESTE ft_atoi");
	char s01[] = "";
	char s02[] = "	 ";
	char s03[] = "	  	 +123";
	char s04[] = "	  	 -123";
	char s05[] = "	  	 +a";
	char s06[] = "	  	 -a";
	char s07[] = " 	 		 -123f";
	char s08[] = " 	 		 +123f";
	char s09[] = "+123";
	char s10[] = "-123";
	char s11[] = "+a";
	char s12[] = "-a";
	char s13[] = "-123f";
	char s14[] = "+123f";
	char s15[] = "123";
	char s16[] = "123f";
	char s17[] = "12-3f";

	printf("atoi(%s) %i <\n", s01, atoi(s01));
	printf("atoi(%s) %i <\n", s02, atoi(s02));
	printf("atoi(%s) %i <\n", s03, atoi(s03));
	printf("atoi(%s) %i <\n", s04, atoi(s04));
	printf("atoi(%s) %i <\n", s05, atoi(s05));
	printf("atoi(%s) %i <\n", s06, atoi(s06));
	printf("atoi(%s) %i <\n", s07, atoi(s07));
	printf("atoi(%s) %i <\n", s08, atoi(s08));
	printf("atoi(%s) %i <\n", s09, atoi(s09));
	printf("atoi(%s) %i <\n", s10, atoi(s10));
	printf("atoi(%s) %i <\n", s11, atoi(s11));
	printf("atoi(%s) %i <\n", s12, atoi(s12));
	printf("atoi(%s) %i <\n", s13, atoi(s13));
	printf("atoi(%s) %i <\n", s14, atoi(s14));
	printf("atoi(%s) %i <\n", s15, atoi(s15));
	printf("atoi(%s) %i <\n", s16, atoi(s16));
	printf("atoi(%s) %i <\n", s17, atoi(s17));
	printf("ft_atoi(%s) %i <\n", s01, ft_atoi(s01));
	printf("ft_atoi(%s) %i <\n", s02, ft_atoi(s02));
	printf("ft_atoi(%s) %i <\n", s03, ft_atoi(s03));
	printf("ft_atoi(%s) %i <\n", s04, ft_atoi(s04));
	printf("ft_atoi(%s) %i <\n", s05, ft_atoi(s05));
	printf("ft_atoi(%s) %i <\n", s06, ft_atoi(s06));
	printf("ft_atoi(%s) %i <\n", s07, ft_atoi(s07));
	printf("ft_atoi(%s) %i <\n", s08, ft_atoi(s08));
	printf("ft_atoi(%s) %i <\n", s09, ft_atoi(s09));
	printf("ft_atoi(%s) %i <\n", s10, ft_atoi(s10));
	printf("ft_atoi(%s) %i <\n", s11, ft_atoi(s11));
	printf("ft_atoi(%s) %i <\n", s12, ft_atoi(s12));
	printf("ft_atoi(%s) %i <\n", s13, ft_atoi(s13));
	printf("ft_atoi(%s) %i <\n", s14, ft_atoi(s14));
	printf("ft_atoi(%s) %i <\n", s15, ft_atoi(s15));
	printf("ft_atoi(%s) %i <\n", s16, ft_atoi(s16));
	printf("ft_atoi(%s) %i <\n", s17, ft_atoi(s17));

	printf("%s\n", "########### END TESTE ft_atoi");
}

void tst_ft_tolower()
{
	printf("%s\n", "########### BEGIN TESTE ft_tolower");
	char s2 = ' ';
	char s3 = '1';
	char s4 = 'a';
	char s5 = 'A';

	printf("tolower (%c): %c <\n", s2, tolower((unsigned char)s2));
	printf("tolower (%c): %c <\n", s3, tolower((unsigned char)s3));
	printf("tolower (%c): %c <\n", s4, tolower((unsigned char)s4));
	printf("tolower (%c): %c <\n", s5, tolower((unsigned char)s5));
	printf("ft_tolower (%c): %c <\n", s2, ft_tolower((unsigned char)s2));
	printf("ft_tolower (%c): %c <\n", s3, ft_tolower((unsigned char)s3));
	printf("ft_tolower (%c): %c <\n", s4, ft_tolower((unsigned char)s4));
	printf("ft_tolower (%c): %c <\n", s5, ft_tolower((unsigned char)s5));

	printf("%s\n", "########### END TESTE ft_tolower");
}

void tst_ft_toupper()
{
	printf("%s\n", "########### BEGIN TESTE ft_toupper");
	char s2 = ' ';
	char s3 = '1';
	char s4 = 'a';
	char s5 = 'A';

	printf("toupper (%c): %c <\n", s2, toupper((unsigned char)s2));
	printf("toupper (%c): %c <\n", s3, toupper((unsigned char)s3));
	printf("toupper (%c): %c <\n", s4, toupper((unsigned char)s4));
	printf("toupper (%c): %c <\n", s5, toupper((unsigned char)s5));
	printf("ft_toupper (%c): %c <\n", s2, ft_toupper((unsigned char)s2));
	printf("ft_toupper (%c): %c <\n", s3, ft_toupper((unsigned char)s3));
	printf("ft_toupper (%c): %c <\n", s4, ft_toupper((unsigned char)s4));
	printf("ft_toupper (%c): %c <\n", s5, ft_toupper((unsigned char)s5));

	printf("%s\n", "########### END TESTE ft_toupper");
}

void tst_ft_memcmp()
{
	printf("%s\n", "########### BEGIN TESTE ft_memcmp");
	char str1[] = "";
	char str2[] = " ";
	char str3[] = "a";
	char str4[] = "aaa";
	char str5[] = "aaaaa";
	char str6[] = "b";
	char str7[] = "bbb";
	char str8[] = "bbbbb";

	printf("memcmp(%s, %s, 3) %i <\n", str4, str4, memcmp(str4, str4, 3));
	printf("memcmp(%s, %s, 3) %i <\n", str4, str1, memcmp(str4, str1, 3));
	printf("memcmp(%s, %s, 3) %i <\n", str4, str2, memcmp(str4, str2, 3));
	printf("memcmp(%s, %s, 3) %i <\n", str4, str3, memcmp(str4, str3, 3));
	printf("memcmp(%s, %s, 3) %i <\n", str4, str5, memcmp(str4, str5, 3));
	printf("memcmp(%s, %s, 3) %i <\n", str4, str6, memcmp(str4, str6, 3));
	printf("memcmp(%s, %s, 3) %i <\n", str4, str7, memcmp(str4, str7, 3));
	printf("memcmp(%s, %s, 3) %i <\n", str4, str8, memcmp(str4, str8, 3));

	printf("ft_memcmp(%s, %s, 3) %i <\n", str4, str4, ft_memcmp(str4, str4, 3));
	printf("ft_memcmp(%s, %s, 3) %i <\n", str4, str1, ft_memcmp(str4, str1, 3));
	printf("ft_memcmp(%s, %s, 3) %i <\n", str4, str2, ft_memcmp(str4, str2, 3));
	printf("ft_memcmp(%s, %s, 3) %i <\n", str4, str3, ft_memcmp(str4, str3, 3));
	printf("ft_memcmp(%s, %s, 3) %i <\n", str4, str5, ft_memcmp(str4, str5, 3));
	printf("ft_memcmp(%s, %s, 3) %i <\n", str4, str6, ft_memcmp(str4, str6, 3));
	printf("ft_memcmp(%s, %s, 3) %i <\n", str4, str7, ft_memcmp(str4, str7, 3));
	printf("ft_memcmp(%s, %s, 3) %i <\n", str4, str8, ft_memcmp(str4, str8, 3));

	printf("%s\n", "########### END TESTE ft_memcmp");
}

void tst_ft_strrchr()
{
	printf("%s\n", "########### BEGIN TESTE ft_strrchr");
	char str1[] = "Ruthless is mercy upon yourself";
	char str2[] = "";
	
	printf("strrchr(%s, y) %s <\n", str2, strrchr(str2, 'y'));
	printf("strrchr(%s, y) %s <\n", str1, strrchr(str1, 'y'));
	printf("strrchr(%s, z) %s <\n", str1, strrchr(str1, 'z'));
	printf("ft_strrchr(%s, y) %s <\n", str2, ft_strrchr(str2, 'y'));
	printf("ft_strrchr(%s, y) %s <\n", str1, ft_strrchr(str1, 'y'));
	printf("ft_strrchr(%s, z) %s <\n", str1, ft_strrchr(str1, 'z'));

	printf("%s\n", "########### END TESTE ft_strrchr");
}

void tst_ft_strchr()
{
	printf("%s\n", "########### BEGIN TESTE ft_strchr");
	char str1[] = "Ruthless is mercy upon yourself";
	char str2[] = "";
	
	printf("strchr(%s, y) %s <\n", str2, strchr(str2, 'y'));
	printf("strchr(%s, y) %s <\n", str1, strchr(str1, 'y'));
	printf("strchr(%s, z) %s <\n", str1, strchr(str1, 'z'));
	printf("ft_strchr(%s, y) %s <\n", str2, ft_strchr(str2, 'y'));
	printf("ft_strchr(%s, y) %s <\n", str1, ft_strchr(str1, 'y'));
	printf("ft_strchr(%s, z) %s <\n", str1, ft_strchr(str1, 'z'));

	printf("%s\n", "########### END TESTE ft_strchr");
}

void tst_ft_strnstr()
{
	printf("%s\n", "########### BEGIN TESTE ft_strnstr");
	char str1[] = "Ruthless is merci upon yourself (mercy)";
	char str2[] = "uth";
	
	printf("ft_strnstr(%s, %s, 5) %s <\n", str1, str2, ft_strnstr(str1, str2, 5));
	printf("strnstr(%s, %s, 5) %s <\n", str1, str2, strnstr(str1, str2, 5));

	printf("%s\n", "########### END TESTE ft_strnstr");
}

void tst_ft_strlcpy()
{
	printf("%s\n", "########### BEGIN TESTE ft_strlcpy");

	int nbr = 5;

	char v_str1[42] = "Poseidon";
	char v_str2[32] = "Ruthless is merci upon yourself";
	
	printf("ft_strlcpy(%s, %s, %i) ", v_str1, v_str2, nbr);
	printf("%zu <\n", ft_strlcpy(v_str1, v_str2, nbr));
	printf("ft_strlcpy DST: %s <\n", v_str1);

	char str1[42] = "Poseidon";
	char str2[32] = "Ruthless is merci upon yourself";

	printf("strlcpy(%s, %s, %i) ", str1, str2, nbr);
	printf("%zu <\n", strlcpy(str1, str2, nbr));
	printf("strlcpy DST: %s <\n", str1);

	printf("%s\n", "########### END TESTE ft_strlcpy");
}

void tst_ft_strlcat()
{
	printf("%s\n", "########### BEGIN TESTE ft_strlcat");

	int nbr = 22;

	char v_str1[42] = "Poseidon";
	char v_str2[32] = "Ruthless is merci upon yourself";
	
	printf("ft_strlcat(%s, %s, %i) ", v_str1, v_str2, nbr);
	printf("%zu <\n", ft_strlcat(v_str1, v_str2, nbr));
	printf("ft_strlcat DST: %s <\n", v_str1);

	char str1[42] = "Poseidon";
	char str2[32] = "Ruthless is merci upon yourself";

	printf("strlcat(%s, %s, %i) ", str1, str2, nbr);
	printf("%zu <\n", strlcat(str1, str2, nbr));
	printf("strlcat DST: %s <\n", str1);

	printf("%s\n", "########### END TESTE ft_strlcat");
}

int main(void)
{
	// tst_ft_isalpha();
	// tst_ft_isdigit();
	// tst_ft_isalnum();
	// tst_ft_isascii();
	// tst_ft_isprint();
	// tst_ft_strlen();
	// tst_ft_memset();
	// tst_ft_bzero();
	// tst_ft_tolower();
	// tst_ft_toupper();
	// tst_ft_atoi();
	// tst_ft_memcmp();
	// tst_ft_strrchr();
	// tst_ft_strchr();
	// tst_ft_strnstr();
	// tst_ft_strncmp();
	// tst_ft_strlcpy();
	// tst_ft_strlcat();
	
	// tst_ft_memcpy();
	// tst_ft_memmove();
	// tst_ft_memchr();

	return 0;
}