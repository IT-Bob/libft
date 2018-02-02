# Nom de sortie
NAME = libft.a

# Options de compilation
CC = @gcc
CFLAGS = -Wall -Werror -Wextra
CPPFLAGS = -I$(INC_PATH)

# Headers
INC_PATH = includes/
INC_FILE = libft.h

# Fichiers sources
SRC_PATH = src/

##### Libft et bonus
SRC_FILE = ft_swap.c
CHAR_FILE = ft_charwbytlen.c ft_tolower.c ft_toupper.c
CONV_FILE = ft_atoi.c ft_atoi_base.c ft_itoa.c ft_itoa_base.c ft_itoa_long.c
IS_FILE = ft_is_valid_char.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_islowercase.c ft_isprint.c ft_isspace.c ft_isuppercase.c
LIST_FILE = ft_lstadd.c ft_lstaddapha.c ft_lstaddend.c ft_lstaddnew.c ft_lstany.c ft_lstcount_all.c ft_lstcount_if.c ft_lstdel.c ft_lstdelone.c ft_lstfind.c ft_lstfind_prev.c ft_lstfind_tail.c ft_lstiter.c ft_lstiter_if.c ft_lstiter_reverse.c ft_lstmap.c ft_lstnew.c
MATH_FILE = ft_factorial.c ft_pow.c ft_sqrt.c
MEM_FILE = ft_bzero.c ft_memalloc.c ft_memccpy.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memdel.c ft_memmove.c ft_memset.c ft_strdel.c ft_strdeldouble.c ft_strfreejoin.c ft_striter.c ft_striteri.c ft_strnew.c
PRINT_CHAR_FILE = ft_putchar.c ft_putchar_fd.c ft_putwchar.c ft_putwcharl.c ft_putwchars.c ft_putwnchar.c ft_putxwchar.c
PRINT_NBR_FILE = ft_putnbr.c ft_putnbr_fd.c
PRINT_STR_FILE = ft_perror.c ft_putendl.c ft_putendl_fd.c ft_putnstr.c ft_putnstrs.c ft_putstr.c ft_putstr_fd.c ft_putstrlower.c ft_putstrs.c ft_putstrupper.c ft_putwendl.c ft_putwstr.c ft_putwstrs.c
STR_FILE = ft_count_word.c ft_nbrlen.c ft_strcat.c ft_strchr.c ft_strclr.c ft_strcmp.c ft_strcpy.c ft_strdup.c ft_strequ.c ft_strjoin.c ft_strlcat.c ft_strlen.c ft_strmap.c ft_strmapi.c ft_strncat.c ft_strncmp.c ft_strncpy.c ft_strnequ.c ft_strnstr.c ft_strrchr.c ft_strsplit.c ft_strstr.c ft_strsub.c ft_strtolower.c ft_strtoupper.c ft_strtrim.c ft_strwbytlen.c ft_strwlen.c ft_strlendouble.c
TAB_FILE = fill_tab.c

# Variables et chemins
SRC = $(addprefix $(SRC_PATH), $(SRC_FILE))\
$(addprefix $(SRC_PATH)char/, $(CHAR_FILE))\
$(addprefix $(SRC_PATH)conversion/, $(CONV_FILE))\
$(addprefix $(FT_PRINTF_PATH), $(FT_PRINTF_FILE))\
$(addprefix $(FT_PRINTF_C_PATH), $(FT_PRINTF_C_FILE))\
$(addprefix $(SRC_PATH)is/, $(IS_FILE))\
$(addprefix $(SRC_PATH)list/, $(LIST_FILE))\
$(addprefix $(SRC_PATH)math/, $(MATH_FILE))\
$(addprefix $(SRC_PATH)memory/, $(MEM_FILE))\
$(addprefix $(PRINT_CHAR_PATH), $(PRINT_CHAR_FILE))\
$(addprefix $(PRINT_NBR_PATH), $(PRINT_NBR_FILE))\
$(addprefix $(PRINT_STR_PATH), $(PRINT_STR_FILE))\
$(addprefix $(SRC_PATH)string/, $(STR_FILE))\
$(addprefix $(SRC_PATH)tab/, $(TAB_FILE))

FT_PRINTF_PATH = $(addprefix $(SRC_PATH), ft_printf/)
FT_PRINTF_C_PATH = $(addprefix $(FT_PRINTF_PATH), conversions/)

PRINT_CHAR_PATH = $(addprefix $(SRC_PATH)print/, char/)
PRINT_NBR_PATH = $(addprefix $(SRC_PATH)print/, nbr/)
PRINT_STR_PATH = $(addprefix $(SRC_PATH)print/, str/)

OBJ = $(SRC:.c=.o)
INC = $(addprefix $(INC_PATH), $(INC_FILE))

# Règles
all: $(NAME)

$(NAME): $(OBJ)
	@echo "$(MAGEN)Création de la bibliothèque $(NAME)"
	@ar rc $(NAME) $(OBJ)
	@echo "Création de l'index pour $(NAME)$(RESET)"
	@ranlib $(NAME)

## Permet de recompiler si un header est modifié
$(OBJ): $(INC)

clean:
	@echo "$(ROUGEC)Suppression des fichiers objets de $(NAME)$(RESET)"
	@rm -f $(OBJ)

fclean: clean
	@echo "$(ROUGEC)Suppression de la bibliothèque $(NAME)$(RESET)"
	@rm -f $(NAME)

re: fclean all

# Règle pour la norme
norme: clean
	@echo "$(MAGEN)Norme pour Libft$(RESET)"
	@norminette includes/ src/

# Règles pour la documentation
doxygen:
	@echo "$(JAUNE)Pas de documentation pour Libft$(RESET)"

cleandoxy:
	@echo "$(JAUNE)Pas de documentation pour Libft$(RESET)"

# Couleurs

RESET = \033[0m
BLANC = \033[37m
BLEU  = \033[34m
CYAN  = \033[36m
JAUNE = \033[33m
MAGEN = \033[35m
NOIR  = \033[30m
ROUGE = \033[31m
ROUGEC = \033[1;31m
VERT  = \033[32m

.PHONY: all clean fclean re doxygen cleandoxy
