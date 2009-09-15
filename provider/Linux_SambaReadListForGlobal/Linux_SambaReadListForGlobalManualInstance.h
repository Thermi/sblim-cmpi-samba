// =======================================================================
// Linux_SambaReadListForGlobalManualInstance.h
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
#ifndef Linux_SambaReadListForGlobalManualInstance_h
#define Linux_SambaReadListForGlobalManualInstance_h


#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaReadListForGlobalInstanceName.h"


namespace genProvider {

  class Linux_SambaReadListForGlobalManualInstance {
       
    private:
    void init();
    void init(const Linux_SambaReadListForGlobalManualInstance& anInstance);
    void reset();
       
    Linux_SambaReadListForGlobalInstanceName m_instanceName;
       
    struct isSetType{
      unsigned int instanceName:1;

    } isSet;
    
    public:
    Linux_SambaReadListForGlobalManualInstance();
    Linux_SambaReadListForGlobalManualInstance(
      const Linux_SambaReadListForGlobalManualInstance& anInstance);
    Linux_SambaReadListForGlobalManualInstance(
      const CmpiInstance& aCmpiInstance, 
      const char* anInstanceNamespaceP);
    ~Linux_SambaReadListForGlobalManualInstance();
       
    Linux_SambaReadListForGlobalManualInstance& operator=(
      const Linux_SambaReadListForGlobalManualInstance& anInstance);
       
    CmpiInstance getCmpiInstance(const char** aPropertiesPP = 0) const;
    unsigned int isInstanceNameSet() const;
    void setInstanceName(const Linux_SambaReadListForGlobalInstanceName& anInstanceName);        
    const Linux_SambaReadListForGlobalInstanceName& getInstanceName() const;


  };
  
  struct Linux_SambaReadListForGlobalManualInstanceEnumerationElement {

    Linux_SambaReadListForGlobalManualInstance* m_elementP;
    Linux_SambaReadListForGlobalManualInstanceEnumerationElement* m_nextP;

    Linux_SambaReadListForGlobalManualInstanceEnumerationElement();
    ~Linux_SambaReadListForGlobalManualInstanceEnumerationElement();  

  };
  

  class Linux_SambaReadListForGlobalManualInstanceEnumeration {

    private:
    Linux_SambaReadListForGlobalManualInstanceEnumerationElement* m_firstElementP;
    Linux_SambaReadListForGlobalManualInstanceEnumerationElement* m_currentElementP;
    Linux_SambaReadListForGlobalManualInstanceEnumerationElement* m_endElementP;

    public:
    Linux_SambaReadListForGlobalManualInstanceEnumeration();
    Linux_SambaReadListForGlobalManualInstanceEnumeration(
      const Linux_SambaReadListForGlobalManualInstanceEnumeration& anInstanceEnumeration);
    ~Linux_SambaReadListForGlobalManualInstanceEnumeration();

    void reset();
    bool hasNext() const;
    const Linux_SambaReadListForGlobalManualInstance& getNext();
    int getSize() const;
    const Linux_SambaReadListForGlobalManualInstance& getElement(int anIndex) const;  	  
    void addElement(const Linux_SambaReadListForGlobalManualInstance& anInstance);

  };

}

#endif
