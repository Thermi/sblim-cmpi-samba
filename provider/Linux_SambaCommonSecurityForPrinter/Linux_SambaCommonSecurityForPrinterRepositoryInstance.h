/**
 *  Linux_SambaCommonSecurityForPrinterRepositoryInstance.h
 * 
 * (C) Copyright IBM Corp. 2005
 *
 * THIS FILE IS PROVIDED UNDER THE TERMS OF THE COMMON PUBLIC LICENSE
 * ("AGREEMENT"). ANY USE, REPRODUCTION OR DISTRIBUTION OF THIS FILE
 * CONSTITUTES RECIPIENTS ACCEPTANCE OF THE AGREEMENT.
 *
 * You can obtain a current copy of the Common Public License from
 * http://www.opensource.org/licenses/cpl1.0.php
 *
 * Author:     Rodrigo Ceron <rceron@br.ibm.com>
 *
 * Contributors:
 *
 */


#ifndef Linux_SambaCommonSecurityForPrinterRepositoryInstance_h
#define Linux_SambaCommonSecurityForPrinterRepositoryInstance_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaCommonSecurityForPrinterInstanceName.h"

namespace genProvider {

  class Linux_SambaCommonSecurityForPrinterRepositoryInstance {
  public:
       Linux_SambaCommonSecurityForPrinterRepositoryInstance();
  	
       Linux_SambaCommonSecurityForPrinterRepositoryInstance
  	    (const Linux_SambaCommonSecurityForPrinterRepositoryInstance& original);
  	   
       Linux_SambaCommonSecurityForPrinterRepositoryInstance
        (const CmpiInstance& inst, const char* instanceNamespace);
  	 
       ~Linux_SambaCommonSecurityForPrinterRepositoryInstance();
       
       Linux_SambaCommonSecurityForPrinterRepositoryInstance& operator=
  	    (const Linux_SambaCommonSecurityForPrinterRepositoryInstance& original);
       
       CmpiInstance getCmpiInstance(const char** properties=0) const;
       
       unsigned int isInstanceNameSet() const;
       void setInstanceName(
        const Linux_SambaCommonSecurityForPrinterInstanceName& val);        
       const Linux_SambaCommonSecurityForPrinterInstanceName&
        getInstanceName() const;
       
  private:
       void init();
       void init(const Linux_SambaCommonSecurityForPrinterRepositoryInstance& original);
       void reset();
       
       Linux_SambaCommonSecurityForPrinterInstanceName m_instanceName;
       
       struct isSetType{
       	 unsigned int instanceName:1;
       } isSet;
  };
  
  
  struct Linux_SambaCommonSecurityForPrinterRepositoryInstanceEnumerationElement{
  	Linux_SambaCommonSecurityForPrinterRepositoryInstance* m_elementP;
  	Linux_SambaCommonSecurityForPrinterRepositoryInstanceEnumerationElement* m_nextP;
  	
  	Linux_SambaCommonSecurityForPrinterRepositoryInstanceEnumerationElement();
  	~Linux_SambaCommonSecurityForPrinterRepositoryInstanceEnumerationElement();  	
  };
  

  class Linux_SambaCommonSecurityForPrinterRepositoryInstanceEnumeration {
  	private:
  	  Linux_SambaCommonSecurityForPrinterRepositoryInstanceEnumerationElement* firstElementP;
  	  Linux_SambaCommonSecurityForPrinterRepositoryInstanceEnumerationElement* currentElementP;
  	  Linux_SambaCommonSecurityForPrinterRepositoryInstanceEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaCommonSecurityForPrinterRepositoryInstanceEnumeration();
  	  
  	  Linux_SambaCommonSecurityForPrinterRepositoryInstanceEnumeration(
  	   const Linux_SambaCommonSecurityForPrinterRepositoryInstanceEnumeration& original);
  	  
  	  ~Linux_SambaCommonSecurityForPrinterRepositoryInstanceEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaCommonSecurityForPrinterRepositoryInstance& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaCommonSecurityForPrinterRepositoryInstance& getElement(int pos) const;  	  
  	  
  	 void addElement(const Linux_SambaCommonSecurityForPrinterRepositoryInstance& elementP);
  };
}
#endif

