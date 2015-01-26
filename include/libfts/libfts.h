#ifndef   LIBFTS_H
# define  LIBFTS_H

void	ft_bzero(void *s, size_t n);
char	*ft_strcat(char* s1, const char *s2);
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int   	ft_isalnum(int c);
int   	ft_isascii(int c);
int  	ft_isprint(int c);
int   	ft_toupper(int c);
int  	ft_tolower(int c);
int  	ft_puts(const char *s);
size_t	ft_strlen(const char *);
void	*ft_memset(void *b, int c, size_t len);
void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n);
char	*ft_strdup(const char *s1);

#endif