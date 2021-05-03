/*
 *
 * YOU NEED TO IMPLEMENT THIS!
 *
 */
#ifndef __COOMPARATOR_H__
#define __COOMPARATOR_H__
#include <functional>
#include <string>
class Comparator
{
    public:
        int compare(std::string a, std::string b ,std::less<std::string> cmp= std::less<std::string>{}) const{
            return cmp(a,b);
        };
};

#endif
