/**
 *  Linux_SambaSharePrinterBrowseForShareInstanceName.h
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


#ifndef Linux_SambaSharePrinterBrowseForShareInstanceName_h
#define Linux_SambaSharePrinterBrowseForShareInstanceName_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"
#include "ArrayConverter.h"
#include "CmpiErrorFormater.h"
#include "Linux_SambaSharePrinterBrowseOptionsInstanceName.h"
#include "Linux_SambaShareOptionsInstanceName.h"

namespace genProvider {

  class Linux_SambaSharePrinterBrowseForShareInstanceName {
  public:
       Linux_SambaSharePrinterBrowseForShareInstanceName();
  	
       Linux_SambaSharePrinterBrowseForShareInstanceName
  	    (const Linux_SambaSharePrinterBrowseForShareInstanceName& original);
  	   
       Linux_SambaSharePrinterBrowseForShareInstanceName
        (const CmpiObjectPath& path);
  	 
       ~Linux_SambaSharePrinterBrowseForShareInstanceName();
       
       Linux_SambaSharePrinterBrowseForShareInstanceName& operator=
  	    (const Linux_SambaSharePrinterBrowseForShareInstanceName& original);
       
       CmpiObjectPath getObjectPath() const;
       
       void fillKeys(CmpiInstance& cmpiInstance) const;
       
       unsigned int isNameSpaceSet() const;
       void setNamespace(const char * val, int makeCopy = 1);
       const char * getNamespace() const;

       unsigned int isSettingDataSet() const;
       void setSettingData(const Linux_SambaSharePrinterBrowseOptionsInstanceName& val);
       const Linux_SambaSharePrinterBrowseOptionsInstanceName& getSettingData() const;

       unsigned int isManagedElementSet() const;
       void setManagedElement(const Linux_SambaShareOptionsInstanceName& val);
       const Linux_SambaShareOptionsInstanceName& getManagedElement() const;
       
  private:
       void init();
       void init(const Linux_SambaSharePrinterBrowseForShareInstanceName& original);
       void reset();
       
       const char* m_CIMClassNameP;
       const char* m_namespace;
       Linux_SambaSharePrinterBrowseOptionsInstanceName m_SettingData;
       Linux_SambaShareOptionsInstanceName m_ManagedElement;
       
       struct isSetType{
       	 unsigned int m_namespace:1;
         unsigned int SettingData:1;
         unsigned int ManagedElement:1;
       } isSet;
  };
  
  
  struct Linux_SambaSharePrinterBrowseForShareInstanceNameEnumerationElement{
  	Linux_SambaSharePrinterBrowseForShareInstanceName* m_elementP;
  	Linux_SambaSharePrinterBrowseForShareInstanceNameEnumerationElement* m_nextP;
  	
  	Linux_SambaSharePrinterBrowseForShareInstanceNameEnumerationElement();
  	~Linux_SambaSharePrinterBrowseForShareInstanceNameEnumerationElement();  	
  };
  

  class Linux_SambaSharePrinterBrowseForShareInstanceNameEnumeration {
  	private:
  	  Linux_SambaSharePrinterBrowseForShareInstanceNameEnumerationElement* firstElementP;
  	  Linux_SambaSharePrinterBrowseForShareInstanceNameEnumerationElement* currentElementP;
  	  Linux_SambaSharePrinterBrowseForShareInstanceNameEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaSharePrinterBrowseForShareInstanceNameEnumeration();
  	  
  	  Linux_SambaSharePrinterBrowseForShareInstanceNameEnumeration(const CmpiArray& arr);
  	  
  	  Linux_SambaSharePrinterBrowseForShareInstanceNameEnumeration(
  	   const Linux_SambaSharePrinterBrowseForShareInstanceNameEnumeration& original);
  	  
  	  ~Linux_SambaSharePrinterBrowseForShareInstanceNameEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaSharePrinterBrowseForShareInstanceName& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaSharePrinterBrowseForShareInstanceName& getElement(int pos) const;  	  
  	  
  	  //no copy of the element is done
  	  void addElement(const Linux_SambaSharePrinterBrowseForShareInstanceName& elementP);
  	  
  	  operator CmpiArray() const;
  };
}
#endif

