/**
 *  Linux_SambaInvalidUsersForPrinterInstance.h
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
  public:
       Linux_SambaInvalidUsersForPrinterInstance();
  	
       Linux_SambaInvalidUsersForPrinterInstance
  	    (const Linux_SambaInvalidUsersForPrinterInstance& original);
  	   
       Linux_SambaInvalidUsersForPrinterInstance
        (const CmpiInstance& inst, const char* instanceNamespace);
  	 
       ~Linux_SambaInvalidUsersForPrinterInstance();
       
       Linux_SambaInvalidUsersForPrinterInstance& operator=
  	    (const Linux_SambaInvalidUsersForPrinterInstance& original);
       
       CmpiInstance getCmpiInstance(const char** properties=0) const;
       
       unsigned int isInstanceNameSet() const;
       void setInstanceName(
        const Linux_SambaInvalidUsersForPrinterInstanceName& val);        
       const Linux_SambaInvalidUsersForPrinterInstanceName&
        getInstanceName() const;
       
  private:
       void init();
       void init(const Linux_SambaInvalidUsersForPrinterInstance& original);
       void reset();
       
       Linux_SambaInvalidUsersForPrinterInstanceName m_instanceName;
       
       struct isSetType{
       	 unsigned int instanceName:1;
       } isSet;
  };
  
  
  struct Linux_SambaInvalidUsersForPrinterInstanceEnumerationElement{
  	Linux_SambaInvalidUsersForPrinterInstance* m_elementP;
  	Linux_SambaInvalidUsersForPrinterInstanceEnumerationElement* m_nextP;
  	
  	Linux_SambaInvalidUsersForPrinterInstanceEnumerationElement();
  	~Linux_SambaInvalidUsersForPrinterInstanceEnumerationElement();  	
  };
  

  class Linux_SambaInvalidUsersForPrinterInstanceEnumeration {
  	private:
  	  Linux_SambaInvalidUsersForPrinterInstanceEnumerationElement* firstElementP;
  	  Linux_SambaInvalidUsersForPrinterInstanceEnumerationElement* currentElementP;
  	  Linux_SambaInvalidUsersForPrinterInstanceEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaInvalidUsersForPrinterInstanceEnumeration();
  	  
  	  Linux_SambaInvalidUsersForPrinterInstanceEnumeration(
  	   const Linux_SambaInvalidUsersForPrinterInstanceEnumeration& original);
  	  
  	  ~Linux_SambaInvalidUsersForPrinterInstanceEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaInvalidUsersForPrinterInstance& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaInvalidUsersForPrinterInstance& getElement(int pos) const;  	  
  	  
  	 void addElement(const Linux_SambaInvalidUsersForPrinterInstance& elementP);
  };
}
#endif

