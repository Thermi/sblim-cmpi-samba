/**
 *  Linux_SambaSharePrinterBrowseOptionsRepositoryInstance.h
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


#ifndef Linux_SambaSharePrinterBrowseOptionsRepositoryInstance_h
#define Linux_SambaSharePrinterBrowseOptionsRepositoryInstance_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaSharePrinterBrowseOptionsInstanceName.h"

namespace genProvider {

  class Linux_SambaSharePrinterBrowseOptionsRepositoryInstance {
  public:
       Linux_SambaSharePrinterBrowseOptionsRepositoryInstance();
  	
       Linux_SambaSharePrinterBrowseOptionsRepositoryInstance
  	    (const Linux_SambaSharePrinterBrowseOptionsRepositoryInstance& original);
  	   
       Linux_SambaSharePrinterBrowseOptionsRepositoryInstance
        (const CmpiInstance& inst, const char* instanceNamespace);
  	 
       ~Linux_SambaSharePrinterBrowseOptionsRepositoryInstance();
       
       Linux_SambaSharePrinterBrowseOptionsRepositoryInstance& operator=
  	    (const Linux_SambaSharePrinterBrowseOptionsRepositoryInstance& original);
       
       CmpiInstance getCmpiInstance(const char** properties=0) const;
       
       unsigned int isInstanceNameSet() const;
       void setInstanceName(
        const Linux_SambaSharePrinterBrowseOptionsInstanceName& val);        
       const Linux_SambaSharePrinterBrowseOptionsInstanceName&
        getInstanceName() const;
       
  private:
       void init();
       void init(const Linux_SambaSharePrinterBrowseOptionsRepositoryInstance& original);
       void reset();
       
       Linux_SambaSharePrinterBrowseOptionsInstanceName m_instanceName;
       
       struct isSetType{
       	 unsigned int instanceName:1;
       } isSet;
  };
  
  
  struct Linux_SambaSharePrinterBrowseOptionsRepositoryInstanceEnumerationElement{
  	Linux_SambaSharePrinterBrowseOptionsRepositoryInstance* m_elementP;
  	Linux_SambaSharePrinterBrowseOptionsRepositoryInstanceEnumerationElement* m_nextP;
  	
  	Linux_SambaSharePrinterBrowseOptionsRepositoryInstanceEnumerationElement();
  	~Linux_SambaSharePrinterBrowseOptionsRepositoryInstanceEnumerationElement();  	
  };
  

  class Linux_SambaSharePrinterBrowseOptionsRepositoryInstanceEnumeration {
  	private:
  	  Linux_SambaSharePrinterBrowseOptionsRepositoryInstanceEnumerationElement* firstElementP;
  	  Linux_SambaSharePrinterBrowseOptionsRepositoryInstanceEnumerationElement* currentElementP;
  	  Linux_SambaSharePrinterBrowseOptionsRepositoryInstanceEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaSharePrinterBrowseOptionsRepositoryInstanceEnumeration();
  	  
  	  Linux_SambaSharePrinterBrowseOptionsRepositoryInstanceEnumeration(
  	   const Linux_SambaSharePrinterBrowseOptionsRepositoryInstanceEnumeration& original);
  	  
  	  ~Linux_SambaSharePrinterBrowseOptionsRepositoryInstanceEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaSharePrinterBrowseOptionsRepositoryInstance& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaSharePrinterBrowseOptionsRepositoryInstance& getElement(int pos) const;  	  
  	  
  	 void addElement(const Linux_SambaSharePrinterBrowseOptionsRepositoryInstance& elementP);
  };
}
#endif

