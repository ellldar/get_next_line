
NAME = get_next_line
SRC = get_next_line.c main.c
OBJ = $(SRC:*.c=*.o)
HDR = -I.
FLG = -Wall -Werror -Wextra
LFT = -L./libft -lft
SANIT = -fsanitize=address
INPUT = example.txt

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(SRC)
	@gcc -o $(NAME) $(SRC) $(HDR) $(LFT)
	@./$(NAME) $(INPUT) | cat -e

debug: $(SRC)
	@gcc -o $(NAME) $(SRC) $(HDR) $(LFT) -g
	@lldb $(NAME) -- $(INPUT)

sanit:
	@gcc -o $(NAME) $(SRC) $(HDR) $(LFT) $(SANIT) -g
	@./$(NAME) | cat -e

clean:
	@rm -f *.o
	@rm -rf *.dSYM
	@rm -f .nfs.*
	@rm -f *DS_Store

fclean: clean
	@rm -f $(NAME)

re: fclean all

norm:
	@norminette $(SRC) $(HDR)
