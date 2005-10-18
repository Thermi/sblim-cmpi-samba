/**
 *  Linux_SambaWriteListForPrinterRepositoryInstance.h
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


#ifndef Linux_SambaWriteListForPrinterRepositoryInstance_h
#define Linux_SambaWriteListForPrinterRepositoryInstance_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaWriteListForPrinterInstanceName.h"

namespace genProvider {

  class Linux_SambaWriteListForPrinterRepositoryInstance {
  public:
       Linux_SambaWriteListForPrinterRepositoryInstance();
  	
       Linux_SambaWriteListForPrinterRepositoryInstance
  	    (const Linux_SambaWriteListForPrinterRepositoryInstance& original);
  	   
       Linux_SambaWriteListForPrinterRepositoryInstance
        (const CmpiInstance& inst, const char* instanceNamespace);
  	 
       ~Linux_SambaWriteListForPrinterRepositoryInstance();
       
       Linux_SambaWriteListForPrinterRepositoryInstance& operator=
  	    (const Linux_SambaWriteListForPrinterRepositoryInstance& original);
       
       CmpiInstance getCmpiInstance(const char** properties=0) const;
       
       unsigned int isInstanceNameSet() const;
       void setInstanceName(
        const Linux_SambaWriteListForPrinterInstanceName& val);        
       const Linux_SambaWriteListForPrinterInstanceName&
        getInstanceName() const;
       
  private:
       void init();
       void init(const Linux_SambaWriteListForPrinterRepositoryInstance& original);
       void reset();
       
       Linux_SambaWriteListForPrinterInstanceName m_instanceName;
       
       struct isSetType{
       	 unsigned int instanceName:1;
       } isSet;
  };
  
  
  struct Linux_SambaWriteListForPrinterRepositoryInstanceEnumerationElement{
  	Linux_SambaWriteListForPrinterRepositoryInstance* m_elementP;
  	Linux_SambaWriteListForPrinterRepositoryInstanceEnumerationElement* m_nextP;
  	
  	Linux_SambaWriteListForPrinterRepositoryInstanceEnumerationElement();
  	~Linux_SambaWriteListForPrinterRepositoryInstanceEnumerationElement();  	
  };
  

  class Linux_SambaWriteListForPrinterRepositoryInstanceEnumeration {
  	private:
  	  Linux_SambaWriteListForPrinterRepositoryInstanceEnumerationElement* firstElementP;
  	  Linux_SambaWriteListForPrinterRepositoryInstanceEnumerationElement* currentElementP;
  	  Linux_SambaWriteListForPrinterRepositoryInstanceEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaWriteListForPrinterRepositoryInstanceEnumeration();
  	  
  	  Linux_SambaWriteListForPrinterRepositoryInstanceEnumeration(
  	   const Linux_SambaWriteListForPrinterRepositoryInstanceEnumeration& original);
  	  
  	  ~Linux_SambaWriteListForPrinterRepositoryInstanceEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaWriteListForPrinterRepositoryInstance& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaWriteListForPrinterRepositoryInstance& getElement(int pos) const;  	  
  	  
  	 void addElement(const Linux_SambaWriteListForPrinterRepositoryInstance& elementP);
  };
}
#endif

