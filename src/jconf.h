#ifndef _JCONF_H
#define _JCONF_H

#define MAX_CONF_SIZE 16 * 1024

typedef struct
{
    char *whitelist;
    char *TwitterID;
    char *CONSUMER_KEY;
    char *CONSUMER_SECRET;
    char *OAUTH_TOKEN;
    char *OAUTH_TOKEN_SECRET;
} jconf_t;

jconf_t *read_jconf(const char* file);
void dump_jconf(char *conf_path);

#endif // _JCONF_H
