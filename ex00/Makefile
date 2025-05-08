# Nombre del compilador
CXX = g++

# Flags de compilación
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

# Nombre del ejecutable
NAME = megaphone

# Archivos fuente
SRCS = megaphone.cpp

# Archivos objeto
OBJS = $(SRCS:.cpp=.o)

# Regla por defecto
all: $(NAME)

# Cómo compilar el ejecutable
$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

# Limpieza de .o
clean:
	rm -f $(OBJS)

# Limpieza total
fclean: clean
	rm -f $(NAME)

# Recompilar todo
re: fclean all

.PHONY: all clean fclean re
