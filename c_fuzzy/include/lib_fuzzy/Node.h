/*
 * c_fuzzy,
 *
 *
 * Copyright (C) 2013 Davide Tateo
 * Versione 1.0
 *
 * This file is part of c_fuzzy.
 *
 * c_fuzzy is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * c_fuzzy is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with c_fuzzy.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef NODE_H_
#define NODE_H_

#include <string>
#include <utility>
#include <stdexcept>

#include "ReasoningData.h"
#include "Variable.h"

/**
 * Base abstract class Node
 * Used to organize computation in trees
 *
 */
class Node
{
public:
	virtual double evaluate(ReasoningData reasoningData)
	{
		return throwUnimplementedException();
	}

	virtual inline int evaluateInt(ReasoningData reasoningData)
	{
		return (int) evaluate(reasoningData);
	}

	virtual Node* instantiate(Variable variable)
	{
		throwUnimplementedException();
		return NULL;
	}

	virtual ~Node()
	{
	}

protected:
	int throwUnimplementedException()
	{
		throw std::logic_error("Unimplemented method");
	}

};

#endif /* NODE_H_ */
