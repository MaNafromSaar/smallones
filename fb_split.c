#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

size_t count_tokens (char const *s, char seperator)
{
    size_t  tokens;
    bool    inside_word,

    tokens = 0;
    while (*s)
    {
        inside_word = false;
        while (*s == seperator && *s)
            ++s;
        while (*s != seperator && *s)
        {
            if (!inside_word)
            {
                tokens++;
                inside_word = true;
            }
            ++s;
        }
        return (tokens);
    }
}

char** fn_split(char const *s, char c)
{
    size_t  tokens;
    char    **token_val;
    
    tokens = 0;
    tokens = count_tokens(s, c);
    token_val = malloc((tokens + 1) * sizeof(char *));
    if (token_val == NULL)
        return (NULL);
    token_val[tokens] = NULL;
}