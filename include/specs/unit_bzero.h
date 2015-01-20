#ifndef   UNIT_BZERO_H
# define  UNIT_BZERO_H

void    unit_bzero(void);
int     unit_bzero_int(int n, size_t size);
int     unit_bzero_char(char c, size_t size);
int     unit_bzero_string(char* s, size_t size);
int     unit_bzero_float(float n, size_t size);

typedef            union
{
  int              a;
  char             b;
  char             *c;
  float            d;
}                  t_type;

typedef            struct s_bzero
{
    t_type         u;
    t_type         v;
}                  t_bzero;

#endif