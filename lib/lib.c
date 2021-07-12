#include <uuid/uuid.h>
#include <stdio.h>

void PrintUUID(){

	uuid_t some_uuid;
	char uuid_str[40];

	uuid_generate(some_uuid);
	uuid_unparse(some_uuid, uuid_str);

	printf("UUID: %s\n", uuid_str);
}
