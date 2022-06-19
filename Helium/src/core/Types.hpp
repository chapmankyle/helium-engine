// file      : Helium/core/Types.hpp
// copyright : Copyright (c) 2022-present, Kyle Chapman
// license   : GPL-3.0; see accompanying LICENSE file

#pragma once

#ifndef CORE_TYPES_HPP
#define CORE_TYPES_HPP

#include <memory>

namespace Helium {

	/* @brief Reference type. */
	template<typename T>
	using Ref = std::shared_ptr<T>;

} // namespace Helium

#endif // CORE_TYPES_HPP
