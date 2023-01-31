#include "lists.h"
/**
* find_listint_loop - finds the loop in a linked list
* @head: linked list to search for
*
* Return: address of the node where the loop starts, or NULL
*/
listint_t *find_listint_loop(listint_t *head)
{
listint_t *s_w = head;
listint_t *f_t = head;

if (!head)
return (NULL);

while (s_w && f_t && f_t->next)
{
f_t = f_t->next->next;
s_w = s_w->next;

<<<<<<< HEAD
if (f_t == s_w)
{
s_w = head;
while (s_w != f_t)
{
s_w = s_w->next;
f_t = f_t->next;
}
return (f_t);
}
}
return (NULL);
}
=======
		if (f_t == s_w)
		{
			s_w = head;
			while (s_w != f_t)
			{
				s_w = s_w->next;
				f_t = f_t->next;
			}
			return (f_t);
		}
	}
	return (NULL);
}
>>>>>>> a7aa46e90ddab9d0953ed6671f9e560425a3d0a2
