// 64010045 KANYARAT PHOOKOSOT
#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include <stdio.h>
int main()
{
	int i;
	struct player
	{
		char name[50];
		int level;
		int score;
	};
	player p[5];
	for (i = 0; i < 5; i++)
	{
		strcpy(p[i].name, "Anonymous");
		p[i].level = i;
		p[i].score = i * 100;
	}
	FILE *fp;
	fp = fopen("mytestfile.txt", "r");
	for (i = 0; i < 5; i++)
	{
		fprintf(fp, "name : %s\t", p[i].name);
		fprintf(fp, "level : %d\t", p[i].level);
		fprintf(fp, "score : %d\n", p[i].score);
	}
	fclose(fp);
}