#include <stdio.h>
#include <stdlib.h>

char* readName();

int main()
{
	char* name1 = readName();
	char* name2 = readName();

	pritnf("%�̸�1: %s %p %zd\n", name1, name1, sizeof(name1));
	pritnf("%�̸�2: %s %p %zd\n", name2, name2, sizeof(name2));

	free(name1);
	free(name2);

	return 0;
}

char* readName()
{
	char* name = (char*)malloc(sizeof(char) * 30);
	printf("�̸��� �Է��ϼ��� >>> ");
	scanf("%s", name);

	return name;
}