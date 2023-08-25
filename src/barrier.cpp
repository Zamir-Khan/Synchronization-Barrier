// Written by Zamir Khan, Tahmidul Karim, for CS4348 Project 3
// Netid: ZHK210000, TXK210000

#include "barrier.h"

using namespace synchronization;

barrier::barrier( int numberOfThreads ) {
        total_threads = numberOfThreads;
        thread_count = 0;

        sem_init(&mutex,0,1);
        sem_init(&barr,0,0);
        sem_init(&barr2,0,0);

        return;
}

barrier::~barrier( ) {
        sem_destroy(&mutex);
        sem_destroy(&barr);
        sem_destroy(&barr2);

        return;
}

void barrier::arriveAndWait( void ) {

        sem_wait(&mutex);
        thread_count++;

        // Code for The Last thread
        if(thread_count==total_threads){

                sem_post(&barr);        // Signal thread
                sem_wait(&barr2);       // Wait for Signal
                sem_post(&mutex);       // Release Mutex
        }

        // Code for Other threads
        else{
                sem_post(&mutex);       // Release Mutex

                sem_wait(&barr);        // Wait for Signal
                thread_count--;
                if(thread_count==1){    // If second-last thread 
                        thread_count--; // prepare for next phase
                        sem_post(&barr2); // Retrive last thread
                }
                // Otherwise
                else{
                        sem_post(&barr);// Signal one thread
                }

        }



   return;
}