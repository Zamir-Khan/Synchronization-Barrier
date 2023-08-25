// Written by Zamir Khan, Tahmidul Karim, for CS4348 Project 3
// Netid: ZHK210000, TXK210000

#ifndef BARRIER_H
#define BARRIER_H


#include <semaphore.h>

namespace synchronization
{

   // Provides a reusable barrier
   class barrier {
   private:
        sem_t mutex;
        sem_t barr;
        sem_t barr2;

        int thread_count;
        int total_threads;

   public:

      // Constructor
      barrier( int numberOfThreads );

      // Destructor
      ~barrier( );

      // Function to wait at the barrier until all threads have reached the barrier
      void arriveAndWait( void );
   };

}

#endif