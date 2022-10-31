/**
 * _strstr - a function
 *
 * @haystack: substring
 *
 * @needle: substringed
 *
 * Return: a pointer
 */

char *_strstr(char *haystack, char *needle)
{
char *h, *n;

while (*haystack != '\0')
{
h = haystack;
n = needle;
while (*n != '\0' && *haystack == *n)
{
haystack++;
n++;
}
if (!*n)
return (h);
haystack++;
}
return ('\0');
}
