#ifndef INIT_SEC_H
#define INIT_SEC_H

#include <string.h>

enum device_variant {
    VARIANT_A528N = 0,
    VARIANT_A528B,
    VARIANT_M526BR,
    VARIANT_M526B,
    VARIANT_MAX
};

typedef struct {
    std::string model;
    std::string codename;
} variant;

static const variant international_models = {
    .model = "SM-A528N",
    .codename = "a52xq"
};

static const variant international_models_m52 = {
    .model = "SM-M526BR",
    .codename = "m52xq"
};

static const variant america_models = {
    .model = "SM-A528B",
    .codename = "a52sxq"
};

static const variant america_models_m52 = {
    .model = "SM-M526B",
    .codename = "m52xq"
};

static const variant *all_variants[VARIANT_MAX] = {
    &international_models,
    &international_models_m52,
    &america_models,
    &america_models_m52
};

#endif // INIT_SEC_H

