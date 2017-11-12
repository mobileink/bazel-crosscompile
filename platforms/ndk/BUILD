# origin: https://github.com/bazelbuild/bazel/blob/master/src/test/shell/bazel/testdata/bazel_toolchain_test_data/tools/arm_compiler/BUILD.linaro

# This is the entry point for --crosstool_top.  Toolchains are found
# by lopping off the name of --crosstool_top and searching for
# 'cc-compiler-${CPU}' in this BUILD file, where CPU is the target CPU
# specified in --cpu.
#
# selection driven by --crosstool_top, --cpu (= target cpu), --compiler
#
# This file group should include
#   * all cc_toolchain targets supported
#   * all file groups that said cc_toolchain might refer to,
# including the default_grte_top setting in the CROSSTOOL
# protobuf.

cc_toolchain_suite(
    name = "toolchain",
    toolchains = {
        # --cpu | --compiler : <cc_toolchain name>
        "androideabi-4.9|gcc": "cc-compiler-androideabi-4.9",
        "x86|clang3.8": "android-x86-clang",
        "k8|compiler": "cc-compiler-k8",

        "arm64-v8a|gcc": "aarch64-linux-android-gcc",
        # "arm64-v8a | clang3.8": ":aarch64-linux-android-clang3.8-gnu-libstdcpp",

      # "armeabi|clang3.8": ":arm-linux-androideabi-clang3.8-gnu-libstdcpp",
      # "armeabi-v7a|clang3.8": ":arm-linux-androideabi-clang3.8-v7a-gnu-libstdcpp",
      # "mips64|clang3.8": ":mips64el-linux-android-clang3.8-gnu-libstdcpp",
      # "mips|clang3.8": ":mipsel-linux-android-clang3.8-gnu-libstdcpp",
      # "x86|clang3.8": ":x86-clang3.8-gnu-libstdcpp",
      # "x86_64|clang3.8": ":x86_64-clang3.8-gnu-libstdcpp",

    },
)

filegroup(
    name = "everything",
    srcs = [],
)

filegroup(
    name = "empty",
    srcs = [],
)

cc_toolchain(
    name = "cc-compiler-androideabi-4.9",
    all_files = ":empty", # "@toolchain_ndk//:everything", # :android-armeabi-v7a-files",
    compiler_files = ":empty", # "@toolchain_ndk//:everything", #gcc-arm-android-4.9-toolchain",
    cpu = "", # "androideabi-4.9",
    dwp_files = ":empty",
    linker_files = ":empty", # "@toolchain_ndk//:link", # gcc-arm-android-4.9-toolchain",
    objcopy_files = ":empty", # "@toolchain_ndk//:objcopy",
    dynamic_runtime_libs = [":empty"], # "@toolchain_ndk//:link"],
    static_runtime_libs = [":empty"], # "@toolchain_ndk//:link"],
    strip_files = ":empty", # "@toolchain_ndk//:strip",
    supports_param_files = 1,
    visibility = ["//visibility:public"],
)

cc_toolchain(
    name = "android-x86-clang",
    all_files = "@toolchain_ndk//:everything-clang",
    compiler_files = "@toolchain_ndk//:everything-clang",
    cpu = "x86",
    dwp_files = ":empty",
    linker_files = "@toolchain_ndk//:everything-clang",
    static_runtime_libs = ["@toolchain_ndk//:arch-x86-static-runtime-libs"],
    dynamic_runtime_libs = ["@toolchain_ndk//:arch-x86-dynamic-runtime-libs"],
    objcopy_files = "@toolchain_ndk//:objcopy-clang",
    strip_files = "@toolchain_ndk//:strip-clang",
    supports_param_files = 1,
    visibility = ["//visibility:public"],
)

cc_toolchain(
    name = "aarch64-linux-android-gcc",
    cpu = "arm64-v8a",
    all_files = "@toolchain_ndk//:aarch64-linux-android-gcc-all_files",
    compiler_files = "@toolchain_ndk//:aarch64-linux-android-gcc-all_files",
    linker_files = "@toolchain_ndk//:aarch64-linux-android-gcc-all_files",
    dwp_files = "@toolchain_ndk//:aarch64-linux-android-gcc-toolchain_files",
    static_runtime_libs = ["@toolchain_ndk//:libcpp-arm64-v8a-static-runtime-libraries"],
    dynamic_runtime_libs = ["@toolchain_ndk//:libcpp-arm64-v8a-dynamic-runtime-libraries"],
    objcopy_files = "@toolchain_ndk//:aarch64-linux-android-gcc-toolchain_files",
    strip_files = "@toolchain_ndk//:aarch64-linux-android-gcc-toolchain_files",
    supports_param_files = 0,
    visibility = ["//visibility:public"],
)
