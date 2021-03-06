#include <iostream>
#include <string>
#include <assert.h>
#include "Set.h"
#include "Cache.h"

//TO DO: most of this is incomplete
//       look for TO DO throughout the file

/*
 * Cache
 * A cache is a set of Sets. Create and initialize the sets.
 * Initialize the Cache object.
 */
Cache::Cache(int32_t associativity, int32_t blockOffsetBits, int32_t setIndexBits)
{
   int32_t i;

   /* TO DO: Calculate the number of sets from the setIndex bits */
   numSets = 1;  //1 isn't correct -- You need to fix this

   //The rest of this is complete.
   sets = new Set[numSets];
   for (i = 0; i < numSets; i++)
   {
       sets[i].initialize(associativity);
   }
   this->associativity = associativity;
   this->blockOffsetBits = blockOffsetBits;
   this->setIndexBits = setIndexBits;
}

/* 
 * isHit
 * Returns true if access the cache with the provided address results in
 * a hit. Calls isHit in the Set class.
 */
bool Cache::isHit(int64_t address)
{
   //TO DO
   return false;
}

/*
 * isEvict
 * Returns true if accessing the cache with the provided address results in
 * an eviction because the Set is full. Calls isFull in the Set class.
 */

bool Cache::isEvict(int64_t address)
{

   //TO DO
   return false;
}

/*
 * update
 * Updates the set in which the tag of the address is to be stored
 * by calling the update method on the appropriate Set object.
 */
bool Cache::update(int64_t address)
{
   //TO DO
}

/*
 * getBits
 * Takes as input a source, a starting bit number, and an ending bit number
 * and returns those bits from the source.
 * For example, getBits(60, 62, 0x7000000000000000) returns 7
 */
int64_t Cache::getBits(int32_t start, int32_t end, int64_t source)
{
   //TO DO
}

/*
 * Destruct the dynamically allocated data.
 */
Cache::~Cache()
{
   //TO DO
}

/*
 * print
 * Output the contents of the cache.  This may be useful for debugging.
 * You can add a call to this in the Simulate run method.
*/
void Cache::print()
{
   std::cout << "\nNumber of Sets: " << numSets << ", ";
   std::cout << "Associativity: " << associativity ;

   int32_t i, j;
   for (i = 0; i < numSets; i++)
   {
      sets[i].print();
   }
}

