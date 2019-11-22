#include <stdio.h>
#include <windows.h>

float ave[COL];
float sum = 0;
const int ROW=10;
const int COL=5;

void average_ever_subject(float a[3][3]);
float *average_ever_stduent(float a[3][3]);
//float Max_grade(float a[10][5]);
//float average_variance(float a[10][5]);

int main()
{
    const int ROW=10;
    const int COL=5;
    float *p;
    float grade[ROW][COL];
    printf("please enter  students' 2 subject grade:");

    for (int m = 0; m < ROW; m++)
    {
        for (int n = 0; n < COL; n++)
        {
            scanf("%f", &grade[m][n]);
        }
    }

    average_ever_subject(grade);
    for (p = ave; p < (ave + COL); p++)
    {
        printf("all average subject=%f\n", *p);
    }
    float* p1;
    p1 = average_ever_stduent(grade);
    for (p = p1; p< (p1 + ROW); p++)
    {
        printf("all average stduent=%f\n", *p);
    }

    system("pause");
}

void average_ever_subject(float a[3][3])
{
    for (int j = 0; j < ; j++)
    {
        for (int i = 0; i < 10; i++)
        {
            sum = sum + a[i][j];
        }
        ave[j] = sum / 10;
        sum = 0;
    }
    // float *p = ave;
    // return ();
}

float *average_ever_stduent(float a[ROW][3])
{
    static float aver[3];
    for (int j = 0; j < 3; j++)
    {
        for (int i = 0; i < 3; i++)
        {
            sum = sum + a[j][i];
        }
        aver[j] = sum / 3;
        sum = 0;
    }
    return aver;
}

//float average_ever_stduent(float a[]