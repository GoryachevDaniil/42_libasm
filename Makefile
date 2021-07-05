# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mturquin <mturquin@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/02/21 16:57:10 by mturquin          #+#    #+#              #
#    Updated: 2021/02/23 20:45:06 by mturquin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	libasm.a

NAME_BONUS 	= 	libasm_bonus.a

SRCS		:=	$(addprefix srcs/mandatory/,\
				ft_read.s\
				ft_strcmp.s\
				ft_strcpy.s\
				ft_strdup.s\
				ft_strlen.s\
				ft_write.s)

SRCSBONUS	=	$(addprefix srcs/bonus/,\
				ft_list_size_bonus.s)

HEADER		=	./includes

OBJS		=	$(SRCS:.s=.o)

OBJSBONUS	=	$(SRCSBONUS:.s=.o)

MAIN		=	./main/main.c

MAIN_BONUS	=	./main/main_bonus.c

EXE			=	test

EXE_BONUS	=	test_bonus

RM			=	rm -rf

FLAGS		=	nasm -f macho64

%.o:			%.s
				$(FLAGS) $< -o $@
			
$(NAME):		$(OBJS)
				ar rc $(NAME) $(OBJS)

$(NAME_BONUS):	$(OBJS) $(OBJSBONUS)
				ar rc ${NAME_BONUS} ${OBJS} ${OBJSBONUS}

all:			$(NAME) 

bonus:			$(NAME_BONUS)

compile:		$(NAME) $(MAIN) $(OBJS)
				gcc $(NAME) $(MAIN) -I$(HEADER) -o $(EXE)
				./$(EXE)
				rm -rf $(OBJS)

compile_bonus:	$(NAME_BONUS) $(MAIN) $(OBJS) $(OBJSBONUS)
				gcc $(NAME_BONUS) $(MAIN_BONUS) -I$(HEADER) -o $(EXE_BONUS)
				./$(EXE_BONUS)
				rm -rf $(OBJS) $(OBJSBONUS)
				
clean:
				$(RM) $(OBJS) $(OBJSBONUS)

fclean:			clean
				$(RM) $(NAME) $(NAME_BONUS) $(EXE) $(EXE_BONUS)

re:				fclean all

.PHONY:			all clean fclean re