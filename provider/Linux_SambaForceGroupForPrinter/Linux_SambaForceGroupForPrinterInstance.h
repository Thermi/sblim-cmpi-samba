// =======================================================================
// Linux_SambaForceGroupForPrinterInstance.h
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
#ifndef Linux_SambaForceGroupForPrinterInstance_h
#define Linux_SambaForceGroupForPrinterInstance_h


#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaForceGroupForPrinterInstanceName.h"


namespace genProvider {

  class Linux_SambaForceGroupForPrinterInstance {
       
    private:
    void init();
    void init(const Linux_SambaForceGroupForPrinterInstance& anInstance);
    void reset();
       
    Linux_SambaForceGroupForPrinterInstanceName m_instanceName;
       
    struct isSetType{
      unsigned int instanceName:1;

    } isSet;
    
    public:
    Linux_SambaForceGroupForPrinterInstance();
    Linux_SambaForceGroupForPrinterInstance(
      const Linux_SambaForceGroupForPrinterInstance& anInstance);
    Linux_SambaForceGroupForPrinterInstance(
      const CmpiInstance& aCmpiInstance, 
      const char* anInstanceNamespaceP);
    ~Linux_SambaForceGroupForPrinterInstance();
       
    Linux_SambaForceGroupForPrinterInstance& operator=(
      const Linux_SambaForceGroupForPrinterInstance& anInstance);
       
    CmpiInstance getCmpiInstance(const char** aPropertiesPP = 0) const;
    unsigned int isInstanceNameSet() const;
    void setInstanceName(const Linux_SambaForceGroupForPrinterInstanceName& anInstanceName);        
    const Linux_SambaForceGroupForPrinterInstanceName& getInstanceName() const;


  };
  
  struct Linux_SambaForceGroupForPrinterInstanceEnumerationElement {

    Linux_SambaForceGroupForPrinterInstance* m_elementP;
    Linux_SambaForceGroupForPrinterInstanceEnumerationElement* m_nextP;

    Linux_SambaForceGroupForPrinterInstanceEnumerationElement();
    ~Linux_SambaForceGroupForPrinterInstanceEnumerationElement();  

  };
  

  class Linux_SambaForceGroupForPrinterInstanceEnumeration {

    private:
    Linux_SambaForceGroupForPrinterInstanceEnumerationElement* m_firstElementP;
    Linux_SambaForceGroupForPrinterInstanceEnumerationElement* m_currentElementP;
    Linux_SambaForceGroupForPrinterInstanceEnumerationElement* m_endElementP;

    public:
    Linux_SambaForceGroupForPrinterInstanceEnumeration();
    Linux_SambaForceGroupForPrinterInstanceEnumeration(
      const Linux_SambaForceGroupForPrinterInstanceEnumeration& anInstanceEnumeration);
    ~Linux_SambaForceGroupForPrinterInstanceEnumeration();

    void reset();
    bool hasNext() const;
    const Linux_SambaForceGroupForPrinterInstance& getNext();
    int getSize() const;
    const Linux_SambaForceGroupForPrinterInstance& getElement(int anIndex) const;  	  
    void addElement(const Linux_SambaForceGroupForPrinterInstance& anInstance);

  };

}

#endif
