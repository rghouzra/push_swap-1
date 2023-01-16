NAME        := push_swap
CNAME       := checker
CC        := cc
FLAGS    := -Wall -Wextra -Werror -I inc

SRCS        :=      push_swap.c \
						  src/libft/ft_atoi.c \
						  src/libft/ft_bzero.c \
						  src/libft/ft_calloc.c \
						  src/libft/ft_isalnum.c \
						  src/libft/ft_isalpha.c \
						  src/libft/ft_isascii.c \
						  src/libft/ft_isdigit.c \
						  src/libft/ft_isprint.c \
						  src/libft/ft_itoa.c \
						  src/libft/ft_memchr.c \
						  src/libft/ft_memcmp.c \
						  src/libft/ft_memcpy.c \
						  src/libft/ft_memmove.c \
						  src/libft/ft_memset.c \
						  src/libft/ft_putchar_fd.c \
						  src/libft/ft_putendl_fd.c \
						  src/libft/ft_putnbr_fd.c \
						  src/libft/ft_putstr_fd.c \
						  src/libft/ft_split.c \
						  src/libft/ft_strchr.c \
						  src/libft/ft_strdup.c \
						  src/libft/ft_striteri.c \
						  src/libft/ft_strjoin.c \
						  src/libft/ft_strlcat.c \
						  src/libft/ft_strlcpy.c \
						  src/libft/ft_strlen.c \
						  src/libft/ft_strcmp.c \
						  src/libft/ft_strmapi.c \
						  src/libft/ft_strncmp.c \
						  src/libft/ft_strnstr.c \
						  src/libft/ft_strrchr.c \
						  src/libft/ft_strtrim.c \
						  src/libft/ft_substr.c \
						  src/libft/ft_tolower.c \
						  src/libft/ft_toupper.c \
						  src/printf/ft_printf.c \
						  src/printf/ft_putchar.c \
						  src/printf/ft_putmem.c \
						  src/printf/ft_putnbr.c \
						  src/printf/ft_putnbr_b.c \
						  src/printf/ft_putnbr_u.c \
						  src/printf/ft_putstr.c \
						  src/stack/init.c \
						  src/stack/hlpr.c \
						  src/stack/checks.c \
						  src/ops/a.c \
						  src/ops/b.c \
						  src/ops/ab.c \
						  src/parsing/init.c \
						  src/sorting/init.c \
						  src/sorting/algo.c \
						  src/sorting/htpr.c \

SRCS_BONUS  :=      src/checker/check.c \
						  src/checker/gnl/gnl.c \
						  src/checker/gnl/gnl_utils.c \
						  src/libft/ft_atoi.c \
						  src/libft/ft_bzero.c \
						  src/libft/ft_calloc.c \
						  src/libft/ft_isalnum.c \
						  src/libft/ft_isalpha.c \
						  src/libft/ft_isascii.c \
						  src/libft/ft_isdigit.c \
						  src/libft/ft_isprint.c \
						  src/libft/ft_itoa.c \
						  src/libft/ft_memchr.c \
						  src/libft/ft_memcmp.c \
						  src/libft/ft_memcpy.c \
						  src/libft/ft_memmove.c \
						  src/libft/ft_memset.c \
						  src/libft/ft_putchar_fd.c \
						  src/libft/ft_putendl_fd.c \
						  src/libft/ft_putnbr_fd.c \
						  src/libft/ft_putstr_fd.c \
						  src/libft/ft_split.c \
						  src/libft/ft_strchr.c \
						  src/libft/ft_strdup.c \
						  src/libft/ft_striteri.c \
						  src/libft/ft_strjoin.c \
						  src/libft/ft_strlcat.c \
						  src/libft/ft_strlcpy.c \
						  src/libft/ft_strlen.c \
						  src/libft/ft_strmapi.c \
						  src/libft/ft_strcmp.c \
						  src/libft/ft_strncmp.c \
						  src/libft/ft_strnstr.c \
						  src/libft/ft_strrchr.c \
						  src/libft/ft_strtrim.c \
						  src/libft/ft_substr.c \
						  src/libft/ft_tolower.c \
						  src/libft/ft_toupper.c \
						  src/printf/ft_printf.c \
						  src/printf/ft_putchar.c \
						  src/printf/ft_putmem.c \
						  src/printf/ft_putnbr.c \
						  src/printf/ft_putnbr_b.c \
						  src/printf/ft_putnbr_u.c \
						  src/printf/ft_putstr.c \
						  src/stack/init.c \
						  src/stack/hlpr.c \
						  src/stack/checks.c \
						  src/ops/a.c \
						  src/ops/b.c \
						  src/ops/ab.c \
						  src/parsing/init.c \
						  src/sorting/init.c \
						  src/sorting/algo.c \
						  src/sorting/htpr.c \

OBJS_BONUS  :=      ${SRCS_BONUS:.c=.o}
			
OBJS        := $(SRCS:.c=.o)

.c.o:
	${CC} ${FLAGS} -c $< -o ${<:.c=.o}

CLR_RMV		:= \033[0m
RED		    := \033[1;31m
GREEN		:= \033[1;32m
YELLOW		:= \033[1;33m
BLUE		:= \033[1;34m
CYAN 		:= \033[1;36m
RM		    := rm -f

all:		${NAME}

${NAME}:	${OBJS}
			@echo "$(GREEN)Compilation ${CLR_RMV}of ${YELLOW}$(NAME) ${CLR_RMV}..."
			${CC} ${FLAGS} -o ${NAME} ${OBJS}
			@echo "$(GREEN)$(NAME) created[0m ✔️"

${CNAME}:   ${OBJS_BONUS}
			${CC} ${FLAGS} -o ${CNAME} ${OBJS_BONUS}
			@echo "$(GREEN) $(CNAME) created[0m ✔️"

bonus:		all ${CNAME}

clean:
			@ ${RM} $(OBJS) $(OBJS_BONUS)
			@ echo "$(RED)Deleting $(CYAN)$(NAME) $(CLR_RMV)objs ✔️"

fclean:		clean
			@ ${RM} ${NAME} ${CNAME}
			@ echo "$(RED)Deleting $(CYAN)$(NAME) $(CLR_RMV)binary ✔️"

re:			fclean all

.PHONY:		all clean fclean re


