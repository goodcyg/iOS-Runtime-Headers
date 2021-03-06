/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface _MRAudioBufferProtobuf : PBCodable <NSCopying> {
    NSData *_contents;
    _MRAudioFormatSettingsProtobuf *_formatSettings;
    struct { 
        unsigned int maximumPacketSize : 1; 
        unsigned int packetCapacity : 1; 
        unsigned int packetCount : 1; 
    } _has;
    long long _maximumPacketSize;
    long long _packetCapacity;
    long long _packetCount;
    NSMutableArray *_packetDescriptions;
}

@property (nonatomic, retain) NSData *contents;
@property (nonatomic, retain) _MRAudioFormatSettingsProtobuf *formatSettings;
@property (nonatomic, readonly) BOOL hasContents;
@property (nonatomic, readonly) BOOL hasFormatSettings;
@property (nonatomic) BOOL hasMaximumPacketSize;
@property (nonatomic) BOOL hasPacketCapacity;
@property (nonatomic) BOOL hasPacketCount;
@property (nonatomic) long long maximumPacketSize;
@property (nonatomic) long long packetCapacity;
@property (nonatomic) long long packetCount;
@property (nonatomic, retain) NSMutableArray *packetDescriptions;

- (void)addPacketDescriptions:(id)arg1;
- (void)clearPacketDescriptions;
- (id)contents;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)formatSettings;
- (BOOL)hasContents;
- (BOOL)hasFormatSettings;
- (BOOL)hasMaximumPacketSize;
- (BOOL)hasPacketCapacity;
- (BOOL)hasPacketCount;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (long long)maximumPacketSize;
- (void)mergeFrom:(id)arg1;
- (long long)packetCapacity;
- (long long)packetCount;
- (id)packetDescriptions;
- (id)packetDescriptionsAtIndex:(unsigned int)arg1;
- (unsigned int)packetDescriptionsCount;
- (BOOL)readFrom:(id)arg1;
- (void)setContents:(id)arg1;
- (void)setFormatSettings:(id)arg1;
- (void)setHasMaximumPacketSize:(BOOL)arg1;
- (void)setHasPacketCapacity:(BOOL)arg1;
- (void)setHasPacketCount:(BOOL)arg1;
- (void)setMaximumPacketSize:(long long)arg1;
- (void)setPacketCapacity:(long long)arg1;
- (void)setPacketCount:(long long)arg1;
- (void)setPacketDescriptions:(id)arg1;
- (void)writeTo:(id)arg1;

@end
