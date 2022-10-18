#pragma once
#include "message_queue.h"
#include "sender.h"
#include "dispatcher.h"


namespace messaging
{
	class receiver
	{
		queue q;

	public:
		operator sender()
		{
			return sender(&q);
		}

		dispatcher wait()
		{
			return dispatcher(&q);
		}

	};
}

