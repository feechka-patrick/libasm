/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmisfit <nmisfit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 15:29:10 by nmisfit           #+#    #+#             */
/*   Updated: 2021/05/14 16:04:41 by nmisfit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>

size_t ft_strlen(const char *s);

char *ft_strcpy(char *dest, const char *src);

int ft_strcmp(const char *s1, const char *s2);

ssize_t ft_write(int fd, const void *buf, size_t count);

ssize_t ft_read(int fd, void *buf, size_t count);

char *ft_strdup(const char *s);

int main(void)
{
	// printf("-------------FT_STRLEN-------------\n");
	
	// char *str = "Abcd";
	// printf("ORIGINAL	%ld\n", strlen(str));

	// printf("MY		%ld\n", ft_strlen(str));
	
	
	// printf("\n-------------FT_STRCPY-------------\n");
	// char *dest;
	// dest = malloc(10);
	// char *src = "";
	
	// dest = strcpy(dest, src);
	// printf("ORIGINAL	dest %s : src %s\n", src, dest);
	// free(dest);
	
	// dest = malloc(10);
	// dest = ft_strcpy(dest, src);
	// printf("MY		dest %s : src %s\n", src, dest);
	// free(dest);
	
	// printf("-------------FT_STRCMP-------------\n");
	
	// char *s1 = "Abcda";
	// char *s2 = "Abcdz";
	// printf("ORIGINAL	%d\n", strcmp(s1, s2));

	// printf("MY		%d\n", ft_strcmp(s1, s2));

	// s1 = "Abcdz";
	// s2 = "Abcda";
	// printf("\nORIGINAL	%d\n", strcmp(s1, s2));

	// printf("MY		%d\n", ft_strcmp(s1, s2));

	// s1 = "Abcd";
	// s2 = "Abcd";
	// printf("\nORIGINAL	%d\n", strcmp(s1, s2));

	// printf("MY		%d\n", ft_strcmp(s1, s2));

	// s1 = "";
	// s2 = "abcd";
	// printf("\nORIGINAL	%d\n", strcmp(s1, s2));

	// printf("MY		%d\n", ft_strcmp(s1, s2));

	// printf("-------------FT_WRITE-------------\n");
	
	// int fd = 1;
	// char *buf = "hello word";
	// int count = 5;
	
	// printf("BUF: %s\nORIGINAL	", buf);
	// int result = write(fd, buf, count);
	// printf("result: %d\n", result);
	
	// printf("MY		");
	// result = ft_write(fd, buf, count);
	// printf("result: %d\n", result);

	// printf("-------------FT_READ-------------\n");
	
	// int fd = 1;
	// char *buf = malloc(10);
	// int count = 5;
	
	// int result = read(fd, buf, count);
	// printf("ORIGINAL	result: %d, buf: %s\n", result, buf);
	// free(buf);
	
	// buf = malloc(10);
	// result = ft_read(fd, buf, count);
	// printf("MY		result: %d, buf: %s\n", result, buf);
	// free(buf);

	printf("-------------FT_STRDUP-------------\n");

	char *str = "abcdef";
	char *s = strdup(str);
	
	printf("ORIGINAL	str: %s", s);
	free(s);

	s = ft_strdup(str);
	printf("MY		str: %s", s);
	free(s);
	
}


//nasm -f elf64 srcs/*.s
