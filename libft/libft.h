#ifndef LIBFT_H
#define LIBFT_H

#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>

char *ft_strmapi(char const *s, char (*f)(unsigned int, char));

void ft_striteri(char *s, void (*f)(unsigned int, char*));


/*Bonus Part*/

typedef struct s_list
{
    void    *content;
    struct s_list   *next;
}   t_list;

t_list *ft_lstnew(void *content);

void ft_lstadd_front(t_list **lst, t_list *new);

int ft_lstsize(t_list *lst);

t_list *ft_lstlast(t_list *lst);

void ft_lstadd_back(t_list **lst, t_list *new);

void ft_lstdelone(t_list *lst, void (*del)(void*));

void ft_lstclear(t_list **lst, void (*del)(void*));

void ft_lstiter(t_list *lst, void (*f)(void *));    


#endif