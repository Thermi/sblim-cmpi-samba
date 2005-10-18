/**
 *  Linux_SambaValidUsersForPrinterInstance.h
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
  public:
       Linux_SambaValidUsersForPrinterInstance();
  	
       Linux_SambaValidUsersForPrinterInstance
  	    (const Linux_SambaValidUsersForPrinterInstance& original);
  	   
       Linux_SambaValidUsersForPrinterInstance
        (const CmpiInstance& inst, const char* instanceNamespace);
  	 
       ~Linux_SambaValidUsersForPrinterInstance();
       
       Linux_SambaValidUsersForPrinterInstance& operator=
  	    (const Linux_SambaValidUsersForPrinterInstance& original);
       
       CmpiInstance getCmpiInstance(const char** properties=0) const;
       
       unsigned int isInstanceNameSet() const;
       void setInstanceName(
        const Linux_SambaValidUsersForPrinterInstanceName& val);        
       const Linux_SambaValidUsersForPrinterInstanceName&
        getInstanceName() const;
       
  private:
       void init();
       void init(const Linux_SambaValidUsersForPrinterInstance& original);
       void reset();
       
       Linux_SambaValidUsersForPrinterInstanceName m_instanceName;
       
       struct isSetType{
       	 unsigned int instanceName:1;
       } isSet;
  };
  
  
  struct Linux_SambaValidUsersForPrinterInstanceEnumerationElement{
  	Linux_SambaValidUsersForPrinterInstance* m_elementP;
  	Linux_SambaValidUsersForPrinterInstanceEnumerationElement* m_nextP;
  	
  	Linux_SambaValidUsersForPrinterInstanceEnumerationElement();
  	~Linux_SambaValidUsersForPrinterInstanceEnumerationElement();  	
  };
  

  class Linux_SambaValidUsersForPrinterInstanceEnumeration {
  	private:
  	  Linux_SambaValidUsersForPrinterInstanceEnumerationElement* firstElementP;
  	  Linux_SambaValidUsersForPrinterInstanceEnumerationElement* currentElementP;
  	  Linux_SambaValidUsersForPrinterInstanceEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaValidUsersForPrinterInstanceEnumeration();
  	  
  	  Linux_SambaValidUsersForPrinterInstanceEnumeration(
  	   const Linux_SambaValidUsersForPrinterInstanceEnumeration& original);
  	  
  	  ~Linux_SambaValidUsersForPrinterInstanceEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaValidUsersForPrinterInstance& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaValidUsersForPrinterInstance& getElement(int pos) const;  	  
  	  
  	 void addElement(const Linux_SambaValidUsersForPrinterInstance& elementP);
  };
}
#endif

