/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ProGen.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmateque <hmateque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 08:23:18 by hmateque          #+#    #+#             */
/*   Updated: 2024/09/04 09:49:08 by hmateque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ProGen.h"

int	main(int argc, char *argv[])
{
    system("clear");
    display_banner();
	if (argc < 2)
	{
		printf(RED"Usage: %s <project_name> [c_file_name] [h_file_name]\n"RESET,
			argv[0]);
		return (1);
	}
    const char	*project_name = argv[1];
	const char	*c_file_name = argc > 2 ? argv[2] : project_name;
	const char	*h_file_name = argc > 3 ? argv[3] : project_name;
    
	create_folder(project_name);
	create_folder(strcat(strdup(project_name), "/src"));
	create_c_file(project_name, c_file_name);
	create_h_file(project_name, h_file_name);
	create_makefile(project_name, c_file_name);
	printf("Project %s created successfully!\n", project_name);
	return (0);
}
