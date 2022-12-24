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

#pragma once

#include <libcommon/window/window.hpp>

#include <cstdint>
#include <string>
#include <utility>
#include <xcb/xcb.h>

namespace common
{
	window::window(std::string title, std::uint32_t width, std::uint32_t height) :
		m_title(std::move(title)), m_width(width), m_height(height),
		m_x11_connection_ptr(xcb_connect(nullptr, nullptr))
	{}

	auto window::title() const -> std::string_view
	{
		return m_title;
	}

	auto window::width() const -> std::uint32_t
	{
		return m_width;
	}

	auto window::height() const -> std::uint32_t
	{
		return m_height;
	}
} // namespace common
