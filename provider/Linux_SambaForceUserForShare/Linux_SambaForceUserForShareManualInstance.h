// =======================================================================
// Linux_SambaForceUserForShareManualInstance.h
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
#ifndef Linux_SambaForceUserForShareManualInstance_h
#define Linux_SambaForceUserForShareManualInstance_h


#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaForceUserForShareInstanceName.h"


namespace genProvider {

  class Linux_SambaForceUserForShareManualInstance {
       
    private:
    void init();
    void init(const Linux_SambaForceUserForShareManualInstance& anInstance);
    void reset();
       
    Linux_SambaForceUserForShareInstanceName m_instanceName;
       
    struct isSetType{
      unsigned int instanceName:1;

    } isSet;
    
    public:
    Linux_SambaForceUserForShareManualInstance();
    Linux_SambaForceUserForShareManualInstance(
      const Linux_SambaForceUserForShareManualInstance& anInstance);
    Linux_SambaForceUserForShareManualInstance(
      const CmpiInstance& aCmpiInstance, 
      const char* anInstanceNamespaceP);
    ~Linux_SambaForceUserForShareManualInstance();
       
    Linux_SambaForceUserForShareManualInstance& operator=(
      const Linux_SambaForceUserForShareManualInstance& anInstance);
       
    CmpiInstance getCmpiInstance(const char** aPropertiesPP = 0) const;
    unsigned int isInstanceNameSet() const;
    void setInstanceName(const Linux_SambaForceUserForShareInstanceName& anInstanceName);        
    const Linux_SambaForceUserForShareInstanceName& getInstanceName() const;


  };
  
  struct Linux_SambaForceUserForShareManualInstanceEnumerationElement {

    Linux_SambaForceUserForShareManualInstance* m_elementP;
    Linux_SambaForceUserForShareManualInstanceEnumerationElement* m_nextP;

    Linux_SambaForceUserForShareManualInstanceEnumerationElement();
    ~Linux_SambaForceUserForShareManualInstanceEnumerationElement();  

  };
  

  class Linux_SambaForceUserForShareManualInstanceEnumeration {

    private:
    Linux_SambaForceUserForShareManualInstanceEnumerationElement* m_firstElementP;
    Linux_SambaForceUserForShareManualInstanceEnumerationElement* m_currentElementP;
    Linux_SambaForceUserForShareManualInstanceEnumerationElement* m_endElementP;

    public:
    Linux_SambaForceUserForShareManualInstanceEnumeration();
    Linux_SambaForceUserForShareManualInstanceEnumeration(
      const Linux_SambaForceUserForShareManualInstanceEnumeration& anInstanceEnumeration);
    ~Linux_SambaForceUserForShareManualInstanceEnumeration();

    void reset();
    bool hasNext() const;
    const Linux_SambaForceUserForShareManualInstance& getNext();
    int getSize() const;
    const Linux_SambaForceUserForShareManualInstance& getElement(int anIndex) const;  	  
    void addElement(const Linux_SambaForceUserForShareManualInstance& anInstance);

  };

}

#endif
