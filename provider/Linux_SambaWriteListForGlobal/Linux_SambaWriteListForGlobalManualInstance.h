// =======================================================================
// Linux_SambaWriteListForGlobalManualInstance.h
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
#ifndef Linux_SambaWriteListForGlobalManualInstance_h
#define Linux_SambaWriteListForGlobalManualInstance_h


#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaWriteListForGlobalInstanceName.h"


namespace genProvider {

  class Linux_SambaWriteListForGlobalManualInstance {
       
    private:
    void init();
    void init(const Linux_SambaWriteListForGlobalManualInstance& anInstance);
    void reset();
       
    Linux_SambaWriteListForGlobalInstanceName m_instanceName;
       
    struct isSetType{
      unsigned int instanceName:1;

    } isSet;
    
    public:
    Linux_SambaWriteListForGlobalManualInstance();
    Linux_SambaWriteListForGlobalManualInstance(
      const Linux_SambaWriteListForGlobalManualInstance& anInstance);
    Linux_SambaWriteListForGlobalManualInstance(
      const CmpiInstance& aCmpiInstance, 
      const char* anInstanceNamespaceP);
    ~Linux_SambaWriteListForGlobalManualInstance();
       
    Linux_SambaWriteListForGlobalManualInstance& operator=(
      const Linux_SambaWriteListForGlobalManualInstance& anInstance);
       
    CmpiInstance getCmpiInstance(const char** aPropertiesPP = 0) const;
    unsigned int isInstanceNameSet() const;
    void setInstanceName(const Linux_SambaWriteListForGlobalInstanceName& anInstanceName);        
    const Linux_SambaWriteListForGlobalInstanceName& getInstanceName() const;


  };
  
  struct Linux_SambaWriteListForGlobalManualInstanceEnumerationElement {

    Linux_SambaWriteListForGlobalManualInstance* m_elementP;
    Linux_SambaWriteListForGlobalManualInstanceEnumerationElement* m_nextP;

    Linux_SambaWriteListForGlobalManualInstanceEnumerationElement();
    ~Linux_SambaWriteListForGlobalManualInstanceEnumerationElement();  

  };
  

  class Linux_SambaWriteListForGlobalManualInstanceEnumeration {

    private:
    Linux_SambaWriteListForGlobalManualInstanceEnumerationElement* m_firstElementP;
    Linux_SambaWriteListForGlobalManualInstanceEnumerationElement* m_currentElementP;
    Linux_SambaWriteListForGlobalManualInstanceEnumerationElement* m_endElementP;

    public:
    Linux_SambaWriteListForGlobalManualInstanceEnumeration();
    Linux_SambaWriteListForGlobalManualInstanceEnumeration(
      const Linux_SambaWriteListForGlobalManualInstanceEnumeration& anInstanceEnumeration);
    ~Linux_SambaWriteListForGlobalManualInstanceEnumeration();

    void reset();
    bool hasNext() const;
    const Linux_SambaWriteListForGlobalManualInstance& getNext();
    int getSize() const;
    const Linux_SambaWriteListForGlobalManualInstance& getElement(int anIndex) const;  	  
    void addElement(const Linux_SambaWriteListForGlobalManualInstance& anInstance);

  };

}

#endif
