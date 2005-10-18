/**
 *  Linux_SambaForceUserForPrinterRepositoryInstance.h
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


#ifndef Linux_SambaForceUserForPrinterRepositoryInstance_h
#define Linux_SambaForceUserForPrinterRepositoryInstance_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaForceUserForPrinterInstanceName.h"

namespace genProvider {

  class Linux_SambaForceUserForPrinterRepositoryInstance {
  public:
       Linux_SambaForceUserForPrinterRepositoryInstance();
  	
       Linux_SambaForceUserForPrinterRepositoryInstance
  	    (const Linux_SambaForceUserForPrinterRepositoryInstance& original);
  	   
       Linux_SambaForceUserForPrinterRepositoryInstance
        (const CmpiInstance& inst, const char* instanceNamespace);
  	 
       ~Linux_SambaForceUserForPrinterRepositoryInstance();
       
       Linux_SambaForceUserForPrinterRepositoryInstance& operator=
  	    (const Linux_SambaForceUserForPrinterRepositoryInstance& original);
       
       CmpiInstance getCmpiInstance(const char** properties=0) const;
       
       unsigned int isInstanceNameSet() const;
       void setInstanceName(
        const Linux_SambaForceUserForPrinterInstanceName& val);        
       const Linux_SambaForceUserForPrinterInstanceName&
        getInstanceName() const;
       
  private:
       void init();
       void init(const Linux_SambaForceUserForPrinterRepositoryInstance& original);
       void reset();
       
       Linux_SambaForceUserForPrinterInstanceName m_instanceName;
       
       struct isSetType{
       	 unsigned int instanceName:1;
       } isSet;
  };
  
  
  struct Linux_SambaForceUserForPrinterRepositoryInstanceEnumerationElement{
  	Linux_SambaForceUserForPrinterRepositoryInstance* m_elementP;
  	Linux_SambaForceUserForPrinterRepositoryInstanceEnumerationElement* m_nextP;
  	
  	Linux_SambaForceUserForPrinterRepositoryInstanceEnumerationElement();
  	~Linux_SambaForceUserForPrinterRepositoryInstanceEnumerationElement();  	
  };
  

  class Linux_SambaForceUserForPrinterRepositoryInstanceEnumeration {
  	private:
  	  Linux_SambaForceUserForPrinterRepositoryInstanceEnumerationElement* firstElementP;
  	  Linux_SambaForceUserForPrinterRepositoryInstanceEnumerationElement* currentElementP;
  	  Linux_SambaForceUserForPrinterRepositoryInstanceEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaForceUserForPrinterRepositoryInstanceEnumeration();
  	  
  	  Linux_SambaForceUserForPrinterRepositoryInstanceEnumeration(
  	   const Linux_SambaForceUserForPrinterRepositoryInstanceEnumeration& original);
  	  
  	  ~Linux_SambaForceUserForPrinterRepositoryInstanceEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaForceUserForPrinterRepositoryInstance& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaForceUserForPrinterRepositoryInstance& getElement(int pos) const;  	  
  	  
  	 void addElement(const Linux_SambaForceUserForPrinterRepositoryInstance& elementP);
  };
}
#endif

