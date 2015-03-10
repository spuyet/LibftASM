.PHONY: all clean fclean re

CFLAGS := -Wall -Wextra -Werror -I include/libfts -I include/specs

CFILES :=	main.c unit_bzero.c unit_strcat.c unit_isalpha.c \
			unit_isdigit.c unit_isalnum.c unit_isascii.c unit_isprint.c \
			unit_toupper.c unit_tolower.c unit_puts.c unit_strlen.c \
			unit_memset.c unit_memcpy.c unit_strdup.c unit_cat.c

CSRC := $(addprefix src/specs/, $(CFILES))

NASM := nasm

NASMFLAGS := -f macho64

ASMFILES := ft_bzero.s ft_strcat.s ft_isalpha.s ft_isdigit.s \
						ft_isalnum.s ft_isascii.s ft_isprint.s ft_toupper.s \
						ft_tolower.s ft_puts.s ft_strlen.s ft_memset.s \
						ft_memcpy.s ft_strdup.s ft_cat.s

ASMSRC := $(addprefix src/libfts/, $(ASMFILES))

NASMOBJ := $(ASMFILES:%.s=obj/%.o)

LFLAGS := -L. -lfts

LIBFT := libfts.a

NAME := ft_libfts

all: $(LIBFT) $(NAME)

$(LIBFT) : $(NASMOBJ)
	ar rcs $@ $^	

obj/%.o: src/libfts/%.s
	@mkdir -p obj/
	$(NASM) $(NASMFLAGS) $< -o $@

$(NAME):
	$(CC) $(CFLAGS) $(CSRC) $(LFLAGS) -o $(NAME)

clean:
	rm -rf obj

fclean: clean
	rm -rf $(LIBFT)
	rm -rf $(NAME)

re: fclean all
