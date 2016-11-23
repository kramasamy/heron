package(default_visibility = ["//visibility:public"])

cc_library(
    name = "bolt-cxx",
    srcs = [
        "IBolt.h",
    ],
    copts = [
        "-Iheron",
        "-Iheron/api/src/cpp",
        "-I$(GENDIR)/heron",
        "-I$(GENDIR)/heron/api/src/cpp",
    ],
    deps = [
        "//heron/api/src/cpp/types:types-cxx",
        "//heron/api/src/cpp/tuple:tuple-cxx",
    ],
    linkstatic = 1,
)
