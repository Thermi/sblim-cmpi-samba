/**
 *  Linux_SambaReadListForPrinterRepositoryInstance.h
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


#ifndef Linux_SambaReadListForPrinterRepositoryInstance_h
#define Linux_SambaReadListForPrinterRepositoryInstance_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaReadListForPrinterInstanceName.h"

namespace genProvider {

  class Linux_SambaReadListForPrinterRepositoryInstance {
  public:
       Linux_SambaReadListForPrinterRepositoryInstance();
  	
       Linux_SambaReadListForPrinterRepositoryInstance
  	    (const Linux_SambaReadListForPrinterRepositoryInstance& original);
  	   
       Linux_SambaReadListForPrinterRepositoryInstance
        (const CmpiInstance& inst, const char* instanceNamespace);
  	 
       ~Linux_SambaReadListForPrinterRepositoryInstance();
       
       Linux_SambaReadListForPrinterRepositoryInstance& operator=
  	    (const Linux_SambaReadListForPrinterRepositoryInstance& original);
       
       CmpiInstance getCmpiInstance(const char** properties=0) const;
       
       unsigned int isInstanceNameSet() const;
       void setInstanceName(
        const Linux_SambaReadListForPrinterInstanceName& val);        
       const Linux_SambaReadListForPrinterInstanceName&
        getInstanceName() const;
       
  private:
       void init();
       void init(const Linux_SambaReadListForPrinterRepositoryInstance& original);
       void reset();
       
       Linux_SambaReadListForPrinterInstanceName m_instanceName;
       
       struct isSetType{
       	 unsigned int instanceName:1;
       } isSet;
  };
  
  
  struct Linux_SambaReadListForPrinterRepositoryInstanceEnumerationElement{
  	Linux_SambaReadListForPrinterRepositoryInstance* m_elementP;
  	Linux_SambaReadListForPrinterRepositoryInstanceEnumerationElement* m_nextP;
  	
  	Linux_SambaReadListForPrinterRepositoryInstanceEnumerationElement();
  	~Linux_SambaReadListForPrinterRepositoryInstanceEnumerationElement();  	
  };
  

  class Linux_SambaReadListForPrinterRepositoryInstanceEnumeration {
  	private:
  	  Linux_SambaReadListForPrinterRepositoryInstanceEnumerationElement* firstElementP;
  	  Linux_SambaReadListForPrinterRepositoryInstanceEnumerationElement* currentElementP;
  	  Linux_SambaReadListForPrinterRepositoryInstanceEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaReadListForPrinterRepositoryInstanceEnumeration();
  	  
  	  Linux_SambaReadListForPrinterRepositoryInstanceEnumeration(
  	   const Linux_SambaReadListForPrinterRepositoryInstanceEnumeration& original);
  	  
  	  ~Linux_SambaReadListForPrinterRepositoryInstanceEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaReadListForPrinterRepositoryInstance& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaReadListForPrinterRepositoryInstance& getElement(int pos) const;  	  
  	  
  	 void addElement(const Linux_SambaReadListForPrinterRepositoryInstance& elementP);
  };
}
#endif

