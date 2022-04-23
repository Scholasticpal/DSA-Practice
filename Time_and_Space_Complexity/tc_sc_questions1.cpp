//What is the time, space complexity of the following code?

// Q1
int a = 0, b = 0;
for (i = 0; i < N; i++) {
	a = a + rand();
}
for (j = 0; j < M; j++) {
	b = b + rand();
}
// Ans: O(N + M) time, O(1) space


//Q2
int a = 0;
for (i = 0; i < N; i++) {
    for (j = N; j > i; j--) {
        a = a + i + j;
    }
}
//O(N*N) time

//Q3
int i, j, k = 0;
for (i = n / 2; i <= n; i++) {
	for (j = 2; j <= n; j = j * 2) {
		k = k + n / 2;
	}
}
//O(nlogn) time

//Q4
int a = 0, i = N;
while (i > 0) {
	a += i;
	i /= 2;
}
//O(logN) time
