#include "lists.h"

/**
 * check_cycle - checks the presence of a cycle within a linked list
 * @list: linked list to be checked
 *
 * Return: Returns 1 in case of a cycle in the list, or 0 if there is no cycle
 */
int check_cycle(listint_t *list)
{
	listint_t *slow = list;
	listint_t *fast = list;

	if (!list)
		return (0);

	while (slow && fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
			return (1);
	}

	return (0);
}
