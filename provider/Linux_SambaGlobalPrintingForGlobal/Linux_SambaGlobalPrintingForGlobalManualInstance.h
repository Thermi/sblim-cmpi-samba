// =======================================================================
// Linux_SambaGlobalPrintingForGlobalManualInstance.h
//     created on Fri, 23 Jun 2006 using ECUTE 2.2.1
//
// Copyright (c) 2006, International Business Machines
//
// THIS FILE IS PROVIDED UNDER THE TERMS OF THE COMMON PUBLIC LICENSE
// ("AGREEMENT"). ANY USE, REPRODUCTION OR DISTRIBUTION OF THIS FILE
// CONSTITUTES RECIPIENTS ACCEPTANCE OF THE AGREEMENT.
//
// You can obtain a current copy of the Common Public License from
// http://oss.software.ibm.com/developerworks/opensource/license-cpl.html
//
// Author:        generated
//
// Contributors:
//                Wolfgang Taphorn   <taphorn@de.ibm.com>
//                Mukunda Chowdaiah  <cmukunda@in.ibm.com>
//                Ashoka S Rao       <ashoka.rao@in.ibm.com>
//                Rodrigo Ceron      <rceron@br.ibm.com>
//
// =======================================================================
#ifndef Linux_SambaGlobalPrintingForGlobalManualInstance_h
#define Linux_SambaGlobalPrintingForGlobalManualInstance_h


#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaGlobalPrintingForGlobalInstanceName.h"


namespace genProvider {

  class Linux_SambaGlobalPrintingForGlobalManualInstance {
       
    private:
    void init();
    void init(const Linux_SambaGlobalPrintingForGlobalManualInstance& anInstance);
    void reset();
       
    Linux_SambaGlobalPrintingForGlobalInstanceName m_instanceName;
       
    struct isSetType{
      unsigned int instanceName:1;

    } isSet;
    
    public:
    Linux_SambaGlobalPrintingForGlobalManualInstance();
    Linux_SambaGlobalPrintingForGlobalManualInstance(
      const Linux_SambaGlobalPrintingForGlobalManualInstance& anInstance);
    Linux_SambaGlobalPrintingForGlobalManualInstance(
      const CmpiInstance& aCmpiInstance, 
      const char* anInstanceNamespaceP);
    ~Linux_SambaGlobalPrintingForGlobalManualInstance();
       
    Linux_SambaGlobalPrintingForGlobalManualInstance& operator=(
      const Linux_SambaGlobalPrintingForGlobalManualInstance& anInstance);
       
    CmpiInstance getCmpiInstance(const char** aPropertiesPP = 0) const;
    unsigned int isInstanceNameSet() const;
    void setInstanceName(const Linux_SambaGlobalPrintingForGlobalInstanceName& anInstanceName);        
    const Linux_SambaGlobalPrintingForGlobalInstanceName& getInstanceName() const;


  };
  
  struct Linux_SambaGlobalPrintingForGlobalManualInstanceEnumerationElement {

    Linux_SambaGlobalPrintingForGlobalManualInstance* m_elementP;
    Linux_SambaGlobalPrintingForGlobalManualInstanceEnumerationElement* m_nextP;

    Linux_SambaGlobalPrintingForGlobalManualInstanceEnumerationElement();
    ~Linux_SambaGlobalPrintingForGlobalManualInstanceEnumerationElement();  

  };
  

  class Linux_SambaGlobalPrintingForGlobalManualInstanceEnumeration {

    private:
    Linux_SambaGlobalPrintingForGlobalManualInstanceEnumerationElement* m_firstElementP;
    Linux_SambaGlobalPrintingForGlobalManualInstanceEnumerationElement* m_currentElementP;
    Linux_SambaGlobalPrintingForGlobalManualInstanceEnumerationElement* m_endElementP;

    public:
    Linux_SambaGlobalPrintingForGlobalManualInstanceEnumeration();
    Linux_SambaGlobalPrintingForGlobalManualInstanceEnumeration(
      const Linux_SambaGlobalPrintingForGlobalManualInstanceEnumeration& anInstanceEnumeration);
    ~Linux_SambaGlobalPrintingForGlobalManualInstanceEnumeration();

    void reset();
    bool hasNext() const;
    const Linux_SambaGlobalPrintingForGlobalManualInstance& getNext();
    int getSize() const;
    const Linux_SambaGlobalPrintingForGlobalManualInstance& getElement(int anIndex) const;  	  
    void addElement(const Linux_SambaGlobalPrintingForGlobalManualInstance& anInstance);

  };

}

#endif
