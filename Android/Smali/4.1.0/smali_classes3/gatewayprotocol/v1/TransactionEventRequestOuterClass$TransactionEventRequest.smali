.class public final Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionEventRequest;
.super Lcom/google/protobuf/GeneratedMessageLite;
.source "TransactionEventRequestOuterClass.java"

# interfaces
.implements Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionEventRequestOrBuilder;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lgatewayprotocol/v1/TransactionEventRequestOuterClass;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x19
    name = "TransactionEventRequest"
.end annotation

.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionEventRequest$Builder;
    }
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Lcom/google/protobuf/GeneratedMessageLite<",
        "Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionEventRequest;",
        "Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionEventRequest$Builder;",
        ">;",
        "Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionEventRequestOrBuilder;"
    }
.end annotation


# static fields
.field public static final APP_STORE_FIELD_NUMBER:I = 0x3

.field public static final CUSTOM_STORE_FIELD_NUMBER:I = 0x4

.field private static final DEFAULT_INSTANCE:Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionEventRequest;

.field public static final DYNAMIC_DEVICE_INFO_FIELD_NUMBER:I = 0x2

.field public static final GOOGLE_PLAY_BILLING_LIBRARY_VERSION_FIELD_NUMBER:I = 0x8

.field public static final ORIGIN_FIELD_NUMBER:I = 0x6

.field private static volatile PARSER:Lcom/google/protobuf/Parser; = null
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Lcom/google/protobuf/Parser<",
            "Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionEventRequest;",
            ">;"
        }
    .end annotation
.end field

.field public static final STATIC_DEVICE_INFO_FIELD_NUMBER:I = 0x1

.field public static final STORE_KIT_VERSION_FIELD_NUMBER:I = 0x7

.field public static final TRANSACTION_DATA_FIELD_NUMBER:I = 0x5


# instance fields
.field private appStore_:I

.field private bitField0_:I

.field private customStore_:Ljava/lang/String;

.field private dynamicDeviceInfo_:Lgatewayprotocol/v1/DynamicDeviceInfoOuterClass$DynamicDeviceInfo;

.field private googlePlayBillingLibraryVersion_:Ljava/lang/String;

.field private origin_:I

.field private staticDeviceInfo_:Lgatewayprotocol/v1/StaticDeviceInfoOuterClass$StaticDeviceInfo;

.field private storeKitVersion_:I

.field private transactionData_:Lcom/google/protobuf/Internal$ProtobufList;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Lcom/google/protobuf/Internal$ProtobufList<",
            "Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData;",
            ">;"
        }
    .end annotation
.end field


# direct methods
.method static constructor <clinit>()V
    .locals 2

    .line 3625
    new-instance v0, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionEventRequest;

    invoke-direct {v0}, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionEventRequest;-><init>()V

    .line 3628
    sput-object v0, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionEventRequest;->DEFAULT_INSTANCE:Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionEventRequest;

    .line 3629
    const-class v1, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionEventRequest;

    invoke-static {v1, v0}, Lcom/google/protobuf/GeneratedMessageLite;->registerDefaultInstance(Ljava/lang/Class;Lcom/google/protobuf/GeneratedMessageLite;)V

    return-void
.end method

.method private constructor <init>()V
    .locals 2

    .line 2235
    invoke-direct {p0}, Lcom/google/protobuf/GeneratedMessageLite;-><init>()V

    .line 2236
    const-string v0, ""

    iput-object v0, p0, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionEventRequest;->customStore_:Ljava/lang/String;

    .line 2237
    invoke-static {}, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionEventRequest;->emptyProtobufList()Lcom/google/protobuf/Internal$ProtobufList;

    move-result-object v1

    iput-object v1, p0, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionEventRequest;->transactionData_:Lcom/google/protobuf/Internal$ProtobufList;

    .line 2238
    iput-object v0, p0, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionEventRequest;->googlePlayBillingLibraryVersion_:Ljava/lang/String;

    return-void
.end method

.method static synthetic access$3100()Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionEventRequest;
    .locals 1

    .line 2230
    sget-object v0, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionEventRequest;->DEFAULT_INSTANCE:Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionEventRequest;

    return-object v0
.end method

.method static synthetic access$3200(Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionEventRequest;Lgatewayprotocol/v1/StaticDeviceInfoOuterClass$StaticDeviceInfo;)V
    .locals 0

    .line 2230
    invoke-direct {p0, p1}, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionEventRequest;->setStaticDeviceInfo(Lgatewayprotocol/v1/StaticDeviceInfoOuterClass$StaticDeviceInfo;)V

    return-void
.end method

.method static synthetic access$3300(Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionEventRequest;Lgatewayprotocol/v1/StaticDeviceInfoOuterClass$StaticDeviceInfo;)V
    .locals 0

    .line 2230
    invoke-direct {p0, p1}, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionEventRequest;->mergeStaticDeviceInfo(Lgatewayprotocol/v1/StaticDeviceInfoOuterClass$StaticDeviceInfo;)V

    return-void
.end method

.method static synthetic access$3400(Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionEventRequest;)V
    .locals 0

    .line 2230
    invoke-direct {p0}, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionEventRequest;->clearStaticDeviceInfo()V

    return-void
.end method

.method static synthetic access$3500(Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionEventRequest;Lgatewayprotocol/v1/DynamicDeviceInfoOuterClass$DynamicDeviceInfo;)V
    .locals 0

    .line 2230
    invoke-direct {p0, p1}, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionEventRequest;->setDynamicDeviceInfo(Lgatewayprotocol/v1/DynamicDeviceInfoOuterClass$DynamicDeviceInfo;)V

    return-void
.end method

.method static synthetic access$3600(Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionEventRequest;Lgatewayprotocol/v1/DynamicDeviceInfoOuterClass$DynamicDeviceInfo;)V
    .locals 0

    .line 2230
    invoke-direct {p0, p1}, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionEventRequest;->mergeDynamicDeviceInfo(Lgatewayprotocol/v1/DynamicDeviceInfoOuterClass$DynamicDeviceInfo;)V

    return-void
.end method

.method static synthetic access$3700(Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionEventRequest;)V
    .locals 0

    .line 2230
    invoke-direct {p0}, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionEventRequest;->clearDynamicDeviceInfo()V

    return-void
.end method

.method static synthetic access$3800(Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionEventRequest;I)V
    .locals 0

    .line 2230
    invoke-direct {p0, p1}, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionEventRequest;->setAppStoreValue(I)V

    return-void
.end method

.method static synthetic access$3900(Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionEventRequest;Lgatewayprotocol/v1/TransactionEventRequestOuterClass$StoreType;)V
    .locals 0

    .line 2230
    invoke-direct {p0, p1}, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionEventRequest;->setAppStore(Lgatewayprotocol/v1/TransactionEventRequestOuterClass$StoreType;)V

    return-void
.end method

.method static synthetic access$4000(Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionEventRequest;)V
    .locals 0

    .line 2230
    invoke-direct {p0}, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionEventRequest;->clearAppStore()V

    return-void
.end method

.method static synthetic access$4100(Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionEventRequest;Ljava/lang/String;)V
    .locals 0

    .line 2230
    invoke-direct {p0, p1}, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionEventRequest;->setCustomStore(Ljava/lang/String;)V

    return-void
.end method

.method static synthetic access$4200(Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionEventRequest;)V
    .locals 0

    .line 2230
    invoke-direct {p0}, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionEventRequest;->clearCustomStore()V

    return-void
.end method

.method static synthetic access$4300(Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionEventRequest;Lcom/google/protobuf/ByteString;)V
    .locals 0

    .line 2230
    invoke-direct {p0, p1}, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionEventRequest;->setCustomStoreBytes(Lcom/google/protobuf/ByteString;)V

    return-void
.end method

.method static synthetic access$4400(Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionEventRequest;ILgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData;)V
    .locals 0

    .line 2230
    invoke-direct {p0, p1, p2}, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionEventRequest;->setTransactionData(ILgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData;)V

    return-void
.end method

.method static synthetic access$4500(Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionEventRequest;Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData;)V
    .locals 0

    .line 2230
    invoke-direct {p0, p1}, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionEventRequest;->addTransactionData(Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData;)V

    return-void
.end method

.method static synthetic access$4600(Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionEventRequest;ILgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData;)V
    .locals 0

    .line 2230
    invoke-direct {p0, p1, p2}, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionEventRequest;->addTransactionData(ILgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData;)V

    return-void
.end method

.method static synthetic access$4700(Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionEventRequest;Ljava/lang/Iterable;)V
    .locals 0

    .line 2230
    invoke-direct {p0, p1}, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionEventRequest;->addAllTransactionData(Ljava/lang/Iterable;)V

    return-void
.end method

.method static synthetic access$4800(Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionEventRequest;)V
    .locals 0

    .line 2230
    invoke-direct {p0}, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionEventRequest;->clearTransactionData()V

    return-void
.end method

.method static synthetic access$4900(Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionEventRequest;I)V
    .locals 0

    .line 2230
    invoke-direct {p0, p1}, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionEventRequest;->removeTransactionData(I)V

    return-void
.end method

.method static synthetic access$5000(Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionEventRequest;I)V
    .locals 0

    .line 2230
    invoke-direct {p0, p1}, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionEventRequest;->setOriginValue(I)V

    return-void
.end method

.method static synthetic access$5100(Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionEventRequest;Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionOrigin;)V
    .locals 0

    .line 2230
    invoke-direct {p0, p1}, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionEventRequest;->setOrigin(Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionOrigin;)V

    return-void
.end method

.method static synthetic access$5200(Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionEventRequest;)V
    .locals 0

    .line 2230
    invoke-direct {p0}, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionEventRequest;->clearOrigin()V

    return-void
.end method

.method static synthetic access$5300(Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionEventRequest;I)V
    .locals 0

    .line 2230
    invoke-direct {p0, p1}, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionEventRequest;->setStoreKitVersionValue(I)V

    return-void
.end method

.method static synthetic access$5400(Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionEventRequest;Lgatewayprotocol/v1/TransactionEventRequestOuterClass$StoreKitVersion;)V
    .locals 0

    .line 2230
    invoke-direct {p0, p1}, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionEventRequest;->setStoreKitVersion(Lgatewayprotocol/v1/TransactionEventRequestOuterClass$StoreKitVersion;)V

    return-void
.end method

.method static synthetic access$5500(Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionEventRequest;)V
    .locals 0

    .line 2230
    invoke-direct {p0}, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionEventRequest;->clearStoreKitVersion()V

    return-void
.end method

.method static synthetic access$5600(Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionEventRequest;Ljava/lang/String;)V
    .locals 0

    .line 2230
    invoke-direct {p0, p1}, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionEventRequest;->setGooglePlayBillingLibraryVersion(Ljava/lang/String;)V

    return-void
.end method

.method static synthetic access$5700(Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionEventRequest;)V
    .locals 0

    .line 2230
    invoke-direct {p0}, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionEventRequest;->clearGooglePlayBillingLibraryVersion()V

    return-void
.end method

.method static synthetic access$5800(Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionEventRequest;Lcom/google/protobuf/ByteString;)V
    .locals 0

    .line 2230
    invoke-direct {p0, p1}, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionEventRequest;->setGooglePlayBillingLibraryVersionBytes(Lcom/google/protobuf/ByteString;)V

    return-void
.end method

.method private addAllTransactionData(Ljava/lang/Iterable;)V
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/Iterable<",
            "+",
            "Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData;",
            ">;)V"
        }
    .end annotation

    .line 2614
    invoke-direct {p0}, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionEventRequest;->ensureTransactionDataIsMutable()V

    .line 2615
    iget-object v0, p0, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionEventRequest;->transactionData_:Lcom/google/protobuf/Internal$ProtobufList;

    invoke-static {p1, v0}, Lcom/google/protobuf/AbstractMessageLite;->addAll(Ljava/lang/Iterable;Ljava/util/List;)V

    return-void
.end method

.method private addTransactionData(ILgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData;)V
    .locals 1

    .line 2601
    invoke-virtual {p2}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    .line 2602
    invoke-direct {p0}, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionEventRequest;->ensureTransactionDataIsMutable()V

    .line 2603
    iget-object v0, p0, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionEventRequest;->transactionData_:Lcom/google/protobuf/Internal$ProtobufList;

    invoke-interface {v0, p1, p2}, Lcom/google/protobuf/Internal$ProtobufList;->add(ILjava/lang/Object;)V

    return-void
.end method

.method private addTransactionData(Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData;)V
    .locals 1

    .line 2588
    invoke-virtual {p1}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    .line 2589
    invoke-direct {p0}, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionEventRequest;->ensureTransactionDataIsMutable()V

    .line 2590
    iget-object v0, p0, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionEventRequest;->transactionData_:Lcom/google/protobuf/Internal$ProtobufList;

    invoke-interface {v0, p1}, Lcom/google/protobuf/Internal$ProtobufList;->add(Ljava/lang/Object;)Z

    return-void
.end method

.method private clearAppStore()V
    .locals 1

    const/4 v0, 0x0

    .line 2432
    iput v0, p0, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionEventRequest;->appStore_:I

    return-void
.end method

.method private clearCustomStore()V
    .locals 1

    .line 2485
    invoke-static {}, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionEventRequest;->getDefaultInstance()Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionEventRequest;

    move-result-object v0

    invoke-virtual {v0}, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionEventRequest;->getCustomStore()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionEventRequest;->customStore_:Ljava/lang/String;

    return-void
.end method

.method private clearDynamicDeviceInfo()V
    .locals 1

    const/4 v0, 0x0

    .line 2369
    iput-object v0, p0, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionEventRequest;->dynamicDeviceInfo_:Lgatewayprotocol/v1/DynamicDeviceInfoOuterClass$DynamicDeviceInfo;

    .line 2370
    iget v0, p0, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionEventRequest;->bitField0_:I

    and-int/lit8 v0, v0, -0x3

    iput v0, p0, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionEventRequest;->bitField0_:I

    return-void
.end method

.method private clearGooglePlayBillingLibraryVersion()V
    .locals 1

    .line 2814
    invoke-static {}, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionEventRequest;->getDefaultInstance()Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionEventRequest;

    move-result-object v0

    invoke-virtual {v0}, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionEventRequest;->getGooglePlayBillingLibraryVersion()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionEventRequest;->googlePlayBillingLibraryVersion_:Ljava/lang/String;

    return-void
.end method

.method private clearOrigin()V
    .locals 1

    const/4 v0, 0x0

    .line 2699
    iput v0, p0, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionEventRequest;->origin_:I

    return-void
.end method

.method private clearStaticDeviceInfo()V
    .locals 1

    const/4 v0, 0x0

    .line 2303
    iput-object v0, p0, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionEventRequest;->staticDeviceInfo_:Lgatewayprotocol/v1/StaticDeviceInfoOuterClass$StaticDeviceInfo;

    .line 2304
    iget v0, p0, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionEventRequest;->bitField0_:I

    and-int/lit8 v0, v0, -0x2

    iput v0, p0, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionEventRequest;->bitField0_:I

    return-void
.end method

.method private clearStoreKitVersion()V
    .locals 1

    const/4 v0, 0x0

    .line 2761
    iput v0, p0, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionEventRequest;->storeKitVersion_:I

    return-void
.end method

.method private clearTransactionData()V
    .locals 1

    .line 2626
    invoke-static {}, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionEventRequest;->emptyProtobufList()Lcom/google/protobuf/Internal$ProtobufList;

    move-result-object v0

    iput-object v0, p0, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionEventRequest;->transactionData_:Lcom/google/protobuf/Internal$ProtobufList;

    return-void
.end method

.method private ensureTransactionDataIsMutable()V
    .locals 2

    .line 2560
    iget-object v0, p0, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionEventRequest;->transactionData_:Lcom/google/protobuf/Internal$ProtobufList;

    .line 2561
    invoke-interface {v0}, Lcom/google/protobuf/Internal$ProtobufList;->isModifiable()Z

    move-result v1

    if-nez v1, :cond_0

    .line 2563
    invoke-static {v0}, Lcom/google/protobuf/GeneratedMessageLite;->mutableCopy(Lcom/google/protobuf/Internal$ProtobufList;)Lcom/google/protobuf/Internal$ProtobufList;

    move-result-object v0

    iput-object v0, p0, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionEventRequest;->transactionData_:Lcom/google/protobuf/Internal$ProtobufList;

    :cond_0
    return-void
.end method

.method public static getDefaultInstance()Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionEventRequest;
    .locals 1

    .line 3634
    sget-object v0, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionEventRequest;->DEFAULT_INSTANCE:Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionEventRequest;

    return-object v0
.end method

.method private mergeDynamicDeviceInfo(Lgatewayprotocol/v1/DynamicDeviceInfoOuterClass$DynamicDeviceInfo;)V
    .locals 2

    .line 2352
    invoke-virtual {p1}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    .line 2353
    iget-object v0, p0, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionEventRequest;->dynamicDeviceInfo_:Lgatewayprotocol/v1/DynamicDeviceInfoOuterClass$DynamicDeviceInfo;

    if-eqz v0, :cond_0

    .line 2354
    invoke-static {}, Lgatewayprotocol/v1/DynamicDeviceInfoOuterClass$DynamicDeviceInfo;->getDefaultInstance()Lgatewayprotocol/v1/DynamicDeviceInfoOuterClass$DynamicDeviceInfo;

    move-result-object v1

    if-eq v0, v1, :cond_0

    .line 2355
    iget-object v0, p0, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionEventRequest;->dynamicDeviceInfo_:Lgatewayprotocol/v1/DynamicDeviceInfoOuterClass$DynamicDeviceInfo;

    .line 2356
    invoke-static {v0}, Lgatewayprotocol/v1/DynamicDeviceInfoOuterClass$DynamicDeviceInfo;->newBuilder(Lgatewayprotocol/v1/DynamicDeviceInfoOuterClass$DynamicDeviceInfo;)Lgatewayprotocol/v1/DynamicDeviceInfoOuterClass$DynamicDeviceInfo$Builder;

    move-result-object v0

    invoke-virtual {v0, p1}, Lgatewayprotocol/v1/DynamicDeviceInfoOuterClass$DynamicDeviceInfo$Builder;->mergeFrom(Lcom/google/protobuf/GeneratedMessageLite;)Lcom/google/protobuf/GeneratedMessageLite$Builder;

    move-result-object p1

    check-cast p1, Lgatewayprotocol/v1/DynamicDeviceInfoOuterClass$DynamicDeviceInfo$Builder;

    invoke-virtual {p1}, Lgatewayprotocol/v1/DynamicDeviceInfoOuterClass$DynamicDeviceInfo$Builder;->buildPartial()Lcom/google/protobuf/GeneratedMessageLite;

    move-result-object p1

    check-cast p1, Lgatewayprotocol/v1/DynamicDeviceInfoOuterClass$DynamicDeviceInfo;

    iput-object p1, p0, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionEventRequest;->dynamicDeviceInfo_:Lgatewayprotocol/v1/DynamicDeviceInfoOuterClass$DynamicDeviceInfo;

    goto :goto_0

    .line 2358
    :cond_0
    iput-object p1, p0, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionEventRequest;->dynamicDeviceInfo_:Lgatewayprotocol/v1/DynamicDeviceInfoOuterClass$DynamicDeviceInfo;

    .line 2360
    :goto_0
    iget p1, p0, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionEventRequest;->bitField0_:I

    or-int/lit8 p1, p1, 0x2

    iput p1, p0, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionEventRequest;->bitField0_:I

    return-void
.end method

.method private mergeStaticDeviceInfo(Lgatewayprotocol/v1/StaticDeviceInfoOuterClass$StaticDeviceInfo;)V
    .locals 2

    .line 2286
    invoke-virtual {p1}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    .line 2287
    iget-object v0, p0, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionEventRequest;->staticDeviceInfo_:Lgatewayprotocol/v1/StaticDeviceInfoOuterClass$StaticDeviceInfo;

    if-eqz v0, :cond_0

    .line 2288
    invoke-static {}, Lgatewayprotocol/v1/StaticDeviceInfoOuterClass$StaticDeviceInfo;->getDefaultInstance()Lgatewayprotocol/v1/StaticDeviceInfoOuterClass$StaticDeviceInfo;

    move-result-object v1

    if-eq v0, v1, :cond_0

    .line 2289
    iget-object v0, p0, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionEventRequest;->staticDeviceInfo_:Lgatewayprotocol/v1/StaticDeviceInfoOuterClass$StaticDeviceInfo;

    .line 2290
    invoke-static {v0}, Lgatewayprotocol/v1/StaticDeviceInfoOuterClass$StaticDeviceInfo;->newBuilder(Lgatewayprotocol/v1/StaticDeviceInfoOuterClass$StaticDeviceInfo;)Lgatewayprotocol/v1/StaticDeviceInfoOuterClass$StaticDeviceInfo$Builder;

    move-result-object v0

    invoke-virtual {v0, p1}, Lgatewayprotocol/v1/StaticDeviceInfoOuterClass$StaticDeviceInfo$Builder;->mergeFrom(Lcom/google/protobuf/GeneratedMessageLite;)Lcom/google/protobuf/GeneratedMessageLite$Builder;

    move-result-object p1

    check-cast p1, Lgatewayprotocol/v1/StaticDeviceInfoOuterClass$StaticDeviceInfo$Builder;

    invoke-virtual {p1}, Lgatewayprotocol/v1/StaticDeviceInfoOuterClass$StaticDeviceInfo$Builder;->buildPartial()Lcom/google/protobuf/GeneratedMessageLite;

    move-result-object p1

    check-cast p1, Lgatewayprotocol/v1/StaticDeviceInfoOuterClass$StaticDeviceInfo;

    iput-object p1, p0, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionEventRequest;->staticDeviceInfo_:Lgatewayprotocol/v1/StaticDeviceInfoOuterClass$StaticDeviceInfo;

    goto :goto_0

    .line 2292
    :cond_0
    iput-object p1, p0, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionEventRequest;->staticDeviceInfo_:Lgatewayprotocol/v1/StaticDeviceInfoOuterClass$StaticDeviceInfo;

    .line 2294
    :goto_0
    iget p1, p0, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionEventRequest;->bitField0_:I

    or-int/lit8 p1, p1, 0x1

    iput p1, p0, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionEventRequest;->bitField0_:I

    return-void
.end method

.method public static newBuilder()Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionEventRequest$Builder;
    .locals 1

    .line 2908
    sget-object v0, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionEventRequest;->DEFAULT_INSTANCE:Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionEventRequest;

    invoke-virtual {v0}, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionEventRequest;->createBuilder()Lcom/google/protobuf/GeneratedMessageLite$Builder;

    move-result-object v0

    check-cast v0, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionEventRequest$Builder;

    return-object v0
.end method

.method public static newBuilder(Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionEventRequest;)Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionEventRequest$Builder;
    .locals 1

    .line 2911
    sget-object v0, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionEventRequest;->DEFAULT_INSTANCE:Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionEventRequest;

    invoke-virtual {v0, p0}, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionEventRequest;->createBuilder(Lcom/google/protobuf/GeneratedMessageLite;)Lcom/google/protobuf/GeneratedMessageLite$Builder;

    move-result-object p0

    check-cast p0, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionEventRequest$Builder;

    return-object p0
.end method

.method public static parseDelimitedFrom(Ljava/io/InputStream;)Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionEventRequest;
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    .line 2884
    sget-object v0, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionEventRequest;->DEFAULT_INSTANCE:Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionEventRequest;

    invoke-static {v0, p0}, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionEventRequest;->parseDelimitedFrom(Lcom/google/protobuf/GeneratedMessageLite;Ljava/io/InputStream;)Lcom/google/protobuf/GeneratedMessageLite;

    move-result-object p0

    check-cast p0, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionEventRequest;

    return-object p0
.end method

.method public static parseDelimitedFrom(Ljava/io/InputStream;Lcom/google/protobuf/ExtensionRegistryLite;)Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionEventRequest;
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    .line 2891
    sget-object v0, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionEventRequest;->DEFAULT_INSTANCE:Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionEventRequest;

    invoke-static {v0, p0, p1}, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionEventRequest;->parseDelimitedFrom(Lcom/google/protobuf/GeneratedMessageLite;Ljava/io/InputStream;Lcom/google/protobuf/ExtensionRegistryLite;)Lcom/google/protobuf/GeneratedMessageLite;

    move-result-object p0

    check-cast p0, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionEventRequest;

    return-object p0
.end method

.method public static parseFrom(Lcom/google/protobuf/ByteString;)Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionEventRequest;
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/google/protobuf/InvalidProtocolBufferException;
        }
    .end annotation

    .line 2847
    sget-object v0, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionEventRequest;->DEFAULT_INSTANCE:Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionEventRequest;

    invoke-static {v0, p0}, Lcom/google/protobuf/GeneratedMessageLite;->parseFrom(Lcom/google/protobuf/GeneratedMessageLite;Lcom/google/protobuf/ByteString;)Lcom/google/protobuf/GeneratedMessageLite;

    move-result-object p0

    check-cast p0, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionEventRequest;

    return-object p0
.end method

.method public static parseFrom(Lcom/google/protobuf/ByteString;Lcom/google/protobuf/ExtensionRegistryLite;)Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionEventRequest;
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/google/protobuf/InvalidProtocolBufferException;
        }
    .end annotation

    .line 2854
    sget-object v0, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionEventRequest;->DEFAULT_INSTANCE:Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionEventRequest;

    invoke-static {v0, p0, p1}, Lcom/google/protobuf/GeneratedMessageLite;->parseFrom(Lcom/google/protobuf/GeneratedMessageLite;Lcom/google/protobuf/ByteString;Lcom/google/protobuf/ExtensionRegistryLite;)Lcom/google/protobuf/GeneratedMessageLite;

    move-result-object p0

    check-cast p0, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionEventRequest;

    return-object p0
.end method

.method public static parseFrom(Lcom/google/protobuf/CodedInputStream;)Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionEventRequest;
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    .line 2896
    sget-object v0, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionEventRequest;->DEFAULT_INSTANCE:Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionEventRequest;

    invoke-static {v0, p0}, Lcom/google/protobuf/GeneratedMessageLite;->parseFrom(Lcom/google/protobuf/GeneratedMessageLite;Lcom/google/protobuf/CodedInputStream;)Lcom/google/protobuf/GeneratedMessageLite;

    move-result-object p0

    check-cast p0, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionEventRequest;

    return-object p0
.end method

.method public static parseFrom(Lcom/google/protobuf/CodedInputStream;Lcom/google/protobuf/ExtensionRegistryLite;)Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionEventRequest;
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    .line 2903
    sget-object v0, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionEventRequest;->DEFAULT_INSTANCE:Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionEventRequest;

    invoke-static {v0, p0, p1}, Lcom/google/protobuf/GeneratedMessageLite;->parseFrom(Lcom/google/protobuf/GeneratedMessageLite;Lcom/google/protobuf/CodedInputStream;Lcom/google/protobuf/ExtensionRegistryLite;)Lcom/google/protobuf/GeneratedMessageLite;

    move-result-object p0

    check-cast p0, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionEventRequest;

    return-object p0
.end method

.method public static parseFrom(Ljava/io/InputStream;)Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionEventRequest;
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    .line 2871
    sget-object v0, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionEventRequest;->DEFAULT_INSTANCE:Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionEventRequest;

    invoke-static {v0, p0}, Lcom/google/protobuf/GeneratedMessageLite;->parseFrom(Lcom/google/protobuf/GeneratedMessageLite;Ljava/io/InputStream;)Lcom/google/protobuf/GeneratedMessageLite;

    move-result-object p0

    check-cast p0, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionEventRequest;

    return-object p0
.end method

.method public static parseFrom(Ljava/io/InputStream;Lcom/google/protobuf/ExtensionRegistryLite;)Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionEventRequest;
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    .line 2878
    sget-object v0, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionEventRequest;->DEFAULT_INSTANCE:Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionEventRequest;

    invoke-static {v0, p0, p1}, Lcom/google/protobuf/GeneratedMessageLite;->parseFrom(Lcom/google/protobuf/GeneratedMessageLite;Ljava/io/InputStream;Lcom/google/protobuf/ExtensionRegistryLite;)Lcom/google/protobuf/GeneratedMessageLite;

    move-result-object p0

    check-cast p0, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionEventRequest;

    return-object p0
.end method

.method public static parseFrom(Ljava/nio/ByteBuffer;)Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionEventRequest;
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/google/protobuf/InvalidProtocolBufferException;
        }
    .end annotation

    .line 2834
    sget-object v0, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionEventRequest;->DEFAULT_INSTANCE:Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionEventRequest;

    invoke-static {v0, p0}, Lcom/google/protobuf/GeneratedMessageLite;->parseFrom(Lcom/google/protobuf/GeneratedMessageLite;Ljava/nio/ByteBuffer;)Lcom/google/protobuf/GeneratedMessageLite;

    move-result-object p0

    check-cast p0, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionEventRequest;

    return-object p0
.end method

.method public static parseFrom(Ljava/nio/ByteBuffer;Lcom/google/protobuf/ExtensionRegistryLite;)Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionEventRequest;
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/google/protobuf/InvalidProtocolBufferException;
        }
    .end annotation

    .line 2841
    sget-object v0, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionEventRequest;->DEFAULT_INSTANCE:Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionEventRequest;

    invoke-static {v0, p0, p1}, Lcom/google/protobuf/GeneratedMessageLite;->parseFrom(Lcom/google/protobuf/GeneratedMessageLite;Ljava/nio/ByteBuffer;Lcom/google/protobuf/ExtensionRegistryLite;)Lcom/google/protobuf/GeneratedMessageLite;

    move-result-object p0

    check-cast p0, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionEventRequest;

    return-object p0
.end method

.method public static parseFrom([B)Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionEventRequest;
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/google/protobuf/InvalidProtocolBufferException;
        }
    .end annotation

    .line 2859
    sget-object v0, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionEventRequest;->DEFAULT_INSTANCE:Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionEventRequest;

    invoke-static {v0, p0}, Lcom/google/protobuf/GeneratedMessageLite;->parseFrom(Lcom/google/protobuf/GeneratedMessageLite;[B)Lcom/google/protobuf/GeneratedMessageLite;

    move-result-object p0

    check-cast p0, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionEventRequest;

    return-object p0
.end method

.method public static parseFrom([BLcom/google/protobuf/ExtensionRegistryLite;)Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionEventRequest;
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/google/protobuf/InvalidProtocolBufferException;
        }
    .end annotation

    .line 2866
    sget-object v0, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionEventRequest;->DEFAULT_INSTANCE:Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionEventRequest;

    invoke-static {v0, p0, p1}, Lcom/google/protobuf/GeneratedMessageLite;->parseFrom(Lcom/google/protobuf/GeneratedMessageLite;[BLcom/google/protobuf/ExtensionRegistryLite;)Lcom/google/protobuf/GeneratedMessageLite;

    move-result-object p0

    check-cast p0, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionEventRequest;

    return-object p0
.end method

.method public static parser()Lcom/google/protobuf/Parser;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Lcom/google/protobuf/Parser<",
            "Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionEventRequest;",
            ">;"
        }
    .end annotation

    .line 3640
    sget-object v0, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionEventRequest;->DEFAULT_INSTANCE:Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionEventRequest;

    invoke-virtual {v0}, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionEventRequest;->getParserForType()Lcom/google/protobuf/Parser;

    move-result-object v0

    return-object v0
.end method

.method private removeTransactionData(I)V
    .locals 1

    .line 2636
    invoke-direct {p0}, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionEventRequest;->ensureTransactionDataIsMutable()V

    .line 2637
    iget-object v0, p0, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionEventRequest;->transactionData_:Lcom/google/protobuf/Internal$ProtobufList;

    invoke-interface {v0, p1}, Lcom/google/protobuf/Internal$ProtobufList;->remove(I)Ljava/lang/Object;

    return-void
.end method

.method private setAppStore(Lgatewayprotocol/v1/TransactionEventRequestOuterClass$StoreType;)V
    .locals 0

    .line 2420
    invoke-virtual {p1}, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$StoreType;->getNumber()I

    move-result p1

    iput p1, p0, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionEventRequest;->appStore_:I

    return-void
.end method

.method private setAppStoreValue(I)V
    .locals 0

    .line 2409
    iput p1, p0, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionEventRequest;->appStore_:I

    return-void
.end method

.method private setCustomStore(Ljava/lang/String;)V
    .locals 0

    .line 2472
    invoke-virtual {p1}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    .line 2474
    iput-object p1, p0, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionEventRequest;->customStore_:Ljava/lang/String;

    return-void
.end method

.method private setCustomStoreBytes(Lcom/google/protobuf/ByteString;)V
    .locals 0

    .line 2497
    invoke-static {p1}, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionEventRequest;->checkByteStringIsUtf8(Lcom/google/protobuf/ByteString;)V

    .line 2498
    invoke-virtual {p1}, Lcom/google/protobuf/ByteString;->toStringUtf8()Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionEventRequest;->customStore_:Ljava/lang/String;

    return-void
.end method

.method private setDynamicDeviceInfo(Lgatewayprotocol/v1/DynamicDeviceInfoOuterClass$DynamicDeviceInfo;)V
    .locals 0

    .line 2339
    invoke-virtual {p1}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    .line 2340
    iput-object p1, p0, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionEventRequest;->dynamicDeviceInfo_:Lgatewayprotocol/v1/DynamicDeviceInfoOuterClass$DynamicDeviceInfo;

    .line 2341
    iget p1, p0, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionEventRequest;->bitField0_:I

    or-int/lit8 p1, p1, 0x2

    iput p1, p0, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionEventRequest;->bitField0_:I

    return-void
.end method

.method private setGooglePlayBillingLibraryVersion(Ljava/lang/String;)V
    .locals 0

    .line 2801
    invoke-virtual {p1}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    .line 2803
    iput-object p1, p0, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionEventRequest;->googlePlayBillingLibraryVersion_:Ljava/lang/String;

    return-void
.end method

.method private setGooglePlayBillingLibraryVersionBytes(Lcom/google/protobuf/ByteString;)V
    .locals 0

    .line 2826
    invoke-static {p1}, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionEventRequest;->checkByteStringIsUtf8(Lcom/google/protobuf/ByteString;)V

    .line 2827
    invoke-virtual {p1}, Lcom/google/protobuf/ByteString;->toStringUtf8()Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionEventRequest;->googlePlayBillingLibraryVersion_:Ljava/lang/String;

    return-void
.end method

.method private setOrigin(Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionOrigin;)V
    .locals 0

    .line 2687
    invoke-virtual {p1}, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionOrigin;->getNumber()I

    move-result p1

    iput p1, p0, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionEventRequest;->origin_:I

    return-void
.end method

.method private setOriginValue(I)V
    .locals 0

    .line 2676
    iput p1, p0, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionEventRequest;->origin_:I

    return-void
.end method

.method private setStaticDeviceInfo(Lgatewayprotocol/v1/StaticDeviceInfoOuterClass$StaticDeviceInfo;)V
    .locals 0

    .line 2273
    invoke-virtual {p1}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    .line 2274
    iput-object p1, p0, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionEventRequest;->staticDeviceInfo_:Lgatewayprotocol/v1/StaticDeviceInfoOuterClass$StaticDeviceInfo;

    .line 2275
    iget p1, p0, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionEventRequest;->bitField0_:I

    or-int/lit8 p1, p1, 0x1

    iput p1, p0, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionEventRequest;->bitField0_:I

    return-void
.end method

.method private setStoreKitVersion(Lgatewayprotocol/v1/TransactionEventRequestOuterClass$StoreKitVersion;)V
    .locals 0

    .line 2749
    invoke-virtual {p1}, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$StoreKitVersion;->getNumber()I

    move-result p1

    iput p1, p0, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionEventRequest;->storeKitVersion_:I

    return-void
.end method

.method private setStoreKitVersionValue(I)V
    .locals 0

    .line 2738
    iput p1, p0, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionEventRequest;->storeKitVersion_:I

    return-void
.end method

.method private setTransactionData(ILgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData;)V
    .locals 1

    .line 2576
    invoke-virtual {p2}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    .line 2577
    invoke-direct {p0}, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionEventRequest;->ensureTransactionDataIsMutable()V

    .line 2578
    iget-object v0, p0, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionEventRequest;->transactionData_:Lcom/google/protobuf/Internal$ProtobufList;

    invoke-interface {v0, p1, p2}, Lcom/google/protobuf/Internal$ProtobufList;->set(ILjava/lang/Object;)Ljava/lang/Object;

    return-void
.end method


# virtual methods
.method protected final dynamicMethod(Lcom/google/protobuf/GeneratedMessageLite$MethodToInvoke;Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;
    .locals 1

    .line 3567
    sget-object p2, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$1;->$SwitchMap$com$google$protobuf$GeneratedMessageLite$MethodToInvoke:[I

    invoke-virtual {p1}, Lcom/google/protobuf/GeneratedMessageLite$MethodToInvoke;->ordinal()I

    move-result p1

    aget p1, p2, p1

    const/4 p2, 0x1

    const/4 p3, 0x0

    packed-switch p1, :pswitch_data_0

    .line 3618
    new-instance p1, Ljava/lang/UnsupportedOperationException;

    invoke-direct {p1}, Ljava/lang/UnsupportedOperationException;-><init>()V

    throw p1

    :pswitch_0
    return-object p3

    .line 3612
    :pswitch_1
    invoke-static {p2}, Ljava/lang/Byte;->valueOf(B)Ljava/lang/Byte;

    move-result-object p1

    return-object p1

    .line 3597
    :pswitch_2
    sget-object p1, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionEventRequest;->PARSER:Lcom/google/protobuf/Parser;

    if-nez p1, :cond_1

    .line 3599
    const-class p2, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionEventRequest;

    monitor-enter p2

    .line 3600
    :try_start_0
    sget-object p1, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionEventRequest;->PARSER:Lcom/google/protobuf/Parser;

    if-nez p1, :cond_0

    .line 3602
    new-instance p1, Lcom/google/protobuf/GeneratedMessageLite$DefaultInstanceBasedParser;

    sget-object p3, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionEventRequest;->DEFAULT_INSTANCE:Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionEventRequest;

    invoke-direct {p1, p3}, Lcom/google/protobuf/GeneratedMessageLite$DefaultInstanceBasedParser;-><init>(Lcom/google/protobuf/GeneratedMessageLite;)V

    .line 3605
    sput-object p1, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionEventRequest;->PARSER:Lcom/google/protobuf/Parser;

    .line 3607
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

    .line 3594
    :pswitch_3
    sget-object p1, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionEventRequest;->DEFAULT_INSTANCE:Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionEventRequest;

    return-object p1

    :pswitch_4
    const/16 p1, 0xa

    .line 3575
    new-array p1, p1, [Ljava/lang/Object;

    const-string p3, "bitField0_"

    const/4 v0, 0x0

    aput-object p3, p1, v0

    const-string p3, "staticDeviceInfo_"

    aput-object p3, p1, p2

    const-string p2, "dynamicDeviceInfo_"

    const/4 p3, 0x2

    aput-object p2, p1, p3

    const-string p2, "appStore_"

    const/4 p3, 0x3

    aput-object p2, p1, p3

    const-string p2, "customStore_"

    const/4 p3, 0x4

    aput-object p2, p1, p3

    const-string p2, "transactionData_"

    const/4 p3, 0x5

    aput-object p2, p1, p3

    const-class p2, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData;

    const/4 p3, 0x6

    aput-object p2, p1, p3

    const-string p2, "origin_"

    const/4 p3, 0x7

    aput-object p2, p1, p3

    const-string p2, "storeKitVersion_"

    const/16 p3, 0x8

    aput-object p2, p1, p3

    const-string p2, "googlePlayBillingLibraryVersion_"

    const/16 p3, 0x9

    aput-object p2, p1, p3

    .line 3587
    const-string p2, "\u0000\u0008\u0000\u0001\u0001\u0008\u0008\u0000\u0001\u0000\u0001\u1009\u0000\u0002\u1009\u0001\u0003\u000c\u0004\u0208\u0005\u001b\u0006\u000c\u0007\u000c\u0008\u0208"

    .line 3590
    sget-object p3, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionEventRequest;->DEFAULT_INSTANCE:Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionEventRequest;

    invoke-static {p3, p2, p1}, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionEventRequest;->newMessageInfo(Lcom/google/protobuf/MessageLite;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    return-object p1

    .line 3572
    :pswitch_5
    new-instance p1, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionEventRequest$Builder;

    invoke-direct {p1, p3}, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionEventRequest$Builder;-><init>(Lgatewayprotocol/v1/TransactionEventRequestOuterClass$1;)V

    return-object p1

    .line 3569
    :pswitch_6
    new-instance p1, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionEventRequest;

    invoke-direct {p1}, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionEventRequest;-><init>()V

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

.method public getAppStore()Lgatewayprotocol/v1/TransactionEventRequestOuterClass$StoreType;
    .locals 1

    .line 2397
    iget v0, p0, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionEventRequest;->appStore_:I

    invoke-static {v0}, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$StoreType;->forNumber(I)Lgatewayprotocol/v1/TransactionEventRequestOuterClass$StoreType;

    move-result-object v0

    if-nez v0, :cond_0

    .line 2398
    sget-object v0, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$StoreType;->UNRECOGNIZED:Lgatewayprotocol/v1/TransactionEventRequestOuterClass$StoreType;

    :cond_0
    return-object v0
.end method

.method public getAppStoreValue()I
    .locals 1

    .line 2385
    iget v0, p0, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionEventRequest;->appStore_:I

    return v0
.end method

.method public getCustomStore()Ljava/lang/String;
    .locals 1

    .line 2447
    iget-object v0, p0, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionEventRequest;->customStore_:Ljava/lang/String;

    return-object v0
.end method

.method public getCustomStoreBytes()Lcom/google/protobuf/ByteString;
    .locals 1

    .line 2460
    iget-object v0, p0, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionEventRequest;->customStore_:Ljava/lang/String;

    invoke-static {v0}, Lcom/google/protobuf/ByteString;->copyFromUtf8(Ljava/lang/String;)Lcom/google/protobuf/ByteString;

    move-result-object v0

    return-object v0
.end method

.method public getDynamicDeviceInfo()Lgatewayprotocol/v1/DynamicDeviceInfoOuterClass$DynamicDeviceInfo;
    .locals 1

    .line 2329
    iget-object v0, p0, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionEventRequest;->dynamicDeviceInfo_:Lgatewayprotocol/v1/DynamicDeviceInfoOuterClass$DynamicDeviceInfo;

    if-nez v0, :cond_0

    invoke-static {}, Lgatewayprotocol/v1/DynamicDeviceInfoOuterClass$DynamicDeviceInfo;->getDefaultInstance()Lgatewayprotocol/v1/DynamicDeviceInfoOuterClass$DynamicDeviceInfo;

    move-result-object v0

    :cond_0
    return-object v0
.end method

.method public getGooglePlayBillingLibraryVersion()Ljava/lang/String;
    .locals 1

    .line 2776
    iget-object v0, p0, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionEventRequest;->googlePlayBillingLibraryVersion_:Ljava/lang/String;

    return-object v0
.end method

.method public getGooglePlayBillingLibraryVersionBytes()Lcom/google/protobuf/ByteString;
    .locals 1

    .line 2789
    iget-object v0, p0, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionEventRequest;->googlePlayBillingLibraryVersion_:Ljava/lang/String;

    invoke-static {v0}, Lcom/google/protobuf/ByteString;->copyFromUtf8(Ljava/lang/String;)Lcom/google/protobuf/ByteString;

    move-result-object v0

    return-object v0
.end method

.method public getOrigin()Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionOrigin;
    .locals 1

    .line 2664
    iget v0, p0, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionEventRequest;->origin_:I

    invoke-static {v0}, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionOrigin;->forNumber(I)Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionOrigin;

    move-result-object v0

    if-nez v0, :cond_0

    .line 2665
    sget-object v0, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionOrigin;->UNRECOGNIZED:Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionOrigin;

    :cond_0
    return-object v0
.end method

.method public getOriginValue()I
    .locals 1

    .line 2652
    iget v0, p0, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionEventRequest;->origin_:I

    return v0
.end method

.method public getStaticDeviceInfo()Lgatewayprotocol/v1/StaticDeviceInfoOuterClass$StaticDeviceInfo;
    .locals 1

    .line 2263
    iget-object v0, p0, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionEventRequest;->staticDeviceInfo_:Lgatewayprotocol/v1/StaticDeviceInfoOuterClass$StaticDeviceInfo;

    if-nez v0, :cond_0

    invoke-static {}, Lgatewayprotocol/v1/StaticDeviceInfoOuterClass$StaticDeviceInfo;->getDefaultInstance()Lgatewayprotocol/v1/StaticDeviceInfoOuterClass$StaticDeviceInfo;

    move-result-object v0

    :cond_0
    return-object v0
.end method

.method public getStoreKitVersion()Lgatewayprotocol/v1/TransactionEventRequestOuterClass$StoreKitVersion;
    .locals 1

    .line 2726
    iget v0, p0, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionEventRequest;->storeKitVersion_:I

    invoke-static {v0}, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$StoreKitVersion;->forNumber(I)Lgatewayprotocol/v1/TransactionEventRequestOuterClass$StoreKitVersion;

    move-result-object v0

    if-nez v0, :cond_0

    .line 2727
    sget-object v0, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$StoreKitVersion;->UNRECOGNIZED:Lgatewayprotocol/v1/TransactionEventRequestOuterClass$StoreKitVersion;

    :cond_0
    return-object v0
.end method

.method public getStoreKitVersionValue()I
    .locals 1

    .line 2714
    iget v0, p0, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionEventRequest;->storeKitVersion_:I

    return v0
.end method

.method public getTransactionData(I)Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData;
    .locals 1

    .line 2546
    iget-object v0, p0, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionEventRequest;->transactionData_:Lcom/google/protobuf/Internal$ProtobufList;

    invoke-interface {v0, p1}, Lcom/google/protobuf/Internal$ProtobufList;->get(I)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData;

    return-object p1
.end method

.method public getTransactionDataCount()I
    .locals 1

    .line 2535
    iget-object v0, p0, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionEventRequest;->transactionData_:Lcom/google/protobuf/Internal$ProtobufList;

    invoke-interface {v0}, Lcom/google/protobuf/Internal$ProtobufList;->size()I

    move-result v0

    return v0
.end method

.method public getTransactionDataList()Ljava/util/List;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/List<",
            "Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData;",
            ">;"
        }
    .end annotation

    .line 2513
    iget-object v0, p0, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionEventRequest;->transactionData_:Lcom/google/protobuf/Internal$ProtobufList;

    return-object v0
.end method

.method public getTransactionDataOrBuilder(I)Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionDataOrBuilder;
    .locals 1

    .line 2557
    iget-object v0, p0, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionEventRequest;->transactionData_:Lcom/google/protobuf/Internal$ProtobufList;

    invoke-interface {v0, p1}, Lcom/google/protobuf/Internal$ProtobufList;->get(I)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionDataOrBuilder;

    return-object p1
.end method

.method public getTransactionDataOrBuilderList()Ljava/util/List;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/List<",
            "+",
            "Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionDataOrBuilder;",
            ">;"
        }
    .end annotation

    .line 2524
    iget-object v0, p0, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionEventRequest;->transactionData_:Lcom/google/protobuf/Internal$ProtobufList;

    return-object v0
.end method

.method public hasDynamicDeviceInfo()Z
    .locals 1

    .line 2318
    iget v0, p0, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionEventRequest;->bitField0_:I

    and-int/lit8 v0, v0, 0x2

    if-eqz v0, :cond_0

    const/4 v0, 0x1

    return v0

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method public hasStaticDeviceInfo()Z
    .locals 2

    .line 2252
    iget v0, p0, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionEventRequest;->bitField0_:I

    const/4 v1, 0x1

    and-int/2addr v0, v1

    if-eqz v0, :cond_0

    return v1

    :cond_0
    const/4 v0, 0x0

    return v0
.end method
