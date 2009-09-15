// =======================================================================
// Linux_SambaValidUsersForPrinterInstance.h
//     created on Fri, 23 Jun 2006 using ECUTE 2.2.1
//
// Copyright (c) 2006, 2009, International Business Machines
//
// THIS FILE IS PROVIDED UNDER THE TERMS OF THE ECLIPSE PUBLIC LICENSE
// ("AGREEMENT"). ANY USE, REPRODUCTION OR DISTRIBUTION OF THIS FILE
// CONSTITUTES RECIPIENTS ACCEPTANCE OF THE AGREEMENT.
//
// You can obtain a current copy of the Eclipse Public License from
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
#ifndef Linux_SambaValidUsersForPrinterInstance_h
#define Linux_SambaValidUsersForPrinterInstance_h


#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaValidUsersForPrinterInstanceName.h"


namespace genProvider {

  class Linux_SambaValidUsersForPrinterInstance {
       
    private:
    void init();
    void init(const Linux_SambaValidUsersForPrinterInstance& anInstance);
    void reset();
       
    Linux_SambaValidUsersForPrinterInstanceName m_instanceName;
       
    struct isSetType{
      unsigned int instanceName:1;

    } isSet;
    
    public:
    Linux_SambaValidUsersForPrinterInstance();
    Linux_SambaValidUsersForPrinterInstance(
      const Linux_SambaValidUsersForPrinterInstance& anInstance);
    Linux_SambaValidUsersForPrinterInstance(
      const CmpiInstance& aCmpiInstance, 
      const char* anInstanceNamespaceP);
    ~Linux_SambaValidUsersForPrinterInstance();
       
    Linux_SambaValidUsersForPrinterInstance& operator=(
      const Linux_SambaValidUsersForPrinterInstance& anInstance);
       
    CmpiInstance getCmpiInstance(const char** aPropertiesPP = 0) const;
    unsigned int isInstanceNameSet() const;
    void setInstanceName(const Linux_SambaValidUsersForPrinterInstanceName& anInstanceName);        
    const Linux_SambaValidUsersForPrinterInstanceName& getInstanceName() const;


  };
  
  struct Linux_SambaValidUsersForPrinterInstanceEnumerationElement {

    Linux_SambaValidUsersForPrinterInstance* m_elementP;
    Linux_SambaValidUsersForPrinterInstanceEnumerationElement* m_nextP;

    Linux_SambaValidUsersForPrinterInstanceEnumerationElement();
    ~Linux_SambaValidUsersForPrinterInstanceEnumerationElement();  

  };
  

  class Linux_SambaValidUsersForPrinterInstanceEnumeration {

    private:
    Linux_SambaValidUsersForPrinterInstanceEnumerationElement* m_firstElementP;
    Linux_SambaValidUsersForPrinterInstanceEnumerationElement* m_currentElementP;
    Linux_SambaValidUsersForPrinterInstanceEnumerationElement* m_endElementP;

    public:
    Linux_SambaValidUsersForPrinterInstanceEnumeration();
    Linux_SambaValidUsersForPrinterInstanceEnumeration(
      const Linux_SambaValidUsersForPrinterInstanceEnumeration& anInstanceEnumeration);
    ~Linux_SambaValidUsersForPrinterInstanceEnumeration();

    void reset();
    bool hasNext() const;
    const Linux_SambaValidUsersForPrinterInstance& getNext();
    int getSize() const;
    const Linux_SambaValidUsersForPrinterInstance& getElement(int anIndex) const;  	  
    void addElement(const Linux_SambaValidUsersForPrinterInstance& anInstance);

  };

}

#endif
