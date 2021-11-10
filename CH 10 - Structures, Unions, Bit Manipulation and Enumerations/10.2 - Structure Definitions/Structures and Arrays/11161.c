#define NPRECINCTS 12

struct PrecinctReport {
	char *address;
	int felonies, murders, robberies;
};

struct PrecinctReport allPrecincts[NPRECINCTS];