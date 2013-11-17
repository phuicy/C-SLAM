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

#ifndef FUZZYAGGREGATOR_H_
#define FUZZYAGGREGATOR_H_

#include <map>
#include <string>

/**
 * Helper struct for passing data about fuzzy labels
 */
struct Data
{
	double weight;
	double value;
	int cardinality;
};

typedef std::map<std::string, Data> DataMap;

/**
 * Fuzzy aggregation operator
 * the aggregation operation used is the average
 *
 */
class FuzzyAggregator
{
public:
	void addValue(std::string output, std::string mfLabel, double weight,
			double value);
	std::map<std::string, DataMap> getAggregations();

private:
	DataMap getAggregation(DataMap outputs);
	DataMap createDataMap(std::string mfLabel, double value, double weight);
	Data createData(double value, double weight);

private:
	std::map<std::string, DataMap> aggregationMap;

};

#endif /* FUZZYAGGREGATOR_H_ */
