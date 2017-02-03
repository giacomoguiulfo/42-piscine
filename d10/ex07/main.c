#include <stdio.h>

void ft_sort_wordtab(char **tab);

int	main()
{
	int i = 0;
	char *tab[] = {"kurvi", "zoo", "gluposti", "apansas", "citron"};

	ft_sort_wordtab(tab);
	while (tab[i])
	{
		printf("string is %s\n", tab[i]);
		i++;
	}
	return (0);
}

/*
int	main()
{
	int i = 0;
	char **tab;
//	tab = malloc(sizeof(*tab) * 4);
//	while (tab[i]
//	tab[i] = malloc(sizeof(**tab));
	tab [0] = "kurvi";
	tab [1] = "gluposti";
	tab [2] = "apansas";
//	tab [3] = "citron";

	ft_sort_wordtab(tab);
	while (tab[i])
	{
		printf("string is %s\n", tab[i]);
		i++;
	}
	return (0);
} */
