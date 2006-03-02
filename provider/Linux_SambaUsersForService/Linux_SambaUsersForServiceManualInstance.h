// =======================================================================
// Linux_SambaUsersForServiceManualInstance.h
//     created on Fri, 24 Feb 2006 using ECUTE
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
//                Rodrigo Ceron    <rceron@br.ibm.com>
//                Wolfgang Taphorn <taphorn@de.ibm.com>
//
// =======================================================================
//
// 
#ifndef Linux_SambaUsersForServiceManualInstance_h
#define Linux_SambaUsersForServiceManualInstance_h


#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaUsersForServiceInstanceName.h"


namespace genProvider {

  class Linux_SambaUsersForServiceManualInstance {
       
    private:
    void init();
    void init(const Linux_SambaUsersForServiceManualInstance& anInstance);
    void reset();
       
    Linux_SambaUsersForServiceInstanceName m_instanceName;
       
    struct isSetType{
      unsigned int instanceName:1;

    } isSet;
    
    public:
    Linux_SambaUsersForServiceManualInstance();
    Linux_SambaUsersForServiceManualInstance(
      const Linux_SambaUsersForServiceManualInstance& anInstance);
    Linux_SambaUsersForServiceManualInstance(
      const CmpiInstance& aCmpiInstance, 
      const char* anInstanceNamespaceP);
    ~Linux_SambaUsersForServiceManualInstance();
       
    Linux_SambaUsersForServiceManualInstance& operator=(
      const Linux_SambaUsersForServiceManualInstance& anInstance);
       
    CmpiInstance getCmpiInstance(const char** aPropertiesPP = 0) const;
    unsigned int isInstanceNameSet() const;
    void setInstanceName(const Linux_SambaUsersForServiceInstanceName& anInstanceName);        
    const Linux_SambaUsersForServiceInstanceName& getInstanceName() const;


  };
  
  struct Linux_SambaUsersForServiceManualInstanceEnumerationElement {

    Linux_SambaUsersForServiceManualInstance* m_elementP;
    Linux_SambaUsersForServiceManualInstanceEnumerationElement* m_nextP;

    Linux_SambaUsersForServiceManualInstanceEnumerationElement();
    ~Linux_SambaUsersForServiceManualInstanceEnumerationElement();  

  };
  

  class Linux_SambaUsersForServiceManualInstanceEnumeration {

    private:
    Linux_SambaUsersForServiceManualInstanceEnumerationElement* m_firstElementP;
    Linux_SambaUsersForServiceManualInstanceEnumerationElement* m_currentElementP;
    Linux_SambaUsersForServiceManualInstanceEnumerationElement* m_endElementP;

    public:
    Linux_SambaUsersForServiceManualInstanceEnumeration();
    Linux_SambaUsersForServiceManualInstanceEnumeration(
      const Linux_SambaUsersForServiceManualInstanceEnumeration& anInstanceEnumeration);
    ~Linux_SambaUsersForServiceManualInstanceEnumeration();

    void reset();
    bool hasNext() const;
    const Linux_SambaUsersForServiceManualInstance& getNext();
    int getSize() const;
    const Linux_SambaUsersForServiceManualInstance& getElement(int anIndex) const;  	  
    void addElement(const Linux_SambaUsersForServiceManualInstance& anInstance);

  };

}

#endif
