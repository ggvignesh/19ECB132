#include <stdio.h>
int search(int *a, int size, int elem)
{
    int i;
    for (i = 0; i < size; i++)
    {
        if (elem == *(a + i))
        {
            return i;
        }
    }
    return -1;
}
void delete (int *a, int size, int elem)
{
    int i, index = search(a, size, elem);
    a += index;
    for (i = index; i < size - 1; i++)
    {
        *a = *(a + 1);
        a++;
    }
    size--;
    a -= size;
    for (i = 0; i < size; i++)
    {
        printf("%d ", *(a + i));
    }
}
void insert(int *a, int size, int elem, int pos)
{
    int i = 0;
    a += size;
    for (i = size; i >= pos; i--)
    {
        *a = *(a - 1);
        a--;
    }
    *a = elem;
    a -= pos - 1;
    size++;
    for (i = 0; i < size; i++)
    {
        printf("%d ", *(a + i));
    }
}
int main()
{
    int a[100], size, i, elem, pos;
    char ch;
    printf("Enter size of array");
    scanf("%d", &size);
    for (i = 0; i < size; i++)
    {
        printf("Enter %d element", i + 1);
        scanf("%d", &a[i]);
    }
    printf("Enter i to insert/ d to delete");
    scanf(" %c", &ch);
    if (ch == 'i')
    {
        printf("Enter element to insert");
        scanf("%d", &elem);
        printf("Enter positon");
        scanf("%d", &pos);
        insert(a, size, elem, pos);
    }
    else if (ch == 'd')
    {
        printf("Enter element to delete");
        scanf("%d", &elem);
        delete (a, size, elem);
    }
    else
    {
        printf("Wrong choice");
    }
    return 0;
}
/* Output
Enter size of array 4
Enter 1 element 2
Enter 2 element 4
Enter 3 element 6
Enter 4 element 8
Enter i to insert/ d to delete i
Enter element to insert 10
Enter positon 5
2 4 6 8 10

Enter size of array 4
Enter 1 element 2
Enter 2 element 4 
Enter 3 element 6
Enter 4 element 8
Enter i to insert/ d to delete d
Enter element to delete 4
2 6 8 
*/