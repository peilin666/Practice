#include <stdio.h>
#include <windows.h>

/*#define stu student
#define sub subject
#define sut subject_type
#define sutn subject_type_name
#define suts subject_type_score
#define sth student_hobby
#define sthn student_hobby_name
#define cc class_capacity*/

#define class clss

#define A 2
#define B 2
#define C 2
#define D 2

int i, j, k, o;

struct subject 
{
    char subject_name[20];
    float subject_score;
};

struct hobby 
{
    char hobby_name[20]; 
};

struct stu
{
    char name[20];
    struct subject sub[D];
    struct hobby hob[C];
};

struct class 
{
    int number;
    struct stu cc[B];
};

void input(struct class nu[]);

void print(struct class nu[]);

int main()
{

    struct class nu[A], *p = nu;
    input(p);
    print(p);
    system("pause");
    return 0;
}

void input(struct class nu[])
{

    for (i = 0; i < A; i++)
    {
        printf("Please enter the class number:\n");
        scanf("%d", &nu[i].number);       
        for (j = 0; j < B; j++)
        {
            printf("Please enter the student's name:\n");
            scanf("%s", nu[i].cc[j].name);

            printf("Please input students' hobbies:\n");
            for (k = 0; k < C; k++)
            {
                scanf("%s", nu[i].cc[j].hob[k].hobby_name);
            }

            printf("Please enter student subjects and scores:\n");
            for (o = 0; o < D; o++)
            {
                scanf("%s %f", nu[i].cc[j].sub[o].subject_name, &nu[i].cc[j].sub[o].subject_score);
            }
        }
    }
}

void print(struct class nu[])
{
    for (i = 0; i < A; i++)
    {
        printf("\n class serial number:\n");
        printf("%d\n", nu[i].number);

        printf("\n the name of each student:\n\n");
        for (j = 0; j < B; j++)
        {
            printf("%s\t", nu[i].cc[j].name);
            printf("\n hobbies of each student:\n\n");
        for (k = 0; k < C; k++)
        {
            printf("%s\t", nu[i].cc[j].hob[k].hobby_name);
        }

        printf("\n subjects and scores each student:\n\n");
        for (o = 0; o < D; o++)
        {
            printf("%s\t\n\n%f\t\n\n", nu[i].cc[j].sub[o].subject_name, nu[i].cc[j].sub[o].subject_score);
        }
        }       
    }
}