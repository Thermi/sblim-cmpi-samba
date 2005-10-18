/**
 *  Linux_SambaShareOptionsManualInstance.h
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


#ifndef Linux_SambaShareOptionsManualInstance_h
#define Linux_SambaShareOptionsManualInstance_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaShareOptionsInstanceName.h"

namespace genProvider {

  class Linux_SambaShareOptionsManualInstance {
  public:
       Linux_SambaShareOptionsManualInstance();
  	
       Linux_SambaShareOptionsManualInstance
  	    (const Linux_SambaShareOptionsManualInstance& original);
  	   
       Linux_SambaShareOptionsManualInstance
        (const CmpiInstance& inst, const char* instanceNamespace);
  	 
       ~Linux_SambaShareOptionsManualInstance();
       
       Linux_SambaShareOptionsManualInstance& operator=
  	    (const Linux_SambaShareOptionsManualInstance& original);
       
       CmpiInstance getCmpiInstance(const char** properties=0) const;
       
       unsigned int isInstanceNameSet() const;
       void setInstanceName(
        const Linux_SambaShareOptionsInstanceName& val);        
       const Linux_SambaShareOptionsInstanceName&
        getInstanceName() const;

       unsigned int isAvailableSet() const;
       void setAvailable(const CMPIBoolean val);
       const CMPIBoolean getAvailable() const;

       unsigned int isCommentSet() const;
       void setComment(const char* val, int makeCopy = 1);
       const char* getComment() const;

       unsigned int isPathSet() const;
       void setPath(const char* val, int makeCopy = 1);
       const char* getPath() const;

       unsigned int isPrintableSet() const;
       void setPrintable(const CMPIBoolean val);
       const CMPIBoolean getPrintable() const;
       
  private:
       void init();
       void init(const Linux_SambaShareOptionsManualInstance& original);
       void reset();
       
       Linux_SambaShareOptionsInstanceName m_instanceName;
       CMPIBoolean m_Available;
       const char* m_Comment;
       const char* m_Path;
       CMPIBoolean m_Printable;
       
       struct isSetType{
       	 unsigned int instanceName:1;
         unsigned int Available:1;
         unsigned int Comment:1;
         unsigned int Path:1;
         unsigned int Printable:1;
       } isSet;
  };
  
  
  struct Linux_SambaShareOptionsManualInstanceEnumerationElement{
  	Linux_SambaShareOptionsManualInstance* m_elementP;
  	Linux_SambaShareOptionsManualInstanceEnumerationElement* m_nextP;
  	
  	Linux_SambaShareOptionsManualInstanceEnumerationElement();
  	~Linux_SambaShareOptionsManualInstanceEnumerationElement();  	
  };
  

  class Linux_SambaShareOptionsManualInstanceEnumeration {
  	private:
  	  Linux_SambaShareOptionsManualInstanceEnumerationElement* firstElementP;
  	  Linux_SambaShareOptionsManualInstanceEnumerationElement* currentElementP;
  	  Linux_SambaShareOptionsManualInstanceEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaShareOptionsManualInstanceEnumeration();
  	  
  	  Linux_SambaShareOptionsManualInstanceEnumeration(
  	   const Linux_SambaShareOptionsManualInstanceEnumeration& original);
  	  
  	  ~Linux_SambaShareOptionsManualInstanceEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaShareOptionsManualInstance& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaShareOptionsManualInstance& getElement(int pos) const;  	  
  	  
  	 void addElement(const Linux_SambaShareOptionsManualInstance& elementP);
  };
}
#endif

