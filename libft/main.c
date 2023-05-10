#include"libft.h"

/* void del(void *content)
{
    free(content);
}

int main()
{
    t_list *lst;
    t_list *new;
    t_list *last;
    
    lst = ft_lstnew("hello");
    new = ft_lstnew("how are you");
    last = ft_lstnew("Pedro");
    lst->next = new;
    ft_lstadd_back(&lst, last);

    ft_lstdelone(lst, del);
    while (lst != NULL)
    {
        printf("%s\n", (char *)lst->content);
        lst = lst->next;
    }

} */


/* void del_int(void *ptr)
{
    int *int_ptr = (int *)ptr;
    free(int_ptr);
}
int main(void)
{
    t_list *lst = ft_lstnew(malloc(sizeof(int)));
    *(int *)(lst->content) = 1;

    ft_lstadd_back(&lst, ft_lstnew(malloc(sizeof(int))));
    *(int *)(lst->next->content) = 2;

    ft_lstadd_back(&lst, ft_lstnew(malloc(sizeof(int))));
    *(int *)(lst->next->next->content) = 3;

    printf("Before clear:\n");
    while (lst)
    {
        printf("%d\n", *(int *)(lst->content));
        lst = lst->next;
    }

    lst = ft_lstnew(malloc(sizeof(int)));
    *(int *)(lst->content) = 1;

    ft_lstadd_back(&lst, ft_lstnew(malloc(sizeof(int))));
    *(int *)(lst->next->content) = 2;

    ft_lstadd_back(&lst, ft_lstnew(malloc(sizeof(int))));
    *(int *)(lst->next->next->content) = 3;

    ft_lstclear(&lst, del_int);

    printf("After clear:\n");
    if (!lst)
        printf("List cleared successfully!\n");

    return (0);
} */


void	ft_strupcase(char *c)
{
	while (*c)
	{
			if (*c >= 'a' && *c <= 'z')
		{
			*c = *c - 32;
			
		}
		c++;
	}
}
int	main(void)
{
	char	str[] = "counttheiter";
	char	str2[] = "second node";
	t_list *lst;
	t_list *new_node;
	t_list *new_node2;
	lst = new_node;
	new_node = ft_lstnew(str);
	new_node2 = ft_lstnew(str2);
	new_node->next = new_node2;
	lst = new_node;
	printf("before: %s\n", str);
	printf("before: %s\n", str2);
	ft_lstiter(lst, (void *)ft_strupcase);
	printf("after: %s\n", (char *)new_node->content);
	printf("after: %s\n", (char *)new_node2->content);
	return (0);
}