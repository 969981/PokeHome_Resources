.class public final Lgatewayprotocol/v1/UniversalRequestOuterClass$UniversalRequest;
.super Lcom/google/protobuf/GeneratedMessageLite;
.source "UniversalRequestOuterClass.java"

# interfaces
.implements Lgatewayprotocol/v1/UniversalRequestOuterClass$UniversalRequestOrBuilder;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lgatewayprotocol/v1/UniversalRequestOuterClass;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x19
    name = "UniversalRequest"
.end annotation

.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lgatewayprotocol/v1/UniversalRequestOuterClass$UniversalRequest$Payload;,
        Lgatewayprotocol/v1/UniversalRequestOuterClass$UniversalRequest$SharedData;,
        Lgatewayprotocol/v1/UniversalRequestOuterClass$UniversalRequest$Builder;,
        Lgatewayprotocol/v1/UniversalRequestOuterClass$UniversalRequest$PayloadOrBuilder;,
        Lgatewayprotocol/v1/UniversalRequestOuterClass$UniversalRequest$SharedDataOrBuilder;
    }
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Lcom/google/protobuf/GeneratedMessageLite<",
        "Lgatewayprotocol/v1/UniversalRequestOuterClass$UniversalRequest;",
        "Lgatewayprotocol/v1/UniversalRequestOuterClass$UniversalRequest$Builder;",
        ">;",
        "Lgatewayprotocol/v1/UniversalRequestOuterClass$UniversalRequestOrBuilder;"
    }
.end annotation


# static fields
.field private static final DEFAULT_INSTANCE:Lgatewayprotocol/v1/UniversalRequestOuterClass$UniversalRequest;

.field private static volatile PARSER:Lcom/google/protobuf/Parser; = null
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Lcom/google/protobuf/Parser<",
            "Lgatewayprotocol/v1/UniversalRequestOuterClass$UniversalRequest;",
            ">;"
        }
    .end annotation
.end field

.field public static final PAYLOAD_FIELD_NUMBER:I = 0x2

.field public static final SHARED_DATA_FIELD_NUMBER:I = 0x1


# instance fields
.field private bitField0_:I

.field private payload_:Lgatewayprotocol/v1/UniversalRequestOuterClass$UniversalRequest$Payload;

.field private sharedData_:Lgatewayprotocol/v1/UniversalRequestOuterClass$UniversalRequest$SharedData;


# direct methods
.method static constructor <clinit>()V
    .locals 2

    .line 6171
    new-instance v0, Lgatewayprotocol/v1/UniversalRequestOuterClass$UniversalRequest;

    invoke-direct {v0}, Lgatewayprotocol/v1/UniversalRequestOuterClass$UniversalRequest;-><init>()V

    .line 6174
    sput-object v0, Lgatewayprotocol/v1/UniversalRequestOuterClass$UniversalRequest;->DEFAULT_INSTANCE:Lgatewayprotocol/v1/UniversalRequestOuterClass$UniversalRequest;

    .line 6175
    const-class v1, Lgatewayprotocol/v1/UniversalRequestOuterClass$UniversalRequest;

    invoke-static {v1, v0}, Lcom/google/protobuf/GeneratedMessageLite;->registerDefaultInstance(Ljava/lang/Class;Lcom/google/protobuf/GeneratedMessageLite;)V

    return-void
.end method

.method private constructor <init>()V
    .locals 0

    .line 2101
    invoke-direct {p0}, Lcom/google/protobuf/GeneratedMessageLite;-><init>()V

    return-void
.end method

.method static synthetic access$10100()Lgatewayprotocol/v1/UniversalRequestOuterClass$UniversalRequest;
    .locals 1

    .line 2096
    sget-object v0, Lgatewayprotocol/v1/UniversalRequestOuterClass$UniversalRequest;->DEFAULT_INSTANCE:Lgatewayprotocol/v1/UniversalRequestOuterClass$UniversalRequest;

    return-object v0
.end method

.method static synthetic access$10200(Lgatewayprotocol/v1/UniversalRequestOuterClass$UniversalRequest;Lgatewayprotocol/v1/UniversalRequestOuterClass$UniversalRequest$SharedData;)V
    .locals 0

    .line 2096
    invoke-direct {p0, p1}, Lgatewayprotocol/v1/UniversalRequestOuterClass$UniversalRequest;->setSharedData(Lgatewayprotocol/v1/UniversalRequestOuterClass$UniversalRequest$SharedData;)V

    return-void
.end method

.method static synthetic access$10300(Lgatewayprotocol/v1/UniversalRequestOuterClass$UniversalRequest;Lgatewayprotocol/v1/UniversalRequestOuterClass$UniversalRequest$SharedData;)V
    .locals 0

    .line 2096
    invoke-direct {p0, p1}, Lgatewayprotocol/v1/UniversalRequestOuterClass$UniversalRequest;->mergeSharedData(Lgatewayprotocol/v1/UniversalRequestOuterClass$UniversalRequest$SharedData;)V

    return-void
.end method

.method static synthetic access$10400(Lgatewayprotocol/v1/UniversalRequestOuterClass$UniversalRequest;)V
    .locals 0

    .line 2096
    invoke-direct {p0}, Lgatewayprotocol/v1/UniversalRequestOuterClass$UniversalRequest;->clearSharedData()V

    return-void
.end method

.method static synthetic access$10500(Lgatewayprotocol/v1/UniversalRequestOuterClass$UniversalRequest;Lgatewayprotocol/v1/UniversalRequestOuterClass$UniversalRequest$Payload;)V
    .locals 0

    .line 2096
    invoke-direct {p0, p1}, Lgatewayprotocol/v1/UniversalRequestOuterClass$UniversalRequest;->setPayload(Lgatewayprotocol/v1/UniversalRequestOuterClass$UniversalRequest$Payload;)V

    return-void
.end method

.method static synthetic access$10600(Lgatewayprotocol/v1/UniversalRequestOuterClass$UniversalRequest;Lgatewayprotocol/v1/UniversalRequestOuterClass$UniversalRequest$Payload;)V
    .locals 0

    .line 2096
    invoke-direct {p0, p1}, Lgatewayprotocol/v1/UniversalRequestOuterClass$UniversalRequest;->mergePayload(Lgatewayprotocol/v1/UniversalRequestOuterClass$UniversalRequest$Payload;)V

    return-void
.end method

.method static synthetic access$10700(Lgatewayprotocol/v1/UniversalRequestOuterClass$UniversalRequest;)V
    .locals 0

    .line 2096
    invoke-direct {p0}, Lgatewayprotocol/v1/UniversalRequestOuterClass$UniversalRequest;->clearPayload()V

    return-void
.end method

.method private clearPayload()V
    .locals 1

    const/4 v0, 0x0

    .line 5866
    iput-object v0, p0, Lgatewayprotocol/v1/UniversalRequestOuterClass$UniversalRequest;->payload_:Lgatewayprotocol/v1/UniversalRequestOuterClass$UniversalRequest$Payload;

    .line 5867
    iget v0, p0, Lgatewayprotocol/v1/UniversalRequestOuterClass$UniversalRequest;->bitField0_:I

    and-int/lit8 v0, v0, -0x3

    iput v0, p0, Lgatewayprotocol/v1/UniversalRequestOuterClass$UniversalRequest;->bitField0_:I

    return-void
.end method

.method private clearSharedData()V
    .locals 1

    const/4 v0, 0x0

    .line 5800
    iput-object v0, p0, Lgatewayprotocol/v1/UniversalRequestOuterClass$UniversalRequest;->sharedData_:Lgatewayprotocol/v1/UniversalRequestOuterClass$UniversalRequest$SharedData;

    .line 5801
    iget v0, p0, Lgatewayprotocol/v1/UniversalRequestOuterClass$UniversalRequest;->bitField0_:I

    and-int/lit8 v0, v0, -0x2

    iput v0, p0, Lgatewayprotocol/v1/UniversalRequestOuterClass$UniversalRequest;->bitField0_:I

    return-void
.end method

.method public static getDefaultInstance()Lgatewayprotocol/v1/UniversalRequestOuterClass$UniversalRequest;
    .locals 1

    .line 6180
    sget-object v0, Lgatewayprotocol/v1/UniversalRequestOuterClass$UniversalRequest;->DEFAULT_INSTANCE:Lgatewayprotocol/v1/UniversalRequestOuterClass$UniversalRequest;

    return-object v0
.end method

.method private mergePayload(Lgatewayprotocol/v1/UniversalRequestOuterClass$UniversalRequest$Payload;)V
    .locals 2

    .line 5849
    invoke-virtual {p1}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    .line 5850
    iget-object v0, p0, Lgatewayprotocol/v1/UniversalRequestOuterClass$UniversalRequest;->payload_:Lgatewayprotocol/v1/UniversalRequestOuterClass$UniversalRequest$Payload;

    if-eqz v0, :cond_0

    .line 5851
    invoke-static {}, Lgatewayprotocol/v1/UniversalRequestOuterClass$UniversalRequest$Payload;->getDefaultInstance()Lgatewayprotocol/v1/UniversalRequestOuterClass$UniversalRequest$Payload;

    move-result-object v1

    if-eq v0, v1, :cond_0

    .line 5852
    iget-object v0, p0, Lgatewayprotocol/v1/UniversalRequestOuterClass$UniversalRequest;->payload_:Lgatewayprotocol/v1/UniversalRequestOuterClass$UniversalRequest$Payload;

    .line 5853
    invoke-static {v0}, Lgatewayprotocol/v1/UniversalRequestOuterClass$UniversalRequest$Payload;->newBuilder(Lgatewayprotocol/v1/UniversalRequestOuterClass$UniversalRequest$Payload;)Lgatewayprotocol/v1/UniversalRequestOuterClass$UniversalRequest$Payload$Builder;

    move-result-object v0

    invoke-virtual {v0, p1}, Lgatewayprotocol/v1/UniversalRequestOuterClass$UniversalRequest$Payload$Builder;->mergeFrom(Lcom/google/protobuf/GeneratedMessageLite;)Lcom/google/protobuf/GeneratedMessageLite$Builder;

    move-result-object p1

    check-cast p1, Lgatewayprotocol/v1/UniversalRequestOuterClass$UniversalRequest$Payload$Builder;

    invoke-virtual {p1}, Lgatewayprotocol/v1/UniversalRequestOuterClass$UniversalRequest$Payload$Builder;->buildPartial()Lcom/google/protobuf/GeneratedMessageLite;

    move-result-object p1

    check-cast p1, Lgatewayprotocol/v1/UniversalRequestOuterClass$UniversalRequest$Payload;

    iput-object p1, p0, Lgatewayprotocol/v1/UniversalRequestOuterClass$UniversalRequest;->payload_:Lgatewayprotocol/v1/UniversalRequestOuterClass$UniversalRequest$Payload;

    goto :goto_0

    .line 5855
    :cond_0
    iput-object p1, p0, Lgatewayprotocol/v1/UniversalRequestOuterClass$UniversalRequest;->payload_:Lgatewayprotocol/v1/UniversalRequestOuterClass$UniversalRequest$Payload;

    .line 5857
    :goto_0
    iget p1, p0, Lgatewayprotocol/v1/UniversalRequestOuterClass$UniversalRequest;->bitField0_:I

    or-int/lit8 p1, p1, 0x2

    iput p1, p0, Lgatewayprotocol/v1/UniversalRequestOuterClass$UniversalRequest;->bitField0_:I

    return-void
.end method

.method private mergeSharedData(Lgatewayprotocol/v1/UniversalRequestOuterClass$UniversalRequest$SharedData;)V
    .locals 2

    .line 5783
    invoke-virtual {p1}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    .line 5784
    iget-object v0, p0, Lgatewayprotocol/v1/UniversalRequestOuterClass$UniversalRequest;->sharedData_:Lgatewayprotocol/v1/UniversalRequestOuterClass$UniversalRequest$SharedData;

    if-eqz v0, :cond_0

    .line 5785
    invoke-static {}, Lgatewayprotocol/v1/UniversalRequestOuterClass$UniversalRequest$SharedData;->getDefaultInstance()Lgatewayprotocol/v1/UniversalRequestOuterClass$UniversalRequest$SharedData;

    move-result-object v1

    if-eq v0, v1, :cond_0

    .line 5786
    iget-object v0, p0, Lgatewayprotocol/v1/UniversalRequestOuterClass$UniversalRequest;->sharedData_:Lgatewayprotocol/v1/UniversalRequestOuterClass$UniversalRequest$SharedData;

    .line 5787
    invoke-static {v0}, Lgatewayprotocol/v1/UniversalRequestOuterClass$UniversalRequest$SharedData;->newBuilder(Lgatewayprotocol/v1/UniversalRequestOuterClass$UniversalRequest$SharedData;)Lgatewayprotocol/v1/UniversalRequestOuterClass$UniversalRequest$SharedData$Builder;

    move-result-object v0

    invoke-virtual {v0, p1}, Lgatewayprotocol/v1/UniversalRequestOuterClass$UniversalRequest$SharedData$Builder;->mergeFrom(Lcom/google/protobuf/GeneratedMessageLite;)Lcom/google/protobuf/GeneratedMessageLite$Builder;

    move-result-object p1

    check-cast p1, Lgatewayprotocol/v1/UniversalRequestOuterClass$UniversalRequest$SharedData$Builder;

    invoke-virtual {p1}, Lgatewayprotocol/v1/UniversalRequestOuterClass$UniversalRequest$SharedData$Builder;->buildPartial()Lcom/google/protobuf/GeneratedMessageLite;

    move-result-object p1

    check-cast p1, Lgatewayprotocol/v1/UniversalRequestOuterClass$UniversalRequest$SharedData;

    iput-object p1, p0, Lgatewayprotocol/v1/UniversalRequestOuterClass$UniversalRequest;->sharedData_:Lgatewayprotocol/v1/UniversalRequestOuterClass$UniversalRequest$SharedData;

    goto :goto_0

    .line 5789
    :cond_0
    iput-object p1, p0, Lgatewayprotocol/v1/UniversalRequestOuterClass$UniversalRequest;->sharedData_:Lgatewayprotocol/v1/UniversalRequestOuterClass$UniversalRequest$SharedData;

    .line 5791
    :goto_0
    iget p1, p0, Lgatewayprotocol/v1/UniversalRequestOuterClass$UniversalRequest;->bitField0_:I

    or-int/lit8 p1, p1, 0x1

    iput p1, p0, Lgatewayprotocol/v1/UniversalRequestOuterClass$UniversalRequest;->bitField0_:I

    return-void
.end method

.method public static newBuilder()Lgatewayprotocol/v1/UniversalRequestOuterClass$UniversalRequest$Builder;
    .locals 1

    .line 5947
    sget-object v0, Lgatewayprotocol/v1/UniversalRequestOuterClass$UniversalRequest;->DEFAULT_INSTANCE:Lgatewayprotocol/v1/UniversalRequestOuterClass$UniversalRequest;

    invoke-virtual {v0}, Lgatewayprotocol/v1/UniversalRequestOuterClass$UniversalRequest;->createBuilder()Lcom/google/protobuf/GeneratedMessageLite$Builder;

    move-result-object v0

    check-cast v0, Lgatewayprotocol/v1/UniversalRequestOuterClass$UniversalRequest$Builder;

    return-object v0
.end method

.method public static newBuilder(Lgatewayprotocol/v1/UniversalRequestOuterClass$UniversalRequest;)Lgatewayprotocol/v1/UniversalRequestOuterClass$UniversalRequest$Builder;
    .locals 1

    .line 5950
    sget-object v0, Lgatewayprotocol/v1/UniversalRequestOuterClass$UniversalRequest;->DEFAULT_INSTANCE:Lgatewayprotocol/v1/UniversalRequestOuterClass$UniversalRequest;

    invoke-virtual {v0, p0}, Lgatewayprotocol/v1/UniversalRequestOuterClass$UniversalRequest;->createBuilder(Lcom/google/protobuf/GeneratedMessageLite;)Lcom/google/protobuf/GeneratedMessageLite$Builder;

    move-result-object p0

    check-cast p0, Lgatewayprotocol/v1/UniversalRequestOuterClass$UniversalRequest$Builder;

    return-object p0
.end method

.method public static parseDelimitedFrom(Ljava/io/InputStream;)Lgatewayprotocol/v1/UniversalRequestOuterClass$UniversalRequest;
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    .line 5923
    sget-object v0, Lgatewayprotocol/v1/UniversalRequestOuterClass$UniversalRequest;->DEFAULT_INSTANCE:Lgatewayprotocol/v1/UniversalRequestOuterClass$UniversalRequest;

    invoke-static {v0, p0}, Lgatewayprotocol/v1/UniversalRequestOuterClass$UniversalRequest;->parseDelimitedFrom(Lcom/google/protobuf/GeneratedMessageLite;Ljava/io/InputStream;)Lcom/google/protobuf/GeneratedMessageLite;

    move-result-object p0

    check-cast p0, Lgatewayprotocol/v1/UniversalRequestOuterClass$UniversalRequest;

    return-object p0
.end method

.method public static parseDelimitedFrom(Ljava/io/InputStream;Lcom/google/protobuf/ExtensionRegistryLite;)Lgatewayprotocol/v1/UniversalRequestOuterClass$UniversalRequest;
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    .line 5930
    sget-object v0, Lgatewayprotocol/v1/UniversalRequestOuterClass$UniversalRequest;->DEFAULT_INSTANCE:Lgatewayprotocol/v1/UniversalRequestOuterClass$UniversalRequest;

    invoke-static {v0, p0, p1}, Lgatewayprotocol/v1/UniversalRequestOuterClass$UniversalRequest;->parseDelimitedFrom(Lcom/google/protobuf/GeneratedMessageLite;Ljava/io/InputStream;Lcom/google/protobuf/ExtensionRegistryLite;)Lcom/google/protobuf/GeneratedMessageLite;

    move-result-object p0

    check-cast p0, Lgatewayprotocol/v1/UniversalRequestOuterClass$UniversalRequest;

    return-object p0
.end method

.method public static parseFrom(Lcom/google/protobuf/ByteString;)Lgatewayprotocol/v1/UniversalRequestOuterClass$UniversalRequest;
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/google/protobuf/InvalidProtocolBufferException;
        }
    .end annotation

    .line 5886
    sget-object v0, Lgatewayprotocol/v1/UniversalRequestOuterClass$UniversalRequest;->DEFAULT_INSTANCE:Lgatewayprotocol/v1/UniversalRequestOuterClass$UniversalRequest;

    invoke-static {v0, p0}, Lcom/google/protobuf/GeneratedMessageLite;->parseFrom(Lcom/google/protobuf/GeneratedMessageLite;Lcom/google/protobuf/ByteString;)Lcom/google/protobuf/GeneratedMessageLite;

    move-result-object p0

    check-cast p0, Lgatewayprotocol/v1/UniversalRequestOuterClass$UniversalRequest;

    return-object p0
.end method

.method public static parseFrom(Lcom/google/protobuf/ByteString;Lcom/google/protobuf/ExtensionRegistryLite;)Lgatewayprotocol/v1/UniversalRequestOuterClass$UniversalRequest;
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/google/protobuf/InvalidProtocolBufferException;
        }
    .end annotation

    .line 5893
    sget-object v0, Lgatewayprotocol/v1/UniversalRequestOuterClass$UniversalRequest;->DEFAULT_INSTANCE:Lgatewayprotocol/v1/UniversalRequestOuterClass$UniversalRequest;

    invoke-static {v0, p0, p1}, Lcom/google/protobuf/GeneratedMessageLite;->parseFrom(Lcom/google/protobuf/GeneratedMessageLite;Lcom/google/protobuf/ByteString;Lcom/google/protobuf/ExtensionRegistryLite;)Lcom/google/protobuf/GeneratedMessageLite;

    move-result-object p0

    check-cast p0, Lgatewayprotocol/v1/UniversalRequestOuterClass$UniversalRequest;

    return-object p0
.end method

.method public static parseFrom(Lcom/google/protobuf/CodedInputStream;)Lgatewayprotocol/v1/UniversalRequestOuterClass$UniversalRequest;
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    .line 5935
    sget-object v0, Lgatewayprotocol/v1/UniversalRequestOuterClass$UniversalRequest;->DEFAULT_INSTANCE:Lgatewayprotocol/v1/UniversalRequestOuterClass$UniversalRequest;

    invoke-static {v0, p0}, Lcom/google/protobuf/GeneratedMessageLite;->parseFrom(Lcom/google/protobuf/GeneratedMessageLite;Lcom/google/protobuf/CodedInputStream;)Lcom/google/protobuf/GeneratedMessageLite;

    move-result-object p0

    check-cast p0, Lgatewayprotocol/v1/UniversalRequestOuterClass$UniversalRequest;

    return-object p0
.end method

.method public static parseFrom(Lcom/google/protobuf/CodedInputStream;Lcom/google/protobuf/ExtensionRegistryLite;)Lgatewayprotocol/v1/UniversalRequestOuterClass$UniversalRequest;
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    .line 5942
    sget-object v0, Lgatewayprotocol/v1/UniversalRequestOuterClass$UniversalRequest;->DEFAULT_INSTANCE:Lgatewayprotocol/v1/UniversalRequestOuterClass$UniversalRequest;

    invoke-static {v0, p0, p1}, Lcom/google/protobuf/GeneratedMessageLite;->parseFrom(Lcom/google/protobuf/GeneratedMessageLite;Lcom/google/protobuf/CodedInputStream;Lcom/google/protobuf/ExtensionRegistryLite;)Lcom/google/protobuf/GeneratedMessageLite;

    move-result-object p0

    check-cast p0, Lgatewayprotocol/v1/UniversalRequestOuterClass$UniversalRequest;

    return-object p0
.end method

.method public static parseFrom(Ljava/io/InputStream;)Lgatewayprotocol/v1/UniversalRequestOuterClass$UniversalRequest;
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    .line 5910
    sget-object v0, Lgatewayprotocol/v1/UniversalRequestOuterClass$UniversalRequest;->DEFAULT_INSTANCE:Lgatewayprotocol/v1/UniversalRequestOuterClass$UniversalRequest;

    invoke-static {v0, p0}, Lcom/google/protobuf/GeneratedMessageLite;->parseFrom(Lcom/google/protobuf/GeneratedMessageLite;Ljava/io/InputStream;)Lcom/google/protobuf/GeneratedMessageLite;

    move-result-object p0

    check-cast p0, Lgatewayprotocol/v1/UniversalRequestOuterClass$UniversalRequest;

    return-object p0
.end method

.method public static parseFrom(Ljava/io/InputStream;Lcom/google/protobuf/ExtensionRegistryLite;)Lgatewayprotocol/v1/UniversalRequestOuterClass$UniversalRequest;
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    .line 5917
    sget-object v0, Lgatewayprotocol/v1/UniversalRequestOuterClass$UniversalRequest;->DEFAULT_INSTANCE:Lgatewayprotocol/v1/UniversalRequestOuterClass$UniversalRequest;

    invoke-static {v0, p0, p1}, Lcom/google/protobuf/GeneratedMessageLite;->parseFrom(Lcom/google/protobuf/GeneratedMessageLite;Ljava/io/InputStream;Lcom/google/protobuf/ExtensionRegistryLite;)Lcom/google/protobuf/GeneratedMessageLite;

    move-result-object p0

    check-cast p0, Lgatewayprotocol/v1/UniversalRequestOuterClass$UniversalRequest;

    return-object p0
.end method

.method public static parseFrom(Ljava/nio/ByteBuffer;)Lgatewayprotocol/v1/UniversalRequestOuterClass$UniversalRequest;
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/google/protobuf/InvalidProtocolBufferException;
        }
    .end annotation

    .line 5873
    sget-object v0, Lgatewayprotocol/v1/UniversalRequestOuterClass$UniversalRequest;->DEFAULT_INSTANCE:Lgatewayprotocol/v1/UniversalRequestOuterClass$UniversalRequest;

    invoke-static {v0, p0}, Lcom/google/protobuf/GeneratedMessageLite;->parseFrom(Lcom/google/protobuf/GeneratedMessageLite;Ljava/nio/ByteBuffer;)Lcom/google/protobuf/GeneratedMessageLite;

    move-result-object p0

    check-cast p0, Lgatewayprotocol/v1/UniversalRequestOuterClass$UniversalRequest;

    return-object p0
.end method

.method public static parseFrom(Ljava/nio/ByteBuffer;Lcom/google/protobuf/ExtensionRegistryLite;)Lgatewayprotocol/v1/UniversalRequestOuterClass$UniversalRequest;
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/google/protobuf/InvalidProtocolBufferException;
        }
    .end annotation

    .line 5880
    sget-object v0, Lgatewayprotocol/v1/UniversalRequestOuterClass$UniversalRequest;->DEFAULT_INSTANCE:Lgatewayprotocol/v1/UniversalRequestOuterClass$UniversalRequest;

    invoke-static {v0, p0, p1}, Lcom/google/protobuf/GeneratedMessageLite;->parseFrom(Lcom/google/protobuf/GeneratedMessageLite;Ljava/nio/ByteBuffer;Lcom/google/protobuf/ExtensionRegistryLite;)Lcom/google/protobuf/GeneratedMessageLite;

    move-result-object p0

    check-cast p0, Lgatewayprotocol/v1/UniversalRequestOuterClass$UniversalRequest;

    return-object p0
.end method

.method public static parseFrom([B)Lgatewayprotocol/v1/UniversalRequestOuterClass$UniversalRequest;
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/google/protobuf/InvalidProtocolBufferException;
        }
    .end annotation

    .line 5898
    sget-object v0, Lgatewayprotocol/v1/UniversalRequestOuterClass$UniversalRequest;->DEFAULT_INSTANCE:Lgatewayprotocol/v1/UniversalRequestOuterClass$UniversalRequest;

    invoke-static {v0, p0}, Lcom/google/protobuf/GeneratedMessageLite;->parseFrom(Lcom/google/protobuf/GeneratedMessageLite;[B)Lcom/google/protobuf/GeneratedMessageLite;

    move-result-object p0

    check-cast p0, Lgatewayprotocol/v1/UniversalRequestOuterClass$UniversalRequest;

    return-object p0
.end method

.method public static parseFrom([BLcom/google/protobuf/ExtensionRegistryLite;)Lgatewayprotocol/v1/UniversalRequestOuterClass$UniversalRequest;
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/google/protobuf/InvalidProtocolBufferException;
        }
    .end annotation

    .line 5905
    sget-object v0, Lgatewayprotocol/v1/UniversalRequestOuterClass$UniversalRequest;->DEFAULT_INSTANCE:Lgatewayprotocol/v1/UniversalRequestOuterClass$UniversalRequest;

    invoke-static {v0, p0, p1}, Lcom/google/protobuf/GeneratedMessageLite;->parseFrom(Lcom/google/protobuf/GeneratedMessageLite;[BLcom/google/protobuf/ExtensionRegistryLite;)Lcom/google/protobuf/GeneratedMessageLite;

    move-result-object p0

    check-cast p0, Lgatewayprotocol/v1/UniversalRequestOuterClass$UniversalRequest;

    return-object p0
.end method

.method public static parser()Lcom/google/protobuf/Parser;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Lcom/google/protobuf/Parser<",
            "Lgatewayprotocol/v1/UniversalRequestOuterClass$UniversalRequest;",
            ">;"
        }
    .end annotation

    .line 6186
    sget-object v0, Lgatewayprotocol/v1/UniversalRequestOuterClass$UniversalRequest;->DEFAULT_INSTANCE:Lgatewayprotocol/v1/UniversalRequestOuterClass$UniversalRequest;

    invoke-virtual {v0}, Lgatewayprotocol/v1/UniversalRequestOuterClass$UniversalRequest;->getParserForType()Lcom/google/protobuf/Parser;

    move-result-object v0

    return-object v0
.end method

.method private setPayload(Lgatewayprotocol/v1/UniversalRequestOuterClass$UniversalRequest$Payload;)V
    .locals 0

    .line 5836
    invoke-virtual {p1}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    .line 5837
    iput-object p1, p0, Lgatewayprotocol/v1/UniversalRequestOuterClass$UniversalRequest;->payload_:Lgatewayprotocol/v1/UniversalRequestOuterClass$UniversalRequest$Payload;

    .line 5838
    iget p1, p0, Lgatewayprotocol/v1/UniversalRequestOuterClass$UniversalRequest;->bitField0_:I

    or-int/lit8 p1, p1, 0x2

    iput p1, p0, Lgatewayprotocol/v1/UniversalRequestOuterClass$UniversalRequest;->bitField0_:I

    return-void
.end method

.method private setSharedData(Lgatewayprotocol/v1/UniversalRequestOuterClass$UniversalRequest$SharedData;)V
    .locals 0

    .line 5770
    invoke-virtual {p1}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    .line 5771
    iput-object p1, p0, Lgatewayprotocol/v1/UniversalRequestOuterClass$UniversalRequest;->sharedData_:Lgatewayprotocol/v1/UniversalRequestOuterClass$UniversalRequest$SharedData;

    .line 5772
    iget p1, p0, Lgatewayprotocol/v1/UniversalRequestOuterClass$UniversalRequest;->bitField0_:I

    or-int/lit8 p1, p1, 0x1

    iput p1, p0, Lgatewayprotocol/v1/UniversalRequestOuterClass$UniversalRequest;->bitField0_:I

    return-void
.end method


# virtual methods
.method protected final dynamicMethod(Lcom/google/protobuf/GeneratedMessageLite$MethodToInvoke;Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;
    .locals 1

    .line 6120
    sget-object p2, Lgatewayprotocol/v1/UniversalRequestOuterClass$1;->$SwitchMap$com$google$protobuf$GeneratedMessageLite$MethodToInvoke:[I

    invoke-virtual {p1}, Lcom/google/protobuf/GeneratedMessageLite$MethodToInvoke;->ordinal()I

    move-result p1

    aget p1, p2, p1

    const/4 p2, 0x1

    const/4 p3, 0x0

    packed-switch p1, :pswitch_data_0

    .line 6164
    new-instance p1, Ljava/lang/UnsupportedOperationException;

    invoke-direct {p1}, Ljava/lang/UnsupportedOperationException;-><init>()V

    throw p1

    :pswitch_0
    return-object p3

    .line 6158
    :pswitch_1
    invoke-static {p2}, Ljava/lang/Byte;->valueOf(B)Ljava/lang/Byte;

    move-result-object p1

    return-object p1

    .line 6143
    :pswitch_2
    sget-object p1, Lgatewayprotocol/v1/UniversalRequestOuterClass$UniversalRequest;->PARSER:Lcom/google/protobuf/Parser;

    if-nez p1, :cond_1

    .line 6145
    const-class p2, Lgatewayprotocol/v1/UniversalRequestOuterClass$UniversalRequest;

    monitor-enter p2

    .line 6146
    :try_start_0
    sget-object p1, Lgatewayprotocol/v1/UniversalRequestOuterClass$UniversalRequest;->PARSER:Lcom/google/protobuf/Parser;

    if-nez p1, :cond_0

    .line 6148
    new-instance p1, Lcom/google/protobuf/GeneratedMessageLite$DefaultInstanceBasedParser;

    sget-object p3, Lgatewayprotocol/v1/UniversalRequestOuterClass$UniversalRequest;->DEFAULT_INSTANCE:Lgatewayprotocol/v1/UniversalRequestOuterClass$UniversalRequest;

    invoke-direct {p1, p3}, Lcom/google/protobuf/GeneratedMessageLite$DefaultInstanceBasedParser;-><init>(Lcom/google/protobuf/GeneratedMessageLite;)V

    .line 6151
    sput-object p1, Lgatewayprotocol/v1/UniversalRequestOuterClass$UniversalRequest;->PARSER:Lcom/google/protobuf/Parser;

    .line 6153
    :cond_0
    monitor-exit p2

    return-object p1

    :catchall_0
    move-exception p1

    monitor-exit p2
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw p1

    :cond_1
    return-object p1

    .line 6140
    :pswitch_3
    sget-object p1, Lgatewayprotocol/v1/UniversalRequestOuterClass$UniversalRequest;->DEFAULT_INSTANCE:Lgatewayprotocol/v1/UniversalRequestOuterClass$UniversalRequest;

    return-object p1

    :pswitch_4
    const/4 p1, 0x3

    .line 6128
    new-array p1, p1, [Ljava/lang/Object;

    const-string p3, "bitField0_"

    const/4 v0, 0x0

    aput-object p3, p1, v0

    const-string p3, "sharedData_"

    aput-object p3, p1, p2

    const-string p2, "payload_"

    const/4 p3, 0x2

    aput-object p2, p1, p3

    .line 6133
    const-string p2, "\u0000\u0002\u0000\u0001\u0001\u0002\u0002\u0000\u0000\u0000\u0001\u1009\u0000\u0002\u1009\u0001"

    .line 6136
    sget-object p3, Lgatewayprotocol/v1/UniversalRequestOuterClass$UniversalRequest;->DEFAULT_INSTANCE:Lgatewayprotocol/v1/UniversalRequestOuterClass$UniversalRequest;

    invoke-static {p3, p2, p1}, Lgatewayprotocol/v1/UniversalRequestOuterClass$UniversalRequest;->newMessageInfo(Lcom/google/protobuf/MessageLite;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    return-object p1

    .line 6125
    :pswitch_5
    new-instance p1, Lgatewayprotocol/v1/UniversalRequestOuterClass$UniversalRequest$Builder;

    invoke-direct {p1, p3}, Lgatewayprotocol/v1/UniversalRequestOuterClass$UniversalRequest$Builder;-><init>(Lgatewayprotocol/v1/UniversalRequestOuterClass$1;)V

    return-object p1

    .line 6122
    :pswitch_6
    new-instance p1, Lgatewayprotocol/v1/UniversalRequestOuterClass$UniversalRequest;

    invoke-direct {p1}, Lgatewayprotocol/v1/UniversalRequestOuterClass$UniversalRequest;-><init>()V

    return-object p1

    :pswitch_data_0
    .packed-switch 0x1
        :pswitch_6
        :pswitch_5
        :pswitch_4
        :pswitch_3
        :pswitch_2
        :pswitch_1
        :pswitch_0
    .end packed-switch
.end method

.method public getPayload()Lgatewayprotocol/v1/UniversalRequestOuterClass$UniversalRequest$Payload;
    .locals 1

    .line 5826
    iget-object v0, p0, Lgatewayprotocol/v1/UniversalRequestOuterClass$UniversalRequest;->payload_:Lgatewayprotocol/v1/UniversalRequestOuterClass$UniversalRequest$Payload;

    if-nez v0, :cond_0

    invoke-static {}, Lgatewayprotocol/v1/UniversalRequestOuterClass$UniversalRequest$Payload;->getDefaultInstance()Lgatewayprotocol/v1/UniversalRequestOuterClass$UniversalRequest$Payload;

    move-result-object v0

    :cond_0
    return-object v0
.end method

.method public getSharedData()Lgatewayprotocol/v1/UniversalRequestOuterClass$UniversalRequest$SharedData;
    .locals 1

    .line 5760
    iget-object v0, p0, Lgatewayprotocol/v1/UniversalRequestOuterClass$UniversalRequest;->sharedData_:Lgatewayprotocol/v1/UniversalRequestOuterClass$UniversalRequest$SharedData;

    if-nez v0, :cond_0

    invoke-static {}, Lgatewayprotocol/v1/UniversalRequestOuterClass$UniversalRequest$SharedData;->getDefaultInstance()Lgatewayprotocol/v1/UniversalRequestOuterClass$UniversalRequest$SharedData;

    move-result-object v0

    :cond_0
    return-object v0
.end method

.method public hasPayload()Z
    .locals 1

    .line 5815
    iget v0, p0, Lgatewayprotocol/v1/UniversalRequestOuterClass$UniversalRequest;->bitField0_:I

    and-int/lit8 v0, v0, 0x2

    if-eqz v0, :cond_0

    const/4 v0, 0x1

    return v0

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method public hasSharedData()Z
    .locals 2

    .line 5749
    iget v0, p0, Lgatewayprotocol/v1/UniversalRequestOuterClass$UniversalRequest;->bitField0_:I

    const/4 v1, 0x1

    and-int/2addr v0, v1

    if-eqz v0, :cond_0

    return v1

    :cond_0
    const/4 v0, 0x0

    return v0
.end method
