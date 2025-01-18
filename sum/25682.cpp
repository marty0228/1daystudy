#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int N, M, K;
char board[2000][2000];
int pSum[2001][2001];

int chess(char color) {
	int value;
	
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			if (!((i + j) % 2)) value = board[i][j] != color; 
			else value = board[i][j] == color;
			
			pSum[i + 1][j + 1] = pSum[i][j + 1] + pSum[i + 1][j] - pSum[i][j] + value;
		}
	}
	int tmp, result = 100000000;
	
	for (int i = 0; i <= N - K; i++) {
		for (int j = 0; j <= M - K; j++) {
			tmp = pSum[i + K][j + K] - pSum[i][j + K] - pSum[i + K][j] + pSum[i][j];
			result = (tmp < result) ? tmp : result;
		}
	}
	
	return result;
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
	cout.tie(nullptr);
	
    cin >> N >> M >> K;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cin >> board[i][j];
		}
	}
	
	cout << min(chess('B'), chess('W')) << '\n';
    
	return 0;
}





