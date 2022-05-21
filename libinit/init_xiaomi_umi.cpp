/*
 * Copyright (C) 2021 The LineageOS Project
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include <libinit_dalvik_heap.h>
#include <libinit_variant.h>

#include "vendor_init.h"

static const variant_info_t umi_info = {
    .hwc_value = "",
    .sku_value = "",

    .brand = "Xiaomi",
    .device = "umi",
    .marketname = "",
    .model = "Mi 10",
    .build_fingerprint = "Xiaomi/umi/umi:12/RKQ1.211001.001/V13.0.4.0.SJBCNXM:user/release-keys",

    .nfc = true,
};

void vendor_load_properties() {
    set_variant_props(umi_info);
    set_dalvik_heap();
}
