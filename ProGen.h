/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ProGen.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmateque <hmateque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 09:41:45 by hmateque          #+#    #+#             */
/*   Updated: 2024/09/04 09:48:14 by hmateque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PROGEN_H
# define PROGEN_H

# include <ctype.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <sys/stat.h>
# include <unistd.h>

# define RESET "\x1b[0m"
# define RED "\x1b[31m"
# define GREEN "\x1b[32m"
# define YELLOW "\x1b[33m"
# define BLUE "\x1b[34m"
# define MAGENTA "\x1b[35m"
# define CYAN "\x1b[36m"
# define WHITE "\x1b[37m"

void	display_banner(void);
void	create_folder(const char *folder_name);
void	create_file_with_content(const char *path, const char *content);
void	create_c_file(const char *folder_name, const char *file_name);
void	create_h_file(const char *folder_name, const char *file_name);
void	create_makefile(const char *folder_name, const char *file_name);
char	*string_to_uppercase(const char *str);

#endif