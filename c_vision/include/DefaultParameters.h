/*
 * c_vision,
 *
 *
 * Copyright (C) 2013 Davide Tateo
 * Versione 1.0
 *
 * This file is part of c_vision.
 *
 * c_vision is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * c_vision is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with c_vision.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef DEFAULTPARAMETERS_H_
#define DEFAULTPARAMETERS_H_

static struct FeatureParam
{
	static const int threshold = 30;
	static const int windowSize = 40;
	static const int clusterMinSize = 40;
	static const int noiseBarrier = 40;
	static const int objectWindow = 100;
	static const int objectMinSize = 300;
} cornerP;

static struct DBScanParam
{
	static const int minPoints = 4;
	static const double maxDistance = 15;
} clusterP;

static struct LineParam
{
	static const double maxDelta = 25.0;
} lineP;

static struct CannyParam
{
	static const int minCanny = 80;
	static const int maxCanny = 200;
	static const int apertureSize = 3;
} cannyP;

static struct HougParam
{
	static const int rho = 1;
	static const double teta = CV_PI / 180;
	static const int threshold = 90;
	static const int minLineLenght = 120;
	static const int maxLineGap = 30;
} houghP;

#endif /* DEFAULTPARAMETERS_H_ */
