#include "fs.h"
#include "lwip/def.h"
#include "fsdata.h"


#define file_NULL (struct fsdata_file *) NULL

static const unsigned int dummy_align__404_json = 0;
static const unsigned char data__404_json[] = {
/* /404.json (10 chars) */
0x2f,0x34,0x30,0x34,0x2e,0x6a,0x73,0x6f,0x6e,0x00,0x00,0x00,

/* HTTP header */
/* "HTTP/1.1 404 File not found\r\n" (29 bytes) */
0x48,0x54,0x54,0x50,0x2f,0x31,0x2e,0x31,0x20,0x34,0x30,0x34,0x20,0x46,0x69,0x6c,
0x65,0x20,0x6e,0x6f,0x74,0x20,0x66,0x6f,0x75,0x6e,0x64,0x0d,0x0a,

/*  "Server: SmartThings Device SDK\r\n" (32 bytes) */
0x53,0x65,0x72,0x76,0x65,0x72,0x3a,0x20,0x53,0x6d,0x61,0x72,0x74,0x54,0x68,0x69,
0x6e,0x67,0x73,0x20,0x44,0x65,0x76,0x69,0x63,0x65,0x20,0x53,0x44,0x4b,0x0d,0x0a,

/* "Connection: close\r\n" (18 bytes) */
0x43,0x6f,0x6e,0x6e,0x65,0x63,0x74,0x69,0x6f,0x6e,0x3a,0x20,0x63,0x6c,0x6f,0x73,
0x65,0x0a,

/* "Content-Type: application/json\r\n" (32 bytes) */
0x43,0x6f,0x6e,0x74,0x65,0x6e,0x74,0x2d,0x54,0x79,0x70,0x65,0x3a,0x20,0x61,0x70,
0x70,0x6c,0x69,0x63,0x61,0x74,0x69,0x6f,0x6e,0x2f,0x6a,0x73,0x6f,0x6e,0x0d,0x0a,

/* "Content-Length: 51\r\n\r\n" (22 bytes) */
0x43,0x6f,0x6e,0x74,0x65,0x6e,0x74,0x2d,0x4c,0x65,0x6e,0x67,0x74,0x68,0x3a,0x20,
0x35,0x31,0x0d,0x0a,0x0d,0x0a,

/* raw file data (51 bytes) */
0x7b,0x22,0x65,0x72,0x72,0x6f,0x72,0x22,0x3a,0x7b,0x22,0x63,0x6f,0x64,0x65,0x22,
0x3a,0x34,0x30,0x34,0x2c,0x22,0x6d,0x65,0x73,0x73,0x61,0x67,0x65,0x22,0x3a,0x22,
0x46,0x69,0x6c,0x65,0x20,0x6e,0x6f,0x74,0x20,0x66,0x6f,0x75,0x6e,0x64,0x22,0x7d,
0x7d,0x0d,0x0a};


const struct fsdata_file file__404_json[] = { {
file_NULL,
data__404_json,
data__404_json + 12,
sizeof(data__404_json) - 12,
FS_FILE_FLAGS_HEADER_INCLUDED,
}};

#define FS_ROOT file__404_json
#define FS_NUMFILES 1

