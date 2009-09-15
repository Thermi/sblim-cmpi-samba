// =======================================================================
// Linux_SambaWriteListForGlobalInstance.h
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
#ifndef Linux_SambaWriteListForGlobalInstance_h
#define Linux_SambaWriteListForGlobalInstance_h


#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaWriteListForGlobalInstanceName.h"


namespace genProvider {

  class Linux_SambaWriteListForGlobalInstance {
       
    private:
    void init();
    void init(const Linux_SambaWriteListForGlobalInstance& anInstance);
    void reset();
       
    Linux_SambaWriteListForGlobalInstanceName m_instanceName;
       
    struct isSetType{
      unsigned int instanceName:1;

    } isSet;
    
    public:
    Linux_SambaWriteListForGlobalInstance();
    Linux_SambaWriteListForGlobalInstance(
      const Linux_SambaWriteListForGlobalInstance& anInstance);
    Linux_SambaWriteListForGlobalInstance(
      const CmpiInstance& aCmpiInstance, 
      const char* anInstanceNamespaceP);
    ~Linux_SambaWriteListForGlobalInstance();
       
    Linux_SambaWriteListForGlobalInstance& operator=(
      const Linux_SambaWriteListForGlobalInstance& anInstance);
       
    CmpiInstance getCmpiInstance(const char** aPropertiesPP = 0) const;
    unsigned int isInstanceNameSet() const;
    void setInstanceName(const Linux_SambaWriteListForGlobalInstanceName& anInstanceName);        
    const Linux_SambaWriteListForGlobalInstanceName& getInstanceName() const;


  };
  
  struct Linux_SambaWriteListForGlobalInstanceEnumerationElement {

    Linux_SambaWriteListForGlobalInstance* m_elementP;
    Linux_SambaWriteListForGlobalInstanceEnumerationElement* m_nextP;

    Linux_SambaWriteListForGlobalInstanceEnumerationElement();
    ~Linux_SambaWriteListForGlobalInstanceEnumerationElement();  

  };
  

  class Linux_SambaWriteListForGlobalInstanceEnumeration {

    private:
    Linux_SambaWriteListForGlobalInstanceEnumerationElement* m_firstElementP;
    Linux_SambaWriteListForGlobalInstanceEnumerationElement* m_currentElementP;
    Linux_SambaWriteListForGlobalInstanceEnumerationElement* m_endElementP;

    public:
    Linux_SambaWriteListForGlobalInstanceEnumeration();
    Linux_SambaWriteListForGlobalInstanceEnumeration(
      const Linux_SambaWriteListForGlobalInstanceEnumeration& anInstanceEnumeration);
    ~Linux_SambaWriteListForGlobalInstanceEnumeration();

    void reset();
    bool hasNext() const;
    const Linux_SambaWriteListForGlobalInstance& getNext();
    int getSize() const;
    const Linux_SambaWriteListForGlobalInstance& getElement(int anIndex) const;  	  
    void addElement(const Linux_SambaWriteListForGlobalInstance& anInstance);

  };

}

#endif
