# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aridolfi <aridolfi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/04/02 09:59:55 by aridolfi          #+#    #+#              #
#    Updated: 2018/04/02 19:37:04 by aridolfi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Executable
NAME 	= 	ex02

# Compilation
CC		= 	clang++
CFLAGS	= 	-Wall -Wextra -Werror

# Directories
SRCDIR	=	srcs
OBJDIR	= 	objs
INCDIR	=	./includes

# Files && Objs

FILES 	=	Bureaucrat.class				\
			AForm.class						\
			main							\
			PresidentialPardonForm.class	\
			RobotomyRequestForm.class		\
			ShrubberyCreationForm.class		\

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
					@echo "|                           ex02                            |"
					@$(CC) $(CFLAGS) -o $@ $^ -lncurses -I$(INCDIR) -I$HOME/.brew/include
					@echo "|                        CAKE DONE !                        |"
					@echo "-------------------------------------------------------------"
					@cat ../cake-v2.ascii
					@echo ""
					@echo "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"

$(OBJDIR)/%.o	:	$(SRCDIR)/%.cpp
					@$(CC) $(CFLAGS) -c -g $< -o $@ -I$(INCDIR)

# Clean rules
clean			:
					@rm -rf $(OBJDIR) *_shrubbery

fclean			: 	clean
					@rm -f $(NAME)

# **************************************************************************** #
