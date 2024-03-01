# include 

/**
 * _strspn - getting the lenght of a prefix substring
 * @s: returning the bytes here
 * Return: returning the number of bytes
 *
 */

_strspn

{
	int i, j;
	int c = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] != 32)
		{
			for (j = 0; accept[j] != '\0'; j++)
			{
				if (s[i] == accept[j])
					c++;
			}
		}
		else
			return (c);

	}
	return (c);
}
