# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aguerin <aguerin@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/04 10:07:37 by aguerin           #+#    #+#              #
#    Updated: 2017/03/08 10:04:46 by aguerin          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc
CFLAGS = -Wall -Werror -Wextra
CPPFLAGS = -Iincludes

# Sous dossier où sont placés les fichiers
SRC = src/
CALC = $(SRC)calculation/
CHAR = $(SRC)char/
IS = $(SRC)is/
LIST = $(SRC)list/
MEMORY = $(SRC)memory/
PRINT = $(SRC)print/

# Liste des fichiers sources
PTC = ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c ft_memchr.c ft_memcmp.c ft_strlen.c ft_strdup.c ft_strcpy.c ft_strncpy.c ft_strcat.c ft_strncat.c ft_strlcat.c ft_strchr.c ft_strrchr.c ft_strstr.c ft_strnstr.c ft_strcmp.c ft_strncmp.c ft_atoi.c\
$(IS)ft_isalpha.c $(IS)ft_isdigit.c $(IS)ft_isalnum.c $(IS)ft_isascii.c $(IS)ft_isprint.c $(IS)ft_isspace.c\
$(CHAR)ft_toupper.c $(CHAR)ft_tolower.c\
ft_memalloc.c ft_memdel.c ft_strnew.c ft_strdel.c ft_strclr.c ft_striter.c ft_striteri.c ft_strmap.c ft_strmapi.c ft_strequ.c ft_strnequ.c ft_strsub.c ft_strjoin.c ft_strtrim.c ft_strsplit.c ft_itoa.c ft_putchar.c ft_putstr.c ft_putendl.c ft_putnbr.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c\
ft_lstnew.c ft_lstdelone.c ft_lstdel.c ft_lstadd.c ft_lstiter.c ft_lstmap.c\
ft_swap.c ft_putnbrl.c ft_putnbrs.c ft_putcharl.c ft_putchars.c ft_putstrs.c ft_count_word.c ft_lstdelonejoin.c ft_strfreejoin.c get_next_line.c ft_lstaddend.c ft_lstaddnew.c ft_lstdelall.c ft_itoa_base.c ft_itoa_long.c ft_atoi_base.c ft_putnbr_long.c ft_error.c ft_putwchar.c ft_putwstr.c\
$(CALC)ft_factorial.c $(CALC)ft_sqrt.c $(CALC)ft_pow.c

PTO = $(PTC:.c=.o)

all: $(NAME)

$(NAME): $(PTO)
	ar rc $(NAME) $(PTO)
	ranlib $(NAME)

clean:
	rm -f $(PTO)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
