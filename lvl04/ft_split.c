#include <stdlib.h>

int		is_space(char c)
{
	return (c == ' ' || c == '\t' || c == '\n' || 
			c == '\v' || c == '\f' || c == '\r');
}

int		count_words(char *str)
{
	int count = 0;
	int i = 0;

	while (str[i])
	{
		while (str[i] && is_space(str[i]))
			i++;
		if (str[i])
			count++;
		while (str[i] && !is_space(str[i]))
			i++;
	}
	return (count);
}

char	*ft_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	**ft_split(char *str)
{
	int		i = 0;
	int		j = 0;
	int		word_len;
	char	**tab;

	tab = (char **)malloc(sizeof(char *) * (count_words(str) + 1));
	if (!tab)
		return (NULL);

	while (str[i])
	{
		while (str[i] && is_space(str[i]))
			i++;
		
		if (str[i])
		{
			word_len = 0;
			while (str[i + word_len] && !is_space(str[i + word_len]))
				word_len++;
			tab[j] = (char *)malloc(sizeof(char) * (word_len + 1));
			if (!tab[j])
				return (NULL);
			ft_strncpy(tab[j], &str[i], word_len);
			j++;
			i += word_len;
		}
	}
	tab[j] = NULL;
	return (tab);
}