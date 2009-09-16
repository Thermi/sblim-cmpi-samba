// =======================================================================
// Linux_SambaForceUserForPrinterInstance.h
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
#ifndef Linux_SambaForceUserForPrinterInstance_h
#define Linux_SambaForceUserForPrinterInstance_h


#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaForceUserForPrinterInstanceName.h"


namespace genProvider {

  class Linux_SambaForceUserForPrinterInstance {
       
    private:
    void init();
    void init(const Linux_SambaForceUserForPrinterInstance& anInstance);
    void reset();
       
    Linux_SambaForceUserForPrinterInstanceName m_instanceName;
       
    struct isSetType{
      unsigned int instanceName:1;

    } isSet;
    
    public:
    Linux_SambaForceUserForPrinterInstance();
    Linux_SambaForceUserForPrinterInstance(
      const Linux_SambaForceUserForPrinterInstance& anInstance);
    Linux_SambaForceUserForPrinterInstance(
      const CmpiInstance& aCmpiInstance, 
      const char* anInstanceNamespaceP);
    ~Linux_SambaForceUserForPrinterInstance();
       
    Linux_SambaForceUserForPrinterInstance& operator=(
      const Linux_SambaForceUserForPrinterInstance& anInstance);
       
    CmpiInstance getCmpiInstance(const char** aPropertiesPP = 0) const;
    unsigned int isInstanceNameSet() const;
    void setInstanceName(const Linux_SambaForceUserForPrinterInstanceName& anInstanceName);        
    const Linux_SambaForceUserForPrinterInstanceName& getInstanceName() const;


  };
  
  struct Linux_SambaForceUserForPrinterInstanceEnumerationElement {

    Linux_SambaForceUserForPrinterInstance* m_elementP;
    Linux_SambaForceUserForPrinterInstanceEnumerationElement* m_nextP;

    Linux_SambaForceUserForPrinterInstanceEnumerationElement();
    ~Linux_SambaForceUserForPrinterInstanceEnumerationElement();  

  };
  

  class Linux_SambaForceUserForPrinterInstanceEnumeration {

    private:
    Linux_SambaForceUserForPrinterInstanceEnumerationElement* m_firstElementP;
    Linux_SambaForceUserForPrinterInstanceEnumerationElement* m_currentElementP;
    Linux_SambaForceUserForPrinterInstanceEnumerationElement* m_endElementP;

    public:
    Linux_SambaForceUserForPrinterInstanceEnumeration();
    Linux_SambaForceUserForPrinterInstanceEnumeration(
      const Linux_SambaForceUserForPrinterInstanceEnumeration& anInstanceEnumeration);
    ~Linux_SambaForceUserForPrinterInstanceEnumeration();

    void reset();
    bool hasNext() const;
    const Linux_SambaForceUserForPrinterInstance& getNext();
    int getSize() const;
    const Linux_SambaForceUserForPrinterInstance& getElement(int anIndex) const;  	  
    void addElement(const Linux_SambaForceUserForPrinterInstance& anInstance);

  };

}

#endif
