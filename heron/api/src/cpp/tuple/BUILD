package(default_visibility = ["//visibility:public"])

cc_library(
    name = "tuple-cxx",
    srcs = [
        "Fields.h",
        "Fields.cpp",
        "Tuple.h",
        "Tuple.cpp",
    ],
    copts = [
        "-Iheron",
        "-Iheron/api/src/cpp",
        "-I$(GENDIR)/heron",
        "-I$(GENDIR)/heron/api/src/cpp",
    ],
    deps = [
        "//heron/api/src/cpp/types:types-cxx",
        "//heron/api/src/cpp/serializer:serializer-cxx",
    ],
    linkstatic = 1,
)
