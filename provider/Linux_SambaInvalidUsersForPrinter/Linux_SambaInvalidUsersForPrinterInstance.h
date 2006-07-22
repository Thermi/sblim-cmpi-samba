// =======================================================================
// Linux_SambaInvalidUsersForPrinterInstance.h
//     created on Fri, 23 Jun 2006 using ECUTE 2.2.1
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
//                Wolfgang Taphorn   <taphorn@de.ibm.com>
//                Mukunda Chowdaiah  <cmukunda@in.ibm.com>
//                Ashoka S Rao       <ashoka.rao@in.ibm.com>
//                Rodrigo Ceron      <rceron@br.ibm.com>
//
// =======================================================================
#ifndef Linux_SambaInvalidUsersForPrinterInstance_h
#define Linux_SambaInvalidUsersForPrinterInstance_h


#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaInvalidUsersForPrinterInstanceName.h"


namespace genProvider {

  class Linux_SambaInvalidUsersForPrinterInstance {
       
    private:
    void init();
    void init(const Linux_SambaInvalidUsersForPrinterInstance& anInstance);
    void reset();
       
    Linux_SambaInvalidUsersForPrinterInstanceName m_instanceName;
       
    struct isSetType{
      unsigned int instanceName:1;

    } isSet;
    
    public:
    Linux_SambaInvalidUsersForPrinterInstance();
    Linux_SambaInvalidUsersForPrinterInstance(
      const Linux_SambaInvalidUsersForPrinterInstance& anInstance);
    Linux_SambaInvalidUsersForPrinterInstance(
      const CmpiInstance& aCmpiInstance, 
      const char* anInstanceNamespaceP);
    ~Linux_SambaInvalidUsersForPrinterInstance();
       
    Linux_SambaInvalidUsersForPrinterInstance& operator=(
      const Linux_SambaInvalidUsersForPrinterInstance& anInstance);
       
    CmpiInstance getCmpiInstance(const char** aPropertiesPP = 0) const;
    unsigned int isInstanceNameSet() const;
    void setInstanceName(const Linux_SambaInvalidUsersForPrinterInstanceName& anInstanceName);        
    const Linux_SambaInvalidUsersForPrinterInstanceName& getInstanceName() const;


  };
  
  struct Linux_SambaInvalidUsersForPrinterInstanceEnumerationElement {

    Linux_SambaInvalidUsersForPrinterInstance* m_elementP;
    Linux_SambaInvalidUsersForPrinterInstanceEnumerationElement* m_nextP;

    Linux_SambaInvalidUsersForPrinterInstanceEnumerationElement();
    ~Linux_SambaInvalidUsersForPrinterInstanceEnumerationElement();  

  };
  

  class Linux_SambaInvalidUsersForPrinterInstanceEnumeration {

    private:
    Linux_SambaInvalidUsersForPrinterInstanceEnumerationElement* m_firstElementP;
    Linux_SambaInvalidUsersForPrinterInstanceEnumerationElement* m_currentElementP;
    Linux_SambaInvalidUsersForPrinterInstanceEnumerationElement* m_endElementP;

    public:
    Linux_SambaInvalidUsersForPrinterInstanceEnumeration();
    Linux_SambaInvalidUsersForPrinterInstanceEnumeration(
      const Linux_SambaInvalidUsersForPrinterInstanceEnumeration& anInstanceEnumeration);
    ~Linux_SambaInvalidUsersForPrinterInstanceEnumeration();

    void reset();
    bool hasNext() const;
    const Linux_SambaInvalidUsersForPrinterInstance& getNext();
    int getSize() const;
    const Linux_SambaInvalidUsersForPrinterInstance& getElement(int anIndex) const;  	  
    void addElement(const Linux_SambaInvalidUsersForPrinterInstance& anInstance);

  };

}

#endif
