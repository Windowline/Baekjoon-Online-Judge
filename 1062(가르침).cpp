//
//  main.cpp
//  1062
//
//  Created by Naver on 2017. 10. 11..
//  Copyright © 2017년 Naver. All rights reserved.
//

#include <iostream>
#include <string.h>
#include <unordered_set>
#include <algorithm>
using namespace std;

int N, K;
string words[51];

bool readable(string word, unordered_set<char>& readableSet)
{
    for(int i=0; i<word.length(); i++) {
        char c = (char)word[i];
        unordered_set<char>::iterator it = readableSet.find(c);
        if(it == readableSet.end()) {
            return false;
        }
    }
    return true;
}

int searchMaxReadableWordNum(char curAsc, int curSelectedNum, int maxNum, unordered_set<char>& readableSet)
{
    if(curSelectedNum == maxNum) {
        int readNum = 0;
        for(int i=0; i<N; i++) {
            if(readable(words[i], readableSet)==true) {
                readNum++;
            }
        }
        return readNum;
    }
    int maxReadNum = 0;
    for(char asc = curAsc+1; asc <= 'z'; asc++) {
        unordered_set<char>::iterator it = readableSet.find(asc);
        if(it != readableSet.end()) {
            continue;
        }
        readableSet.insert(asc);
        int readNum = searchMaxReadableWordNum(asc, curSelectedNum + 1, maxNum, readableSet);
        maxReadNum = max(readNum, maxReadNum);
        readableSet.erase(asc);
    }
    return maxReadNum;
}


int main(int argc, const char * argv[])
{
    cin >> N >> K;
    for(int i=0; i<N; i++) {
        cin >> words[i];
    }
    if(K < 5) {
        cout << 0;
        return 0;
    } else {
        unordered_set<char> readableSet;
        readableSet.insert('a');
        readableSet.insert('n');
        readableSet.insert('t');
        readableSet.insert('i');
        readableSet.insert('c');
        int maxNum = 0;
        int canTeachNum = K - 5; // 앞으로 가르칠 수 있는 문자수. 이미 5개를 가르친 상태.
        if(canTeachNum == 0) {
            int readNum = 0;
            for(int i=0; i<N; i++) {
                if(readable(words[i], readableSet)==true) {
                    readNum++;
                }
            }
            cout << readNum;
        } else {
            for(char c = 'a'; c <='z'; c++) {
                unordered_set<char>::iterator it = readableSet.find(c);
                if(it != readableSet.end()) {
                    continue;
                }
                readableSet.insert(c);
                int num = searchMaxReadableWordNum(c, 1, canTeachNum, readableSet);
                maxNum = max(maxNum, num);
                readableSet.erase(c);
            }
            cout << maxNum;
        }
        return 0;
    }
}
