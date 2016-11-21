package(default_visibility = ["//visibility:public"])

cc_library(
    name = "serializer-cxx",
    srcs = [
        "IPluggableSerializer.h",
    ],
    copts = [
        "-Iheron",
        "-Iheron/api/src/cpp",
        "-I$(GENDIR)/heron",
        "-I$(GENDIR)/heron/api/src/cpp",
    ],
    deps = [
        "//heron/api/src/cpp/types:types-cxx",
        "//third_party/cereal:cereal-cxx",
    ],
    linkstatic = 1,
)
