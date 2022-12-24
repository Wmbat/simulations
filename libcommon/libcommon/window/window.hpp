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

#include <xcb/xcb.h>

#include <memory>
#include <cstdint>
#include <string>

namespace common
{
	struct window
	{
	public:
		/*
		 * @brief
		 *
		 * @param[in] title The name of the window
		 * @param[in] width The starting width of the window
		 * @param[in] height The starting height of the window
		 */
		window(std::string title, std::uint32_t width, std::uint32_t height);

		/*
		 * @brief Get the current window title
		 */
		[[nodiscard]] auto title() const -> std::string_view;
		/*
		 * @brief Get the current window width
		 */
		[[nodiscard]] auto width() const -> std::uint32_t;
		/*
		 * @brief Get the current window height
		 */
		[[nodiscard]] auto height() const -> std::uint32_t;

	private:
		std::string m_title = {};
		std::uint32_t m_width = 0u;
		std::uint32_t m_height = 0u;

		xcb_connection_t* m_x11_connection_ptr;
		xcb_window_t m_window;
	};
} // namespace common
