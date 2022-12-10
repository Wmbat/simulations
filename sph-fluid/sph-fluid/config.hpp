#pragma once

#include <string_view>

#include <tl/expected.hpp>

struct config
{

};

auto parse_config(std::string_view json_config) -> tl::expected<config, int>;
