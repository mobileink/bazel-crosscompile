
cc_toolchain_suite(
    name = "toolchain",
    toolchains = {
        # --cpu | --compiler : <cc_toolchain name>
        "armv8|gcc": "cc-compiler-armv8-rpi3",
    },
)


cc_toolchain(
    name = "cc-compiler-armv8-rpi3",
    all_files = "@toolchain_rpi3b//:everything",
    compiler_files = "@toolchain_rpi3b//:compile",  # "@toolchain_rpi3b//:gcc-armv8-toolchain",
    cpu = "armv8",
    dwp_files = "@toolchain_rpi3b//:empty",
    linker_files = "@toolchain_rpi3b//:link", # gcc-arm-android-4.9-toolchain",
    objcopy_files = "@toolchain_rpi3b//:objcopy",
    dynamic_runtime_libs = ["@toolchain_rpi3b//:link"],
    static_runtime_libs = ["@toolchain_rpi3b//:link"],
    strip_files = "@toolchain_rpi3b//:strip",
    supports_param_files = 1,
    visibility = ["//visibility:public"],
)
