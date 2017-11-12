# define non-system packages here

# cdk = Curses Development Kit http://invisible-island.net/cdk/
cc_library(
   name = "cdk",
   hdrs = ["usr/local/include/cdk.h"]
    + glob(["usr/local/include/cdk/*.h"])
    + glob(["usr/include/**/*.h"]),
   linkstatic = 1,
   # linkopts = ["-Lusr/lib", "-lncurses"],
   srcs = ["usr/local/lib/libcdk.a",
           "lib64/libncurses.a"],
   visibility = ["//visibility:public"],
)

cc_library(
   name = "wrlinux",
   hdrs = glob(["usr/include/*.h"]),
   srcs = glob(["usr/lib/*.a"]),
   visibility = ["//visibility:public"],
)

