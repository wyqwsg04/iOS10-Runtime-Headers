/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
 */

@interface _NMRSpecializedQueueProtobuf : PBCodable <NSCopying> {
    struct { 
        unsigned int queueType : 1; 
    }  _has;
    NSString * _identifier;
    NSString * _localizedTitle;
    unsigned int  _queueType;
    NSString * _radioStationID;
}

@property (nonatomic, readonly) bool hasIdentifier;
@property (nonatomic, readonly) bool hasLocalizedTitle;
@property (nonatomic) bool hasQueueType;
@property (nonatomic, readonly) bool hasRadioStationID;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, retain) NSString *localizedTitle;
@property (nonatomic) unsigned int queueType;
@property (nonatomic, retain) NSString *radioStationID;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasIdentifier;
- (bool)hasLocalizedTitle;
- (bool)hasQueueType;
- (bool)hasRadioStationID;
- (unsigned long long)hash;
- (id)identifier;
- (bool)isEqual:(id)arg1;
- (id)localizedTitle;
- (void)mergeFrom:(id)arg1;
- (unsigned int)queueType;
- (id)radioStationID;
- (bool)readFrom:(id)arg1;
- (void)setHasQueueType:(bool)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setLocalizedTitle:(id)arg1;
- (void)setQueueType:(unsigned int)arg1;
- (void)setRadioStationID:(id)arg1;
- (void)writeTo:(id)arg1;

@end
