/*
 * Copyright (C) 2015 iCub Facility - Istituto Italiano di Tecnologia
 * Author:  Marco Accame
 * email:   marco.accame@iit.it
 * website: www.robotcub.org
 * Permission is granted to copy, distribute, and/or modify this program
 * under the terms of the GNU General Public License, version 2 or any
 * later version published by the Free Software Foundation.
 *
 * A copy of the license can be found at
 * http://www.robotcub.org/icub/license/gpl.txt
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General
 * Public License for more details
*/


// - include guard ----------------------------------------------------------------------------------------------------

#ifndef _EOTHEInertial_HID_H_
#define _EOTHEInertial_HID_H_




// - external dependencies --------------------------------------------------------------------------------------------

#include "EoCommon.h"
#include "EOtheCANprotocol.h"
#include "EOvector.h"


// - declaration of extern public interface ---------------------------------------------------------------------------

#include "EOtheInertial.h"


// - definition of the hidden struct implementing the object ----------------------------------------------------------



struct EOtheInertial_hid
{
    eObool_t                        initted;
    eObool_t                        configured;
    eObool_t                        thereisinertial;
    uint8_t                         protindex;
    eObool_t                        istransmitting;
    eOas_inertial_sensorsconfig_t   sensorsconfig;
    eOcanprot_command_t             command;
    eOas_inertial_serviceconfig_t   serviceconfig;
    uint64_t                        supportedmask64;
    eOas_inertial_t                 *inertial2;
    EOvector                        *fifo;
}; 


// - declaration of extern hidden functions ---------------------------------------------------------------------------
// empty section


#endif  // include guard

// - end-of-file (leave a blank line after)----------------------------------------------------------------------------



