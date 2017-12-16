/* Net_def.h
 *
 * Copyright (C) 2017 Paul Boersma
 *
 * This code is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or (at
 * your option) any later version.
 *
 * This code is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this work. If not, see <http://www.gnu.org/licenses/>.
 */


#define ooSTRUCT Layer
oo_DEFINE_CLASS (Layer, Daata)

	oo_QUESTION (inputsAreBinary)
	oo_INTEGER (numberOfInputNodes)
	oo_INTEGER (numberOfOutputNodes)
	oo_DOUBLE_MATRIX (weights, numberOfInputNodes, numberOfOutputNodes)
	oo_DOUBLE_VECTOR (inputBiases, numberOfInputNodes)
	oo_DOUBLE_VECTOR (outputBiases, numberOfOutputNodes)

	oo_DOUBLE_VECTOR (inputActivities, numberOfInputNodes)
	oo_DOUBLE_VECTOR (outputActivities, numberOfOutputNodes)
	oo_DOUBLE_VECTOR (inputReconstruction, numberOfInputNodes)
	oo_DOUBLE_VECTOR (outputReconstruction, numberOfOutputNodes)

oo_END_CLASS (Layer)
#undef ooSTRUCT



#define ooSTRUCT Net
oo_DEFINE_CLASS (Net, Daata)

	oo_COLLECTION_OF (OrderedOf, layers, Layer, 0)

oo_END_CLASS (Net)
#undef ooSTRUCT


/* End of file Net_def.h */