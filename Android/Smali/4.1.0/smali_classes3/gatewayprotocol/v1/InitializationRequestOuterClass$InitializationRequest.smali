.class public final Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;
.super Lcom/google/protobuf/GeneratedMessageLite;
.source "InitializationRequestOuterClass.java"

# interfaces
.implements Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequestOrBuilder;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lgatewayprotocol/v1/InitializationRequestOuterClass;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x19
    name = "InitializationRequest"
.end annotation

.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest$Builder;,
        Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest$ExtrasDefaultEntryHolder;
    }
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Lcom/google/protobuf/GeneratedMessageLite<",
        "Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;",
        "Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest$Builder;",
        ">;",
        "Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequestOrBuilder;"
    }
.end annotation


# static fields
.field public static final ANALYTICS_USER_ID_FIELD_NUMBER:I = 0x8

.field public static final AUID_FIELD_NUMBER:I = 0x7

.field public static final AUID_STRING_FIELD_NUMBER:I = 0xb

.field public static final CACHE_FIELD_NUMBER:I = 0x5

.field public static final CLIENT_INFO_FIELD_NUMBER:I = 0x1

.field private static final DEFAULT_INSTANCE:Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;

.field public static final DEVICE_INFO_FIELD_NUMBER:I = 0x9

.field public static final EXTERNAL_USER_IDENTIFIER_FIELD_NUMBER:I = 0xf

.field public static final EXTRAS_FIELD_NUMBER:I = 0x10

.field public static final IDFI_FIELD_NUMBER:I = 0x3

.field public static final IS_FIRST_INIT_FIELD_NUMBER:I = 0xa

.field public static final LEGACY_FLOW_USER_CONSENT_FIELD_NUMBER:I = 0x6

.field private static volatile PARSER:Lcom/google/protobuf/Parser; = null
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Lcom/google/protobuf/Parser<",
            "Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;",
            ">;"
        }
    .end annotation
.end field

.field public static final PRIVACY_FIELD_NUMBER:I = 0x2

.field public static final SESSION_ID_FIELD_NUMBER:I = 0x4

.field public static final UADS_INIT_BLOB_FIELD_NUMBER:I = 0xc

.field public static final UNITY_BUILD_GUID_FIELD_NUMBER:I = 0x11

.field public static final UNITY_INSTALLATION_ID_FIELD_NUMBER:I = 0xd

.field public static final UNITY_MEGA_SESSION_ID_FIELD_NUMBER:I = 0xe


# instance fields
.field private analyticsUserId_:Ljava/lang/String;

.field private auidString_:Ljava/lang/String;

.field private auid_:Lcom/google/protobuf/ByteString;

.field private bitField0_:I

.field private cache_:Lcom/google/protobuf/ByteString;

.field private clientInfo_:Lgatewayprotocol/v1/ClientInfoOuterClass$ClientInfo;

.field private deviceInfo_:Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationDeviceInfo;

.field private externalUserIdentifier_:Ljava/lang/String;

.field private extras_:Lcom/google/protobuf/MapFieldLite;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Lcom/google/protobuf/MapFieldLite<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field private idfi_:Ljava/lang/String;

.field private isFirstInit_:Z

.field private legacyFlowUserConsent_:Ljava/lang/String;

.field private privacy_:Lcom/google/protobuf/ByteString;

.field private sessionId_:Lcom/google/protobuf/ByteString;

.field private uadsInitBlob_:Lcom/google/protobuf/ByteString;

.field private unityBuildGuid_:Ljava/lang/String;

.field private unityInstallationId_:Lcom/google/protobuf/ByteString;

.field private unityMegaSessionId_:Lcom/google/protobuf/ByteString;


# direct methods
.method static constructor <clinit>()V
    .locals 2

    .line 4505
    new-instance v0, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;

    invoke-direct {v0}, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;-><init>()V

    .line 4508
    sput-object v0, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->DEFAULT_INSTANCE:Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;

    .line 4509
    const-class v1, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;

    invoke-static {v1, v0}, Lcom/google/protobuf/GeneratedMessageLite;->registerDefaultInstance(Ljava/lang/Class;Lcom/google/protobuf/GeneratedMessageLite;)V

    return-void
.end method

.method private constructor <init>()V
    .locals 2

    .line 2064
    invoke-direct {p0}, Lcom/google/protobuf/GeneratedMessageLite;-><init>()V

    .line 3003
    invoke-static {}, Lcom/google/protobuf/MapFieldLite;->emptyMapField()Lcom/google/protobuf/MapFieldLite;

    move-result-object v0

    iput-object v0, p0, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->extras_:Lcom/google/protobuf/MapFieldLite;

    .line 2065
    sget-object v0, Lcom/google/protobuf/ByteString;->EMPTY:Lcom/google/protobuf/ByteString;

    iput-object v0, p0, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->privacy_:Lcom/google/protobuf/ByteString;

    .line 2066
    const-string v0, ""

    iput-object v0, p0, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->idfi_:Ljava/lang/String;

    .line 2067
    sget-object v1, Lcom/google/protobuf/ByteString;->EMPTY:Lcom/google/protobuf/ByteString;

    iput-object v1, p0, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->sessionId_:Lcom/google/protobuf/ByteString;

    .line 2068
    sget-object v1, Lcom/google/protobuf/ByteString;->EMPTY:Lcom/google/protobuf/ByteString;

    iput-object v1, p0, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->cache_:Lcom/google/protobuf/ByteString;

    .line 2069
    iput-object v0, p0, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->legacyFlowUserConsent_:Ljava/lang/String;

    .line 2070
    sget-object v1, Lcom/google/protobuf/ByteString;->EMPTY:Lcom/google/protobuf/ByteString;

    iput-object v1, p0, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->auid_:Lcom/google/protobuf/ByteString;

    .line 2071
    iput-object v0, p0, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->analyticsUserId_:Ljava/lang/String;

    .line 2072
    iput-object v0, p0, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->auidString_:Ljava/lang/String;

    .line 2073
    sget-object v1, Lcom/google/protobuf/ByteString;->EMPTY:Lcom/google/protobuf/ByteString;

    iput-object v1, p0, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->uadsInitBlob_:Lcom/google/protobuf/ByteString;

    .line 2074
    sget-object v1, Lcom/google/protobuf/ByteString;->EMPTY:Lcom/google/protobuf/ByteString;

    iput-object v1, p0, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->unityInstallationId_:Lcom/google/protobuf/ByteString;

    .line 2075
    sget-object v1, Lcom/google/protobuf/ByteString;->EMPTY:Lcom/google/protobuf/ByteString;

    iput-object v1, p0, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->unityMegaSessionId_:Lcom/google/protobuf/ByteString;

    .line 2076
    iput-object v0, p0, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->externalUserIdentifier_:Ljava/lang/String;

    .line 2077
    iput-object v0, p0, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->unityBuildGuid_:Ljava/lang/String;

    return-void
.end method

.method static synthetic access$4300()Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;
    .locals 1

    .line 2059
    sget-object v0, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->DEFAULT_INSTANCE:Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;

    return-object v0
.end method

.method static synthetic access$4400(Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;Lgatewayprotocol/v1/ClientInfoOuterClass$ClientInfo;)V
    .locals 0

    .line 2059
    invoke-direct {p0, p1}, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->setClientInfo(Lgatewayprotocol/v1/ClientInfoOuterClass$ClientInfo;)V

    return-void
.end method

.method static synthetic access$4500(Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;Lgatewayprotocol/v1/ClientInfoOuterClass$ClientInfo;)V
    .locals 0

    .line 2059
    invoke-direct {p0, p1}, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->mergeClientInfo(Lgatewayprotocol/v1/ClientInfoOuterClass$ClientInfo;)V

    return-void
.end method

.method static synthetic access$4600(Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;)V
    .locals 0

    .line 2059
    invoke-direct {p0}, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->clearClientInfo()V

    return-void
.end method

.method static synthetic access$4700(Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;Lcom/google/protobuf/ByteString;)V
    .locals 0

    .line 2059
    invoke-direct {p0, p1}, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->setPrivacy(Lcom/google/protobuf/ByteString;)V

    return-void
.end method

.method static synthetic access$4800(Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;)V
    .locals 0

    .line 2059
    invoke-direct {p0}, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->clearPrivacy()V

    return-void
.end method

.method static synthetic access$4900(Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;Ljava/lang/String;)V
    .locals 0

    .line 2059
    invoke-direct {p0, p1}, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->setIdfi(Ljava/lang/String;)V

    return-void
.end method

.method static synthetic access$5000(Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;)V
    .locals 0

    .line 2059
    invoke-direct {p0}, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->clearIdfi()V

    return-void
.end method

.method static synthetic access$5100(Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;Lcom/google/protobuf/ByteString;)V
    .locals 0

    .line 2059
    invoke-direct {p0, p1}, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->setIdfiBytes(Lcom/google/protobuf/ByteString;)V

    return-void
.end method

.method static synthetic access$5200(Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;Lcom/google/protobuf/ByteString;)V
    .locals 0

    .line 2059
    invoke-direct {p0, p1}, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->setSessionId(Lcom/google/protobuf/ByteString;)V

    return-void
.end method

.method static synthetic access$5300(Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;)V
    .locals 0

    .line 2059
    invoke-direct {p0}, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->clearSessionId()V

    return-void
.end method

.method static synthetic access$5400(Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;Lcom/google/protobuf/ByteString;)V
    .locals 0

    .line 2059
    invoke-direct {p0, p1}, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->setCache(Lcom/google/protobuf/ByteString;)V

    return-void
.end method

.method static synthetic access$5500(Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;)V
    .locals 0

    .line 2059
    invoke-direct {p0}, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->clearCache()V

    return-void
.end method

.method static synthetic access$5600(Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;Ljava/lang/String;)V
    .locals 0

    .line 2059
    invoke-direct {p0, p1}, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->setLegacyFlowUserConsent(Ljava/lang/String;)V

    return-void
.end method

.method static synthetic access$5700(Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;)V
    .locals 0

    .line 2059
    invoke-direct {p0}, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->clearLegacyFlowUserConsent()V

    return-void
.end method

.method static synthetic access$5800(Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;Lcom/google/protobuf/ByteString;)V
    .locals 0

    .line 2059
    invoke-direct {p0, p1}, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->setLegacyFlowUserConsentBytes(Lcom/google/protobuf/ByteString;)V

    return-void
.end method

.method static synthetic access$5900(Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;Lcom/google/protobuf/ByteString;)V
    .locals 0

    .line 2059
    invoke-direct {p0, p1}, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->setAuid(Lcom/google/protobuf/ByteString;)V

    return-void
.end method

.method static synthetic access$6000(Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;)V
    .locals 0

    .line 2059
    invoke-direct {p0}, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->clearAuid()V

    return-void
.end method

.method static synthetic access$6100(Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;Ljava/lang/String;)V
    .locals 0

    .line 2059
    invoke-direct {p0, p1}, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->setAnalyticsUserId(Ljava/lang/String;)V

    return-void
.end method

.method static synthetic access$6200(Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;)V
    .locals 0

    .line 2059
    invoke-direct {p0}, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->clearAnalyticsUserId()V

    return-void
.end method

.method static synthetic access$6300(Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;Lcom/google/protobuf/ByteString;)V
    .locals 0

    .line 2059
    invoke-direct {p0, p1}, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->setAnalyticsUserIdBytes(Lcom/google/protobuf/ByteString;)V

    return-void
.end method

.method static synthetic access$6400(Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationDeviceInfo;)V
    .locals 0

    .line 2059
    invoke-direct {p0, p1}, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->setDeviceInfo(Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationDeviceInfo;)V

    return-void
.end method

.method static synthetic access$6500(Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationDeviceInfo;)V
    .locals 0

    .line 2059
    invoke-direct {p0, p1}, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->mergeDeviceInfo(Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationDeviceInfo;)V

    return-void
.end method

.method static synthetic access$6600(Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;)V
    .locals 0

    .line 2059
    invoke-direct {p0}, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->clearDeviceInfo()V

    return-void
.end method

.method static synthetic access$6700(Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;Z)V
    .locals 0

    .line 2059
    invoke-direct {p0, p1}, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->setIsFirstInit(Z)V

    return-void
.end method

.method static synthetic access$6800(Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;)V
    .locals 0

    .line 2059
    invoke-direct {p0}, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->clearIsFirstInit()V

    return-void
.end method

.method static synthetic access$6900(Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;Ljava/lang/String;)V
    .locals 0

    .line 2059
    invoke-direct {p0, p1}, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->setAuidString(Ljava/lang/String;)V

    return-void
.end method

.method static synthetic access$7000(Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;)V
    .locals 0

    .line 2059
    invoke-direct {p0}, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->clearAuidString()V

    return-void
.end method

.method static synthetic access$7100(Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;Lcom/google/protobuf/ByteString;)V
    .locals 0

    .line 2059
    invoke-direct {p0, p1}, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->setAuidStringBytes(Lcom/google/protobuf/ByteString;)V

    return-void
.end method

.method static synthetic access$7200(Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;Lcom/google/protobuf/ByteString;)V
    .locals 0

    .line 2059
    invoke-direct {p0, p1}, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->setUadsInitBlob(Lcom/google/protobuf/ByteString;)V

    return-void
.end method

.method static synthetic access$7300(Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;)V
    .locals 0

    .line 2059
    invoke-direct {p0}, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->clearUadsInitBlob()V

    return-void
.end method

.method static synthetic access$7400(Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;Lcom/google/protobuf/ByteString;)V
    .locals 0

    .line 2059
    invoke-direct {p0, p1}, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->setUnityInstallationId(Lcom/google/protobuf/ByteString;)V

    return-void
.end method

.method static synthetic access$7500(Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;)V
    .locals 0

    .line 2059
    invoke-direct {p0}, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->clearUnityInstallationId()V

    return-void
.end method

.method static synthetic access$7600(Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;Lcom/google/protobuf/ByteString;)V
    .locals 0

    .line 2059
    invoke-direct {p0, p1}, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->setUnityMegaSessionId(Lcom/google/protobuf/ByteString;)V

    return-void
.end method

.method static synthetic access$7700(Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;)V
    .locals 0

    .line 2059
    invoke-direct {p0}, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->clearUnityMegaSessionId()V

    return-void
.end method

.method static synthetic access$7800(Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;Ljava/lang/String;)V
    .locals 0

    .line 2059
    invoke-direct {p0, p1}, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->setExternalUserIdentifier(Ljava/lang/String;)V

    return-void
.end method

.method static synthetic access$7900(Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;)V
    .locals 0

    .line 2059
    invoke-direct {p0}, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->clearExternalUserIdentifier()V

    return-void
.end method

.method static synthetic access$8000(Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;Lcom/google/protobuf/ByteString;)V
    .locals 0

    .line 2059
    invoke-direct {p0, p1}, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->setExternalUserIdentifierBytes(Lcom/google/protobuf/ByteString;)V

    return-void
.end method

.method static synthetic access$8100(Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;)Ljava/util/Map;
    .locals 0

    .line 2059
    invoke-direct {p0}, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->getMutableExtrasMap()Ljava/util/Map;

    move-result-object p0

    return-object p0
.end method

.method static synthetic access$8200(Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;Ljava/lang/String;)V
    .locals 0

    .line 2059
    invoke-direct {p0, p1}, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->setUnityBuildGuid(Ljava/lang/String;)V

    return-void
.end method

.method static synthetic access$8300(Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;)V
    .locals 0

    .line 2059
    invoke-direct {p0}, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->clearUnityBuildGuid()V

    return-void
.end method

.method static synthetic access$8400(Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;Lcom/google/protobuf/ByteString;)V
    .locals 0

    .line 2059
    invoke-direct {p0, p1}, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->setUnityBuildGuidBytes(Lcom/google/protobuf/ByteString;)V

    return-void
.end method

.method private clearAnalyticsUserId()V
    .locals 1

    .line 2549
    iget v0, p0, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->bitField0_:I

    and-int/lit8 v0, v0, -0x21

    iput v0, p0, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->bitField0_:I

    .line 2550
    invoke-static {}, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->getDefaultInstance()Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;

    move-result-object v0

    invoke-virtual {v0}, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->getAnalyticsUserId()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->analyticsUserId_:Ljava/lang/String;

    return-void
.end method

.method private clearAuid()V
    .locals 1

    .line 2474
    iget v0, p0, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->bitField0_:I

    and-int/lit8 v0, v0, -0x11

    iput v0, p0, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->bitField0_:I

    .line 2475
    invoke-static {}, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->getDefaultInstance()Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;

    move-result-object v0

    invoke-virtual {v0}, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->getAuid()Lcom/google/protobuf/ByteString;

    move-result-object v0

    iput-object v0, p0, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->auid_:Lcom/google/protobuf/ByteString;

    return-void
.end method

.method private clearAuidString()V
    .locals 1

    .line 2740
    iget v0, p0, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->bitField0_:I

    and-int/lit16 v0, v0, -0x81

    iput v0, p0, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->bitField0_:I

    .line 2741
    invoke-static {}, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->getDefaultInstance()Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;

    move-result-object v0

    invoke-virtual {v0}, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->getAuidString()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->auidString_:Ljava/lang/String;

    return-void
.end method

.method private clearCache()V
    .locals 1

    .line 2338
    iget v0, p0, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->bitField0_:I

    and-int/lit8 v0, v0, -0x5

    iput v0, p0, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->bitField0_:I

    .line 2339
    invoke-static {}, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->getDefaultInstance()Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;

    move-result-object v0

    invoke-virtual {v0}, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->getCache()Lcom/google/protobuf/ByteString;

    move-result-object v0

    iput-object v0, p0, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->cache_:Lcom/google/protobuf/ByteString;

    return-void
.end method

.method private clearClientInfo()V
    .locals 1

    const/4 v0, 0x0

    .line 2122
    iput-object v0, p0, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->clientInfo_:Lgatewayprotocol/v1/ClientInfoOuterClass$ClientInfo;

    .line 2123
    iget v0, p0, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->bitField0_:I

    and-int/lit8 v0, v0, -0x2

    iput v0, p0, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->bitField0_:I

    return-void
.end method

.method private clearDeviceInfo()V
    .locals 1

    const/4 v0, 0x0

    .line 2631
    iput-object v0, p0, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->deviceInfo_:Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationDeviceInfo;

    .line 2632
    iget v0, p0, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->bitField0_:I

    and-int/lit8 v0, v0, -0x41

    iput v0, p0, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->bitField0_:I

    return-void
.end method

.method private clearExternalUserIdentifier()V
    .locals 1

    .line 2972
    iget v0, p0, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->bitField0_:I

    and-int/lit16 v0, v0, -0x801

    iput v0, p0, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->bitField0_:I

    .line 2973
    invoke-static {}, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->getDefaultInstance()Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;

    move-result-object v0

    invoke-virtual {v0}, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->getExternalUserIdentifier()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->externalUserIdentifier_:Ljava/lang/String;

    return-void
.end method

.method private clearIdfi()V
    .locals 1

    .line 2227
    invoke-static {}, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->getDefaultInstance()Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;

    move-result-object v0

    invoke-virtual {v0}, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->getIdfi()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->idfi_:Ljava/lang/String;

    return-void
.end method

.method private clearIsFirstInit()V
    .locals 1

    const/4 v0, 0x0

    .line 2676
    iput-boolean v0, p0, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->isFirstInit_:Z

    return-void
.end method

.method private clearLegacyFlowUserConsent()V
    .locals 1

    .line 2408
    iget v0, p0, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->bitField0_:I

    and-int/lit8 v0, v0, -0x9

    iput v0, p0, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->bitField0_:I

    .line 2409
    invoke-static {}, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->getDefaultInstance()Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;

    move-result-object v0

    invoke-virtual {v0}, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->getLegacyFlowUserConsent()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->legacyFlowUserConsent_:Ljava/lang/String;

    return-void
.end method

.method private clearPrivacy()V
    .locals 1

    .line 2173
    iget v0, p0, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->bitField0_:I

    and-int/lit8 v0, v0, -0x3

    iput v0, p0, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->bitField0_:I

    .line 2174
    invoke-static {}, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->getDefaultInstance()Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;

    move-result-object v0

    invoke-virtual {v0}, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->getPrivacy()Lcom/google/protobuf/ByteString;

    move-result-object v0

    iput-object v0, p0, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->privacy_:Lcom/google/protobuf/ByteString;

    return-void
.end method

.method private clearSessionId()V
    .locals 1

    .line 2280
    invoke-static {}, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->getDefaultInstance()Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;

    move-result-object v0

    invoke-virtual {v0}, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->getSessionId()Lcom/google/protobuf/ByteString;

    move-result-object v0

    iput-object v0, p0, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->sessionId_:Lcom/google/protobuf/ByteString;

    return-void
.end method

.method private clearUadsInitBlob()V
    .locals 1

    .line 2805
    iget v0, p0, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->bitField0_:I

    and-int/lit16 v0, v0, -0x101

    iput v0, p0, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->bitField0_:I

    .line 2806
    invoke-static {}, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->getDefaultInstance()Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;

    move-result-object v0

    invoke-virtual {v0}, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->getUadsInitBlob()Lcom/google/protobuf/ByteString;

    move-result-object v0

    iput-object v0, p0, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->uadsInitBlob_:Lcom/google/protobuf/ByteString;

    return-void
.end method

.method private clearUnityBuildGuid()V
    .locals 1

    .line 3166
    iget v0, p0, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->bitField0_:I

    and-int/lit16 v0, v0, -0x1001

    iput v0, p0, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->bitField0_:I

    .line 3167
    invoke-static {}, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->getDefaultInstance()Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;

    move-result-object v0

    invoke-virtual {v0}, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->getUnityBuildGuid()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->unityBuildGuid_:Ljava/lang/String;

    return-void
.end method

.method private clearUnityInstallationId()V
    .locals 1

    .line 2856
    iget v0, p0, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->bitField0_:I

    and-int/lit16 v0, v0, -0x201

    iput v0, p0, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->bitField0_:I

    .line 2857
    invoke-static {}, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->getDefaultInstance()Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;

    move-result-object v0

    invoke-virtual {v0}, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->getUnityInstallationId()Lcom/google/protobuf/ByteString;

    move-result-object v0

    iput-object v0, p0, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->unityInstallationId_:Lcom/google/protobuf/ByteString;

    return-void
.end method

.method private clearUnityMegaSessionId()V
    .locals 1

    .line 2907
    iget v0, p0, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->bitField0_:I

    and-int/lit16 v0, v0, -0x401

    iput v0, p0, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->bitField0_:I

    .line 2908
    invoke-static {}, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->getDefaultInstance()Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;

    move-result-object v0

    invoke-virtual {v0}, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->getUnityMegaSessionId()Lcom/google/protobuf/ByteString;

    move-result-object v0

    iput-object v0, p0, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->unityMegaSessionId_:Lcom/google/protobuf/ByteString;

    return-void
.end method

.method public static getDefaultInstance()Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;
    .locals 1

    .line 4514
    sget-object v0, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->DEFAULT_INSTANCE:Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;

    return-object v0
.end method

.method private getMutableExtrasMap()Ljava/util/Map;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation

    .line 3102
    invoke-direct {p0}, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->internalGetMutableExtras()Lcom/google/protobuf/MapFieldLite;

    move-result-object v0

    return-object v0
.end method

.method private internalGetExtras()Lcom/google/protobuf/MapFieldLite;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Lcom/google/protobuf/MapFieldLite<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation

    .line 3006
    iget-object v0, p0, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->extras_:Lcom/google/protobuf/MapFieldLite;

    return-object v0
.end method

.method private internalGetMutableExtras()Lcom/google/protobuf/MapFieldLite;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Lcom/google/protobuf/MapFieldLite<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation

    .line 3010
    iget-object v0, p0, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->extras_:Lcom/google/protobuf/MapFieldLite;

    invoke-virtual {v0}, Lcom/google/protobuf/MapFieldLite;->isMutable()Z

    move-result v0

    if-nez v0, :cond_0

    .line 3011
    iget-object v0, p0, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->extras_:Lcom/google/protobuf/MapFieldLite;

    invoke-virtual {v0}, Lcom/google/protobuf/MapFieldLite;->mutableCopy()Lcom/google/protobuf/MapFieldLite;

    move-result-object v0

    iput-object v0, p0, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->extras_:Lcom/google/protobuf/MapFieldLite;

    .line 3013
    :cond_0
    iget-object v0, p0, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->extras_:Lcom/google/protobuf/MapFieldLite;

    return-object v0
.end method

.method private mergeClientInfo(Lgatewayprotocol/v1/ClientInfoOuterClass$ClientInfo;)V
    .locals 2

    .line 2109
    invoke-virtual {p1}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    .line 2110
    iget-object v0, p0, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->clientInfo_:Lgatewayprotocol/v1/ClientInfoOuterClass$ClientInfo;

    if-eqz v0, :cond_0

    .line 2111
    invoke-static {}, Lgatewayprotocol/v1/ClientInfoOuterClass$ClientInfo;->getDefaultInstance()Lgatewayprotocol/v1/ClientInfoOuterClass$ClientInfo;

    move-result-object v1

    if-eq v0, v1, :cond_0

    .line 2112
    iget-object v0, p0, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->clientInfo_:Lgatewayprotocol/v1/ClientInfoOuterClass$ClientInfo;

    .line 2113
    invoke-static {v0}, Lgatewayprotocol/v1/ClientInfoOuterClass$ClientInfo;->newBuilder(Lgatewayprotocol/v1/ClientInfoOuterClass$ClientInfo;)Lgatewayprotocol/v1/ClientInfoOuterClass$ClientInfo$Builder;

    move-result-object v0

    invoke-virtual {v0, p1}, Lgatewayprotocol/v1/ClientInfoOuterClass$ClientInfo$Builder;->mergeFrom(Lcom/google/protobuf/GeneratedMessageLite;)Lcom/google/protobuf/GeneratedMessageLite$Builder;

    move-result-object p1

    check-cast p1, Lgatewayprotocol/v1/ClientInfoOuterClass$ClientInfo$Builder;

    invoke-virtual {p1}, Lgatewayprotocol/v1/ClientInfoOuterClass$ClientInfo$Builder;->buildPartial()Lcom/google/protobuf/GeneratedMessageLite;

    move-result-object p1

    check-cast p1, Lgatewayprotocol/v1/ClientInfoOuterClass$ClientInfo;

    iput-object p1, p0, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->clientInfo_:Lgatewayprotocol/v1/ClientInfoOuterClass$ClientInfo;

    goto :goto_0

    .line 2115
    :cond_0
    iput-object p1, p0, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->clientInfo_:Lgatewayprotocol/v1/ClientInfoOuterClass$ClientInfo;

    .line 2117
    :goto_0
    iget p1, p0, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->bitField0_:I

    or-int/lit8 p1, p1, 0x1

    iput p1, p0, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->bitField0_:I

    return-void
.end method

.method private mergeDeviceInfo(Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationDeviceInfo;)V
    .locals 2

    .line 2614
    invoke-virtual {p1}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    .line 2615
    iget-object v0, p0, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->deviceInfo_:Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationDeviceInfo;

    if-eqz v0, :cond_0

    .line 2616
    invoke-static {}, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationDeviceInfo;->getDefaultInstance()Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationDeviceInfo;

    move-result-object v1

    if-eq v0, v1, :cond_0

    .line 2617
    iget-object v0, p0, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->deviceInfo_:Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationDeviceInfo;

    .line 2618
    invoke-static {v0}, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationDeviceInfo;->newBuilder(Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationDeviceInfo;)Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationDeviceInfo$Builder;

    move-result-object v0

    invoke-virtual {v0, p1}, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationDeviceInfo$Builder;->mergeFrom(Lcom/google/protobuf/GeneratedMessageLite;)Lcom/google/protobuf/GeneratedMessageLite$Builder;

    move-result-object p1

    check-cast p1, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationDeviceInfo$Builder;

    invoke-virtual {p1}, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationDeviceInfo$Builder;->buildPartial()Lcom/google/protobuf/GeneratedMessageLite;

    move-result-object p1

    check-cast p1, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationDeviceInfo;

    iput-object p1, p0, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->deviceInfo_:Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationDeviceInfo;

    goto :goto_0

    .line 2620
    :cond_0
    iput-object p1, p0, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->deviceInfo_:Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationDeviceInfo;

    .line 2622
    :goto_0
    iget p1, p0, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->bitField0_:I

    or-int/lit8 p1, p1, 0x40

    iput p1, p0, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->bitField0_:I

    return-void
.end method

.method public static newBuilder()Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest$Builder;
    .locals 1

    .line 3261
    sget-object v0, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->DEFAULT_INSTANCE:Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;

    invoke-virtual {v0}, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->createBuilder()Lcom/google/protobuf/GeneratedMessageLite$Builder;

    move-result-object v0

    check-cast v0, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest$Builder;

    return-object v0
.end method

.method public static newBuilder(Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;)Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest$Builder;
    .locals 1

    .line 3264
    sget-object v0, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->DEFAULT_INSTANCE:Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;

    invoke-virtual {v0, p0}, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->createBuilder(Lcom/google/protobuf/GeneratedMessageLite;)Lcom/google/protobuf/GeneratedMessageLite$Builder;

    move-result-object p0

    check-cast p0, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest$Builder;

    return-object p0
.end method

.method public static parseDelimitedFrom(Ljava/io/InputStream;)Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    .line 3237
    sget-object v0, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->DEFAULT_INSTANCE:Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;

    invoke-static {v0, p0}, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->parseDelimitedFrom(Lcom/google/protobuf/GeneratedMessageLite;Ljava/io/InputStream;)Lcom/google/protobuf/GeneratedMessageLite;

    move-result-object p0

    check-cast p0, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;

    return-object p0
.end method

.method public static parseDelimitedFrom(Ljava/io/InputStream;Lcom/google/protobuf/ExtensionRegistryLite;)Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    .line 3244
    sget-object v0, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->DEFAULT_INSTANCE:Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;

    invoke-static {v0, p0, p1}, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->parseDelimitedFrom(Lcom/google/protobuf/GeneratedMessageLite;Ljava/io/InputStream;Lcom/google/protobuf/ExtensionRegistryLite;)Lcom/google/protobuf/GeneratedMessageLite;

    move-result-object p0

    check-cast p0, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;

    return-object p0
.end method

.method public static parseFrom(Lcom/google/protobuf/ByteString;)Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/google/protobuf/InvalidProtocolBufferException;
        }
    .end annotation

    .line 3200
    sget-object v0, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->DEFAULT_INSTANCE:Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;

    invoke-static {v0, p0}, Lcom/google/protobuf/GeneratedMessageLite;->parseFrom(Lcom/google/protobuf/GeneratedMessageLite;Lcom/google/protobuf/ByteString;)Lcom/google/protobuf/GeneratedMessageLite;

    move-result-object p0

    check-cast p0, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;

    return-object p0
.end method

.method public static parseFrom(Lcom/google/protobuf/ByteString;Lcom/google/protobuf/ExtensionRegistryLite;)Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/google/protobuf/InvalidProtocolBufferException;
        }
    .end annotation

    .line 3207
    sget-object v0, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->DEFAULT_INSTANCE:Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;

    invoke-static {v0, p0, p1}, Lcom/google/protobuf/GeneratedMessageLite;->parseFrom(Lcom/google/protobuf/GeneratedMessageLite;Lcom/google/protobuf/ByteString;Lcom/google/protobuf/ExtensionRegistryLite;)Lcom/google/protobuf/GeneratedMessageLite;

    move-result-object p0

    check-cast p0, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;

    return-object p0
.end method

.method public static parseFrom(Lcom/google/protobuf/CodedInputStream;)Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    .line 3249
    sget-object v0, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->DEFAULT_INSTANCE:Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;

    invoke-static {v0, p0}, Lcom/google/protobuf/GeneratedMessageLite;->parseFrom(Lcom/google/protobuf/GeneratedMessageLite;Lcom/google/protobuf/CodedInputStream;)Lcom/google/protobuf/GeneratedMessageLite;

    move-result-object p0

    check-cast p0, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;

    return-object p0
.end method

.method public static parseFrom(Lcom/google/protobuf/CodedInputStream;Lcom/google/protobuf/ExtensionRegistryLite;)Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    .line 3256
    sget-object v0, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->DEFAULT_INSTANCE:Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;

    invoke-static {v0, p0, p1}, Lcom/google/protobuf/GeneratedMessageLite;->parseFrom(Lcom/google/protobuf/GeneratedMessageLite;Lcom/google/protobuf/CodedInputStream;Lcom/google/protobuf/ExtensionRegistryLite;)Lcom/google/protobuf/GeneratedMessageLite;

    move-result-object p0

    check-cast p0, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;

    return-object p0
.end method

.method public static parseFrom(Ljava/io/InputStream;)Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    .line 3224
    sget-object v0, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->DEFAULT_INSTANCE:Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;

    invoke-static {v0, p0}, Lcom/google/protobuf/GeneratedMessageLite;->parseFrom(Lcom/google/protobuf/GeneratedMessageLite;Ljava/io/InputStream;)Lcom/google/protobuf/GeneratedMessageLite;

    move-result-object p0

    check-cast p0, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;

    return-object p0
.end method

.method public static parseFrom(Ljava/io/InputStream;Lcom/google/protobuf/ExtensionRegistryLite;)Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    .line 3231
    sget-object v0, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->DEFAULT_INSTANCE:Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;

    invoke-static {v0, p0, p1}, Lcom/google/protobuf/GeneratedMessageLite;->parseFrom(Lcom/google/protobuf/GeneratedMessageLite;Ljava/io/InputStream;Lcom/google/protobuf/ExtensionRegistryLite;)Lcom/google/protobuf/GeneratedMessageLite;

    move-result-object p0

    check-cast p0, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;

    return-object p0
.end method

.method public static parseFrom(Ljava/nio/ByteBuffer;)Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/google/protobuf/InvalidProtocolBufferException;
        }
    .end annotation

    .line 3187
    sget-object v0, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->DEFAULT_INSTANCE:Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;

    invoke-static {v0, p0}, Lcom/google/protobuf/GeneratedMessageLite;->parseFrom(Lcom/google/protobuf/GeneratedMessageLite;Ljava/nio/ByteBuffer;)Lcom/google/protobuf/GeneratedMessageLite;

    move-result-object p0

    check-cast p0, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;

    return-object p0
.end method

.method public static parseFrom(Ljava/nio/ByteBuffer;Lcom/google/protobuf/ExtensionRegistryLite;)Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/google/protobuf/InvalidProtocolBufferException;
        }
    .end annotation

    .line 3194
    sget-object v0, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->DEFAULT_INSTANCE:Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;

    invoke-static {v0, p0, p1}, Lcom/google/protobuf/GeneratedMessageLite;->parseFrom(Lcom/google/protobuf/GeneratedMessageLite;Ljava/nio/ByteBuffer;Lcom/google/protobuf/ExtensionRegistryLite;)Lcom/google/protobuf/GeneratedMessageLite;

    move-result-object p0

    check-cast p0, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;

    return-object p0
.end method

.method public static parseFrom([B)Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/google/protobuf/InvalidProtocolBufferException;
        }
    .end annotation

    .line 3212
    sget-object v0, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->DEFAULT_INSTANCE:Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;

    invoke-static {v0, p0}, Lcom/google/protobuf/GeneratedMessageLite;->parseFrom(Lcom/google/protobuf/GeneratedMessageLite;[B)Lcom/google/protobuf/GeneratedMessageLite;

    move-result-object p0

    check-cast p0, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;

    return-object p0
.end method

.method public static parseFrom([BLcom/google/protobuf/ExtensionRegistryLite;)Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/google/protobuf/InvalidProtocolBufferException;
        }
    .end annotation

    .line 3219
    sget-object v0, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->DEFAULT_INSTANCE:Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;

    invoke-static {v0, p0, p1}, Lcom/google/protobuf/GeneratedMessageLite;->parseFrom(Lcom/google/protobuf/GeneratedMessageLite;[BLcom/google/protobuf/ExtensionRegistryLite;)Lcom/google/protobuf/GeneratedMessageLite;

    move-result-object p0

    check-cast p0, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;

    return-object p0
.end method

.method public static parser()Lcom/google/protobuf/Parser;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Lcom/google/protobuf/Parser<",
            "Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;",
            ">;"
        }
    .end annotation

    .line 4520
    sget-object v0, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->DEFAULT_INSTANCE:Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;

    invoke-virtual {v0}, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->getParserForType()Lcom/google/protobuf/Parser;

    move-result-object v0

    return-object v0
.end method

.method private setAnalyticsUserId(Ljava/lang/String;)V
    .locals 1

    .line 2535
    invoke-virtual {p1}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    .line 2536
    iget v0, p0, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->bitField0_:I

    or-int/lit8 v0, v0, 0x20

    iput v0, p0, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->bitField0_:I

    .line 2537
    iput-object p1, p0, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->analyticsUserId_:Ljava/lang/String;

    return-void
.end method

.method private setAnalyticsUserIdBytes(Lcom/google/protobuf/ByteString;)V
    .locals 0

    .line 2564
    invoke-static {p1}, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->checkByteStringIsUtf8(Lcom/google/protobuf/ByteString;)V

    .line 2565
    invoke-virtual {p1}, Lcom/google/protobuf/ByteString;->toStringUtf8()Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->analyticsUserId_:Ljava/lang/String;

    .line 2566
    iget p1, p0, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->bitField0_:I

    or-int/lit8 p1, p1, 0x20

    iput p1, p0, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->bitField0_:I

    return-void
.end method

.method private setAuid(Lcom/google/protobuf/ByteString;)V
    .locals 1

    .line 2462
    invoke-virtual {p1}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    .line 2463
    iget v0, p0, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->bitField0_:I

    or-int/lit8 v0, v0, 0x10

    iput v0, p0, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->bitField0_:I

    .line 2464
    iput-object p1, p0, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->auid_:Lcom/google/protobuf/ByteString;

    return-void
.end method

.method private setAuidString(Ljava/lang/String;)V
    .locals 1

    .line 2728
    invoke-virtual {p1}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    .line 2729
    iget v0, p0, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->bitField0_:I

    or-int/lit16 v0, v0, 0x80

    iput v0, p0, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->bitField0_:I

    .line 2730
    iput-object p1, p0, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->auidString_:Ljava/lang/String;

    return-void
.end method

.method private setAuidStringBytes(Lcom/google/protobuf/ByteString;)V
    .locals 0

    .line 2753
    invoke-static {p1}, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->checkByteStringIsUtf8(Lcom/google/protobuf/ByteString;)V

    .line 2754
    invoke-virtual {p1}, Lcom/google/protobuf/ByteString;->toStringUtf8()Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->auidString_:Ljava/lang/String;

    .line 2755
    iget p1, p0, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->bitField0_:I

    or-int/lit16 p1, p1, 0x80

    iput p1, p0, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->bitField0_:I

    return-void
.end method

.method private setCache(Lcom/google/protobuf/ByteString;)V
    .locals 1

    .line 2324
    invoke-virtual {p1}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    .line 2325
    iget v0, p0, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->bitField0_:I

    or-int/lit8 v0, v0, 0x4

    iput v0, p0, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->bitField0_:I

    .line 2326
    iput-object p1, p0, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->cache_:Lcom/google/protobuf/ByteString;

    return-void
.end method

.method private setClientInfo(Lgatewayprotocol/v1/ClientInfoOuterClass$ClientInfo;)V
    .locals 0

    .line 2100
    invoke-virtual {p1}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    .line 2101
    iput-object p1, p0, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->clientInfo_:Lgatewayprotocol/v1/ClientInfoOuterClass$ClientInfo;

    .line 2102
    iget p1, p0, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->bitField0_:I

    or-int/lit8 p1, p1, 0x1

    iput p1, p0, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->bitField0_:I

    return-void
.end method

.method private setDeviceInfo(Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationDeviceInfo;)V
    .locals 0

    .line 2601
    invoke-virtual {p1}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    .line 2602
    iput-object p1, p0, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->deviceInfo_:Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationDeviceInfo;

    .line 2603
    iget p1, p0, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->bitField0_:I

    or-int/lit8 p1, p1, 0x40

    iput p1, p0, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->bitField0_:I

    return-void
.end method

.method private setExternalUserIdentifier(Ljava/lang/String;)V
    .locals 1

    .line 2960
    invoke-virtual {p1}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    .line 2961
    iget v0, p0, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->bitField0_:I

    or-int/lit16 v0, v0, 0x800

    iput v0, p0, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->bitField0_:I

    .line 2962
    iput-object p1, p0, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->externalUserIdentifier_:Ljava/lang/String;

    return-void
.end method

.method private setExternalUserIdentifierBytes(Lcom/google/protobuf/ByteString;)V
    .locals 0

    .line 2985
    invoke-static {p1}, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->checkByteStringIsUtf8(Lcom/google/protobuf/ByteString;)V

    .line 2986
    invoke-virtual {p1}, Lcom/google/protobuf/ByteString;->toStringUtf8()Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->externalUserIdentifier_:Ljava/lang/String;

    .line 2987
    iget p1, p0, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->bitField0_:I

    or-int/lit16 p1, p1, 0x800

    iput p1, p0, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->bitField0_:I

    return-void
.end method

.method private setIdfi(Ljava/lang/String;)V
    .locals 0

    .line 2214
    invoke-virtual {p1}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    .line 2216
    iput-object p1, p0, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->idfi_:Ljava/lang/String;

    return-void
.end method

.method private setIdfiBytes(Lcom/google/protobuf/ByteString;)V
    .locals 0

    .line 2239
    invoke-static {p1}, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->checkByteStringIsUtf8(Lcom/google/protobuf/ByteString;)V

    .line 2240
    invoke-virtual {p1}, Lcom/google/protobuf/ByteString;->toStringUtf8()Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->idfi_:Ljava/lang/String;

    return-void
.end method

.method private setIsFirstInit(Z)V
    .locals 0

    .line 2663
    iput-boolean p1, p0, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->isFirstInit_:Z

    return-void
.end method

.method private setLegacyFlowUserConsent(Ljava/lang/String;)V
    .locals 1

    .line 2395
    invoke-virtual {p1}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    .line 2396
    iget v0, p0, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->bitField0_:I

    or-int/lit8 v0, v0, 0x8

    iput v0, p0, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->bitField0_:I

    .line 2397
    iput-object p1, p0, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->legacyFlowUserConsent_:Ljava/lang/String;

    return-void
.end method

.method private setLegacyFlowUserConsentBytes(Lcom/google/protobuf/ByteString;)V
    .locals 0

    .line 2422
    invoke-static {p1}, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->checkByteStringIsUtf8(Lcom/google/protobuf/ByteString;)V

    .line 2423
    invoke-virtual {p1}, Lcom/google/protobuf/ByteString;->toStringUtf8()Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->legacyFlowUserConsent_:Ljava/lang/String;

    .line 2424
    iget p1, p0, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->bitField0_:I

    or-int/lit8 p1, p1, 0x8

    iput p1, p0, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->bitField0_:I

    return-void
.end method

.method private setPrivacy(Lcom/google/protobuf/ByteString;)V
    .locals 1

    .line 2161
    invoke-virtual {p1}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    .line 2162
    iget v0, p0, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->bitField0_:I

    or-int/lit8 v0, v0, 0x2

    iput v0, p0, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->bitField0_:I

    .line 2163
    iput-object p1, p0, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->privacy_:Lcom/google/protobuf/ByteString;

    return-void
.end method

.method private setSessionId(Lcom/google/protobuf/ByteString;)V
    .locals 0

    .line 2267
    invoke-virtual {p1}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    .line 2269
    iput-object p1, p0, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->sessionId_:Lcom/google/protobuf/ByteString;

    return-void
.end method

.method private setUadsInitBlob(Lcom/google/protobuf/ByteString;)V
    .locals 1

    .line 2793
    invoke-virtual {p1}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    .line 2794
    iget v0, p0, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->bitField0_:I

    or-int/lit16 v0, v0, 0x100

    iput v0, p0, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->bitField0_:I

    .line 2795
    iput-object p1, p0, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->uadsInitBlob_:Lcom/google/protobuf/ByteString;

    return-void
.end method

.method private setUnityBuildGuid(Ljava/lang/String;)V
    .locals 1

    .line 3154
    invoke-virtual {p1}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    .line 3155
    iget v0, p0, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->bitField0_:I

    or-int/lit16 v0, v0, 0x1000

    iput v0, p0, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->bitField0_:I

    .line 3156
    iput-object p1, p0, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->unityBuildGuid_:Ljava/lang/String;

    return-void
.end method

.method private setUnityBuildGuidBytes(Lcom/google/protobuf/ByteString;)V
    .locals 0

    .line 3179
    invoke-static {p1}, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->checkByteStringIsUtf8(Lcom/google/protobuf/ByteString;)V

    .line 3180
    invoke-virtual {p1}, Lcom/google/protobuf/ByteString;->toStringUtf8()Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->unityBuildGuid_:Ljava/lang/String;

    .line 3181
    iget p1, p0, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->bitField0_:I

    or-int/lit16 p1, p1, 0x1000

    iput p1, p0, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->bitField0_:I

    return-void
.end method

.method private setUnityInstallationId(Lcom/google/protobuf/ByteString;)V
    .locals 1

    .line 2844
    invoke-virtual {p1}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    .line 2845
    iget v0, p0, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->bitField0_:I

    or-int/lit16 v0, v0, 0x200

    iput v0, p0, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->bitField0_:I

    .line 2846
    iput-object p1, p0, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->unityInstallationId_:Lcom/google/protobuf/ByteString;

    return-void
.end method

.method private setUnityMegaSessionId(Lcom/google/protobuf/ByteString;)V
    .locals 1

    .line 2895
    invoke-virtual {p1}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    .line 2896
    iget v0, p0, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->bitField0_:I

    or-int/lit16 v0, v0, 0x400

    iput v0, p0, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->bitField0_:I

    .line 2897
    iput-object p1, p0, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->unityMegaSessionId_:Lcom/google/protobuf/ByteString;

    return-void
.end method


# virtual methods
.method public containsExtras(Ljava/lang/String;)Z
    .locals 1

    .line 3031
    invoke-virtual {p1}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    .line 3032
    invoke-direct {p0}, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->internalGetExtras()Lcom/google/protobuf/MapFieldLite;

    move-result-object v0

    invoke-virtual {v0, p1}, Lcom/google/protobuf/MapFieldLite;->containsKey(Ljava/lang/Object;)Z

    move-result p1

    return p1
.end method

.method protected final dynamicMethod(Lcom/google/protobuf/GeneratedMessageLite$MethodToInvoke;Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;
    .locals 1

    .line 4436
    sget-object p2, Lgatewayprotocol/v1/InitializationRequestOuterClass$1;->$SwitchMap$com$google$protobuf$GeneratedMessageLite$MethodToInvoke:[I

    invoke-virtual {p1}, Lcom/google/protobuf/GeneratedMessageLite$MethodToInvoke;->ordinal()I

    move-result p1

    aget p1, p2, p1

    const/4 p2, 0x1

    const/4 p3, 0x0

    packed-switch p1, :pswitch_data_0

    .line 4498
    new-instance p1, Ljava/lang/UnsupportedOperationException;

    invoke-direct {p1}, Ljava/lang/UnsupportedOperationException;-><init>()V

    throw p1

    :pswitch_0
    return-object p3

    .line 4492
    :pswitch_1
    invoke-static {p2}, Ljava/lang/Byte;->valueOf(B)Ljava/lang/Byte;

    move-result-object p1

    return-object p1

    .line 4477
    :pswitch_2
    sget-object p1, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->PARSER:Lcom/google/protobuf/Parser;

    if-nez p1, :cond_1

    .line 4479
    const-class p2, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;

    monitor-enter p2

    .line 4480
    :try_start_0
    sget-object p1, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->PARSER:Lcom/google/protobuf/Parser;

    if-nez p1, :cond_0

    .line 4482
    new-instance p1, Lcom/google/protobuf/GeneratedMessageLite$DefaultInstanceBasedParser;

    sget-object p3, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->DEFAULT_INSTANCE:Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;

    invoke-direct {p1, p3}, Lcom/google/protobuf/GeneratedMessageLite$DefaultInstanceBasedParser;-><init>(Lcom/google/protobuf/GeneratedMessageLite;)V

    .line 4485
    sput-object p1, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->PARSER:Lcom/google/protobuf/Parser;

    .line 4487
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

    .line 4474
    :pswitch_3
    sget-object p1, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->DEFAULT_INSTANCE:Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;

    return-object p1

    :pswitch_4
    const/16 p1, 0x13

    .line 4444
    new-array p1, p1, [Ljava/lang/Object;

    const-string p3, "bitField0_"

    const/4 v0, 0x0

    aput-object p3, p1, v0

    const-string p3, "clientInfo_"

    aput-object p3, p1, p2

    const-string p2, "privacy_"

    const/4 p3, 0x2

    aput-object p2, p1, p3

    const-string p2, "idfi_"

    const/4 p3, 0x3

    aput-object p2, p1, p3

    const-string p2, "sessionId_"

    const/4 p3, 0x4

    aput-object p2, p1, p3

    const-string p2, "cache_"

    const/4 p3, 0x5

    aput-object p2, p1, p3

    const-string p2, "legacyFlowUserConsent_"

    const/4 p3, 0x6

    aput-object p2, p1, p3

    const-string p2, "auid_"

    const/4 p3, 0x7

    aput-object p2, p1, p3

    const-string p2, "analyticsUserId_"

    const/16 p3, 0x8

    aput-object p2, p1, p3

    const-string p2, "deviceInfo_"

    const/16 p3, 0x9

    aput-object p2, p1, p3

    const-string p2, "isFirstInit_"

    const/16 p3, 0xa

    aput-object p2, p1, p3

    const-string p2, "auidString_"

    const/16 p3, 0xb

    aput-object p2, p1, p3

    const-string p2, "uadsInitBlob_"

    const/16 p3, 0xc

    aput-object p2, p1, p3

    const-string p2, "unityInstallationId_"

    const/16 p3, 0xd

    aput-object p2, p1, p3

    const-string p2, "unityMegaSessionId_"

    const/16 p3, 0xe

    aput-object p2, p1, p3

    const-string p2, "externalUserIdentifier_"

    const/16 p3, 0xf

    aput-object p2, p1, p3

    const-string p2, "extras_"

    const/16 p3, 0x10

    aput-object p2, p1, p3

    sget-object p2, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest$ExtrasDefaultEntryHolder;->defaultEntry:Lcom/google/protobuf/MapEntryLite;

    const/16 p3, 0x11

    aput-object p2, p1, p3

    const-string p2, "unityBuildGuid_"

    const/16 p3, 0x12

    aput-object p2, p1, p3

    .line 4465
    const-string p2, "\u0000\u0011\u0000\u0001\u0001\u0011\u0011\u0001\u0000\u0000\u0001\u1009\u0000\u0002\u100a\u0001\u0003\u0208\u0004\n\u0005\u100a\u0002\u0006\u1208\u0003\u0007\u100a\u0004\u0008\u1208\u0005\t\u1009\u0006\n\u0007\u000b\u1208\u0007\u000c\u100a\u0008\r\u100a\t\u000e\u100a\n\u000f\u1208\u000b\u00102\u0011\u1208\u000c"

    .line 4470
    sget-object p3, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->DEFAULT_INSTANCE:Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;

    invoke-static {p3, p2, p1}, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->newMessageInfo(Lcom/google/protobuf/MessageLite;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    return-object p1

    .line 4441
    :pswitch_5
    new-instance p1, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest$Builder;

    invoke-direct {p1, p3}, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest$Builder;-><init>(Lgatewayprotocol/v1/InitializationRequestOuterClass$1;)V

    return-object p1

    .line 4438
    :pswitch_6
    new-instance p1, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;

    invoke-direct {p1}, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;-><init>()V

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

.method public getAnalyticsUserId()Ljava/lang/String;
    .locals 1

    .line 2506
    iget-object v0, p0, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->analyticsUserId_:Ljava/lang/String;

    return-object v0
.end method

.method public getAnalyticsUserIdBytes()Lcom/google/protobuf/ByteString;
    .locals 1

    .line 2521
    iget-object v0, p0, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->analyticsUserId_:Ljava/lang/String;

    invoke-static {v0}, Lcom/google/protobuf/ByteString;->copyFromUtf8(Ljava/lang/String;)Lcom/google/protobuf/ByteString;

    move-result-object v0

    return-object v0
.end method

.method public getAuid()Lcom/google/protobuf/ByteString;
    .locals 1

    .line 2451
    iget-object v0, p0, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->auid_:Lcom/google/protobuf/ByteString;

    return-object v0
.end method

.method public getAuidString()Ljava/lang/String;
    .locals 1

    .line 2703
    iget-object v0, p0, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->auidString_:Ljava/lang/String;

    return-object v0
.end method

.method public getAuidStringBytes()Lcom/google/protobuf/ByteString;
    .locals 1

    .line 2716
    iget-object v0, p0, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->auidString_:Ljava/lang/String;

    invoke-static {v0}, Lcom/google/protobuf/ByteString;->copyFromUtf8(Ljava/lang/String;)Lcom/google/protobuf/ByteString;

    move-result-object v0

    return-object v0
.end method

.method public getCache()Lcom/google/protobuf/ByteString;
    .locals 1

    .line 2311
    iget-object v0, p0, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->cache_:Lcom/google/protobuf/ByteString;

    return-object v0
.end method

.method public getClientInfo()Lgatewayprotocol/v1/ClientInfoOuterClass$ClientInfo;
    .locals 1

    .line 2094
    iget-object v0, p0, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->clientInfo_:Lgatewayprotocol/v1/ClientInfoOuterClass$ClientInfo;

    if-nez v0, :cond_0

    invoke-static {}, Lgatewayprotocol/v1/ClientInfoOuterClass$ClientInfo;->getDefaultInstance()Lgatewayprotocol/v1/ClientInfoOuterClass$ClientInfo;

    move-result-object v0

    :cond_0
    return-object v0
.end method

.method public getDeviceInfo()Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationDeviceInfo;
    .locals 1

    .line 2591
    iget-object v0, p0, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->deviceInfo_:Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationDeviceInfo;

    if-nez v0, :cond_0

    invoke-static {}, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationDeviceInfo;->getDefaultInstance()Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationDeviceInfo;

    move-result-object v0

    :cond_0
    return-object v0
.end method

.method public getExternalUserIdentifier()Ljava/lang/String;
    .locals 1

    .line 2935
    iget-object v0, p0, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->externalUserIdentifier_:Ljava/lang/String;

    return-object v0
.end method

.method public getExternalUserIdentifierBytes()Lcom/google/protobuf/ByteString;
    .locals 1

    .line 2948
    iget-object v0, p0, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->externalUserIdentifier_:Ljava/lang/String;

    invoke-static {v0}, Lcom/google/protobuf/ByteString;->copyFromUtf8(Ljava/lang/String;)Lcom/google/protobuf/ByteString;

    move-result-object v0

    return-object v0
.end method

.method public getExtras()Ljava/util/Map;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation

    .annotation runtime Ljava/lang/Deprecated;
    .end annotation

    .line 3040
    invoke-virtual {p0}, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->getExtrasMap()Ljava/util/Map;

    move-result-object v0

    return-object v0
.end method

.method public getExtrasCount()I
    .locals 1

    .line 3018
    invoke-direct {p0}, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->internalGetExtras()Lcom/google/protobuf/MapFieldLite;

    move-result-object v0

    invoke-virtual {v0}, Lcom/google/protobuf/MapFieldLite;->size()I

    move-result v0

    return v0
.end method

.method public getExtrasMap()Ljava/util/Map;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation

    .line 3053
    invoke-direct {p0}, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->internalGetExtras()Lcom/google/protobuf/MapFieldLite;

    move-result-object v0

    .line 3052
    invoke-static {v0}, Ljava/util/Collections;->unmodifiableMap(Ljava/util/Map;)Ljava/util/Map;

    move-result-object v0

    return-object v0
.end method

.method public getExtrasOrDefault(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;
    .locals 2

    .line 3069
    invoke-virtual {p1}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    .line 3071
    invoke-direct {p0}, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->internalGetExtras()Lcom/google/protobuf/MapFieldLite;

    move-result-object v0

    .line 3072
    invoke-interface {v0, p1}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_0

    invoke-interface {v0, p1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Ljava/lang/String;

    return-object p1

    :cond_0
    return-object p2
.end method

.method public getExtrasOrThrow(Ljava/lang/String;)Ljava/lang/String;
    .locals 2

    .line 3085
    invoke-virtual {p1}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    .line 3087
    invoke-direct {p0}, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->internalGetExtras()Lcom/google/protobuf/MapFieldLite;

    move-result-object v0

    .line 3088
    invoke-interface {v0, p1}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_0

    .line 3091
    invoke-interface {v0, p1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Ljava/lang/String;

    return-object p1

    .line 3089
    :cond_0
    new-instance p1, Ljava/lang/IllegalArgumentException;

    invoke-direct {p1}, Ljava/lang/IllegalArgumentException;-><init>()V

    throw p1
.end method

.method public getIdfi()Ljava/lang/String;
    .locals 1

    .line 2189
    iget-object v0, p0, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->idfi_:Ljava/lang/String;

    return-object v0
.end method

.method public getIdfiBytes()Lcom/google/protobuf/ByteString;
    .locals 1

    .line 2202
    iget-object v0, p0, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->idfi_:Ljava/lang/String;

    invoke-static {v0}, Lcom/google/protobuf/ByteString;->copyFromUtf8(Ljava/lang/String;)Lcom/google/protobuf/ByteString;

    move-result-object v0

    return-object v0
.end method

.method public getIsFirstInit()Z
    .locals 1

    .line 2649
    iget-boolean v0, p0, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->isFirstInit_:Z

    return v0
.end method

.method public getLegacyFlowUserConsent()Ljava/lang/String;
    .locals 1

    .line 2368
    iget-object v0, p0, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->legacyFlowUserConsent_:Ljava/lang/String;

    return-object v0
.end method

.method public getLegacyFlowUserConsentBytes()Lcom/google/protobuf/ByteString;
    .locals 1

    .line 2382
    iget-object v0, p0, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->legacyFlowUserConsent_:Ljava/lang/String;

    invoke-static {v0}, Lcom/google/protobuf/ByteString;->copyFromUtf8(Ljava/lang/String;)Lcom/google/protobuf/ByteString;

    move-result-object v0

    return-object v0
.end method

.method public getPrivacy()Lcom/google/protobuf/ByteString;
    .locals 1

    .line 2150
    iget-object v0, p0, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->privacy_:Lcom/google/protobuf/ByteString;

    return-object v0
.end method

.method public getSessionId()Lcom/google/protobuf/ByteString;
    .locals 1

    .line 2256
    iget-object v0, p0, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->sessionId_:Lcom/google/protobuf/ByteString;

    return-object v0
.end method

.method public getUadsInitBlob()Lcom/google/protobuf/ByteString;
    .locals 1

    .line 2782
    iget-object v0, p0, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->uadsInitBlob_:Lcom/google/protobuf/ByteString;

    return-object v0
.end method

.method public getUnityBuildGuid()Ljava/lang/String;
    .locals 1

    .line 3129
    iget-object v0, p0, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->unityBuildGuid_:Ljava/lang/String;

    return-object v0
.end method

.method public getUnityBuildGuidBytes()Lcom/google/protobuf/ByteString;
    .locals 1

    .line 3142
    iget-object v0, p0, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->unityBuildGuid_:Ljava/lang/String;

    invoke-static {v0}, Lcom/google/protobuf/ByteString;->copyFromUtf8(Ljava/lang/String;)Lcom/google/protobuf/ByteString;

    move-result-object v0

    return-object v0
.end method

.method public getUnityInstallationId()Lcom/google/protobuf/ByteString;
    .locals 1

    .line 2833
    iget-object v0, p0, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->unityInstallationId_:Lcom/google/protobuf/ByteString;

    return-object v0
.end method

.method public getUnityMegaSessionId()Lcom/google/protobuf/ByteString;
    .locals 1

    .line 2884
    iget-object v0, p0, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->unityMegaSessionId_:Lcom/google/protobuf/ByteString;

    return-object v0
.end method

.method public hasAnalyticsUserId()Z
    .locals 1

    .line 2492
    iget v0, p0, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->bitField0_:I

    and-int/lit8 v0, v0, 0x20

    if-eqz v0, :cond_0

    const/4 v0, 0x1

    return v0

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method public hasAuid()Z
    .locals 1

    .line 2439
    iget v0, p0, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->bitField0_:I

    and-int/lit8 v0, v0, 0x10

    if-eqz v0, :cond_0

    const/4 v0, 0x1

    return v0

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method public hasAuidString()Z
    .locals 1

    .line 2691
    iget v0, p0, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->bitField0_:I

    and-int/lit16 v0, v0, 0x80

    if-eqz v0, :cond_0

    const/4 v0, 0x1

    return v0

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method public hasCache()Z
    .locals 1

    .line 2297
    iget v0, p0, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->bitField0_:I

    and-int/lit8 v0, v0, 0x4

    if-eqz v0, :cond_0

    const/4 v0, 0x1

    return v0

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method public hasClientInfo()Z
    .locals 2

    .line 2087
    iget v0, p0, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->bitField0_:I

    const/4 v1, 0x1

    and-int/2addr v0, v1

    if-eqz v0, :cond_0

    return v1

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method public hasDeviceInfo()Z
    .locals 1

    .line 2580
    iget v0, p0, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->bitField0_:I

    and-int/lit8 v0, v0, 0x40

    if-eqz v0, :cond_0

    const/4 v0, 0x1

    return v0

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method public hasExternalUserIdentifier()Z
    .locals 1

    .line 2923
    iget v0, p0, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->bitField0_:I

    and-int/lit16 v0, v0, 0x800

    if-eqz v0, :cond_0

    const/4 v0, 0x1

    return v0

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method public hasLegacyFlowUserConsent()Z
    .locals 1

    .line 2355
    iget v0, p0, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->bitField0_:I

    and-int/lit8 v0, v0, 0x8

    if-eqz v0, :cond_0

    const/4 v0, 0x1

    return v0

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method public hasPrivacy()Z
    .locals 1

    .line 2138
    iget v0, p0, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->bitField0_:I

    and-int/lit8 v0, v0, 0x2

    if-eqz v0, :cond_0

    const/4 v0, 0x1

    return v0

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method public hasUadsInitBlob()Z
    .locals 1

    .line 2770
    iget v0, p0, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->bitField0_:I

    and-int/lit16 v0, v0, 0x100

    if-eqz v0, :cond_0

    const/4 v0, 0x1

    return v0

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method public hasUnityBuildGuid()Z
    .locals 1

    .line 3117
    iget v0, p0, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->bitField0_:I

    and-int/lit16 v0, v0, 0x1000

    if-eqz v0, :cond_0

    const/4 v0, 0x1

    return v0

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method public hasUnityInstallationId()Z
    .locals 1

    .line 2821
    iget v0, p0, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->bitField0_:I

    and-int/lit16 v0, v0, 0x200

    if-eqz v0, :cond_0

    const/4 v0, 0x1

    return v0

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method public hasUnityMegaSessionId()Z
    .locals 1

    .line 2872
    iget v0, p0, Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;->bitField0_:I

    and-int/lit16 v0, v0, 0x400

    if-eqz v0, :cond_0

    const/4 v0, 0x1

    return v0

    :cond_0
    const/4 v0, 0x0

    return v0
.end method
