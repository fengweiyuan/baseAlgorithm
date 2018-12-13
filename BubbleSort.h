#ifndef SUANFA_BUBBLESORT_H
#define SUANFA_BUBBLESORT_H



/**
 * ð������
 */
template <typename T>
void bubbleSort(T arr[], int n) {
    int i, j, flag;                       // �ֱ�����ѭ����������ѭ���������Լ��Ƿ��Ѿ�û�н����˵ı��
    for (i = 0; i < n - 1; i ++) {        // ��ѭ����Ҫѭ��n��
        flag = 0;                         // һ��ʼ�ٶ�Ϊ����Ҫ���н���
        for (j = 0; j < n - 1 - i; j++) { // ��Ϊ��ѭ�������˶��ٴΣ����ж��ٸ�Ԫ���Ѿ�ð�ݵ�β�ˣ�β�˵��ǲ���Ԫ�ز����ٶԱ�
            if (arr[j] > arr[j+1]) {
                flag = 1;                 // �����˽���
                swap(arr[j], arr[j+1]);
            }
        }
        if (flag == 0) break;           //���һ����ѭ����û�з���������˵���Ѿ��ź��ˣ�����break����ѭ����
    }
}
#endif

