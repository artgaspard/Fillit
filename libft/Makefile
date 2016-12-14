#* ************************************************************************** *#
#*                                                                            *#
#*                                                        :::      ::::::::   *#
#*   Makefile                                           :+:      :+:    :+:   *#
#*                                                    +:+ +:+         +:+     *#
#*   By: jpicot <jpicot@student.42.fr>              +#+  +:+       +#+        *#
#*                                                +#+#+#+#+#+   +#+           *#
#*   Created: 2016/12/10 22:51:34 by jpicot            #+#    #+#             *#
#*   Updated: 2016/12/11 21:18:13 by jpicot           ###   ########.fr       *#
#*                                                                            *#
#* ************************************************************************** *#

NAME = libft.a

# **************************************************************************** #

# COMPILATION
CC = clang
CCFLAGS = -Wall -Werror -Wextra

# DIRECTORIES
D_SRC = src
D_INC = inc
D_OBJ = obj

# SOURCES
F_SRC =\
	basics/arrays/output/ft_putachr.c\
	basics/chars/check/ft_isalnum.c\
	basics/chars/check/ft_isalpha.c\
	basics/chars/check/ft_isascii.c\
	basics/chars/check/ft_isdigit.c\
	basics/chars/check/ft_islower.c\
	basics/chars/check/ft_isprint.c\
	basics/chars/check/ft_isupper.c\
	basics/chars/output/ft_putchr.c\
	basics/chars/output/ft_putchr_fd.c\
	basics/chars/output/ft_putnchr.c\
	basics/chars/output/ft_putnchr_fd.c\
	basics/chars/transform/ft_tolower.c\
	basics/chars/transform/ft_toupper.c\
	basics/memory/create/ft_memalloc.c\
	basics/memory/delete/ft_memdel.c\
	basics/memory/iterate/ft_memchr.c\
	basics/memory/iterate/ft_memcmp.c\
	basics/memory/transform/ft_bzero.c\
	basics/memory/transform/ft_memccpy.c\
	basics/memory/transform/ft_memcpy.c\
	basics/memory/transform/ft_memmove.c\
	basics/memory/transform/ft_memset.c\
	basics/numbers/convers/ft_atoi.c\
	basics/numbers/convers/ft_itoa.c\
	basics/numbers/output/ft_putnbr.c\
	basics/numbers/output/ft_putnbr_fd.c\
	basics/strings/create/ft_strdup.c\
	basics/strings/create/ft_strndup.c\
	basics/strings/create/ft_strjoin.c\
	basics/strings/create/ft_strmap.c\
	basics/strings/create/ft_strmapi.c\
	basics/strings/create/ft_strnew.c\
	basics/strings/create/ft_strsplit.c\
	basics/strings/create/ft_strsub.c\
	basics/strings/create/ft_strtrim.c\
	basics/strings/delete/ft_strdel.c\
	basics/strings/iterate/ft_strchr.c\
	basics/strings/iterate/ft_strcmp.c\
	basics/strings/iterate/ft_strequ.c\
	basics/strings/iterate/ft_striter.c\
	basics/strings/iterate/ft_striteri.c\
	basics/strings/iterate/ft_strlen.c\
	basics/strings/iterate/ft_strncmp.c\
	basics/strings/iterate/ft_strnequ.c\
	basics/strings/iterate/ft_strnstr.c\
	basics/strings/iterate/ft_strrchr.c\
	basics/strings/iterate/ft_strstr.c\
	basics/strings/output/ft_putendl.c\
	basics/strings/output/ft_putendl_fd.c\
	basics/strings/output/ft_putstr.c\
	basics/strings/output/ft_putstr_fd.c\
	basics/strings/transform/ft_strcat.c\
	basics/strings/transform/ft_strclr.c\
	basics/strings/transform/ft_strcpy.c\
	basics/strings/transform/ft_strlcat.c\
	basics/strings/transform/ft_strncat.c\
	basics/strings/transform/ft_strncpy.c\
	containers/t_lst/ft_lstadd_tlst.c\
	containers/t_lst/ft_lstdel_tlst.c\
	containers/t_lst/ft_lstdelone_tlst.c\
	containers/t_lst/ft_lstiter_tlst.c\
	containers/t_lst/ft_lstmap_tlst.c\
	containers/t_lst/ft_lstnew_tlst.c	

# ******************************************************************** #

# SPECIAL CHARS
LOG_CLEAR		= \033[2K
LOG_UP 			= \033[A
LOG_NOCOLOR		= \033[0m
LOG_BLACK		= \033[1;30m
LOG_RED			= \033[1;31m
LOG_GREEN		= \033[1;32m
LOG_YELLOW		= \033[1;33m
LOG_BLUE		= \033[1;34m
LOG_VIOLET		= \033[1;35m
LOG_CYAN		= \033[1;36m
LOG_WHITE		= \033[1;37m

# ******************************************************************* #

.PHONY: make all clean fclean re

F_OBJ = $(addsuffix .o, $(basename $(F_SRC)))

DF_SRC = $(addprefix $(D_SRC)/, $(F_SRC))
DF_OBJ = $(addprefix $(D_OBJ)/, $(F_OBJ))
OBJ_DIRS = $(sort $(dir $(DF_OBJ)))

all: $(NAME)
$(D_OBJ)/%.o: $(D_SRC)/%.c
	@mkdir -p $(OBJ_DIRS) 2> /dev/null || true
	@echo "$(LOG_WHITE)$(NAME)... $(LOG_NOCOLOR)$<"
	@$(CC) $(CCFLAGS) -I $(D_INC) -o $@ -c $<
$(NAME): $(DF_OBJ)
	@echo "$(LOG_WHITE)$(NAME)... assembling...$(LOG_NOCOLOR)"
	@ar rc $(NAME) $(DF_OBJ)
	@ranlib $(NAME)
	@echo "$(LOG_GREEN)$(NAME)... compiled ✓$(LOG_NOCOLOR)"
clean:
	@echo "$(LOG_RED)Deleting libft's objs ✖$(LOG_NOCOLOR)"
	@rm -f $(DF_OBJ)
	@/bin/rm -rf $(D_OBJ) 2> /dev/null || true
fclean: clean
	@echo "$(LOG_RED)Deleting $(NAME) ✖$(LOG_NOCOLOR)"
	@/bin/rm -rf $(NAME)
re: fclean all
norme:
	@echo "$(LOG_YELLOW)Checking the norme of libft...\
		$(LOG_WHITE) for each .c$(LOG_NOCOLOR)"
	@norminette $(DF_SRC)
	@echo "\n$(LOG_YELLOW)Checking the norme of libft...\
		$(LOG_WHITE) for each .h$(LOG_NOCOLOR)"
	@norminette $(D_INC)/
