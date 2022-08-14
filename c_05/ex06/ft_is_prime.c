/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcorrea- <hcorrea-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 11:08:12 by hcorrea-          #+#    #+#             */
/*   Updated: 2022/08/14 12:00:24 by hcorrea-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;
	int	j;

	if (nb == 0 || nb == 1)
		return (0);
	else
	{
		i = nb;
		j = 0;
		while (i > 0)
		{
			if (nb % i == 0)
				j++;
			i--;
		}
		if (j == 2)
			return (1);
		else
			return (0);
	}
	return (0);
}