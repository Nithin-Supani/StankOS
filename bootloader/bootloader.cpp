#include <iostream>
#include "bootloader.hpp"

namespace stankos::bootloader {
    BootState run(bool simulateFailure) {
        std::cout << "[BOOT] Starting boot sequence...\n";

        if (simulateFailure){
            std::cout << "[BOOT] Simulated failure ❌\n";
            return BootState::FAIL;
        }

        std::cout << "[BOOT] Loading config...\n";
        std::cout << "[BOOT] Verifying system...\n";
        std::cout << "[BOOT] Boot successful ✅\n";
        
        return BootState::OK;
    }
}