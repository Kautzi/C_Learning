#ifndef CSV_READER_H
#define CSV_READER_H

/*### INCLUDES ### */

#include "table.h"

//### END INCLUDES ###

//### Declarations ###

size_t line_count(const char *const file_path);

void read_simple_csv(const char *const file_path,records_t * const records);

void write_simple_csv(const char *const file_path,const records_t * const records);
#endif /* CSV_READER_H */
