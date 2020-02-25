#ifndef VFS_H
#define VFS_H

#include "vsyscall.h"

#include <stdio.h>

typedef int64_t clus_t;

void vfs_init(const char* argv0, const char* vfspath, const char* writepath);

size_t vfs_fget(const char* path, uint8_t* buf, size_t bufsiz);
size_t vfs_fput(const char* path, const uint8_t* buf, size_t bufsiz);
int vfs_stat(const char* path, struct CHostFsStat* st_out);
int vfs_statclus(clus_t clus, struct CHostFsStat* st_out);

#endif
