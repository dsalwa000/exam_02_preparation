#include <limits.h>
#include <stdio.h>

// zaczynaj od printf!!!
// dopiero na końcu zamieniaj to na write!

// zwracaj uwagę na typy jakie funkcja przyjmuje!

int		max(int *tab, unsigned int len)
{
	int	m;

	if (len == 0 || !tab)
		return (0);
	m = INT_MIN;
	len--;
	while (len > 0)
	{
		if (tab[len] > m)
			m = tab[len];
		len--;
	}
	if (tab[len] > m)
		m = tab[len];
	return (m);
}

int main()
{
	int tab[] = {-14};
	printf("%d\n", max(tab, 1));
	return (0);
}