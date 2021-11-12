//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//#include <cstdio>
//
//using namespace std;
//
//void main() {
//	setlocale(LC_ALL, "rus");
//	FILE* stat1, * stat2, * stat3;
//	char str1[128];
//	char str2[128];
//	if (fopen_s(&stat1, "filel1.txt", "r") == NULL &&
//		fopen_s(&stat2, "filel2.txt", "r") == NULL &&
//		fopen_s(&stat3, "filel3.txt", "w") == NULL) {
//		while (!feof(stat1) && !feof(stat2)) {
//			fgets(str1, 128, stat1);
//			fgets(str2, 128, stat2);
//			if (strcmp(str1, str2) != 0) {
//				fputs(str1, stat3);
//				fputs(str2, stat3);
//				printf("%s", str1);
//				printf("%s", str2);
//			}
//		}
//		fclose(stat1);
//		fclose(stat2);
//		fclose(stat3);
//
//
//	}
//	else
//
//		printf("файл не был открыт");
//}
//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//#include<iomanip>
//#include <string.h>
//#include<Windows.h>
//#include <io.h>  
//#include <fcntl.h> 
//using namespace std;
//
//char Alfavit(char symbol) {
//	for (int i = 1; i <= 3; i++)
//	{
//		if (symbol == 'я') {
//			symbol = 'а';
//		}
//		else if (symbol == 'Я') {
//			symbol = 'А';
//		}
//		else
//			symbol++;
//	}
//	return symbol;
//}
//
//void main() {
//	setlocale(LC_ALL, "Russian");
//	SetConsoleCP(1251);
//	SetConsoleOutputCP(1251);
//	// переключение стандартного потока вывода в формат Юникода
//	_setmode(_fileno(stdout), _O_U16TEXT);
//	
//	FILE* f1, * f2;
//	char str[225];
//	if (fopen_s(&f1, "file1.txt", "r") == NULL &&
//		fopen_s(&f2, "file2.txt", "w") == NULL) {
//		printf("File opened!\n");
//		while (!feof(f1)) {
//			char symbol = fgetc(f1);
//			symbol = Alfavit(symbol);
//			fputc(symbol, f2);
//			printf("%c", symbol);
//		}
//		fclose(f1);
//		fclose(f2);
//	}
//	else
//	{
//		printf("File not opened!\n");
//
//	}
//
//	system("pause");
//}
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdio>
#include<Windows.h>
using namespace std;

int main() {
    setlocale(LC_ALL, "rus");
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    FILE* ms1, * ms2;
    int count = 0;
    int i = 0;
    char buf[300];
    char** mas;
    char consonants[] = "b,c,d,f,g,h,j,k,l,m,n,p,q,r,s,t,v,w,x,y,z";
    char vowels[] = "a,e,i,o,u";
    char str1[255];
    int count_lines = 0;
    int count_symbols = 0;
    int count_digits = 0;
    int count_vowels = 0;
    int count_consonants = 0;
    if (fopen_s(&ms1, "my1.txt", "r") == NULL && fopen_s(&ms2, "my2.txt", "w") == NULL)
    {
        while (!feof(ms1)) {
            fgets(str1, 255, ms1);
            count_lines++;
            for (int i = 0; i < strlen(str1); i++)
            {
                count_symbols++;

                if (isdigit(str1[i])) {
                    count_digits++;
                }
                else {
                    if (strchr(vowels, str1[i]) != nullptr) {
                        count_vowels++;
                    }
                    else if (strchr(consonants, str1[i]) != nullptr) {
                        count_consonants++;
                    }
                }

            }
        }


    }