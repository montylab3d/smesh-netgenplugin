//  NETGENPlugin : idl implementation
//
//  Copyright (C) 2006  OPEN CASCADE, CEA/DEN, EDF R&D
// 
//  This library is free software; you can redistribute it and/or 
//  modify it under the terms of the GNU Lesser General Public 
//  License as published by the Free Software Foundation; either 
//  version 2.1 of the License. 
// 
//  This library is distributed in the hope that it will be useful, 
//  but WITHOUT ANY WARRANTY; without even the implied warranty of 
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU 
//  Lesser General Public License for more details. 
// 
//  You should have received a copy of the GNU Lesser General Public 
//  License along with this library; if not, write to the Free Software 
//  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307 USA 
// 
//  See http://www.opencascade.org/SALOME/ or email : webmaster.salome@opencascade.org 
//
//
//  File   : NETGENPlugin_NETGEN_2D3D_i.cxx
//  Author : Michael Sazonov (OCN)
//  Module : NETGENPlugin
//  $Header$

using namespace std;
#include "NETGENPlugin_NETGEN_2D3D_i.hxx"
#include "SMESH_Gen.hxx"

#include "Utils_CorbaException.hxx"
#include "utilities.h"

//=============================================================================
/*!
 *  NETGENPlugin_NETGEN_2D3D_i::NETGENPlugin_NETGEN_2D3D_i
 *
 *  Constructor
 */
//=============================================================================

NETGENPlugin_NETGEN_2D3D_i::NETGENPlugin_NETGEN_2D3D_i( PortableServer::POA_ptr thePOA,
                                                        int                     theStudyId,
                                                        ::SMESH_Gen*            theGenImpl )
     : SALOME::GenericObj_i( thePOA ), 
       SMESH_Hypothesis_i( thePOA ), 
       SMESH_Algo_i( thePOA ),
       SMESH_3D_Algo_i( thePOA )
{
  MESSAGE( "NETGENPlugin_NETGEN_2D3D_i::NETGENPlugin_NETGEN_2D3D_i" );
  myBaseImpl = new ::NETGENPlugin_NETGEN_2D3D( theGenImpl->GetANewId(),
                                               theStudyId,
                                               theGenImpl );
}

//=============================================================================
/*!
 *  NETGENPlugin_NETGEN_2D3D_i::~NETGENPlugin_NETGEN_2D3D_i
 *
 *  Destructor
 */
//=============================================================================

NETGENPlugin_NETGEN_2D3D_i::~NETGENPlugin_NETGEN_2D3D_i()
{
  MESSAGE( "NETGENPlugin_NETGEN_2D3D_i::~NETGENPlugin_NETGEN_2D3D_i" );
}

//=============================================================================
/*!
 *  NETGENPlugin_NETGEN_2D3D_i::GetImpl
 *
 *  Get implementation
 */
//=============================================================================

::NETGENPlugin_NETGEN_2D3D* NETGENPlugin_NETGEN_2D3D_i::GetImpl()
{
  MESSAGE( "NETGENPlugin_NETGEN_2D3D_i::GetImpl" );
  return ( ::NETGENPlugin_NETGEN_2D3D* )myBaseImpl;
}
