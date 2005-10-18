/**
 *  Linux_SambaSharePrinterBrowseOptionsInstanceName.h
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


#ifndef Linux_SambaSharePrinterBrowseOptionsInstanceName_h
#define Linux_SambaSharePrinterBrowseOptionsInstanceName_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"
#include "ArrayConverter.h"
#include "CmpiErrorFormater.h"

namespace genProvider {

  class Linux_SambaSharePrinterBrowseOptionsInstanceName {
  public:
       Linux_SambaSharePrinterBrowseOptionsInstanceName();
  	
       Linux_SambaSharePrinterBrowseOptionsInstanceName
  	    (const Linux_SambaSharePrinterBrowseOptionsInstanceName& original);
  	   
       Linux_SambaSharePrinterBrowseOptionsInstanceName
        (const CmpiObjectPath& path);
  	 
       ~Linux_SambaSharePrinterBrowseOptionsInstanceName();
       
       Linux_SambaSharePrinterBrowseOptionsInstanceName& operator=
  	    (const Linux_SambaSharePrinterBrowseOptionsInstanceName& original);
       
       CmpiObjectPath getObjectPath() const;
       
       void fillKeys(CmpiInstance& cmpiInstance) const;
       
       unsigned int isNameSpaceSet() const;
       void setNamespace(const char * val, int makeCopy = 1);
       const char * getNamespace() const;

       unsigned int isInstanceIDSet() const;
       void setInstanceID(const char* val, int makeCopy = 1);
       const char* getInstanceID() const;

       unsigned int isNameSet() const;
       void setName(const char* val, int makeCopy = 1);
       const char* getName() const;
       
  private:
       void init();
       void init(const Linux_SambaSharePrinterBrowseOptionsInstanceName& original);
       void reset();
       
       const char* m_CIMClassNameP;
       const char* m_namespace;
       const char* m_InstanceID;
       const char* m_Name;
       
       struct isSetType{
       	 unsigned int m_namespace:1;
         unsigned int InstanceID:1;
         unsigned int Name:1;
       } isSet;
  };
  
  
  struct Linux_SambaSharePrinterBrowseOptionsInstanceNameEnumerationElement{
  	Linux_SambaSharePrinterBrowseOptionsInstanceName* m_elementP;
  	Linux_SambaSharePrinterBrowseOptionsInstanceNameEnumerationElement* m_nextP;
  	
  	Linux_SambaSharePrinterBrowseOptionsInstanceNameEnumerationElement();
  	~Linux_SambaSharePrinterBrowseOptionsInstanceNameEnumerationElement();  	
  };
  

  class Linux_SambaSharePrinterBrowseOptionsInstanceNameEnumeration {
  	private:
  	  Linux_SambaSharePrinterBrowseOptionsInstanceNameEnumerationElement* firstElementP;
  	  Linux_SambaSharePrinterBrowseOptionsInstanceNameEnumerationElement* currentElementP;
  	  Linux_SambaSharePrinterBrowseOptionsInstanceNameEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaSharePrinterBrowseOptionsInstanceNameEnumeration();
  	  
  	  Linux_SambaSharePrinterBrowseOptionsInstanceNameEnumeration(const CmpiArray& arr);
  	  
  	  Linux_SambaSharePrinterBrowseOptionsInstanceNameEnumeration(
  	   const Linux_SambaSharePrinterBrowseOptionsInstanceNameEnumeration& original);
  	  
  	  ~Linux_SambaSharePrinterBrowseOptionsInstanceNameEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaSharePrinterBrowseOptionsInstanceName& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaSharePrinterBrowseOptionsInstanceName& getElement(int pos) const;  	  
  	  
  	  //no copy of the element is done
  	  void addElement(const Linux_SambaSharePrinterBrowseOptionsInstanceName& elementP);
  	  
  	  operator CmpiArray() const;
  };
}
#endif

