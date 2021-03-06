#include "ft_libasm.h"

int main(void)
{
    char *s = "1234";
    const char *s2 = "12355";
    const char *s3 = "12312";
    char *s7 = "12345";
    char *s6 = malloc(sizeof(char) * strlen(s7));
    int fd;
    char buf[1000];
    char buf2[1000];
	fd = open("./main/test.txt", O_RDONLY);

    printf("%s\n", "|-----------------------------------------|");
    printf("%s\n", "|----------- WELCOME_TO_LIBASM -----------|");
    printf("%s\n", "|-----------------------------------------|");
    printf("%s\n", "|--------------- ft_strlen ---------------|");
    printf("%s\n", "|-----------------------------------------|");
    printf("|------------- my resault: %zu -------------|\n", ft_strlen(s));
    printf("|------------- or resault: %lu -------------|\n", strlen(s));
    printf("%s\n", "|-----------------------------------------|");
    printf("%s\n", "|--------------- ft_strcmp ---------------|");
    printf("%s\n", "|-----------------------------------------|");
    printf("|------------- my resault: %d -------------|\n", ft_strcmp(s2, s3));
    printf("|------------- or resault: %d -------------|\n", strcmp(s2, s3));
    printf("%s\n", "|-----------------------------------------|");
    printf("%s\n", "|--------------- ft_strcpy ---------------|");
    printf("%s\n", "|-----------------------------------------|");
    printf("|----------- my resault: %s -----------|\n", ft_strcpy(s6, s7));
    printf("|----------- or resault: %s -----------|\n", strcpy(s6, s7));
    printf("%s\n", "|-----------------------------------------|");
    printf("%s\n", "|--------------- ft_strdup ---------------|");
    printf("%s\n", "|-----------------------------------------|");
    printf("|----------- my resault: %s -----------|\n", ft_strdup(s7));
    printf("|----------- or resault: %s -----------|\n", strdup(s7));
    printf("%s\n", "|-----------------------------------------|");
    printf("%s\n", "|---------------- ft_read ----------------|");
    printf("%s\n", "|-----------------------------------------|");
    printf("|------------- my resault: %zd -------------|\n", ft_read(fd, buf, 1));
    printf("|------------- or resault: %zd -------------|\n", read(fd, buf2, 1));
    printf("%s\n", "|-----------------------------------------|");
    printf("%s\n", "|---------------- ft_write ---------------|");
    printf("%s\n", "|-----------------------------------------|");
    ft_write(1, "|------------ my resault: 123 ------------|\n", 44);
    write(1, "|------------ or resault: 123 ------------|\n", 44);
    printf("%s\n", "|-----------------------------------------|");
    close(fd);
    return (0);
}