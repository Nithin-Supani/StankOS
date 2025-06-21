#define CATCH_CONFIG_MAIN
#include "catch2/catch.hpp"
#include "bootloader.hpp"

using namespace stankos::bootloader;

TEST_CASE("Bootloader return OK on successful run", "[boot]") {
	BootState result = run();
	REQUIRE(result == BootState::OK);
}