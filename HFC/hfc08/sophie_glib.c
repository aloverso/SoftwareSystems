#include <stdio.h>
#include <glib.h>
int main(int argc, char** argv) {
	GList* list = NULL;
	list = g_list_append(list, "Hello world!");
	char* str = g_list_first(list)->data;
	printf("The first item is '%s'\n", str);
	const char *fn = "metamorphisis.txt";
	gchar *f_content;
	gsize *len = 0;
	g_file_get_contents (fn, &f_content, len, NULL);
	//printf(f_content);

	gchar *split_res;

	gchar *delims = "\n";
	*split_res = g_strsplit (f_content, delims, 0);

	printf(split_res);

	return 0;
}
