package(default_visibility = ["//visibility:public"])

cc_library(
    name = "types-cxx",
    srcs = [
        "types.h",
        "Element.h",
        "Int.h",
        "Double.h",
        "String.h",
    ],
    copts = [
        "-Iheron",
        "-Iheron/api/src/cpp",
        "-I$(GENDIR)/heron",
        "-I$(GENDIR)/heron/api/src/cpp",
    ],
    deps = [
        "//third_party/cereal:cereal-cxx",
    ],
    linkstatic = 1,
)
