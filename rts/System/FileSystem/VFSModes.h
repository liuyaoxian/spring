#ifndef VFS_MODES_H
#define VFS_MODES_H


#define SPRING_VFS_RAW  "r"
#define SPRING_VFS_MOD  "M"
#define SPRING_VFS_MAP  "m"
#define SPRING_VFS_BASE "b"
#define SPRING_VFS_NONE " "
#define SPRING_VFS_MOD_BASE   SPRING_VFS_MOD  SPRING_VFS_BASE
#define SPRING_VFS_MAP_BASE   SPRING_VFS_MAP  SPRING_VFS_BASE
#define SPRING_VFS_ZIP        SPRING_VFS_MOD  SPRING_VFS_MAP  SPRING_VFS_BASE
#define SPRING_VFS_RAW_FIRST  SPRING_VFS_RAW  SPRING_VFS_ZIP
#define SPRING_VFS_ZIP_FIRST  SPRING_VFS_ZIP  SPRING_VFS_RAW
#define SPRING_VFS_ALL        SPRING_VFS_RAW_FIRST


#endif // VFS_MODES_H
