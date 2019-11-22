#include <stdio.h>
#include <windows.h>

const int ROW = 3;
const int COL = 3;
float ave[COL];
float sum = 0;

void average_ever_subject(float a[ROW][COL]);
float *average_ever_stduent(float a[ROW][COL]);
//float Max_grade(float a[10][5]);
//float average_variance(float a[10][5]);

int main()
{
    float *p;
    float grade[ROW][COL];
    printf("please enter  students' ROW subject COL grade:\n");

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
    float *p1;
    p1 = average_ever_stduent(grade);
    for (p = p1; p < (p1 + ROW); p++)
    {
        printf("all average stduent=%f\n", *p);
    }
    system("pause");
}

void average_ever_subject(float a[ROW][COL])
{
    for (int j = 0; j < COL; j++)
    {
        for (int i = 0; i < ROW; i++)
        {
            sum = sum + a[i][j];
        }
        ave[j] = sum / ROW;
        sum = 0;
    }
    // float *p = ave;
    // return ();
}

float *average_ever_stduent(float a[ROW][COL])
{
    static float aver[ROW];
    for (int j = 0; j < COL; j++)
    {
        for (int i = 0; i < ROW; i++)
        {
            sum = sum + a[j][i];
        }
        aver[j] = sum / COL;
        sum = 0;
    }
    return aver;
}

//float average_ever_stduent(float a[]