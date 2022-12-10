#include <filesystem>
#include <fstream>

#include <libcommon/common.hpp>
#include <sph-fluid/config.hpp>
#include <sph-fluid/sim.hpp>

void com_main(std::span<std::string_view const> args)
{
    if (std::empty(args))
    {
        // We have an error
        //
    }

    // Read file
    auto filepath = std::filesystem::path{args[0]};
    auto file_data = std::fstream{filepath};

    if (!file_data.is_open())
    {
		
	}

	run_simulation(config{});

    /*
    if (auto config = parse_config())
    {
    }
    else
    {
        // We have a parsing error
    }
    */
}
