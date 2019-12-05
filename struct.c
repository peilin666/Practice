#include <stdio.h>
#include <windows.h>

//void aes(float *p);

#define stu Student
#define sub subject
#define aet average_ever_stduent
#define aes average_ever_subject
//#define aesm average_ever_subject_math
//#define aesc average_ever_subject_chinese

int i;
int n=2;


struct sub
{
    float math;
    float chinese;
};

struct stu
{
    char name[10];
    char hobby[30];
    struct sub score;
    float aet;
};


void print(struct stu st[]);
void input(struct stu st[]);

int main()
{

    struct stu st[n], *p = st;
    input(p);
    print(p);
    system("pause");
    return 0;
}

void input(struct stu st[])
{
    printf("请输入每个学生的信息:姓名、兴趣爱好、学科成绩:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%s %s %f %f", st[i].name, st[i].hobby, &st[i].score.math,
              &st[i].score.chinese);
        st[i].aet = ((st[i].score.math) + (st[i].score.chinese)) / n;
    }
}

/*void aes(float *p);
{
    for(i=0;i<n;i++)
    {
        int b=0;
        a=a+((p+i)->score->math);
    }

}*/

void print(struct stu st[])
{
    printf("每个学生的基本信息:\n");
    for (i = 0; i < n; i++)
    {
        printf("姓名:%s\n爱好:%s\n数学成绩:%f\n语文成绩:%f\n平均成绩:%f\n", st[i].name,
               st[i].hobby, st[i].score.math, st[i].score.chinese, st[i].aet);
    }
}