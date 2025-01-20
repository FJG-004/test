#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//int main()
//{
//	char arr[N];
//	//fgets(arr, sizeof(arr), stdin);
//	//arr[strcspn(arr, "\n")] = '\0';
//	gets(arr);
//
//	return 0;
//}
//#include <stdlib.h>
//int main()
//{
//	FILE* fp = fopen("test.txt", "w");
//	if (fp == NULL)
//	{
//		exit(0);
//	}
//	char arr[N];
//	//读字符
//	fgets(arr, sizeof(arr), fp);
//	//该函数从fp所指的文件中读取字符串
//	// 并在字符串尾添加'\0'，然后存入arr
//	//最多存n-1个字符('\0'的位置)
//	//写字符
//	//fputs(arr, fp);
//
//	fclose(fp);
//
//	return 0;
//}
//#include <stdlib.h>
//#include <time.h>
//#include <stdio.h>
//int main()
//{
//	char key;
//	do
//	{
//		printf("please input a figure(1-100):");
//		int tragic, guess, count = 0;
//		srand(time(NULL));
//		tragic = rand() % 100 + 1;
//		do
//		{
//			start:
//			while (scanf("%d", &guess) != 1)
//			{
//				while (getchar() != '\n');
//				printf("flase,please input again(1-100):");
//			}
//			if(guess < 1 || guess>100)
//			{
//				while (getchar() != '\n');
//				printf("flase,please input again(1-100):");
//				goto start;
//			}
//			count++;
//			if (guess >= 1 && guess <= 100)
//			{
//				if (tragic > guess)
//				{
//					printf("Too small!\n");
//				}
//				else if (tragic < guess)
//				{
//					printf("Too big!\n");
//				}
//				else
//				{
//					printf("Right!\n");
//					printf("you have guessed total %d\n", count);
//					break;
//				}
//			}
//		} while (tragic != guess);
//		printf("Do you want to play again?(Y/N or y/n):");
//		scanf(" %c", &key);
//	} while (key=='y'||key=='Y');
//
//	return 0;
//}
//#include <conio.h>
//#include <stdlib.h>
//int main()
//{
//	while (1)
//	{
//		if (kbhit())
//		{
//			system("cls");
//			printf("hello");
//			system("pause");
//		}
//		else
//		{
//			printf("hehe\n");
//		}
//	}
//	return 0;
//}
//#include <stdio.h>
//#include <stdlib.h>
//#define N 3
//typedef struct date
//{
//	int year;
//	int month;
//	int day;
//}DATE;
//typedef struct student
//{
//	char name[20];
//	char gender;
//	DATE birthday;
//	int score[4];
//	float aver;
//}STU;
//void scanfstu(STU stu[]);
//void averstu(STU stu[]);
//void writestu(STU stu[]);
//void readstu(STU stu[]);
//void pristu(STU stu[]);
//int main()
//{
//	STU stu[N];
//	readstu(stu);
//	pristu(stu);
//
//	return 0;
//}
//void scanfstu(STU stu[])
//{
//	for (int i = 0; i < N; i++)
//	{
//		scanf("%s", stu[i].name);
//		scanf(" %c", &stu[i].gender);
//		scanf("%d", &stu[i].birthday.year);
//		scanf("%d", &stu[i].birthday.month);
//		scanf("%d", &stu[i].birthday.day);
//		for (int j = 0; j < 4; j++)
//		{
//			scanf("%d", &stu[i].score[j]);
//		}
//	}
//}
//void averstu(STU stu[])
//{
//	int sum = 0;
//	for (int i = 0; i < N; i++)
//	{
//		sum = 0;
//		for (int j = 0; j < 4; j++)
//		{
//			sum += stu[i].score[j];
//		}
//		stu[i].aver = (float)sum / 4;
//	}
//}
//void writestu(STU stu[])
//{
//	FILE* fp = fopen("test.txt", "w");
//	if (fp == NULL)
//	{
//		exit(0);
//	}
//	fwrite(stu, sizeof(STU), N, fp);
//
//	fclose(fp);
//}
//void readstu(STU stu[])
//{
//	FILE* fp = fopen("test.txt", "r");
//	if (fp == NULL)
//	{
//		exit(0);
//	}
//	for (int i = 0; !feof(fp); i++)
//	{
//		fread(&stu[i], sizeof(STU), 1, fp);
//	}
//
//	fclose(fp);
//}
//void pristu(STU stu[])
//{
//	for (int i = 0; i < N; i++)
//	{
//		printf("%8s%3c%6d/%02d/%02d", stu[i].name, stu[i].gender, 
//			stu[i].birthday.year,
//			stu[i].birthday.month,
//			stu[i].birthday.day);
//		for (int j = 0; j < 4; j++)
//		{
//			printf("%4d", stu[i].score[j]);
//		}
//		printf("%6.1f\n", stu[i].aver);
//	}
//}
//typedef struct date
//{
//	int year;
//	int month;
//	int day;
//}DATE;
//typedef struct student
//{
//	char name[20];
//	char gender;
//	DATE birthday;
//	int score[4];
//	float aver;
//}STU;
//#include <stdlib.h>
//void searchstu(char Filename[], long k);
//
//int main()
//{
//	long k = 0;
//	scanf("%ld", &k);
//	searchstu("test.txt", k);
//
//	return 0;
//}
//void searchstu(char Filename[], long k)
//{
//	FILE* fp = fopen(Filename, "r");
//	if (fp == NULL)
//	{
//		exit(0);
//	}
//	STU stu;
//	fseek(fp, (k - 1) * sizeof(STU), 0);
//	fread(&stu, sizeof(STU), 1, fp);
//	printf("%8s%3c%6d/%02d/%02d", stu.name, stu.gender,
//					stu.birthday.year,
//					stu.birthday.month,
//					stu.birthday.day);
//				for (int j = 0; j < 4; j++)
//				{
//					printf("%4d", stu.score[j]);
//				}
//				printf("%6.1f\n", stu.aver);
//
//}