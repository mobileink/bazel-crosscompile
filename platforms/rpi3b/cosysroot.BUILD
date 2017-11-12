# paths are relative to the cosysroot, i.e. $HOME/cosysroots/rpi3b

# cdk = Curses Development Kit http://invisible-island.net/cdk/
cc_library(
    name = "cdk",
    hdrs = glob(["usr/include/**/*.h"]),
    linkstatic = 1,
    srcs = glob(["usr/lib/arm-linux-gnueabihf/*.a"]), # this picks up the ncurses archives too
    visibility = ["//visibility:public"],
)

cc_library(
   name = "rpi3b",
   hdrs = glob(["usr/include/*.h"]),
   srcs = glob(["usr/lib/*.a"]),
   visibility = ["//visibility:public"],
)

