#include "lists.h"

/**
 * print_dlistint - function that prints all the elements of a dlistint_t list
 * @h: head
 *
 * Return: node nbnr
 */

size_t print_dlistint(const dlistint_t *h)
{

  int counter;

  for (counter = 0; h; counter++)
    {
      printf("%d\n", h->n);
      h = h->next;
    }
  return (counter);
}
