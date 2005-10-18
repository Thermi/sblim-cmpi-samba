/**
 *  Linux_SambaPrinterAdminForPrinterInstance.h
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


#ifndef Linux_SambaPrinterAdminForPrinterInstance_h
#define Linux_SambaPrinterAdminForPrinterInstance_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaPrinterAdminForPrinterInstanceName.h"

namespace genProvider {

  class Linux_SambaPrinterAdminForPrinterInstance {
  public:
       Linux_SambaPrinterAdminForPrinterInstance();
  	
       Linux_SambaPrinterAdminForPrinterInstance
  	    (const Linux_SambaPrinterAdminForPrinterInstance& original);
  	   
       Linux_SambaPrinterAdminForPrinterInstance
        (const CmpiInstance& inst, const char* instanceNamespace);
  	 
       ~Linux_SambaPrinterAdminForPrinterInstance();
       
       Linux_SambaPrinterAdminForPrinterInstance& operator=
  	    (const Linux_SambaPrinterAdminForPrinterInstance& original);
       
       CmpiInstance getCmpiInstance(const char** properties=0) const;
       
       unsigned int isInstanceNameSet() const;
       void setInstanceName(
        const Linux_SambaPrinterAdminForPrinterInstanceName& val);        
       const Linux_SambaPrinterAdminForPrinterInstanceName&
        getInstanceName() const;
       
  private:
       void init();
       void init(const Linux_SambaPrinterAdminForPrinterInstance& original);
       void reset();
       
       Linux_SambaPrinterAdminForPrinterInstanceName m_instanceName;
       
       struct isSetType{
       	 unsigned int instanceName:1;
       } isSet;
  };
  
  
  struct Linux_SambaPrinterAdminForPrinterInstanceEnumerationElement{
  	Linux_SambaPrinterAdminForPrinterInstance* m_elementP;
  	Linux_SambaPrinterAdminForPrinterInstanceEnumerationElement* m_nextP;
  	
  	Linux_SambaPrinterAdminForPrinterInstanceEnumerationElement();
  	~Linux_SambaPrinterAdminForPrinterInstanceEnumerationElement();  	
  };
  

  class Linux_SambaPrinterAdminForPrinterInstanceEnumeration {
  	private:
  	  Linux_SambaPrinterAdminForPrinterInstanceEnumerationElement* firstElementP;
  	  Linux_SambaPrinterAdminForPrinterInstanceEnumerationElement* currentElementP;
  	  Linux_SambaPrinterAdminForPrinterInstanceEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaPrinterAdminForPrinterInstanceEnumeration();
  	  
  	  Linux_SambaPrinterAdminForPrinterInstanceEnumeration(
  	   const Linux_SambaPrinterAdminForPrinterInstanceEnumeration& original);
  	  
  	  ~Linux_SambaPrinterAdminForPrinterInstanceEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaPrinterAdminForPrinterInstance& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaPrinterAdminForPrinterInstance& getElement(int pos) const;  	  
  	  
  	 void addElement(const Linux_SambaPrinterAdminForPrinterInstance& elementP);
  };
}
#endif

