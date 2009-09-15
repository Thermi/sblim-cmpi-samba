// =======================================================================
// Linux_SambaGlobalBrowseForGlobalManualInstance.h
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
#ifndef Linux_SambaGlobalBrowseForGlobalManualInstance_h
#define Linux_SambaGlobalBrowseForGlobalManualInstance_h


#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaGlobalBrowseForGlobalInstanceName.h"


namespace genProvider {

  class Linux_SambaGlobalBrowseForGlobalManualInstance {
       
    private:
    void init();
    void init(const Linux_SambaGlobalBrowseForGlobalManualInstance& anInstance);
    void reset();
       
    Linux_SambaGlobalBrowseForGlobalInstanceName m_instanceName;
       
    struct isSetType{
      unsigned int instanceName:1;

    } isSet;
    
    public:
    Linux_SambaGlobalBrowseForGlobalManualInstance();
    Linux_SambaGlobalBrowseForGlobalManualInstance(
      const Linux_SambaGlobalBrowseForGlobalManualInstance& anInstance);
    Linux_SambaGlobalBrowseForGlobalManualInstance(
      const CmpiInstance& aCmpiInstance, 
      const char* anInstanceNamespaceP);
    ~Linux_SambaGlobalBrowseForGlobalManualInstance();
       
    Linux_SambaGlobalBrowseForGlobalManualInstance& operator=(
      const Linux_SambaGlobalBrowseForGlobalManualInstance& anInstance);
       
    CmpiInstance getCmpiInstance(const char** aPropertiesPP = 0) const;
    unsigned int isInstanceNameSet() const;
    void setInstanceName(const Linux_SambaGlobalBrowseForGlobalInstanceName& anInstanceName);        
    const Linux_SambaGlobalBrowseForGlobalInstanceName& getInstanceName() const;


  };
  
  struct Linux_SambaGlobalBrowseForGlobalManualInstanceEnumerationElement {

    Linux_SambaGlobalBrowseForGlobalManualInstance* m_elementP;
    Linux_SambaGlobalBrowseForGlobalManualInstanceEnumerationElement* m_nextP;

    Linux_SambaGlobalBrowseForGlobalManualInstanceEnumerationElement();
    ~Linux_SambaGlobalBrowseForGlobalManualInstanceEnumerationElement();  

  };
  

  class Linux_SambaGlobalBrowseForGlobalManualInstanceEnumeration {

    private:
    Linux_SambaGlobalBrowseForGlobalManualInstanceEnumerationElement* m_firstElementP;
    Linux_SambaGlobalBrowseForGlobalManualInstanceEnumerationElement* m_currentElementP;
    Linux_SambaGlobalBrowseForGlobalManualInstanceEnumerationElement* m_endElementP;

    public:
    Linux_SambaGlobalBrowseForGlobalManualInstanceEnumeration();
    Linux_SambaGlobalBrowseForGlobalManualInstanceEnumeration(
      const Linux_SambaGlobalBrowseForGlobalManualInstanceEnumeration& anInstanceEnumeration);
    ~Linux_SambaGlobalBrowseForGlobalManualInstanceEnumeration();

    void reset();
    bool hasNext() const;
    const Linux_SambaGlobalBrowseForGlobalManualInstance& getNext();
    int getSize() const;
    const Linux_SambaGlobalBrowseForGlobalManualInstance& getElement(int anIndex) const;  	  
    void addElement(const Linux_SambaGlobalBrowseForGlobalManualInstance& anInstance);

  };

}

#endif
