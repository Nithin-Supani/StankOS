#include <iostream>
#include "bootloader.hpp"

namespace stankos::bootloader {
    BootState run() {
        std::cout << "[BOOT] Starting boot sequence...\n";
        std::cout << "[BOOT] Loading config...\n";
        std::cout << "[BOOT] Verifying system...\n";

        // For now, always succeed
        std::cout << "[BOOT] Boot successful ✅\n";
        return BootState::OK;
    }
}