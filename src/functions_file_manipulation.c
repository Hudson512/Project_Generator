/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions_file_manipulation.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmateque <hmateque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 09:44:23 by hmateque          #+#    #+#             */
/*   Updated: 2024/09/04 09:58:50 by hmateque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ProGen.h"

void	create_folder(const char *folder_name)
{
	if (mkdir(folder_name, 0777) == -1)
	{
		perror(RED"Error creating folder"RESET);
		exit(EXIT_FAILURE);
	}
}

void	create_file_with_content(const char *path, const char *content)
{
	FILE	*file;

	file = fopen(path, "w");
	if (!file)
	{
		perror(RED"Error creating file"RESET);
		exit(EXIT_FAILURE);
	}
	fprintf(file, "%s", content);
	fclose(file);
}

void	create_c_file(const char *folder_name, const char *file_name)
{
	char	path[256];
	char	content[1024];

	snprintf(path, sizeof(path), "%s/%s.c", folder_name, file_name);
	snprintf(content,
				sizeof(content),
				"#include \"%s.h\"\n\n"
				"int    main(int ac, char **av)\n"
				"{\n"
				"    return (0);\n"
				"}",
				file_name);
	create_file_with_content(path, content);
}

void	create_h_file(const char *folder_name, const char *file_name)
{
	char	path[256];
	char	content[1024];

	snprintf(path, sizeof(path), "%s/%s.h", folder_name, file_name);
	snprintf(content,
				sizeof(content),
				"#ifndef %s_H\n"
				"# define %s_H\n"
				"\n"
				"#endif\n",
				string_to_uppercase(file_name),
				string_to_uppercase(file_name));
	create_file_with_content(path, content);
}

void	create_makefile(const char *folder_name, const char *file_name)
{
	char	path[256];
	char	content[1024];

	snprintf(path, sizeof(path), "%s/Makefile", folder_name);
	snprintf(content,
				sizeof(content),
				"NAME = %s\n"
				"CC = cc\n"
				"FLAGS = -Wall -Wextra -Werror\n"
				"RM = rm -f\n\n"
				"SRC =  $(NAME).c\n"
				"OBJ = $(SRC:.c=.o)\n\n"
				"all: $(NAME)\n\n"
				"$(NAME): $(OBJ)\n"
				"    $(CC) $(FLAGS) $(OBJ) -o $(NAME)\n\n"
				"%%.o:%%.c\n"
				"	$(CC) $(FLAGS) -c $< -o $@\n\n"
				"clean:\n"
				"    $(RM) $(OBJ)\n\n"
				"fclean: clean\n"
				"    $(RM) $(NAME)\n\n"
				"re: fclean all\n\n"
				".PHONY: all clean fclean re\n",
				file_name);
	create_file_with_content(path, content);
}