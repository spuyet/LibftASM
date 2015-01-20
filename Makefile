.PHONY: all clean fclean re

NASM := nasm

NASMFLAGS := -f macho64

CFLAGS := -c -Wall -Wextra -Werror -g3

FILES := ft_bzero.s

SRC := $(addprefix src/libfts/, $(FILES))

NASMOBJ := $(FILES:%.s=obj/%.o)

LIBFT := libfts.a

all: $(LIBFT)

$(LIBFT) : $(NASMOBJ)
	ar rcs $@ $^	

obj/%.o: src/libfts/%.s
	@mkdir -p obj/
	$(NASM) $(NASMFLAGS) $(SRC) -o $@

clean:
	rm -rf obj

fclean: clean
	rm -rf $(LIBFT)

re: fclean all
