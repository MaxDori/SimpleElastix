/*=========================================================================
*
*  Copyright Insight Software Consortium
*
*  Licensed under the Apache License, Version 2.0 (the "License");
*  you may not use this file except in compliance with the License.
*  You may obtain a copy of the License at
*
*         http://www.apache.org/licenses/LICENSE-2.0.txt
*
*  Unless required by applicable law or agreed to in writing, software
*  distributed under the License is distributed on an "AS IS" BASIS,
*  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
*  See the License for the specific language governing permissions and
*  limitations under the License.
*
*=========================================================================*/
#define  SITK_TEMPLATE_EXPLICIT_EXPLICITITK
#include "sitkExplicitITK.h"

template class itk::DefaultVectorPixelAccessor<int>; //Instantiated 75 times
template class itk::DefaultVectorPixelAccessor<signed char>; //Instantiated 75 times
template class itk::DefaultVectorPixelAccessor<unsigned char>; //Instantiated 76 times
template class itk::DefaultVectorPixelAccessor<unsigned long>; //Instantiated 74 times
template class itk::DefaultVectorPixelAccessor<unsigned long long>; //Instantiated 74 times
template class itk::DefaultVectorPixelAccessor<float>; //Instantiated 78 times
template class itk::DefaultVectorPixelAccessor<unsigned short>; //Instantiated 74 times
template class itk::DefaultVectorPixelAccessor<unsigned int>; //Instantiated 74 times
template class itk::DefaultVectorPixelAccessor<short>; //Instantiated 75 times
template class itk::DefaultVectorPixelAccessor<long>; //Instantiated 74 times
template class itk::DefaultVectorPixelAccessor<long long>; //Instantiated 74 times
template class itk::DefaultVectorPixelAccessor<double>; //Instantiated 77 times
