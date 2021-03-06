/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

@interface NPKProtoAddPassRequest : PBRequest <NSCopying> {
    NPKProtoCatalog * _catalog;
    struct { 
        unsigned int lastKnownResyncID : 1; 
        unsigned int resyncID : 1; 
    }  _has;
    unsigned int  _lastKnownResyncID;
    NPKProtoHash * _libraryHash;
    NPKProtoPass * _pass;
    unsigned int  _resyncID;
}

@property (nonatomic, retain) NPKProtoCatalog *catalog;
@property (nonatomic, readonly) bool hasCatalog;
@property (nonatomic) bool hasLastKnownResyncID;
@property (nonatomic, readonly) bool hasLibraryHash;
@property (nonatomic) bool hasResyncID;
@property (nonatomic) unsigned int lastKnownResyncID;
@property (nonatomic, retain) NPKProtoHash *libraryHash;
@property (nonatomic, retain) NPKProtoPass *pass;
@property (nonatomic) unsigned int resyncID;

- (void).cxx_destruct;
- (id)catalog;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCatalog;
- (bool)hasLastKnownResyncID;
- (bool)hasLibraryHash;
- (bool)hasResyncID;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (unsigned int)lastKnownResyncID;
- (id)libraryHash;
- (void)mergeFrom:(id)arg1;
- (id)pass;
- (bool)readFrom:(id)arg1;
- (unsigned int)resyncID;
- (void)setCatalog:(id)arg1;
- (void)setHasLastKnownResyncID:(bool)arg1;
- (void)setHasResyncID:(bool)arg1;
- (void)setLastKnownResyncID:(unsigned int)arg1;
- (void)setLibraryHash:(id)arg1;
- (void)setPass:(id)arg1;
- (void)setResyncID:(unsigned int)arg1;
- (void)writeTo:(id)arg1;

@end
