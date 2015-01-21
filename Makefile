.PHONY: all clean fclean re

CFLAGS := -Wall -Wextra -Werror -I include/libfts -I include/specs

CFILES :=	main.c unit_bzero.c unit_strcat.c unit_isalpha.c \
			unit_isdigit.c

CSRC := $(addprefix src/specs/, $(CFILES))

NASM := nasm

NASMFLAGS := -f macho64

ASMFILES := ft_bzero.s ft_strcat.s ft_isalpha.s ft_isdigit.s

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
