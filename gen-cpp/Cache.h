#ifndef CACHE_H
#define CACHE_H

#include <string>

using namespace std;

typedef struct {
	string key;
	string data;
	int size;
} page;

class Cache {
	public:
		Cache(int s) : size(s){
		}
	
		virtual string get(string key) = 0;
		virtual void set(string key, string value) = 0;	
	
	protected:
		unsigned int size;
};

#endif
