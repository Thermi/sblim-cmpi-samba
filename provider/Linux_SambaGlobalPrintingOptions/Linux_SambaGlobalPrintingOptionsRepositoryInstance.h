// =======================================================================
// Linux_SambaGlobalPrintingOptionsRepositoryInstance.h
//     created on Mon, 26 Jun 2006 using ECUTE 2.2.1
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
#ifndef Linux_SambaGlobalPrintingOptionsRepositoryInstance_h
#define Linux_SambaGlobalPrintingOptionsRepositoryInstance_h


#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaGlobalPrintingOptionsInstanceName.h"


namespace genProvider {

  class Linux_SambaGlobalPrintingOptionsRepositoryInstance {
       
    private:
    void init();
    void init(const Linux_SambaGlobalPrintingOptionsRepositoryInstance& anInstance);
    void reset();
       
    Linux_SambaGlobalPrintingOptionsInstanceName m_instanceName;
       
    struct isSetType{
      unsigned int instanceName:1;

    } isSet;
    
    public:
    Linux_SambaGlobalPrintingOptionsRepositoryInstance();
    Linux_SambaGlobalPrintingOptionsRepositoryInstance(
      const Linux_SambaGlobalPrintingOptionsRepositoryInstance& anInstance);
    Linux_SambaGlobalPrintingOptionsRepositoryInstance(
      const CmpiInstance& aCmpiInstance, 
      const char* anInstanceNamespaceP);
    ~Linux_SambaGlobalPrintingOptionsRepositoryInstance();
       
    Linux_SambaGlobalPrintingOptionsRepositoryInstance& operator=(
      const Linux_SambaGlobalPrintingOptionsRepositoryInstance& anInstance);
       
    CmpiInstance getCmpiInstance(const char** aPropertiesPP = 0) const;
    unsigned int isInstanceNameSet() const;
    void setInstanceName(const Linux_SambaGlobalPrintingOptionsInstanceName& anInstanceName);        
    const Linux_SambaGlobalPrintingOptionsInstanceName& getInstanceName() const;


  };
  
  struct Linux_SambaGlobalPrintingOptionsRepositoryInstanceEnumerationElement {

    Linux_SambaGlobalPrintingOptionsRepositoryInstance* m_elementP;
    Linux_SambaGlobalPrintingOptionsRepositoryInstanceEnumerationElement* m_nextP;

    Linux_SambaGlobalPrintingOptionsRepositoryInstanceEnumerationElement();
    ~Linux_SambaGlobalPrintingOptionsRepositoryInstanceEnumerationElement();  

  };
  

  class Linux_SambaGlobalPrintingOptionsRepositoryInstanceEnumeration {

    private:
    Linux_SambaGlobalPrintingOptionsRepositoryInstanceEnumerationElement* m_firstElementP;
    Linux_SambaGlobalPrintingOptionsRepositoryInstanceEnumerationElement* m_currentElementP;
    Linux_SambaGlobalPrintingOptionsRepositoryInstanceEnumerationElement* m_endElementP;

    public:
    Linux_SambaGlobalPrintingOptionsRepositoryInstanceEnumeration();
    Linux_SambaGlobalPrintingOptionsRepositoryInstanceEnumeration(
      const Linux_SambaGlobalPrintingOptionsRepositoryInstanceEnumeration& anInstanceEnumeration);
    ~Linux_SambaGlobalPrintingOptionsRepositoryInstanceEnumeration();

    void reset();
    bool hasNext() const;
    const Linux_SambaGlobalPrintingOptionsRepositoryInstance& getNext();
    int getSize() const;
    const Linux_SambaGlobalPrintingOptionsRepositoryInstance& getElement(int anIndex) const;  	  
    void addElement(const Linux_SambaGlobalPrintingOptionsRepositoryInstance& anInstance);

  };

}

#endif
