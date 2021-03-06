#include <fstream>
#include <iostream>
#include <string>
#include <assert.h>
#include "Set.h"
#include "Cache.h"
#include "Simulate.h"


//TO DO: implement run and accessCache functions

/* Simulator constructor
 * Dynamically create a Cache object and initialize the Simulator object.
 */
Simulate::Simulate(int32_t associativity, int32_t blockOffsetBits, 
                   int32_t setIndexBits, bool verbose)
{
   hits = misses = evictions = 0;
   cacheP = new Cache(associativity, blockOffsetBits, setIndexBits);
   this->verbose = verbose;
}

/*
 * Destroy the Simulator object.
 */
Simulate::~Simulate()
{
   delete cacheP;
}

/*
 * run
 * Takes as input the name of a file of traces. Opens the
 * file and reads each address. Addresses are used
 * to perform the cache simulation.
 */
void Simulate::run(std::string filename)
{
   std::string addressStr;
   std::string type;
   std::fstream fs;
   int64_t address;
   fs.open(filename, std::fstream::in);

//TO DO
   //Loop, reading lines from the file.
   //From each line, get the type and the address.
   //Depending upon the type, you'll pass it to the
   //accessCache method. (See assignment.)
   //
   
}

/* accessCache
 * Takes as input a 64 bit address.
 * Uses the address to access the cache pointed to by cacheP
 * and updates hits, misses, and evictions.
 */
void Simulate::accessCache(int64_t address)
{

//TO DO
    //cacheP contains a pointer to the cache object
    //Call the appropriate methods in the Cache class
    //to determine whether to increment hits, misses, and/or evictions
    //If verbose is true, output the verbose output (see assignment)
}

/*
 * printSummary
 * Print the number of hits, misses, and evictions at the end of
 * the simulation.
 */
void Simulate::printSummary()
{
   std::fstream fs;
   printf("hits:%d misses:%d evictions:%d\n", hits, misses, evictions);
   fs.open(".csim_results", std::fstream::out);
   assert(fs.is_open());
   fs << hits << " " << misses << " " << evictions <<"\n";;
   fs.close();
}

