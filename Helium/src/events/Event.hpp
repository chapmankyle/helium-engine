// file      : Helium/src/events/Event.hpp
// copyright : Copyright (c) 2022-present, Kyle Chapman
// license   : GPL-3.0; see accompanying LICENSE file

#pragma once

#ifndef Z_EVENTS_EVENT_HPP
#define Z_EVENTS_EVENT_HPP

#include <functional>

namespace Helium {

	namespace Events {

		/* @brief Types of events that can occur. */
		enum class Type {
			None = 0,
			WindowClose, WindowResize, WindowFocus, WindowFocusLost, WindowMoved,
			Tick, Update, Render,
			KeyPressed, KeyReleased, KeyTyped,
			MouseButtonPressed, MouseButtonReleased, MouseMoved, MouseScrolled
		};

		/* @brief Categories that the event can belong to. */
		enum Category {
			None = 0,
			Application = (1 << 0),
			Input       = (1 << 1),
			Keyboard    = (1 << 2),
			Mouse       = (1 << 3),
			MouseButton = (1 << 4)
		};

	} // namespace Events


#define EVENT_CLASS_TYPE(type) static Events::Type GetStaticType() { return Events::Type::type }\
																	virtual Events::Type GetEventType() const override { return GetStaticType(); }\
																	virtual std::string GetName() const override { return #type; }

#define EVENT_CLASS_CATEGORY(category) virtual int GetCategoryFlags() const override { return category; }


	/* @brief Manages a single event. */
	class Event {

	public:

		/* Destructor that should be implemented by the subclass. */
		virtual ~Event() = default;

		/* @brief `true` when this event has been handled, `false` otherwise. */
		bool handled = false;

		/* @returns Type of this event. */
		virtual Events::Type GetEventType() const = 0;

		/* @returns Name of this event. */
		virtual std::string GetName() const = 0;

		/* @returns Category flags for this event. */
		virtual int GetCategoryFlags() const = 0;

		/* @returns Event as a string. */
		virtual std::string ToString() const {
			return GetName();
		}

		/* @returns `true` if this event is in the given category, `false` otherwise. */
		bool IsInCategory(Events::Category category) {
			return GetCategoryFlags() & category;
		}

	};

	/* @brief Dispatches an event. */
	class EventDispatcher {

	public:

		/* @brief Constructor for the event dispatcher. */
		EventDispatcher(Event& evt)
			: m_event(evt)
		{ }

		/* @brief Dispatches the event. */
		template<typename T, typename F>
		bool Dispatch(const F& func) {
			if (m_event.GetEventType() == T::GetStaticType()) {
				m_event.handled |= func(static_cast<T&>(m_event));
				return true;
			}

			return false;
		}

	private:

		/* @brief Event that should be dispatched. */
		Event& m_event;

	};

	inline std::ostream& operator<<(std::ostream& os, const Event& evt) {
		return os << evt.ToString();
	}

} // namespace Helium

#endif // Z_EVENTS_EVENT_HPP
