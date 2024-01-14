#include "fileutils.h"


char *has_extension(char *filename)
{
    char *ext = strrchr(filename, '.');
    return((ext != NULL && ext[1] != '\0') ? ext + 1 : NULL);
}


char *rev_strstr(char *haystack, char *needle, size_t len)
{
    size_t haystack_len = strlen(haystack);
    if (haystack_len < len || len == 0)
    {
        return(NULL);
    }

    /* Coloca-nos na posição certa */
    char *end_of_haystck = haystack + haystack_len - len;
    if (memcmp(end_of_haystck, needle, len) == 0)
    {
        return(end_of_haystck);
    }
    else
    {
        return(NULL);
    }
}


char *duplicate(char *source)
{
    size_t source_len = strlen(source) + 1;
    char *dest = (char *)malloc(source_len);
    if (dest == NULL)
    {
        return(NULL);
    }

    memmove(dest, source, source_len);
    return(dest);

}


char *create_pathname(char *base, char *name)
{
    size_t pathname_len = strlen(base) + strlen(name) + 2;
    char *pathname = (char *)malloc(pathname_len);
    if (pathname == NULL)
    {
        return(NULL);
    }

    snprintf(pathname, pathname_len, "%s/%s", base, name);
    return(pathname);
}


void remove_last_char(char *itemname, int reject)
{
    size_t itemname_len = strlen(itemname);
    if (itemname[itemname_len - 1] == reject)
    {
        itemname[itemname_len - 1] = '\0';
    }
}


void remove_last_chars(char *itemname, int start_reject, size_t size)
{
    size_t itemname_len = strlen(itemname);
    if (itemname[itemname_len - size] == start_reject)
    {
        itemname[itemname_len - size] = '\0';
    }
}
