#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int is_space(char c)
{
	if ((c >= 9 && c <= 13) || c == ' ')
		return (1);
	return (0);
}

int count_words(char *input)
{
	int count;
	int in_word;
	int i;

	count = 0;
	i = 0;
	in_word = 0;
	while (input[i])
	{
		if (!is_space(input[i]) && !in_word)
		{
			count++;
			in_word = 1;
		}
		else if (is_space(input[i]))
		{
			in_word = 0;
		}
		i++;
	}
	return (count);
}

char *strncpy(char *dst, const char *src, size_t len)
{
	size_t i;

	i = 0;
	while (src[i] && len > i)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

void free_split(char **split, int j)
{
	while (j >= 0)
	{
		free(split[j]);
		j--;
	}
	free(split);
}

char    **ft_split(char *str)
{
	int i;
	int j;
	int length;
	char **split;

	split = (char **)malloc((count_words(str) + 1) * sizeof(char*));
	if (!split)
		return (NULL);
	i = 0;
	j = 0;
	length = 0;
	while (str[i])
	{
		while (str[i] && is_space(str[i]))
			i++;
		if (str[i])
		{
			length = 0;
			while (str[i + length] && !is_space(str[i + length]))
				length++;
			split[j] = (char*)malloc(length + 1);
			split[j] = strncpy(split[j], &str[i], length);
			if (!split[j])
				return (free_split(split, j - 1), NULL);
			i += length;
			j++;
		}
	}
	return (split[j] = NULL, split);
}

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	char **splited;
	printf("words: %d\n", count_words(argv[1]));
	splited = ft_split(argv[1]);
	while (*splited)
	{
		printf("%s\n", *splited);
		splited++;
	}
	return (0);
}
