#include <libcommon/common.hpp>

#include <range/v3/range/conversion.hpp>
#include <range/v3/view/span.hpp>
#include <range/v3/view/tail.hpp>

#include <string_view>

auto main(int argc, char** argv) -> int
{
    // clang-format off

	auto const args = ranges::span{argv, argc}
		| ranges::views::tail
		| ranges::to<std::vector<std::string_view>>;

    // clang-format on
	
	com_main(args);

	return 0;
}
