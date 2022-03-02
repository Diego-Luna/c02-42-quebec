/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dluna-lo <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 08:02:43 by dluna-lo          #+#    #+#             */
/*   Updated: 2022/03/02 12:28:32 by dluna-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	index;

	index = 0;
	while (dest[index] != '\0' && src[index] != '\0')
	{
		dest[index] = src[index];
		index++;
	}
	return (dest);
}
