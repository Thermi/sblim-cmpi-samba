// =======================================================================
// Linux_SambaForceUserForPrinterRepositoryInstance.h
//     created on Fri, 23 Jun 2006 using ECUTE 2.2.1
//
// Copyright (c) 2006, 2009, International Business Machines
//
// THIS FILE IS PROVIDED UNDER THE TERMS OF THE ECLIPSE PUBLIC LICENSE
// ("AGREEMENT"). ANY USE, REPRODUCTION OR DISTRIBUTION OF THIS FILE
// CONSTITUTES RECIPIENTS ACCEPTANCE OF THE AGREEMENT.
//
// You can obtain a current copy of the Eclipse Public License from
// http://www.opensource.org/licenses/eclipse-1.0.php
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
#ifndef Linux_SambaForceUserForPrinterRepositoryInstance_h
#define Linux_SambaForceUserForPrinterRepositoryInstance_h


#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaForceUserForPrinterInstanceName.h"


namespace genProvider {

  class Linux_SambaForceUserForPrinterRepositoryInstance {
       
    private:
    void init();
    void init(const Linux_SambaForceUserForPrinterRepositoryInstance& anInstance);
    void reset();
       
    Linux_SambaForceUserForPrinterInstanceName m_instanceName;
       
    struct isSetType{
      unsigned int instanceName:1;

    } isSet;
    
    public:
    Linux_SambaForceUserForPrinterRepositoryInstance();
    Linux_SambaForceUserForPrinterRepositoryInstance(
      const Linux_SambaForceUserForPrinterRepositoryInstance& anInstance);
    Linux_SambaForceUserForPrinterRepositoryInstance(
      const CmpiInstance& aCmpiInstance, 
      const char* anInstanceNamespaceP);
    ~Linux_SambaForceUserForPrinterRepositoryInstance();
       
    Linux_SambaForceUserForPrinterRepositoryInstance& operator=(
      const Linux_SambaForceUserForPrinterRepositoryInstance& anInstance);
       
    CmpiInstance getCmpiInstance(const char** aPropertiesPP = 0) const;
    unsigned int isInstanceNameSet() const;
    void setInstanceName(const Linux_SambaForceUserForPrinterInstanceName& anInstanceName);        
    const Linux_SambaForceUserForPrinterInstanceName& getInstanceName() const;


  };
  
  struct Linux_SambaForceUserForPrinterRepositoryInstanceEnumerationElement {

    Linux_SambaForceUserForPrinterRepositoryInstance* m_elementP;
    Linux_SambaForceUserForPrinterRepositoryInstanceEnumerationElement* m_nextP;

    Linux_SambaForceUserForPrinterRepositoryInstanceEnumerationElement();
    ~Linux_SambaForceUserForPrinterRepositoryInstanceEnumerationElement();  

  };
  

  class Linux_SambaForceUserForPrinterRepositoryInstanceEnumeration {

    private:
    Linux_SambaForceUserForPrinterRepositoryInstanceEnumerationElement* m_firstElementP;
    Linux_SambaForceUserForPrinterRepositoryInstanceEnumerationElement* m_currentElementP;
    Linux_SambaForceUserForPrinterRepositoryInstanceEnumerationElement* m_endElementP;

    public:
    Linux_SambaForceUserForPrinterRepositoryInstanceEnumeration();
    Linux_SambaForceUserForPrinterRepositoryInstanceEnumeration(
      const Linux_SambaForceUserForPrinterRepositoryInstanceEnumeration& anInstanceEnumeration);
    ~Linux_SambaForceUserForPrinterRepositoryInstanceEnumeration();

    void reset();
    bool hasNext() const;
    const Linux_SambaForceUserForPrinterRepositoryInstance& getNext();
    int getSize() const;
    const Linux_SambaForceUserForPrinterRepositoryInstance& getElement(int anIndex) const;  	  
    void addElement(const Linux_SambaForceUserForPrinterRepositoryInstance& anInstance);

  };

}

#endif
