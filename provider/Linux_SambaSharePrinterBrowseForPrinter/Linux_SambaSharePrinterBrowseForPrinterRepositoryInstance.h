/**
 *  Linux_SambaSharePrinterBrowseForPrinterRepositoryInstance.h
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


#ifndef Linux_SambaSharePrinterBrowseForPrinterRepositoryInstance_h
#define Linux_SambaSharePrinterBrowseForPrinterRepositoryInstance_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaSharePrinterBrowseForPrinterInstanceName.h"

namespace genProvider {

  class Linux_SambaSharePrinterBrowseForPrinterRepositoryInstance {
  public:
       Linux_SambaSharePrinterBrowseForPrinterRepositoryInstance();
  	
       Linux_SambaSharePrinterBrowseForPrinterRepositoryInstance
  	    (const Linux_SambaSharePrinterBrowseForPrinterRepositoryInstance& original);
  	   
       Linux_SambaSharePrinterBrowseForPrinterRepositoryInstance
        (const CmpiInstance& inst, const char* instanceNamespace);
  	 
       ~Linux_SambaSharePrinterBrowseForPrinterRepositoryInstance();
       
       Linux_SambaSharePrinterBrowseForPrinterRepositoryInstance& operator=
  	    (const Linux_SambaSharePrinterBrowseForPrinterRepositoryInstance& original);
       
       CmpiInstance getCmpiInstance(const char** properties=0) const;
       
       unsigned int isInstanceNameSet() const;
       void setInstanceName(
        const Linux_SambaSharePrinterBrowseForPrinterInstanceName& val);        
       const Linux_SambaSharePrinterBrowseForPrinterInstanceName&
        getInstanceName() const;
       
  private:
       void init();
       void init(const Linux_SambaSharePrinterBrowseForPrinterRepositoryInstance& original);
       void reset();
       
       Linux_SambaSharePrinterBrowseForPrinterInstanceName m_instanceName;
       
       struct isSetType{
       	 unsigned int instanceName:1;
       } isSet;
  };
  
  
  struct Linux_SambaSharePrinterBrowseForPrinterRepositoryInstanceEnumerationElement{
  	Linux_SambaSharePrinterBrowseForPrinterRepositoryInstance* m_elementP;
  	Linux_SambaSharePrinterBrowseForPrinterRepositoryInstanceEnumerationElement* m_nextP;
  	
  	Linux_SambaSharePrinterBrowseForPrinterRepositoryInstanceEnumerationElement();
  	~Linux_SambaSharePrinterBrowseForPrinterRepositoryInstanceEnumerationElement();  	
  };
  

  class Linux_SambaSharePrinterBrowseForPrinterRepositoryInstanceEnumeration {
  	private:
  	  Linux_SambaSharePrinterBrowseForPrinterRepositoryInstanceEnumerationElement* firstElementP;
  	  Linux_SambaSharePrinterBrowseForPrinterRepositoryInstanceEnumerationElement* currentElementP;
  	  Linux_SambaSharePrinterBrowseForPrinterRepositoryInstanceEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaSharePrinterBrowseForPrinterRepositoryInstanceEnumeration();
  	  
  	  Linux_SambaSharePrinterBrowseForPrinterRepositoryInstanceEnumeration(
  	   const Linux_SambaSharePrinterBrowseForPrinterRepositoryInstanceEnumeration& original);
  	  
  	  ~Linux_SambaSharePrinterBrowseForPrinterRepositoryInstanceEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaSharePrinterBrowseForPrinterRepositoryInstance& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaSharePrinterBrowseForPrinterRepositoryInstance& getElement(int pos) const;  	  
  	  
  	 void addElement(const Linux_SambaSharePrinterBrowseForPrinterRepositoryInstance& elementP);
  };
}
#endif

