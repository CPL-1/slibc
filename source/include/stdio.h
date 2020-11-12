#ifndef __STDIO_H__
#define __STDIO_H__

#include <stddef.h>
#include <stdarg.h>
#include <sys/types.h>

#ifdef __cplusplus
extern "C" {
#endif

#define getc fgetc
#define EOF  (-1)

#define FILE_BUFFER_SIZE 512

typedef struct {
    int    inner_fd;
    int    is_writable;
    int    is_eof;
    int    is_error;
    size_t bytes_in_buffer;
    size_t buffer_i;
    char   buffer[FILE_BUFFER_SIZE];
    int    ungetc;
} FILE;

extern FILE *stdin;
extern FILE *stdout;
extern FILE *stderr;

FILE *fdopen(int fd, const char *mode);
FILE *fopen(const char *restrict filename, const char *restrict mode);
int   fclose(FILE *stream);

int    fputc(int character, FILE *stream);
int    fgetc(FILE *stream);
int    ungetc(int c, FILE *stream);

int    fputs(const char *str, FILE *stream);
char  *fgets(char *restrict result, int count, FILE *restrict stream);

int    fflush(FILE *stream);

int    putchar(int character);
int    puts(const char *str);
int    printf(const char *format, ...);
int    fprintf(FILE *stream, const char *format, ...);
int    vfprintf(FILE *stream, const char *format, va_list args);
int    fseek(FILE *stream, long offset, int whence);
off_t  ftell(FILE *stream);
size_t fwrite(const void *pointer, size_t size, size_t nitems, FILE *stream);
int    remove(const char *pathname);
int    sprintf(char *result,   const char *format, ...);
int    snprintf(char *result,  size_t count, const char *format, ...);
int    vsnprintf(char *result, size_t count, const char *format, va_list args);
int    getchar(void);

#ifdef __cplusplus
}
#endif

#endif
