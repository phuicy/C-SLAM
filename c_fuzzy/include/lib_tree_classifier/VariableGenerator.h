/*
 * c_fuzzy,
 *
 *
 * Copyright (C) 2014 Davide Tateo
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

#ifndef VARIABLEGENERATOR_H_
#define VARIABLEGENERATOR_H_

#include <map>
#include <string>
#include "Variable.h"
#include "ClassificationData.h"


class VariableGenerator
{
private:
	struct MatchVar
	{
		MatchVar()
		{
		}

		MatchVar(Variable var, Variable target) :
					var(var), target(target)
		{
		}
		Variable var;
		Variable target;
	};

	struct OnVar
	{
		OnVar()
		{
		}

		OnVar(Variable var, Variable min, Variable max) :
					var(var), min(min), max(max)
		{
		}
		Variable min;
		Variable max;
		Variable var;
	};

	struct InverseVar
	{
		InverseVar()
		{
		}

		InverseVar(Variable min, Variable max, Variable target) :
					min(min), max(max), target(target)
		{
		}
		Variable min;
		Variable max;
		Variable target;
	};

	typedef std::map<std::string, MatchVar> MatchVarMap;
	typedef std::map<std::string, OnVar> OnVarMap;
	typedef std::map<std::string, InverseVar> InverseVarMap;

public:
	VariableGenerator();
	std::string addMatchVariable(Variable var, Variable target);
	std::string addOnVariable(Variable var, Variable min, Variable max);
	std::string addInverseOnVariable(Variable min, Variable max,
				Variable target);

	ObjectProperties getGeneratedProperties(ObjectMap& candidates, ObjectMap& dependencies);

private:
	void generateMatches(ObjectProperties& generated);
	void generateOns(ObjectProperties& generated);
	void generateInverses(ObjectProperties& generated);
	int getValue(ObjectMap& inputs, Variable var);
	int getValue(Variable var);
	int getDepValue(Variable var);
	ObjectMap* findObject();
	std::string getNewVar();
private:
	MatchVarMap matchVars;
	OnVarMap onVars;
	InverseVarMap inverseVars;
	size_t varCounter;

	//Helper members
	ObjectMap* currentCandidates;
	ObjectMap* currentDependecies;

};

typedef std::map<std::string, VariableGenerator*> GeneratedVarTable;

#endif /* VARIABLEGENERATOR_H_ */
