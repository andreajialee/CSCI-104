#ifndef UTIL_H
#define UTIL_H

#include <string>
#include <iostream>
#include <set>

/** Complete the setIntersection and setUnion functions below
 *  in this header file (since they are templates).
 *  Both functions should run in time O(n*log(n)) and not O(n^2)
 */
template <typename T>
std::set<T> setIntersection(std::set<T>& s1, std::set<T>& s2)
{
   std::set<T> intSet;
   typename std::set<T>::iterator it;

   for(it=s1.begin(); it!=s1.end(); ++it){
       if(s2.find(*it) != s2.end()){
           intSet.insert(*it);
       }
   }
   return intSet;
}
template <typename T>
std::set<T> setUnion(std::set<T>& s1, std::set<T>& s2)
{
    std::set<T> unionSet;
    typename std::set<T>::iterator i;
    typename std::set<T>::iterator i2;

    for(i = s1.begin(); i!=s1.end(); ++i){
        unionSet.insert(*i);
    }
    for(i2=s2.begin(); i2!=s2.end(); ++i2){
        unionSet.insert(*i2);
    }
    return unionSet;
}

/***********************************************/
/* Prototypes of functions defined in util.cpp */
/***********************************************/

std::string convToLower(std::string src);

std::set<std::string> parseStringToWords(std::string line);

// Used from http://stackoverflow.com/questions/216823/whats-the-best-way-to-trim-stdstring
// Removes any leading whitespace
std::string &ltrim(std::string &s) ;

// Removes any trailing whitespace
std::string &rtrim(std::string &s) ;

// Removes leading and trailing whitespace
std::string &trim(std::string &s) ;
#endif
