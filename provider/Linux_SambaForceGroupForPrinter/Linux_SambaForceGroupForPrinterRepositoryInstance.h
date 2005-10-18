/**
 *  Linux_SambaForceGroupForPrinterRepositoryInstance.h
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


#ifndef Linux_SambaForceGroupForPrinterRepositoryInstance_h
#define Linux_SambaForceGroupForPrinterRepositoryInstance_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaForceGroupForPrinterInstanceName.h"

namespace genProvider {

  class Linux_SambaForceGroupForPrinterRepositoryInstance {
  public:
       Linux_SambaForceGroupForPrinterRepositoryInstance();
  	
       Linux_SambaForceGroupForPrinterRepositoryInstance
  	    (const Linux_SambaForceGroupForPrinterRepositoryInstance& original);
  	   
       Linux_SambaForceGroupForPrinterRepositoryInstance
        (const CmpiInstance& inst, const char* instanceNamespace);
  	 
       ~Linux_SambaForceGroupForPrinterRepositoryInstance();
       
       Linux_SambaForceGroupForPrinterRepositoryInstance& operator=
  	    (const Linux_SambaForceGroupForPrinterRepositoryInstance& original);
       
       CmpiInstance getCmpiInstance(const char** properties=0) const;
       
       unsigned int isInstanceNameSet() const;
       void setInstanceName(
        const Linux_SambaForceGroupForPrinterInstanceName& val);        
       const Linux_SambaForceGroupForPrinterInstanceName&
        getInstanceName() const;
       
  private:
       void init();
       void init(const Linux_SambaForceGroupForPrinterRepositoryInstance& original);
       void reset();
       
       Linux_SambaForceGroupForPrinterInstanceName m_instanceName;
       
       struct isSetType{
       	 unsigned int instanceName:1;
       } isSet;
  };
  
  
  struct Linux_SambaForceGroupForPrinterRepositoryInstanceEnumerationElement{
  	Linux_SambaForceGroupForPrinterRepositoryInstance* m_elementP;
  	Linux_SambaForceGroupForPrinterRepositoryInstanceEnumerationElement* m_nextP;
  	
  	Linux_SambaForceGroupForPrinterRepositoryInstanceEnumerationElement();
  	~Linux_SambaForceGroupForPrinterRepositoryInstanceEnumerationElement();  	
  };
  

  class Linux_SambaForceGroupForPrinterRepositoryInstanceEnumeration {
  	private:
  	  Linux_SambaForceGroupForPrinterRepositoryInstanceEnumerationElement* firstElementP;
  	  Linux_SambaForceGroupForPrinterRepositoryInstanceEnumerationElement* currentElementP;
  	  Linux_SambaForceGroupForPrinterRepositoryInstanceEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaForceGroupForPrinterRepositoryInstanceEnumeration();
  	  
  	  Linux_SambaForceGroupForPrinterRepositoryInstanceEnumeration(
  	   const Linux_SambaForceGroupForPrinterRepositoryInstanceEnumeration& original);
  	  
  	  ~Linux_SambaForceGroupForPrinterRepositoryInstanceEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaForceGroupForPrinterRepositoryInstance& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaForceGroupForPrinterRepositoryInstance& getElement(int pos) const;  	  
  	  
  	 void addElement(const Linux_SambaForceGroupForPrinterRepositoryInstance& elementP);
  };
}
#endif

