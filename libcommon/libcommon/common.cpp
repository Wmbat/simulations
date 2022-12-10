/*
 * Copyright 2022 Wmbat
 * 
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

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
