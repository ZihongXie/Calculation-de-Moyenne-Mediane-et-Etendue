#include <stdio.h>
#include <stdlib.h>

//����������������ִ�С��������
void bubbleSort(double arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            // �����ǰԪ�ش�����һ��Ԫ�أ��򽻻�����
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
    //�������
    int UserInputNumMax;

    //ѯ�ʲ������������ж���
    printf("Ecrire l'effectif total:\n");
    scanf("%d",&UserInputNumMax);

    //�趨�µı���
    const int NumMax = UserInputNumMax;
    double SerieNum[NumMax];


    //��ʾ�ͼ�������
    printf("Effectif total��%d\n\n",NumMax);

    //��������Ͷ����������
    printf("Ecrire tous les effectif��\n");
    for (int i = 0; i < NumMax; ++i){
        scanf("%lf", &SerieNum[i]);
    }
    printf("\n");
    bubbleSort(SerieNum, NumMax);

    //��ʼ����ƽ����
    double ResultatMoyenne;
    for (int i = 0; i < NumMax; ++i){
        ResultatMoyenne = ResultatMoyenne + SerieNum[i];
    }
    ResultatMoyenne = ResultatMoyenne / NumMax;

    //��ʼ����Mediane
    double ResultatMediane;
    int num1;
    int num2;
    if (NumMax % 2 == 0) {//ż��
        num1 = SerieNum[(NumMax/2)-1];
        num2 = SerieNum[NumMax/2];
        ResultatMediane = (num1 + num2)/2;
    } else {//����
        num1 = (double)(NumMax/2)+0.5;
        num1 = (int)num1;
        ResultatMediane = SerieNum[num1];
    }

    //��ʼ����Etendue
    double ResultatEtendue;
    num1 = SerieNum[0];
    num2 = SerieNum[NumMax - 1];
    ResultatEtendue = num2 - num1;

    //������д�
    printf("Moyenne :\t%lf\nMediane :\t%lf\nEtendue :\t%lf\n\n",ResultatMoyenne,ResultatMediane,ResultatEtendue);
    return 0;
}
