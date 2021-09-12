#include<stdio.h>

int main() {

    int N, i, c = 0, d = 0, save, j = 0, k = 0; // N은 숫자 몇개입력할지를 위해 선언, save는 N값 저장용으로 쓴다.
    int a[2000] = { 0 }, max[2000] = { 0 }, min[2000] = { 0 }; //각 배열들을 0으로 초기화합니다.
    // a배열은 처음에 숫자입력받기 위한 배열이고 max배열은 최대값들을 저장, min배열은 최솟값들을 저장합니다.
    int maxc, mind;
    int cnt = 0, cnt1 = 0, cnt2 = 0;

    scanf("%d", &N); // N에 숫자를 입력해서 a배열에 숫자를 몇개 입력받을지 결정합니다.

    save = N; // save를 N값으로 초기화 시킨다.

    for (i = 0; i < N; ++i) // N개 만큼 a배열에 숫자들을 입력합니다.
    {
        scanf("%d", &a[i]);   //    1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 21 나중에 복사해서 붙여넣기 용
    }

    //4-1 시작
    for (i = N - 1; i >= 0; --i) // 입력받은 a배열을 거꾸로 출력합니다.
    {
        printf(" %d", a[i]);
    }//4-1 끝

    printf("\n");

    //4-2 시작
    if (N % 3 == 0) // 입력된 숫자의 개수가 3개씩 나누어 떨어짐.
    {
        for (i = 0; i < N / 3 - 1; i++) //마지막 3개 원소가 남기전까지 밑의 문장들을 실행합니다.
        {
            if (a[j] >= a[j + 1] && a[j] >= a[j + 2]) //a[j] 가 제일 클때
            {
                max[c++] = a[j]; //max배열에 a[j]를 넣고 c를 1증가시킵니다.
                if (a[j + 1] >= a[j + 2]) //만약 a[j + 1]가 더 클경우 min배열에 a[j + 2]를 대입하고 d를 1씩 증가시킵니다.
                    min[d++] = a[j + 2];
                else  //그 외의 경우에는 min배열에 a[j + 1]를 대입하고 d를 1씩 증가시킵니다.
                    min[d++] = a[j + 1];
            }

            else if (a[j + 1] >= a[j] && a[j + 1] >= a[j + 2]) //a[j] 가 제일 클때
            {
                max[c++] = a[j + 1]; //max배열에 a[j + 1]를 넣고 c를 1증가시킵니다.
                if (a[j] >= a[j + 2]) //만약 a[j]가 더 클경우 min배열에 a[j + 2]를 대입하고 d를 1씩 증가시킵니다.
                    min[d++] = a[j + 2];
                else //그 외의 경우에는 min배열에 a[j]를 대입하고 d를 1씩 증가시킵니다.
                    min[d++] = a[j];
            }

            else //그 외의 경우
            {
                max[c++] = a[j + 2]; //max배열에 a[j + 2]를 넣고 c를 1증가시킵니다.
                if (a[j + 1] >= a[j]) //만약 a[j + 1]가 더 클경우 min배열에 a[j]를 대입하고 d를 1씩 증가시킵니다.
                    min[d++] = a[j];
                else //그 외의 경우에는 min배열에 a[j + 1]를 대입하고 d를 1씩 증가시킵니다.
                    min[d++] = a[j + 1];
            }

            j += 3; //j에 3을 더한값으로 초기화합니다.
        }

        //마지막 3개 원소들의 대소관계를 비교하기 시작합니다.

        if (a[j] >= a[j + 1] && a[j] >= a[j + 2]) //a[j] 가 제일 클때
        {
            max[c++] = a[j]; //max배열에 a[j]를 넣고 c를 1증가시킵니다.
            if (a[j + 1] >= a[j + 2]) //만약 a[j + 1]가 더 클경우 min배열에 a[j + 2]를 대입하고 d를 1씩 증가시킵니다.
                min[d++] = a[j + 2];
            else  //그 외의 경우에는 min배열에 a[j + 1]를 대입하고 d를 1씩 증가시킵니다.
                min[d++] = a[j + 1];
        }

        else if (a[j + 1] >= a[j] && a[j + 1] >= a[j + 2]) //a[j] 가 제일 클때
        {
            max[c++] = a[j + 1]; //max배열에 a[j + 1]를 넣고 c를 1증가시킵니다.
            if (a[j] >= a[j + 2]) //만약 a[j]가 더 클경우 min배열에 a[j + 2]를 대입하고 d를 1씩 증가시킵니다.
                min[d++] = a[j + 2];
            else //그 외의 경우에는 min배열에 a[j]를 대입하고 d를 1씩 증가시킵니다.
                min[d++] = a[j];
        }

        else //그 외의 경우
        {
            max[c++] = a[j + 2]; //max배열에 a[j + 2]를 넣고 c를 1증가시킵니다.
            if (a[j + 1] >= a[j]) //만약 a[j + 1]가 더 클경우 min배열에 a[j]를 대입하고 d를 1씩 증가시킵니다.
                min[d++] = a[j];
            else //그 외의 경우에는 min배열에 a[j + 1]를 대입하고 d를 1씩 증가시킵니다.
                min[d++] = a[j + 1];
        }
    }

    else if (N % 3 == 1) // 입력된 숫자의 개수가 3개씩 나누다가 1개가 남는 경우
    {
        for (i = 0; i < N / 3; i++) // 비교할 원소가 1개 남을때 까지 반복합니다.
        {
            if (a[j] >= a[j + 1] && a[j] >= a[j + 2]) //a[j] 가 제일 클때
            {
                max[c++] = a[j]; //max배열에 a[j]를 넣고 c를 1증가시킵니다.
                if (a[j + 1] >= a[j + 2]) //만약 a[j + 1]가 더 클경우 min배열에 a[j + 2]를 대입하고 d를 1씩 증가시킵니다.
                    min[d++] = a[j + 2];
                else  //그 외의 경우에는 min배열에 a[j + 1]를 대입하고 d를 1씩 증가시킵니다.
                    min[d++] = a[j + 1];
            }

            else if (a[j + 1] >= a[j] && a[j + 1] >= a[j + 2]) //a[j] 가 제일 클때
            {
                max[c++] = a[j + 1]; //max배열에 a[j + 1]를 넣고 c를 1증가시킵니다.
                if (a[j] >= a[j + 2]) //만약 a[j]가 더 클경우 min배열에 a[j + 2]를 대입하고 d를 1씩 증가시킵니다.
                    min[d++] = a[j + 2];
                else //그 외의 경우에는 min배열에 a[j]를 대입하고 d를 1씩 증가시킵니다.
                    min[d++] = a[j];
            }

            else //그 외의 경우
            {
                max[c++] = a[j + 2]; //max배열에 a[j + 2]를 넣고 c를 1증가시킵니다.
                if (a[j + 1] >= a[j]) //만약 a[j + 1]가 더 클경우 min배열에 a[j]를 대입하고 d를 1씩 증가시킵니다.
                    min[d++] = a[j];
                else //그 외의 경우에는 min배열에 a[j + 1]를 대입하고 d를 1씩 증가시킵니다.
                    min[d++] = a[j + 1];
            }

            j += 3; // j에 3을 더한값으로 초기화합니다.
        }

        // 마지막 남은 하나의 원소입니다.
        max[c++] = a[j]; //max배열에 a[j]를 대입합니다.
        min[d++] = a[j]; //min배열에 a[j]를 대입합니다.
    }

    else //그 외의 경우
    {
        for (i = 0; i < N / 3; i++) // 비교할 원소가 2개 남을때 까지 반복합니다.
        {
            if (a[j] >= a[j + 1] && a[j] >= a[j + 2]) //a[j] 가 제일 클때
            {
                max[c++] = a[j]; //max배열에 a[j]를 넣고 c를 1증가시킵니다.
                if (a[j + 1] >= a[j + 2]) //만약 a[j + 1]가 더 클경우 min배열에 a[j + 2]를 대입하고 d를 1씩 증가시킵니다.
                    min[d++] = a[j + 2];
                else  //그 외의 경우에는 min배열에 a[j + 1]를 대입하고 d를 1씩 증가시킵니다.
                    min[d++] = a[j + 1];
            }

            else if (a[j + 1] >= a[j] && a[j + 1] >= a[j + 2]) //a[j] 가 제일 클때
            {
                max[c++] = a[j + 1]; //max배열에 a[j + 1]를 넣고 c를 1증가시킵니다.
                if (a[j] >= a[j + 2]) //만약 a[j]가 더 클경우 min배열에 a[j + 2]를 대입하고 d를 1씩 증가시킵니다.
                    min[d++] = a[j + 2];
                else //그 외의 경우에는 min배열에 a[j]를 대입하고 d를 1씩 증가시킵니다.
                    min[d++] = a[j];
            }

            else //그 외의 경우
            {
                max[c++] = a[j + 2]; //max배열에 a[j + 2]를 넣고 c를 1증가시킵니다.
                if (a[j + 1] >= a[j]) //만약 a[j + 1]가 더 클경우 min배열에 a[j]를 대입하고 d를 1씩 증가시킵니다.
                    min[d++] = a[j];
                else //그 외의 경우에는 min배열에 a[j + 1]를 대입하고 d를 1씩 증가시킵니다.
                    min[d++] = a[j + 1];
            }

            j += 3; // j에 3을 더한값으로 초기화합니다.
        }

        //비교할 원소가 2개 남은 상태입니다.

        if (a[j] >= a[j + 1]) // a[j]가 더 큰경우
        {
            max[c++] = a[j]; //max배열에 a[j]를 대입하고 c를 1씩 증가시킵니다.
            min[d++] = a[j + 1]; //min배열에 a[j + 1]를 대입하고 d를 1씩 증가시킵니다.
        }

        else //그 외의 경우
        {
            max[c++] = a[j + 1]; //max배열에 a[j + 1]를 대입하고 c를 1씩 증가시킵니다.
            min[d++] = a[j]; //min배열에 a[j]를 대입하고 d를 1씩 증가시킵니다.
        }
    }


    // 4-2 max배열과 min 배열 구하기 끝 이제 출력만 하면 됨.

    for (i = 0; i < c; ++i) //max[c - 1]까지 출력합니다.
    {
        printf(" %d", max[i]);     //max배열 출력
    }

    printf("\n");

    for (i = 0; i < d; ++i) //min[d - 1]까지 출력합니다.
    {
        printf(" %d", min[i]);     //min배열 출력
    }

    printf("\n");
    /*

     지금부터 4-3 시작

     */
    maxc = c;  //최댓값들 초기 배열 갯수 혹시 모르니 저장
    mind = d;  //최솟값들 초기 배열 갯수 혹시 모르니 저장

    while (1) // 가장 큰 수와 가장 작은 수 구하기
    {
        cnt = 0;
        cnt1 = 0;
        c = 0;
        d = 0;
        j = 0;
        k = 0;

        //cnt, cnt1, c, d, j, k를 모두 0으로 초기화합니다.

        if (maxc == 1 && mind == 1) break; //maxc와 mind가 1이 되면 반복문 탈출.

        //최댓값 구하기 먼저 시작
        if (maxc % 3 == 0) // 최댓값들 배열 개수가 3개씩 나누어 떨어짐.
        {
            for (i = 0; i < maxc / 3 - 1; i++) //마지막3개가 남을때까지 반복합니다.
            {
                if (max[j] >= max[j + 1] && max[j] >= max[j + 2]) // max[j]가 제일 크다면
                {
                    max[c++] = max[j]; //max[c]에 max[j]를 넣고 c를 1씩 증가시킵니다.
                }

                else if (max[j + 1] >= max[j] && max[j + 1] >= max[j + 2]) // max[j + 1]가 제일 크다면
                {
                    max[c++] = max[j + 1]; //max[c]에 max[j + 1]를 넣고 c를 1씩 증가시킵니다.
                }

                else //그 외의 경우
                {
                    max[c++] = max[j + 2]; //max[c]에 max[j + 2]를 넣고 c를 1씩 증가시킵니다.
                }
                j += 3; //j에 3을 더한값으로 초기화합니다.
                cnt++; // max배열의 실질적인 원소개수를 세기위해 cnt를 1씩 증가시킵니다.
            }


            if (max[j] >= max[j + 1] && max[j] >= max[j + 2]) // max[j]가 제일 크다면
            {
                max[c++] = max[j]; //max[c]에 max[j]를 넣고 c를 1씩 증가시킵니다.
            }

            else if (max[j + 1] >= max[j] && max[j + 1] >= max[j + 2]) // max[j + 1]가 제일 크다면
            {
                max[c++] = max[j + 1]; //max[c]에 max[j + 1]를 넣고 c를 1씩 증가시킵니다.
            }

            else //그 외의 경우
            {
                max[c++] = max[j + 2]; //max[c]에 max[j + 2]를 넣고 c를 1씩 증가시킵니다.
            }

            cnt++; // max배열의 실질적인 원소개수를 세기위해 cnt를 1씩 증가시킵니다.
            maxc = cnt; //maxc 에 cnt를 대입해서 새로 초기화된 max배열의 실질적인 원소개수를 저장할 수 있습니다.
            j++; // j를 1씩 증가시킵니다.
        }

        else if (maxc % 3 == 1) // 최댓값들 배열 개수가 3개씩 나누다가 1개 남음
        {
            for (i = 0; i < maxc / 3; i++) //마지막 1개 남을때까지 반복합니다.
            {
                if (max[j] >= max[j + 1] && max[j] >= max[j + 2]) // max[j]가 제일 크다면
                {
                    max[c++] = max[j]; //max[c]에 max[j]를 넣고 c를 1씩 증가시킵니다.
                }

                else if (max[j + 1] >= max[j] && max[j + 1] >= max[j + 2]) // max[j + 1]가 제일 크다면
                {
                    max[c++] = max[j + 1]; //max[c]에 max[j + 1]를 넣고 c를 1씩 증가시킵니다.
                }

                else //그 외의 경우
                {
                    max[c++] = max[j + 2]; //max[c]에 max[j + 2]를 넣고 c를 1씩 증가시킵니다.
                }
                j += 3; //j에 3을 더한값으로 초기화합니다.
                cnt++; // max배열의 실질적인 원소개수를 세기위해 cnt를 1씩 증가시킵니다.
            }

            //이제 마지막 원소입니다.

            max[c++] = max[j]; //max[j]를 max[c]에 대입하고 c를 1씩 증가합니다.
            cnt++; // max배열의 실질적인 원소개수를 세기위해 cnt를 1씩 증가시킵니다.
            maxc = cnt; //maxc = cnt; //maxc 에 cnt를 대입해서 새로 초기화된 max배열의 실질적인 원소개수를 저장할 수 있습니다.
            j++; // j를 1씩 증가시킵니다.
        }

        else // 그 외의 경우(// 최댓값들 배열 개수가 3개씩 나누다가 2개 남음)
        {
            for (i = 0; i < maxc / 3; i++) //마지막 2개 남을때까지 반복합니다.
            {
                if (max[j] >= max[j + 1] && max[j] >= max[j + 2]) // max[j]가 제일 크다면
                {
                    max[c++] = max[j]; //max[c]에 max[j]를 넣고 c를 1씩 증가시킵니다.
                }

                else if (max[j + 1] >= max[j] && max[j + 1] >= max[j + 2]) // max[j + 1]가 제일 크다면
                {
                    max[c++] = max[j + 1]; //max[c]에 max[j + 1]를 넣고 c를 1씩 증가시킵니다.
                }

                else //그 외의 경우
                {
                    max[c++] = max[j + 2]; //max[c]에 max[j + 2]를 넣고 c를 1씩 증가시킵니다.
                }
                j += 3; //j에 3을 더한값으로 초기화합니다.
                cnt++; // max배열의 실질적인 원소개수를 세기위해 cnt를 1씩 증가시킵니다.
            }

            //마지막으로 남은 원소 2개입니다.

            if (max[j] >= max[j + 1]) //max[j]가 더클떄
            {
                max[c++] = max[j]; //max[c]에 max[j]를 넣고 c를 1씩 증가시킵니다.
            }

            else //그외의 경우
            {
                max[c++] = max[j + 1]; //max[c]에 max[j + 1]를 넣고 c를 1씩 증가시킵니다.
            }
            cnt++; // max배열의 실질적인 원소개수를 세기위해 cnt를 1씩 증가시킵니다.
            j++; // j를 1씩 증가시킵니다.
            maxc = cnt; //maxc = cnt; //maxc 에 cnt를 대입해서 새로 초기화된 max배열의 실질적인 원소개수를 저장할 수 있습니다.
        }

        //최댓값 찾았음.

        //최솟값 시작

        if (mind % 3 == 0) // 최솟값들 배열 개수가 3개씩 나누어 떨어짐.
        {
            for (i = 0; i < mind / 3 - 1; i++) //마지막으로 3개 남을때까지 반복합니다.
            {
                if (min[k] <= min[k + 1] && min[k] <= min[k + 2]) // min[k]가 제일 작다면
                {
                    min[d++] = min[k]; // min[d]에 min[k]를 대입하고 d를 1씩 증가시킵니다.
                }

                else if (min[k + 1] <= min[k] && min[k + 1] <= min[k + 2]) // min[k]가 제일 작다면
                {
                    min[d++] = min[k + 1]; // min[d]에 min[k + 1]를 대입하고 d를 1씩 증가시킵니다.
                }

                else //그 외의 경우에
                {
                    min[d++] = min[k + 2]; // min[d]에 min[k + 2]를 대입하고 d를 1씩 증가시킵니다.
                }
                k += 3; //k에 3을 더한값으로 초기화합니다.
                cnt1++; // min배열의 실질적인 원소개수를 세기위해 cnt를 1씩 증가시킵니다.
            }

            if (min[k] <= min[k + 1] && min[k] <= min[k + 2]) // min[k]가 제일 작다면
            {
                min[d++] = min[k]; // min[d]에 min[k]를 대입하고 d를 1씩 증가시킵니다.
            }

            else if (min[k + 1] <= min[k] && min[k + 1] <= min[k + 2]) // min[k]가 제일 작다면
            {
                min[d++] = min[k + 1]; // min[d]에 min[k + 1]를 대입하고 d를 1씩 증가시킵니다.
            }

            else //그 외의 경우에
            {
                min[d++] = min[k + 2]; // min[d]에 min[k + 2]를 대입하고 d를 1씩 증가시킵니다.
            }

            cnt1++; // min배열의 실질적인 원소개수를 세기위해 cnt를 1씩 증가시킵니다.
            mind = cnt1; //mind = cnt1; //mind 에 cnt1를 대입해서 새로 초기화된 min배열의 실질적인 원소개수를 저장할 수 있습니다.
            k++; //k를 1증가시킵니다.
        }

        else if (mind % 3 == 1) // 입력된 숫자의 개수가 3개씩 나누다가 1개가 남는 경우
        {
            for (i = 0; i < mind / 3; i++) //마지막으로 1개 남을때까지 반복합니다.
            {
                if (min[k] <= min[k + 1] && min[k] <= min[k + 2]) // min[k]가 제일 작다면
                {
                    min[d++] = min[k]; // min[d]에 min[k]를 대입하고 d를 1씩 증가시킵니다.
                }

                else if (min[k + 1] <= min[k] && min[k + 1] <= min[k + 2]) // min[k]가 제일 작다면
                {
                    min[d++] = min[k + 1]; // min[d]에 min[k + 1]를 대입하고 d를 1씩 증가시킵니다.
                }

                else //그 외의 경우에
                {
                    min[d++] = min[k + 2]; // min[d]에 min[k + 2]를 대입하고 d를 1씩 증가시킵니다.
                }
                k += 3; //k에 3을 더한값으로 초기화합니다.
                cnt1++; // min배열의 실질적인 원소개수를 세기위해 cnt를 1씩 증가시킵니다.
            }

            //마지막으로 원소 1개가 남습니다.

            min[d++] = min[k]; //마지막원소 min[k]를 min[d]에 대입하고 d를 1씩 증가시킵니다.
            cnt1++; // min배열의 실질적인 원소개수를 세기위해 cnt를 1씩 증가시킵니다.
            mind = cnt1; //mind = cnt1; //mind 에 cnt1를 대입해서 새로 초기화된 min배열의 실질적인 원소개수를 저장할 수 있습니다.
            k++; //k를 1증가시킵니다.
        }

        else // 그 외의 경우에
        {
            for (i = 0; i < mind / 3; i++) //마지막으로 2개 남을때까지 반복합니다.
            {
                if (min[k] <= min[k + 1] && min[k] <= min[k + 2]) // min[k]가 제일 작다면
                {
                    min[d++] = min[k]; // min[d]에 min[k]를 대입하고 d를 1씩 증가시킵니다.
                }

                else if (min[k + 1] <= min[k] && min[k + 1] <= min[k + 2]) // min[k]가 제일 작다면
                {
                    min[d++] = min[k + 1]; // min[d]에 min[k + 1]를 대입하고 d를 1씩 증가시킵니다.
                }

                else //그 외의 경우에
                {
                    min[d++] = min[k + 2]; // min[d]에 min[k + 2]를 대입하고 d를 1씩 증가시킵니다.
                }
                k += 3; //k에 3을 더한값으로 초기화합니다.
                cnt1++; // min배열의 실질적인 원소개수를 세기위해 cnt를 1씩 증가시킵니다.
            }

            //마지막으로 원소 2개가 남습니다.

            if (min[k] <= min[k + 1]) //min[k]가 더 작을때 
            {
                min[d++] = min[k]; // min[d]에 min[k]를 대입하고 d를 1씩 증가시킵니다.
            }

            else // 그 외의 경우
            {
                min[d++] = min[k + 1]; //min[d]에 min[k + 1]를 대입하고 d를 1씩 증가시킵니다.
            }
            cnt1++; // min배열의 실질적인 원소개수를 세기위해 cnt를 1씩 증가시킵니다.
            mind = cnt1; //mind = cnt1; //mind 에 cnt1를 대입해서 새로 초기화된 min배열의 실질적인 원소개수를 저장할 수 있습니다.
            k++; //k를 1증가시킵니다.
        }

        //최댓값 출력 부분

        for (i = 0; i < c; ++i) //max[c-1]까지 출력합니다.
        {
            printf(" %d", max[i]); //최댓값들을 출력합니다.
        }
        printf("\n");
        for (i = 0; i < d; ++i) //min[d-1]까지 출력합니다.
        {
            printf(" %d", min[i]); //최솟값들을 출력합니다.
        }
        printf("\n");
    }

    return 0;
}