/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   med.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddaou < mhaddaou@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 13:24:28 by mhaddaou          #+#    #+#             */
/*   Updated: 2022/10/22 14:38:02 by mhaddaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int ft_strlen(char *str){
    int i = 0;
    while (str[i])
        i++;
    return (i);
}

char ptf(unsigned int i, char r){
    if (r >= 97 && r <= 122)
        r -= 32;
}



char	*ft_strmapi(char  *s, char (*f)(unsigned int, char)){
    int i;
    int len;
    len = ft_strlen(s);
    char *ptr;
    i = 0;
    ptr = (char *) malloc (sizeof(char) * len + 1);
    while (s[i]){
        ptr[i] = f(i, s[i]);
        i++;
    }
    ptr[i] = '\0';
    return (ptr);
}
// char (*f)(unsigned int, char) = &ptf;
int main (){
    char *str = "haddaoui";
    char *tmp;
    tmp  = ft_strmapi(str, &ptf);
    printf("%s\n", tmp);
}
    