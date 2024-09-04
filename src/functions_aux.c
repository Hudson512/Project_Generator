/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions_aux.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmateque <hmateque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 09:47:07 by hmateque          #+#    #+#             */
/*   Updated: 2024/09/04 09:49:18 by hmateque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ProGen.h"

char *string_to_uppercase(const char *str)
{
    int i;
    
    char *upper_str = malloc(strlen(str) + 1);
    if (!upper_str)
        return (NULL);
    i = -1;
    while (str[++i] != '\0')
        upper_str[i] = toupper((unsigned char)str[i]);
    upper_str[i] = '\0';

    return upper_str;
}

void display_banner(void)
{
    printf(
        GREEN
        "d8888b. d8888b.  .d88b.     d88b d88888b  .o88b. d888888b      d888b  d88888b d8b   db d88888b d8888b.  .d8b.  d888888b  .d88b.  d8888b.\n"
        "88  `8D 88  `8D .8P  Y8.    `8P' 88'     d8P  Y8 `~~88~~'     88' Y8b 88'     888o  88 88'     88  `8D d8' `8b `~~88~~' .8P  Y8. 88  `8D\n"
        "88oodD' 88oobY' 88    88     88  88ooooo 8P         88        88      88ooooo 88V8o 88 88ooooo 88oobY' 88ooo88    88    88    88 88oobY'\n"
        "88~~~   88`8b   88    88     88  88~~~~~ 8b         88        88  ooo 88~~~~~ 88 V8o88 88~~~~~ 88`8b   88~~~88    88    88    88 88`8b\n"
        "88      88 `88. `8b  d8' db. 88  88.     Y8b  d8    88        88. ~8~ 88.     88  V888 88.     88 `88. 88   88    88    `8b  d8' 88 `88.\n"
        "88      88   YD  `Y88P'  Y8888P  Y88888P  `Y88P'    YP         Y888P  Y88888P VP   V8P Y88888P 88   YD YP   YP    YP     `Y88P'  88   YD \n"
        YELLOW
        "by: hmateque\n"
        "github: https://github.com/Hudson512/Project_Generator\n\n"
    );
}
