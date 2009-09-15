// =======================================================================
// Linux_SambaGroupForUserManualInstance.h
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
#ifndef Linux_SambaGroupForUserManualInstance_h
#define Linux_SambaGroupForUserManualInstance_h


#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaGroupForUserInstanceName.h"


namespace genProvider {

  class Linux_SambaGroupForUserManualInstance {
       
    private:
    void init();
    void init(const Linux_SambaGroupForUserManualInstance& anInstance);
    void reset();
       
    Linux_SambaGroupForUserInstanceName m_instanceName;
       
    struct isSetType{
      unsigned int instanceName:1;

    } isSet;
    
    public:
    Linux_SambaGroupForUserManualInstance();
    Linux_SambaGroupForUserManualInstance(
      const Linux_SambaGroupForUserManualInstance& anInstance);
    Linux_SambaGroupForUserManualInstance(
      const CmpiInstance& aCmpiInstance, 
      const char* anInstanceNamespaceP);
    ~Linux_SambaGroupForUserManualInstance();
       
    Linux_SambaGroupForUserManualInstance& operator=(
      const Linux_SambaGroupForUserManualInstance& anInstance);
       
    CmpiInstance getCmpiInstance(const char** aPropertiesPP = 0) const;
    unsigned int isInstanceNameSet() const;
    void setInstanceName(const Linux_SambaGroupForUserInstanceName& anInstanceName);        
    const Linux_SambaGroupForUserInstanceName& getInstanceName() const;


  };
  
  struct Linux_SambaGroupForUserManualInstanceEnumerationElement {

    Linux_SambaGroupForUserManualInstance* m_elementP;
    Linux_SambaGroupForUserManualInstanceEnumerationElement* m_nextP;

    Linux_SambaGroupForUserManualInstanceEnumerationElement();
    ~Linux_SambaGroupForUserManualInstanceEnumerationElement();  

  };
  

  class Linux_SambaGroupForUserManualInstanceEnumeration {

    private:
    Linux_SambaGroupForUserManualInstanceEnumerationElement* m_firstElementP;
    Linux_SambaGroupForUserManualInstanceEnumerationElement* m_currentElementP;
    Linux_SambaGroupForUserManualInstanceEnumerationElement* m_endElementP;

    public:
    Linux_SambaGroupForUserManualInstanceEnumeration();
    Linux_SambaGroupForUserManualInstanceEnumeration(
      const Linux_SambaGroupForUserManualInstanceEnumeration& anInstanceEnumeration);
    ~Linux_SambaGroupForUserManualInstanceEnumeration();

    void reset();
    bool hasNext() const;
    const Linux_SambaGroupForUserManualInstance& getNext();
    int getSize() const;
    const Linux_SambaGroupForUserManualInstance& getElement(int anIndex) const;  	  
    void addElement(const Linux_SambaGroupForUserManualInstance& anInstance);

  };

}

#endif
