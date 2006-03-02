// =======================================================================
// Linux_SambaWriteListForShareManualInstance.h
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
#ifndef Linux_SambaWriteListForShareManualInstance_h
#define Linux_SambaWriteListForShareManualInstance_h


#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaWriteListForShareInstanceName.h"


namespace genProvider {

  class Linux_SambaWriteListForShareManualInstance {
       
    private:
    void init();
    void init(const Linux_SambaWriteListForShareManualInstance& anInstance);
    void reset();
       
    Linux_SambaWriteListForShareInstanceName m_instanceName;
       
    struct isSetType{
      unsigned int instanceName:1;

    } isSet;
    
    public:
    Linux_SambaWriteListForShareManualInstance();
    Linux_SambaWriteListForShareManualInstance(
      const Linux_SambaWriteListForShareManualInstance& anInstance);
    Linux_SambaWriteListForShareManualInstance(
      const CmpiInstance& aCmpiInstance, 
      const char* anInstanceNamespaceP);
    ~Linux_SambaWriteListForShareManualInstance();
       
    Linux_SambaWriteListForShareManualInstance& operator=(
      const Linux_SambaWriteListForShareManualInstance& anInstance);
       
    CmpiInstance getCmpiInstance(const char** aPropertiesPP = 0) const;
    unsigned int isInstanceNameSet() const;
    void setInstanceName(const Linux_SambaWriteListForShareInstanceName& anInstanceName);        
    const Linux_SambaWriteListForShareInstanceName& getInstanceName() const;


  };
  
  struct Linux_SambaWriteListForShareManualInstanceEnumerationElement {

    Linux_SambaWriteListForShareManualInstance* m_elementP;
    Linux_SambaWriteListForShareManualInstanceEnumerationElement* m_nextP;

    Linux_SambaWriteListForShareManualInstanceEnumerationElement();
    ~Linux_SambaWriteListForShareManualInstanceEnumerationElement();  

  };
  

  class Linux_SambaWriteListForShareManualInstanceEnumeration {

    private:
    Linux_SambaWriteListForShareManualInstanceEnumerationElement* m_firstElementP;
    Linux_SambaWriteListForShareManualInstanceEnumerationElement* m_currentElementP;
    Linux_SambaWriteListForShareManualInstanceEnumerationElement* m_endElementP;

    public:
    Linux_SambaWriteListForShareManualInstanceEnumeration();
    Linux_SambaWriteListForShareManualInstanceEnumeration(
      const Linux_SambaWriteListForShareManualInstanceEnumeration& anInstanceEnumeration);
    ~Linux_SambaWriteListForShareManualInstanceEnumeration();

    void reset();
    bool hasNext() const;
    const Linux_SambaWriteListForShareManualInstance& getNext();
    int getSize() const;
    const Linux_SambaWriteListForShareManualInstance& getElement(int anIndex) const;  	  
    void addElement(const Linux_SambaWriteListForShareManualInstance& anInstance);

  };

}

#endif
