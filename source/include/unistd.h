#ifndef __UNISTD_H__
#define __UNISTD_H__

#include <sys/types.h>
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

int     close(int fd);                                // Implemented by the port.
ssize_t read(int fd, void *buf, size_t count);        // Ditto.
ssize_t write(int fd, const void *buf, size_t count); // Ditto.
char   *getcwd(char *buf, size_t size);               // Ditto.
int     rmdir(const char *path);                      // Ditto.
int     unlink(const char *path);                     // Ditto.
int     fork(void);                                   // Ditto.
void    _exit(int status);                            // Ditto.

#ifdef __cplusplus
}
#endif

#endif
