// =======================================================================
// Linux_SambaWriteListForShareInstance.h
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
#ifndef Linux_SambaWriteListForShareInstance_h
#define Linux_SambaWriteListForShareInstance_h


#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaWriteListForShareInstanceName.h"


namespace genProvider {

  class Linux_SambaWriteListForShareInstance {
       
    private:
    void init();
    void init(const Linux_SambaWriteListForShareInstance& anInstance);
    void reset();
       
    Linux_SambaWriteListForShareInstanceName m_instanceName;
       
    struct isSetType{
      unsigned int instanceName:1;

    } isSet;
    
    public:
    Linux_SambaWriteListForShareInstance();
    Linux_SambaWriteListForShareInstance(
      const Linux_SambaWriteListForShareInstance& anInstance);
    Linux_SambaWriteListForShareInstance(
      const CmpiInstance& aCmpiInstance, 
      const char* anInstanceNamespaceP);
    ~Linux_SambaWriteListForShareInstance();
       
    Linux_SambaWriteListForShareInstance& operator=(
      const Linux_SambaWriteListForShareInstance& anInstance);
       
    CmpiInstance getCmpiInstance(const char** aPropertiesPP = 0) const;
    unsigned int isInstanceNameSet() const;
    void setInstanceName(const Linux_SambaWriteListForShareInstanceName& anInstanceName);        
    const Linux_SambaWriteListForShareInstanceName& getInstanceName() const;


  };
  
  struct Linux_SambaWriteListForShareInstanceEnumerationElement {

    Linux_SambaWriteListForShareInstance* m_elementP;
    Linux_SambaWriteListForShareInstanceEnumerationElement* m_nextP;

    Linux_SambaWriteListForShareInstanceEnumerationElement();
    ~Linux_SambaWriteListForShareInstanceEnumerationElement();  

  };
  

  class Linux_SambaWriteListForShareInstanceEnumeration {

    private:
    Linux_SambaWriteListForShareInstanceEnumerationElement* m_firstElementP;
    Linux_SambaWriteListForShareInstanceEnumerationElement* m_currentElementP;
    Linux_SambaWriteListForShareInstanceEnumerationElement* m_endElementP;

    public:
    Linux_SambaWriteListForShareInstanceEnumeration();
    Linux_SambaWriteListForShareInstanceEnumeration(
      const Linux_SambaWriteListForShareInstanceEnumeration& anInstanceEnumeration);
    ~Linux_SambaWriteListForShareInstanceEnumeration();

    void reset();
    bool hasNext() const;
    const Linux_SambaWriteListForShareInstance& getNext();
    int getSize() const;
    const Linux_SambaWriteListForShareInstance& getElement(int anIndex) const;  	  
    void addElement(const Linux_SambaWriteListForShareInstance& anInstance);

  };

}

#endif
