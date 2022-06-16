#include <string.h>
#include <ctype.h>

/**
 * cap_string - capitalized a string
 * @str: string to capitalized
 * Return: the capitalized string
 */

char *cap_string(char *str)
{
	int i;
	char sep[] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '\"', '(', ')', '{', '}'};

	for (i = 0; i < (int) strlen(str); i++)
	{
		if ((i == 0) || ((strchr(sep, str[i - 1]) != NULL) && (str[i] >= 'a' && str[i] <= 'z')))
		{
			str[i] = toupper(str[i]);
		}
	}

	return (str);
}
