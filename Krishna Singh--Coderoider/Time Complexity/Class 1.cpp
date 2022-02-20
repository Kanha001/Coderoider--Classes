
Time Complexity 
Question 1 Interviewbit
What is the time, space complexity of following code :

        int a = 0, b = 0;    
        for (i = 0; i < N; i++) {
            a = a + rand();  
        }
        for (j = 0; j < M; j++) {
            b = b + rand();
        }
Assume that rand() is O(1) time, O(1) space function.
   Answer :- O(N + M) time, O(1)
      ...
   Question 2 : What is the time, space complexity of following code :

    int a = 0, b = 0;    
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            a = a + j;
        }
    }
    for (k = 0; k < N; k++) {
        b = b + k;
    } 
Answer : O(N * N) time, O(1) space
    ...
   Question 3 : What is the time complexity of the following code :

    int a = 0;
    for (i = 0; i < N; i++) {
        for (j = N; j > i; j--) {
            a = a + i + j;
        }
    }
 Answer : Total no. of runs = N(N+1)/2
         Doubt : 
...
   Question 4 : What will be the Time Complexity of the following code in terms of ‘n’ ?

Note : Assume k to be a constant value

for(int i = 0; i < n; i++)
{
   for(int j = 1 ; j < k; j++)
    {
      cout << (i + j ) << endl;
     }
 }
Answer : O(n^2)
        ...
     Question 5 : What does it mean when we say that an algorithm X is asymptotically more efficient than Y?
     Answer : X will always be a better choice for large inpu
     ...
      Question 6 : What is time complexity of following code :

        int count = 0;
        for (int i = N; i > 0; i /= 2) {
            for (int j = 0; j < i; j++) {
                count += 1;
            }
        }
       Answer : I don,t get the answer. Need explanation
       ...
        Question 7 : What is the time complexity of the following code : cpp int i, j, k = 0; for (i = n/2; i &lt;= n; i++) { for (j = 2; j &lt;= n; j = j * 2) { k = k + n/2; } }
        Answer : Θ(nLogn); How?
        ...
                
         Question 8 : In the following C++ function, let n >= m.


int gcd(int n, int m) {
  if (n%m ==0) return m;
  if (n < m) swap(n, m);
  while (m > 0) {
    n = n%m;
    swap(n, m);
  }
  return n;
}
What is the time complexity of the above function assuming n > m?. 
Θ symbol represents theta notation and Ω symbol represents omega notation.
        Answer : Why theta not Big O
        ...
                
                
