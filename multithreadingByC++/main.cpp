//
// Created by houssem on 22/04/24.
//

#include <iostream>
#include <pthread.h>
#include <cstring>

#define NUM_THREADS 5

using namespace std;

void* Print_Hello(void* thread_id){
    // Thread id
    long tid;
    tid = (long) thread_id;

    cout << "Hello from thread id : " << tid << endl;
    pthread_exit(NULL);
}
int main(){
    // create threads
    pthread_t threads[NUM_THREADS];
    int rc;
    int i;

    for(i = 0; i < NUM_THREADS; ++i){
        cout << "Creating thread " << i << endl;
        rc = pthread_create(&threads[i], NULL, Print_Hello, (void*)&i);
        if (rc){
            cout << "Error unable to create thread : " << i << rc << endl;
            exit(-1);
        }
    }
    pthread_exit(NULL);
}