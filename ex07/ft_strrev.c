/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jacoetze <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/14 10:24:15 by jacoetze          #+#    #+#             */
/*   Updated: 2020/07/14 10:46:09 by jacoetze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	int 	count;
	int 	i;
	char	c;

	count = 0;
	while (str[count] != '0')
		count ++;
	count = count - 1;
	i = 0;
	while (i < ((count + 1) / 2))
	{
		c = str[i];
		str [i] = str[count - 1];
		str[count - i] = c;
		i++;
	}
	return (str);
}

