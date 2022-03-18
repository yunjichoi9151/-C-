// 난생처음 C언어 프로그래밍
// Chapter 11(Section 02)

void Sort(int arr[], int count)
{
    for(int i = 0; i < count - 1; i++)
        for(int j = i + 1; j < count; j++)
            if(arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
}