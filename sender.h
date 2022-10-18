#pragma once
#include "message_queue.h"

//using queue = std::queue<std::shared_ptr<messaging::message_base> >;

namespace messaging
{
	class sender
	{
		queue* q;

	public:
		sender() : q(nullptr) {}

		explicit sender(queue* q_): q(q_) {}

		template<typename Message>
		void send(Message const& msg)
		{
			if (q) q->push(msg);
		}
	};
}

