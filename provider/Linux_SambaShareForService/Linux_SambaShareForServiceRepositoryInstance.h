// =======================================================================
// Linux_SambaShareForServiceRepositoryInstance.h
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
#ifndef Linux_SambaShareForServiceRepositoryInstance_h
#define Linux_SambaShareForServiceRepositoryInstance_h


#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaShareForServiceInstanceName.h"


namespace genProvider {

  class Linux_SambaShareForServiceRepositoryInstance {
       
    private:
    void init();
    void init(const Linux_SambaShareForServiceRepositoryInstance& anInstance);
    void reset();
       
    Linux_SambaShareForServiceInstanceName m_instanceName;
       
    struct isSetType{
      unsigned int instanceName:1;

    } isSet;
    
    public:
    Linux_SambaShareForServiceRepositoryInstance();
    Linux_SambaShareForServiceRepositoryInstance(
      const Linux_SambaShareForServiceRepositoryInstance& anInstance);
    Linux_SambaShareForServiceRepositoryInstance(
      const CmpiInstance& aCmpiInstance, 
      const char* anInstanceNamespaceP);
    ~Linux_SambaShareForServiceRepositoryInstance();
       
    Linux_SambaShareForServiceRepositoryInstance& operator=(
      const Linux_SambaShareForServiceRepositoryInstance& anInstance);
       
    CmpiInstance getCmpiInstance(const char** aPropertiesPP = 0) const;
    unsigned int isInstanceNameSet() const;
    void setInstanceName(const Linux_SambaShareForServiceInstanceName& anInstanceName);        
    const Linux_SambaShareForServiceInstanceName& getInstanceName() const;


  };
  
  struct Linux_SambaShareForServiceRepositoryInstanceEnumerationElement {

    Linux_SambaShareForServiceRepositoryInstance* m_elementP;
    Linux_SambaShareForServiceRepositoryInstanceEnumerationElement* m_nextP;

    Linux_SambaShareForServiceRepositoryInstanceEnumerationElement();
    ~Linux_SambaShareForServiceRepositoryInstanceEnumerationElement();  

  };
  

  class Linux_SambaShareForServiceRepositoryInstanceEnumeration {

    private:
    Linux_SambaShareForServiceRepositoryInstanceEnumerationElement* m_firstElementP;
    Linux_SambaShareForServiceRepositoryInstanceEnumerationElement* m_currentElementP;
    Linux_SambaShareForServiceRepositoryInstanceEnumerationElement* m_endElementP;

    public:
    Linux_SambaShareForServiceRepositoryInstanceEnumeration();
    Linux_SambaShareForServiceRepositoryInstanceEnumeration(
      const Linux_SambaShareForServiceRepositoryInstanceEnumeration& anInstanceEnumeration);
    ~Linux_SambaShareForServiceRepositoryInstanceEnumeration();

    void reset();
    bool hasNext() const;
    const Linux_SambaShareForServiceRepositoryInstance& getNext();
    int getSize() const;
    const Linux_SambaShareForServiceRepositoryInstance& getElement(int anIndex) const;  	  
    void addElement(const Linux_SambaShareForServiceRepositoryInstance& anInstance);

  };

}

#endif
