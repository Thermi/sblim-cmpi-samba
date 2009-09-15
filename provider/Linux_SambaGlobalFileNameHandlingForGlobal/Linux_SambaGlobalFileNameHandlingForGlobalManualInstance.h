// =======================================================================
// Linux_SambaGlobalFileNameHandlingForGlobalManualInstance.h
//     created on Fri, 23 Jun 2006 using ECUTE 2.2.1
//
// Copyright (c) 2006, 2009, International Business Machines
//
// THIS FILE IS PROVIDED UNDER THE TERMS OF THE ECLIPSE PUBLIC LICENSE
// ("AGREEMENT"). ANY USE, REPRODUCTION OR DISTRIBUTION OF THIS FILE
// CONSTITUTES RECIPIENTS ACCEPTANCE OF THE AGREEMENT.
//
// You can obtain a current copy of the Eclipse Public License from
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
#ifndef Linux_SambaGlobalFileNameHandlingForGlobalManualInstance_h
#define Linux_SambaGlobalFileNameHandlingForGlobalManualInstance_h


#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaGlobalFileNameHandlingForGlobalInstanceName.h"


namespace genProvider {

  class Linux_SambaGlobalFileNameHandlingForGlobalManualInstance {
       
    private:
    void init();
    void init(const Linux_SambaGlobalFileNameHandlingForGlobalManualInstance& anInstance);
    void reset();
       
    Linux_SambaGlobalFileNameHandlingForGlobalInstanceName m_instanceName;
       
    struct isSetType{
      unsigned int instanceName:1;

    } isSet;
    
    public:
    Linux_SambaGlobalFileNameHandlingForGlobalManualInstance();
    Linux_SambaGlobalFileNameHandlingForGlobalManualInstance(
      const Linux_SambaGlobalFileNameHandlingForGlobalManualInstance& anInstance);
    Linux_SambaGlobalFileNameHandlingForGlobalManualInstance(
      const CmpiInstance& aCmpiInstance, 
      const char* anInstanceNamespaceP);
    ~Linux_SambaGlobalFileNameHandlingForGlobalManualInstance();
       
    Linux_SambaGlobalFileNameHandlingForGlobalManualInstance& operator=(
      const Linux_SambaGlobalFileNameHandlingForGlobalManualInstance& anInstance);
       
    CmpiInstance getCmpiInstance(const char** aPropertiesPP = 0) const;
    unsigned int isInstanceNameSet() const;
    void setInstanceName(const Linux_SambaGlobalFileNameHandlingForGlobalInstanceName& anInstanceName);        
    const Linux_SambaGlobalFileNameHandlingForGlobalInstanceName& getInstanceName() const;


  };
  
  struct Linux_SambaGlobalFileNameHandlingForGlobalManualInstanceEnumerationElement {

    Linux_SambaGlobalFileNameHandlingForGlobalManualInstance* m_elementP;
    Linux_SambaGlobalFileNameHandlingForGlobalManualInstanceEnumerationElement* m_nextP;

    Linux_SambaGlobalFileNameHandlingForGlobalManualInstanceEnumerationElement();
    ~Linux_SambaGlobalFileNameHandlingForGlobalManualInstanceEnumerationElement();  

  };
  

  class Linux_SambaGlobalFileNameHandlingForGlobalManualInstanceEnumeration {

    private:
    Linux_SambaGlobalFileNameHandlingForGlobalManualInstanceEnumerationElement* m_firstElementP;
    Linux_SambaGlobalFileNameHandlingForGlobalManualInstanceEnumerationElement* m_currentElementP;
    Linux_SambaGlobalFileNameHandlingForGlobalManualInstanceEnumerationElement* m_endElementP;

    public:
    Linux_SambaGlobalFileNameHandlingForGlobalManualInstanceEnumeration();
    Linux_SambaGlobalFileNameHandlingForGlobalManualInstanceEnumeration(
      const Linux_SambaGlobalFileNameHandlingForGlobalManualInstanceEnumeration& anInstanceEnumeration);
    ~Linux_SambaGlobalFileNameHandlingForGlobalManualInstanceEnumeration();

    void reset();
    bool hasNext() const;
    const Linux_SambaGlobalFileNameHandlingForGlobalManualInstance& getNext();
    int getSize() const;
    const Linux_SambaGlobalFileNameHandlingForGlobalManualInstance& getElement(int anIndex) const;  	  
    void addElement(const Linux_SambaGlobalFileNameHandlingForGlobalManualInstance& anInstance);

  };

}

#endif
