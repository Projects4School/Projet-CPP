//
//  config.h
//  ExamCPP
//
//  Created by Gaspar Musitelli on 15/06/2023.
//

#include <iostream>

#ifndef config_h
#define config_h

#ifndef TRACE
#define TRACE

#define TRACE_START() std::cout << "Entering " << __func__ << " at " << this << std::endl
#define TRACE_END() std::cout << "Leaving " << __func__ << " at " << this << std::endl

#endif

#endif /* config_h */
