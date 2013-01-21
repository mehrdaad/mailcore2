#ifndef __MAILCORE_MCIMAPFOLDER_H

#define __MAILCORE_MCIMAPFOLDER_H

#include <mailcore/MCBaseTypes.h>
#include <mailcore/MCMessageConstants.h>

#ifdef __cplusplus

namespace mailcore {
	
	class IMAPFolder : public Object {
	public:
		IMAPFolder();
		virtual ~IMAPFolder();
		
		virtual void setPath(String * path);
		virtual String * path();
		
		virtual void setDelimiter(char delimiter);
		virtual char delimiter();
		
		virtual void setFlags(IMAPFolderFlag flags);
		virtual IMAPFolderFlag flags();
        
    public: // subclass behavior
		IMAPFolder(IMAPFolder * other);
		virtual Object * copy();
        
	private:
		String * mPath;
		char mDelimiter;
		IMAPFolderFlag mFlags;
		void init();
	};
	
}

#endif

#endif
