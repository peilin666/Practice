#include <stdio.h>
#include <windows.h>

#define A 1
#define B 3
#define Row 3
#define Column 3
#define T 0

int i, j, k, r, c;

struct bandwidth
{
    float bandwidth_value; //配置项带宽值
};

struct configuration
{
    char name[20];                   //配置项名称
    float power_value;               //配置项功率值
    struct bandwidth band[B];        //配置项带宽
    float matrix_value[Row][Column]; //配置项矩阵值
    char frequency_hopping[5];       //跳频
};

void input(struct configuration con[]);           //声明输入函数
void output_all_data(struct configuration con[]); //声明输出所有默认值函数
// void Configuration_switching(struct configuration con[]); //声明交换属性值函数
void Max_power_value(struct configuration con[]);        //确认最大功率函数
void output_matrix_value(struct configuration con[]);    //输出矩阵值函数
void output_configuration(struct configuration *con);    // 输出单个配置值函数
void print_Calculatec_power(struct configuration con[]); //功率计算函数

int main()
{
    struct configuration con[A], *p = con; //定义指向结构体数组的指针变量p

    input(p); //调用input函数

    //output_all_data(p);
    //Max_power_value(p);
    output_matrix_value(p);
    //print_Calculatec_power(p);

    system("pause");
    return 0;
}

void input(struct configuration con[])
{
    for (i = 0; i < A; i++)
    {
        printf("\nPlease enter the %d configuration name:\n", i + 1);
        scanf("%s", con[i].name); //输入序号

        printf("Please enter the %d configuration power:\n", i + 1);
        scanf("%f", &con[i].power_value); //输入功率值

        printf("Please enter the %d configuration bandwidth value:\n", i + 1);
        for (j = 0; j < B; j++)
        {
            scanf("%f", &con[i].band[j].bandwidth_value); //输入三组带宽值
        }

        printf("Please enter the %d matrix value:\n", i + 1);
        for (r = 0; r < Row; r++)
        {
            for (c = 0; c < Column; c++)
            {
                scanf("%f", &con[i].matrix_value[r][c]); //输入矩阵值
            }
        }

        printf("\nPlease the %d input whether frequency hopping:\n", i + 1);
        scanf("%s", con[i].frequency_hopping); //输入是否跳频
    }
}

void output_all_data(struct configuration con[])
{
    for (i = 0; i < A; i++)
    {
        printf("\nOutput configuration sequence number:\n%d", i + 1);
        printf("\nOutput configuration name:\n%s", con[i].name);               //输出配置名称
        printf("\nOutput configuration power value:\n%f", con[i].power_value); //输出功率值
        printf("\nOutput bandwidth value:\n");
        for (j = 0; j < B; j++)
        {
            printf("%f\n", con[i].band[j].bandwidth_value); //输出三组带宽值
        }
        printf("Output matrix value:\n");
        for (r = 0; r < Row; r++)
        {
            for (c = 0; c < Column; c++)
            {
                printf("%f\n", con[i].matrix_value[r][c]); //输出矩阵值
            }
        }
        printf("\nOutput frequency hopping:\n%s", con[i].frequency_hopping); //输出是否跳频
    }
}

/*void Configuration_switching(struct configuration con[])
{

}
*/

void Max_power_value(struct configuration con[])
{
    struct configuration *pa; //定义指针pa
    int max, max_number;      //定义max，max_number
    max = con[0].power_value; //给max赋值
    for (i = 0; i < A; i++)
    {
        if (con[i].power_value > max) //判断各组功率值是否大于max
        {
            max = con[i].power_value; //将最大功率值留下
            max_number = i;           //记录组数
        }
    }
    pa = con; //指针指向结构体数组
    // con[max_number].name;
    output_configuration(pa + max_number); //调用output_configuration函数
}

void output_matrix_value(struct configuration con[])
{

    float(*pa)[3];
    pa = con[T].matrix_value;
    for (r = 0; r < Row; r++)
    {
        for (c = 0; c < Column; c++)
        {
            printf("matrix_value[%d,%d]=%f\n", r, c, *(*(pa + r) + c));
        }
    }
}

void output_configuration(struct configuration *con)
{
    printf("\nOutput configuration name:\n%s", con->name);               //输出名称
    printf("\nOutput configuration power value:\n%f", con->power_value); //输出功率值
    for (j = 0; j < B; j++)
    {
        printf("\nOutput bandwidth value:\n%f", con->band->bandwidth_value); //输出带宽值
    }
    printf("\nOutput matrix value:\n");
    for (r = 0; r < Row; r++)
    {
        for (c = 0; c < Column; c++)
        {
            printf("%d", con->matrix_value[r][c]); //输出矩阵值
        }
    }
    printf("\nOutput frequency hopping:\n%s", con->frequency_hopping); //输出是否跳频
}

void print_Calculatec_power(struct configuration con[])
{
    struct configuration *po;
    void Power_addition(struct configuration * con);
    void Power_multiplication(struct configuration * con);
    po = con;
    for (i = 0; i < A; i++)
    {
        Power_addition(po + i);
        Power_multiplication(po+i);

    }
}

void Power_addition(struct configuration *con)
{
    con->power_value = con->power_value + 1;
    printf("\n%f\n", con->power_value);
}

void Power_multiplication(struct configuration *con)
{
    con->power_value=10*con->power_value;
    printf("\n%f\n", con->power_value);
}
