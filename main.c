#include <stdio.h>
#include <stdlib.h>

//用于让数组里的数字从小到大排列
void bubbleSort(double arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            // 如果当前元素大于下一个元素，则交换它们
            if (arr[j] > arr[j + 1]) {
                double temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main()
{
    //创造变量
    int UserInputNumMax;

    //询问参与计算的数字有多少
    printf("Ecrire l'effectif total:\n");
    scanf("%d",&UserInputNumMax);

    //设定新的变量
    const int NumMax = UserInputNumMax;
    double SerieNum[NumMax];


    //提示和继续运行
    printf("Effectif total：%d\n\n",NumMax);

    //输入所有投入计算的数字
    printf("Ecrire tous les effectif：\n");
    for (int i = 0; i < NumMax; ++i){
        scanf("%lf", &SerieNum[i]);
    }
    printf("\n");
    bubbleSort(SerieNum, NumMax);

    //开始计算平均数
    double ResultatMoyenne;
    for (int i = 0; i < NumMax; ++i){
        ResultatMoyenne = ResultatMoyenne + SerieNum[i];
    }
    ResultatMoyenne = ResultatMoyenne / NumMax;

    //开始计算Mediane
    double ResultatMediane;
    int num1;
    int num2;
    if (NumMax % 2 == 0) {//偶数
        num1 = SerieNum[(NumMax/2)-1];
        num2 = SerieNum[NumMax/2];
        ResultatMediane = (num1 + num2)/2;
    } else {//奇数
        num1 = (double)(NumMax/2)+0.5;
        num1 = (int)num1;
        ResultatMediane = SerieNum[num1];
    }

    //开始计算Etendue
    double ResultatEtendue;
    num1 = SerieNum[0];
    num2 = SerieNum[NumMax - 1];
    ResultatEtendue = num2 - num1;

    //输出所有答案
    printf("Moyenne :\t%lf\nMediane :\t%lf\nEtendue :\t%lf\n\n",ResultatMoyenne,ResultatMediane,ResultatEtendue);
    return 0;
}
