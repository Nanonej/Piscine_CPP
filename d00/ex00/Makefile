# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aridolfi <aridolfi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/05/16 13:45:38 by aridolfi          #+#    #+#              #
#    Updated: 2018/03/26 12:17:23 by aridolfi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Executable
NAME 	= 	megaphone

# Compilation
CC		= 	clang++
CFLAGS	= 	-Wall -Wextra -Werror

# Directories
OBJDIR	= 	objs
INCDIR	=	./includes

# Files && Objs

FILES 	=	megaphone	\

OBJ	   := 	$(addsuffix .o, $(FILES))

# Paths foreach
OBJP 	=	$(addprefix $(OBJDIR)/, $(OBJ))

# **************************************************************************** #

# SPECIAL CHARS

LOG_CLEAR		= \033[2K
LOG_UP			= \033[A
LOG_NOCOLOR		= \033[0m
LOG_BOLD		= \033[1m
LOG_UNDERLINE	= \033[4m
LOG_BLINKING	= \033[5m
LOG_BLACK		= \033[1;30m
LOG_RED			= \033[1;31m
LOG_GREEN		= \033[1;32m
LOG_YELLOW		= \033[1;33m
LOG_BLUE		= \033[1;34m
LOG_VIOLET		= \033[1;35m
LOG_CYAN		= \033[1;36m
LOG_WHITE		= \033[1;37m

# Protect

.PHONY:	clean fclean

# **************************************************************************** #

# RULES

# Main rules
all				: 	$(OBJDIR) $(NAME)

re				: 	fclean all

# Compilation rules
$(OBJDIR)		:
					@mkdir -p $@ 2>&-

$(NAME)			: 	$(OBJP)
					@echo "-------------------------------------------------------------"
					@echo "|                  Debut de la compilation                  |"
					@echo "|                            42                             |"
					@echo "|                         Megaphone                         |"
					@$(CC) $(CFLAGS) -o $@ $^ -lncurses -I$(INCDIR) -I$HOME/.brew/include
					@echo "|                        CAKE DONE !                        |"
					@echo "-------------------------------------------------------------"
					@cat ../cake-v2.ascii
					@echo ""
					@echo "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"

$(OBJDIR)/%.o	:	%.cpp
					@$(CC) $(CFLAGS) -c -g $< -o $@

# Clean rules
clean			:
					@rm -rf $(OBJDIR)

fclean			: 	clean
					@rm -f $(NAME)

# **************************************************************************** #
