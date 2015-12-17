#include <glib.h>
#include <gio/gio.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv)
{
	// GFile *f = g_file_new_for_path ("pg30142.txt");

	// GFileInputStream *inputstream = g_file_read(f, NULL, NULL);

	gchar *contents = NULL;
	gsize length = NULL;

	if (!g_file_get_contents ("pg30142.txt", &contents, &length, NULL)) goto out;

	gchar **split_contents = g_strsplit (contents, " ", 0);


	// printf("%s\n", split_contents[0]);
	// printf("%zu\n", sizeof(**split_contents));

	int i = 0;

	GHashTable *dict = g_hash_table_new (g_str_hash, g_str_equal);
	
	while (split_contents[i] != NULL)
	{
		gchar *word = g_strdup (split_contents[i]);
		//printf("%p\n", word);
		//printf("%i\n", g_hash_table_contains (dict, word));
		if (!g_hash_table_contains (dict, word))
		{
			int *x = malloc(sizeof(*x));
			*x = 1;
			g_hash_table_insert (dict, word, x);		}
		else
		{
			int current = *((int*) g_hash_table_lookup (dict, word));
			current++;
			//printf("%i\n", current);
			g_hash_table_insert (dict, word,  &current);
		}
		//g_hash_table_insert (dict, "hello",  x);
		i++;
	}

	// int i = 0;
	// while (split_contents[i] != NULL)
	// {
	// 	printf("%i\n", g_hash_table_contains (dict, split_contents[i]));
	// 	if (!g_hash_table_contains (dict, split_contents[i]))
	// 	{
	// 		printf("%s\n", "hella");
	// 		int *x = malloc(sizeof(*x));
	// 		*x = 1;
	// 		if (!g_hash_table_insert (dict, g_strdup (split_contents[i]), x))
	// 			goto out;
	// 	}
	// 	else
	// 	{
	// 		int *current = g_hash_table_lookup (dict, split_contents[i]);
	// 		*current++;
	// 		printf("%i\n", *current);
	// 		if (!g_hash_table_insert (dict, split_contents[i],  current))
	// 			goto out;
	// 	}

	// 	printf("%s\n", split_contents[i]);
	// 	i++;
	// }

	GList *keys = g_hash_table_get_keys (dict);

	GList *elem;
	char *item;


	for(elem = keys; elem; elem = elem->next) {
		item = elem->data;
		printf("%s : %i\n", item, *((int*)g_hash_table_lookup (dict, item)));
	}

 //    //list = g_list_append(list, "Hello world!");
 //    //char* str = g_list_first(list)->data;
 //    //printf("The first item is '%s'\n", str);
    return 0;
  out:
	return 1;
}