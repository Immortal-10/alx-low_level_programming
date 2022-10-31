/**
 * _strchr - a function
 *
 * @s: pointer
 * @c: character
 *
 * Return: first occurence of character or null if not found
 */

char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
return (s);
s++;
}

if (*s == c)
return (s);

return ('\0');
}
