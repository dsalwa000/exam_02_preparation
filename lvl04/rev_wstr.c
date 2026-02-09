#include <unistd.h>
#include <stdlib.h>

int is_space(char c)
{
	if ((c >= 9 && c <= 13) || c == ' ')
		return (1);
	return (0);
}

int count_words(char *str)
{
	int in_word;
	int count;
	int i;

	i = 0;
	count = 0;
	in_word = 0;
	while (str[i])
	{
		if (!is_space(str[i]) && !in_word)
		{
			in_word = 1;
			count++;
		}
		if (is_space(str[i]))
			in_word = 0;
		i++;
	}
	return (count);
}

char *ft_strncpy(char *dst, char *src, int size)
{
	int i;

	i = 0;
	while (src[i] && size > i)
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

void print_word(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int main(int ac, char **av)
{
	char **split;
	int words;
	int length;
	int i;
	int j;

	if (ac != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	words = count_words(av[1]);
	split = malloc((words + 1) * sizeof(char*));
	if (!split)
		return (0);
	i = 0;
	j = 0;
	length = 0;
	while (av[1][i])
	{
		while (av[1][i] && is_space(av[1][i]))
			i++;
		if (av[1][i])
		{
			length = 0;
			while (av[1][i + length] && !is_space(av[1][i + length]))
				length++;
			split[j] = malloc(length + 1);
			if (!split[j])
				return (free_split(split, j - 1), 0);
			split[j] = ft_strncpy(split[j], &av[1][i], length);
			i += length;
			j++;
		}
	}
	split[j] = NULL;
	j--;
	while (j >= 0)
	{
		print_word(split[j]);
		if (j > 0)
			write(1, " ", 1);
		j--;
	}
	free_split(split, words - 1); 
	return (0);
}
