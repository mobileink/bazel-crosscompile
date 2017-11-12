# define /usr/local packages here

# cdk = Curses Development Kit http://invisible-island.net/cdk/
cc_library(
   name = "cdk",
   hdrs = ["include/cdk.h"] + glob(["include/cdk/*.h"]),
   linkstatic = 1,
   linkopts = ["-lncurses"],
    srcs = ["lib/libcdk.a"],
   visibility = ["//visibility:public"],
)
