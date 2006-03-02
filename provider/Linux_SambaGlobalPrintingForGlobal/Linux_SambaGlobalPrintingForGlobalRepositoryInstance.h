// =======================================================================
// Linux_SambaGlobalPrintingForGlobalRepositoryInstance.h
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
#ifndef Linux_SambaGlobalPrintingForGlobalRepositoryInstance_h
#define Linux_SambaGlobalPrintingForGlobalRepositoryInstance_h


#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaGlobalPrintingForGlobalInstanceName.h"


namespace genProvider {

  class Linux_SambaGlobalPrintingForGlobalRepositoryInstance {
       
    private:
    void init();
    void init(const Linux_SambaGlobalPrintingForGlobalRepositoryInstance& anInstance);
    void reset();
       
    Linux_SambaGlobalPrintingForGlobalInstanceName m_instanceName;
       
    struct isSetType{
      unsigned int instanceName:1;

    } isSet;
    
    public:
    Linux_SambaGlobalPrintingForGlobalRepositoryInstance();
    Linux_SambaGlobalPrintingForGlobalRepositoryInstance(
      const Linux_SambaGlobalPrintingForGlobalRepositoryInstance& anInstance);
    Linux_SambaGlobalPrintingForGlobalRepositoryInstance(
      const CmpiInstance& aCmpiInstance, 
      const char* anInstanceNamespaceP);
    ~Linux_SambaGlobalPrintingForGlobalRepositoryInstance();
       
    Linux_SambaGlobalPrintingForGlobalRepositoryInstance& operator=(
      const Linux_SambaGlobalPrintingForGlobalRepositoryInstance& anInstance);
       
    CmpiInstance getCmpiInstance(const char** aPropertiesPP = 0) const;
    unsigned int isInstanceNameSet() const;
    void setInstanceName(const Linux_SambaGlobalPrintingForGlobalInstanceName& anInstanceName);        
    const Linux_SambaGlobalPrintingForGlobalInstanceName& getInstanceName() const;


  };
  
  struct Linux_SambaGlobalPrintingForGlobalRepositoryInstanceEnumerationElement {

    Linux_SambaGlobalPrintingForGlobalRepositoryInstance* m_elementP;
    Linux_SambaGlobalPrintingForGlobalRepositoryInstanceEnumerationElement* m_nextP;

    Linux_SambaGlobalPrintingForGlobalRepositoryInstanceEnumerationElement();
    ~Linux_SambaGlobalPrintingForGlobalRepositoryInstanceEnumerationElement();  

  };
  

  class Linux_SambaGlobalPrintingForGlobalRepositoryInstanceEnumeration {

    private:
    Linux_SambaGlobalPrintingForGlobalRepositoryInstanceEnumerationElement* m_firstElementP;
    Linux_SambaGlobalPrintingForGlobalRepositoryInstanceEnumerationElement* m_currentElementP;
    Linux_SambaGlobalPrintingForGlobalRepositoryInstanceEnumerationElement* m_endElementP;

    public:
    Linux_SambaGlobalPrintingForGlobalRepositoryInstanceEnumeration();
    Linux_SambaGlobalPrintingForGlobalRepositoryInstanceEnumeration(
      const Linux_SambaGlobalPrintingForGlobalRepositoryInstanceEnumeration& anInstanceEnumeration);
    ~Linux_SambaGlobalPrintingForGlobalRepositoryInstanceEnumeration();

    void reset();
    bool hasNext() const;
    const Linux_SambaGlobalPrintingForGlobalRepositoryInstance& getNext();
    int getSize() const;
    const Linux_SambaGlobalPrintingForGlobalRepositoryInstance& getElement(int anIndex) const;  	  
    void addElement(const Linux_SambaGlobalPrintingForGlobalRepositoryInstance& anInstance);

  };

}

#endif
