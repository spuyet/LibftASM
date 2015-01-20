.PHONY: all clean fclean re

CFLAGS := -c -Wall -Wextra -Werror -g3

FILES := ft_bzero.s

OBJ := $(FILES:src/libfts/%.s=obj/%.o)

LIBFTS := libfts.a

all: $(LIBFT)

$(LIBFT): $(OBJ)
	@echo "lib"
	ar rcs $@ $^

obj/%.o: src/libfts/%.s
	$(CC) $(CFLAGS) src/libfts/$(FILES) $< -o $@

clean:
	rm -rf obj

fclean: clean
		rm -rf $(LIBFTS)

re: fclean all