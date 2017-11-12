config_setting(
    name = "rpi3b",
     values = { "crosstool_top": "//platforms/rpi3b:toolchain" }
)

config_setting(
    name = "wrlinux",
     values = { "crosstool_top": "//platforms/wrlinux:toolchain" }
)

config_setting(
    name = "ndk",
     values = { "crosstool_top": "//platforms/ndk:toolchain" }
)

cc_library(
    name = "hello-greet",
    srcs = ["hello-greet.c"],
    hdrs = ["hello-greet.h"],
    visibility = ["//src/main/android:__pkg__"],
)

cc_binary(
    name = "hello-world",
    copts = ["-Isrc/lib"]
    + select({":rpi3b": ["-Iexternal/cosysroot_rpi3b/usr/include",
                         "-Iexternal/cosysroot_rpi3b/usr/include/cdk",
                         "-std=c11"],
              ":wrlinux": ["-Iexternal/cosysroot_wrlinux/usr/include",
                           "-Iexternal/cosysroot_wrlinux/usr/local/include",
                           "-Iexternal/cosysroot_wrlinux/usr/local/include/cdk",
                           "-std=c11"],
              ":ndk": ["-Iexternal/cosysroot_ndk/usr/include",
                       "-Iexternal/cosysroot_ndk/usr/local/include",
                       "-Iexternal/cosysroot_ndk/usr/local/include/cdk",
                       "-std=c11"],
              "//conditions:default": ["-Iexternal/usr_local/include",
                                       "-Iexternal/usr_local/include/cdk"]}),
    deps = [":hello-greet",
            "//src/lib:hello-time"]
    + select({":rpi3b": ["@cosysroot_rpi3b//:cdk"],
              ":ndk": ["@cosysroot_ndk//:cdk"],
              ":wrlinux": ["@cosysroot_wrlinux//:cdk"],
              "//conditions:default": ["@usr_local//:cdk"]}),
    srcs = ["hello-world.c"],
)
