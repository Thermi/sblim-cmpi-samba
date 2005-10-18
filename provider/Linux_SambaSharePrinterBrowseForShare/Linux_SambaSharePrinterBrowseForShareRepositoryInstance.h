/**
 *  Linux_SambaSharePrinterBrowseForShareRepositoryInstance.h
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


#ifndef Linux_SambaSharePrinterBrowseForShareRepositoryInstance_h
#define Linux_SambaSharePrinterBrowseForShareRepositoryInstance_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaSharePrinterBrowseForShareInstanceName.h"

namespace genProvider {

  class Linux_SambaSharePrinterBrowseForShareRepositoryInstance {
  public:
       Linux_SambaSharePrinterBrowseForShareRepositoryInstance();
  	
       Linux_SambaSharePrinterBrowseForShareRepositoryInstance
  	    (const Linux_SambaSharePrinterBrowseForShareRepositoryInstance& original);
  	   
       Linux_SambaSharePrinterBrowseForShareRepositoryInstance
        (const CmpiInstance& inst, const char* instanceNamespace);
  	 
       ~Linux_SambaSharePrinterBrowseForShareRepositoryInstance();
       
       Linux_SambaSharePrinterBrowseForShareRepositoryInstance& operator=
  	    (const Linux_SambaSharePrinterBrowseForShareRepositoryInstance& original);
       
       CmpiInstance getCmpiInstance(const char** properties=0) const;
       
       unsigned int isInstanceNameSet() const;
       void setInstanceName(
        const Linux_SambaSharePrinterBrowseForShareInstanceName& val);        
       const Linux_SambaSharePrinterBrowseForShareInstanceName&
        getInstanceName() const;
       
  private:
       void init();
       void init(const Linux_SambaSharePrinterBrowseForShareRepositoryInstance& original);
       void reset();
       
       Linux_SambaSharePrinterBrowseForShareInstanceName m_instanceName;
       
       struct isSetType{
       	 unsigned int instanceName:1;
       } isSet;
  };
  
  
  struct Linux_SambaSharePrinterBrowseForShareRepositoryInstanceEnumerationElement{
  	Linux_SambaSharePrinterBrowseForShareRepositoryInstance* m_elementP;
  	Linux_SambaSharePrinterBrowseForShareRepositoryInstanceEnumerationElement* m_nextP;
  	
  	Linux_SambaSharePrinterBrowseForShareRepositoryInstanceEnumerationElement();
  	~Linux_SambaSharePrinterBrowseForShareRepositoryInstanceEnumerationElement();  	
  };
  

  class Linux_SambaSharePrinterBrowseForShareRepositoryInstanceEnumeration {
  	private:
  	  Linux_SambaSharePrinterBrowseForShareRepositoryInstanceEnumerationElement* firstElementP;
  	  Linux_SambaSharePrinterBrowseForShareRepositoryInstanceEnumerationElement* currentElementP;
  	  Linux_SambaSharePrinterBrowseForShareRepositoryInstanceEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaSharePrinterBrowseForShareRepositoryInstanceEnumeration();
  	  
  	  Linux_SambaSharePrinterBrowseForShareRepositoryInstanceEnumeration(
  	   const Linux_SambaSharePrinterBrowseForShareRepositoryInstanceEnumeration& original);
  	  
  	  ~Linux_SambaSharePrinterBrowseForShareRepositoryInstanceEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaSharePrinterBrowseForShareRepositoryInstance& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaSharePrinterBrowseForShareRepositoryInstance& getElement(int pos) const;  	  
  	  
  	 void addElement(const Linux_SambaSharePrinterBrowseForShareRepositoryInstance& elementP);
  };
}
#endif

