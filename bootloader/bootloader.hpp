#pragma once

namespace stankos::bootloader {
    enum class BootState {
        INIT,
        LOAD_CONFIG,
        VERIFY,
        OK,
        FAIL
    };

    BootState run();

}