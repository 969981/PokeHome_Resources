.class public final Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags;
.super Lcom/google/protobuf/GeneratedMessageLite;
.source "NativeConfigurationOuterClass.java"

# interfaces
.implements Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlagsOrBuilder;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lgatewayprotocol/v1/NativeConfigurationOuterClass;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x19
    name = "FeatureFlags"
.end annotation

.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags$Builder;
    }
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Lcom/google/protobuf/GeneratedMessageLite<",
        "Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags;",
        "Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags$Builder;",
        ">;",
        "Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlagsOrBuilder;"
    }
.end annotation


# static fields
.field public static final APP_SHEET_BUG_CHECK_ENABLED_FIELD_NUMBER:I = 0x4

.field public static final BOLD_SDK_NEXT_SESSION_ENABLED_FIELD_NUMBER:I = 0x3

.field private static final DEFAULT_INSTANCE:Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags;

.field public static final OPENGL_GPU_ENABLED_FIELD_NUMBER:I = 0x1

.field public static final OPPORTUNITY_ID_PLACEMENT_VALIDATION_FIELD_NUMBER:I = 0x2

.field private static volatile PARSER:Lcom/google/protobuf/Parser; = null
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Lcom/google/protobuf/Parser<",
            "Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags;",
            ">;"
        }
    .end annotation
.end field

.field public static final RECOVER_TERMINATED_WEBVIEWS_FIELD_NUMBER:I = 0x5

.field public static final SHOULD_HANDLE_WEBVIEW_CACHING_FIELD_NUMBER:I = 0x6

.field public static final SHOULD_SEND_IAP_HISTORY_FIELD_NUMBER:I = 0x7


# instance fields
.field private appSheetBugCheckEnabled_:Z

.field private boldSdkNextSessionEnabled_:Z

.field private openglGpuEnabled_:Z

.field private opportunityIdPlacementValidation_:Z

.field private recoverTerminatedWebviews_:Z

.field private shouldHandleWebviewCaching_:Z

.field private shouldSendIapHistory_:Z


# direct methods
.method static constructor <clinit>()V
    .locals 2

    .line 7869
    new-instance v0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags;

    invoke-direct {v0}, Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags;-><init>()V

    .line 7872
    sput-object v0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags;->DEFAULT_INSTANCE:Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags;

    .line 7873
    const-class v1, Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags;

    invoke-static {v1, v0}, Lcom/google/protobuf/GeneratedMessageLite;->registerDefaultInstance(Ljava/lang/Class;Lcom/google/protobuf/GeneratedMessageLite;)V

    return-void
.end method

.method private constructor <init>()V
    .locals 0

    .line 7158
    invoke-direct {p0}, Lcom/google/protobuf/GeneratedMessageLite;-><init>()V

    return-void
.end method

.method static synthetic access$12600()Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags;
    .locals 1

    .line 7153
    sget-object v0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags;->DEFAULT_INSTANCE:Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags;

    return-object v0
.end method

.method static synthetic access$12700(Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags;Z)V
    .locals 0

    .line 7153
    invoke-direct {p0, p1}, Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags;->setOpenglGpuEnabled(Z)V

    return-void
.end method

.method static synthetic access$12800(Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags;)V
    .locals 0

    .line 7153
    invoke-direct {p0}, Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags;->clearOpenglGpuEnabled()V

    return-void
.end method

.method static synthetic access$12900(Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags;Z)V
    .locals 0

    .line 7153
    invoke-direct {p0, p1}, Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags;->setOpportunityIdPlacementValidation(Z)V

    return-void
.end method

.method static synthetic access$13000(Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags;)V
    .locals 0

    .line 7153
    invoke-direct {p0}, Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags;->clearOpportunityIdPlacementValidation()V

    return-void
.end method

.method static synthetic access$13100(Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags;Z)V
    .locals 0

    .line 7153
    invoke-direct {p0, p1}, Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags;->setBoldSdkNextSessionEnabled(Z)V

    return-void
.end method

.method static synthetic access$13200(Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags;)V
    .locals 0

    .line 7153
    invoke-direct {p0}, Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags;->clearBoldSdkNextSessionEnabled()V

    return-void
.end method

.method static synthetic access$13300(Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags;Z)V
    .locals 0

    .line 7153
    invoke-direct {p0, p1}, Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags;->setAppSheetBugCheckEnabled(Z)V

    return-void
.end method

.method static synthetic access$13400(Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags;)V
    .locals 0

    .line 7153
    invoke-direct {p0}, Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags;->clearAppSheetBugCheckEnabled()V

    return-void
.end method

.method static synthetic access$13500(Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags;Z)V
    .locals 0

    .line 7153
    invoke-direct {p0, p1}, Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags;->setRecoverTerminatedWebviews(Z)V

    return-void
.end method

.method static synthetic access$13600(Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags;)V
    .locals 0

    .line 7153
    invoke-direct {p0}, Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags;->clearRecoverTerminatedWebviews()V

    return-void
.end method

.method static synthetic access$13700(Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags;Z)V
    .locals 0

    .line 7153
    invoke-direct {p0, p1}, Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags;->setShouldHandleWebviewCaching(Z)V

    return-void
.end method

.method static synthetic access$13800(Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags;)V
    .locals 0

    .line 7153
    invoke-direct {p0}, Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags;->clearShouldHandleWebviewCaching()V

    return-void
.end method

.method static synthetic access$13900(Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags;Z)V
    .locals 0

    .line 7153
    invoke-direct {p0, p1}, Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags;->setShouldSendIapHistory(Z)V

    return-void
.end method

.method static synthetic access$14000(Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags;)V
    .locals 0

    .line 7153
    invoke-direct {p0}, Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags;->clearShouldSendIapHistory()V

    return-void
.end method

.method private clearAppSheetBugCheckEnabled()V
    .locals 1

    const/4 v0, 0x0

    .line 7309
    iput-boolean v0, p0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags;->appSheetBugCheckEnabled_:Z

    return-void
.end method

.method private clearBoldSdkNextSessionEnabled()V
    .locals 1

    const/4 v0, 0x0

    .line 7271
    iput-boolean v0, p0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags;->boldSdkNextSessionEnabled_:Z

    return-void
.end method

.method private clearOpenglGpuEnabled()V
    .locals 1

    const/4 v0, 0x0

    .line 7195
    iput-boolean v0, p0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags;->openglGpuEnabled_:Z

    return-void
.end method

.method private clearOpportunityIdPlacementValidation()V
    .locals 1

    const/4 v0, 0x0

    .line 7233
    iput-boolean v0, p0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags;->opportunityIdPlacementValidation_:Z

    return-void
.end method

.method private clearRecoverTerminatedWebviews()V
    .locals 1

    const/4 v0, 0x0

    .line 7347
    iput-boolean v0, p0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags;->recoverTerminatedWebviews_:Z

    return-void
.end method

.method private clearShouldHandleWebviewCaching()V
    .locals 1

    const/4 v0, 0x0

    .line 7385
    iput-boolean v0, p0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags;->shouldHandleWebviewCaching_:Z

    return-void
.end method

.method private clearShouldSendIapHistory()V
    .locals 1

    const/4 v0, 0x0

    .line 7423
    iput-boolean v0, p0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags;->shouldSendIapHistory_:Z

    return-void
.end method

.method public static getDefaultInstance()Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags;
    .locals 1

    .line 7878
    sget-object v0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags;->DEFAULT_INSTANCE:Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags;

    return-object v0
.end method

.method public static newBuilder()Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags$Builder;
    .locals 1

    .line 7503
    sget-object v0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags;->DEFAULT_INSTANCE:Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags;

    invoke-virtual {v0}, Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags;->createBuilder()Lcom/google/protobuf/GeneratedMessageLite$Builder;

    move-result-object v0

    check-cast v0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags$Builder;

    return-object v0
.end method

.method public static newBuilder(Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags;)Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags$Builder;
    .locals 1

    .line 7506
    sget-object v0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags;->DEFAULT_INSTANCE:Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags;

    invoke-virtual {v0, p0}, Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags;->createBuilder(Lcom/google/protobuf/GeneratedMessageLite;)Lcom/google/protobuf/GeneratedMessageLite$Builder;

    move-result-object p0

    check-cast p0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags$Builder;

    return-object p0
.end method

.method public static parseDelimitedFrom(Ljava/io/InputStream;)Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags;
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    .line 7479
    sget-object v0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags;->DEFAULT_INSTANCE:Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags;

    invoke-static {v0, p0}, Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags;->parseDelimitedFrom(Lcom/google/protobuf/GeneratedMessageLite;Ljava/io/InputStream;)Lcom/google/protobuf/GeneratedMessageLite;

    move-result-object p0

    check-cast p0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags;

    return-object p0
.end method

.method public static parseDelimitedFrom(Ljava/io/InputStream;Lcom/google/protobuf/ExtensionRegistryLite;)Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags;
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    .line 7486
    sget-object v0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags;->DEFAULT_INSTANCE:Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags;

    invoke-static {v0, p0, p1}, Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags;->parseDelimitedFrom(Lcom/google/protobuf/GeneratedMessageLite;Ljava/io/InputStream;Lcom/google/protobuf/ExtensionRegistryLite;)Lcom/google/protobuf/GeneratedMessageLite;

    move-result-object p0

    check-cast p0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags;

    return-object p0
.end method

.method public static parseFrom(Lcom/google/protobuf/ByteString;)Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags;
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/google/protobuf/InvalidProtocolBufferException;
        }
    .end annotation

    .line 7442
    sget-object v0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags;->DEFAULT_INSTANCE:Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags;

    invoke-static {v0, p0}, Lcom/google/protobuf/GeneratedMessageLite;->parseFrom(Lcom/google/protobuf/GeneratedMessageLite;Lcom/google/protobuf/ByteString;)Lcom/google/protobuf/GeneratedMessageLite;

    move-result-object p0

    check-cast p0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags;

    return-object p0
.end method

.method public static parseFrom(Lcom/google/protobuf/ByteString;Lcom/google/protobuf/ExtensionRegistryLite;)Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags;
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/google/protobuf/InvalidProtocolBufferException;
        }
    .end annotation

    .line 7449
    sget-object v0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags;->DEFAULT_INSTANCE:Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags;

    invoke-static {v0, p0, p1}, Lcom/google/protobuf/GeneratedMessageLite;->parseFrom(Lcom/google/protobuf/GeneratedMessageLite;Lcom/google/protobuf/ByteString;Lcom/google/protobuf/ExtensionRegistryLite;)Lcom/google/protobuf/GeneratedMessageLite;

    move-result-object p0

    check-cast p0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags;

    return-object p0
.end method

.method public static parseFrom(Lcom/google/protobuf/CodedInputStream;)Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags;
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    .line 7491
    sget-object v0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags;->DEFAULT_INSTANCE:Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags;

    invoke-static {v0, p0}, Lcom/google/protobuf/GeneratedMessageLite;->parseFrom(Lcom/google/protobuf/GeneratedMessageLite;Lcom/google/protobuf/CodedInputStream;)Lcom/google/protobuf/GeneratedMessageLite;

    move-result-object p0

    check-cast p0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags;

    return-object p0
.end method

.method public static parseFrom(Lcom/google/protobuf/CodedInputStream;Lcom/google/protobuf/ExtensionRegistryLite;)Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags;
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    .line 7498
    sget-object v0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags;->DEFAULT_INSTANCE:Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags;

    invoke-static {v0, p0, p1}, Lcom/google/protobuf/GeneratedMessageLite;->parseFrom(Lcom/google/protobuf/GeneratedMessageLite;Lcom/google/protobuf/CodedInputStream;Lcom/google/protobuf/ExtensionRegistryLite;)Lcom/google/protobuf/GeneratedMessageLite;

    move-result-object p0

    check-cast p0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags;

    return-object p0
.end method

.method public static parseFrom(Ljava/io/InputStream;)Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags;
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    .line 7466
    sget-object v0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags;->DEFAULT_INSTANCE:Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags;

    invoke-static {v0, p0}, Lcom/google/protobuf/GeneratedMessageLite;->parseFrom(Lcom/google/protobuf/GeneratedMessageLite;Ljava/io/InputStream;)Lcom/google/protobuf/GeneratedMessageLite;

    move-result-object p0

    check-cast p0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags;

    return-object p0
.end method

.method public static parseFrom(Ljava/io/InputStream;Lcom/google/protobuf/ExtensionRegistryLite;)Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags;
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    .line 7473
    sget-object v0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags;->DEFAULT_INSTANCE:Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags;

    invoke-static {v0, p0, p1}, Lcom/google/protobuf/GeneratedMessageLite;->parseFrom(Lcom/google/protobuf/GeneratedMessageLite;Ljava/io/InputStream;Lcom/google/protobuf/ExtensionRegistryLite;)Lcom/google/protobuf/GeneratedMessageLite;

    move-result-object p0

    check-cast p0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags;

    return-object p0
.end method

.method public static parseFrom(Ljava/nio/ByteBuffer;)Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags;
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/google/protobuf/InvalidProtocolBufferException;
        }
    .end annotation

    .line 7429
    sget-object v0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags;->DEFAULT_INSTANCE:Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags;

    invoke-static {v0, p0}, Lcom/google/protobuf/GeneratedMessageLite;->parseFrom(Lcom/google/protobuf/GeneratedMessageLite;Ljava/nio/ByteBuffer;)Lcom/google/protobuf/GeneratedMessageLite;

    move-result-object p0

    check-cast p0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags;

    return-object p0
.end method

.method public static parseFrom(Ljava/nio/ByteBuffer;Lcom/google/protobuf/ExtensionRegistryLite;)Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags;
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/google/protobuf/InvalidProtocolBufferException;
        }
    .end annotation

    .line 7436
    sget-object v0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags;->DEFAULT_INSTANCE:Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags;

    invoke-static {v0, p0, p1}, Lcom/google/protobuf/GeneratedMessageLite;->parseFrom(Lcom/google/protobuf/GeneratedMessageLite;Ljava/nio/ByteBuffer;Lcom/google/protobuf/ExtensionRegistryLite;)Lcom/google/protobuf/GeneratedMessageLite;

    move-result-object p0

    check-cast p0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags;

    return-object p0
.end method

.method public static parseFrom([B)Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags;
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/google/protobuf/InvalidProtocolBufferException;
        }
    .end annotation

    .line 7454
    sget-object v0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags;->DEFAULT_INSTANCE:Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags;

    invoke-static {v0, p0}, Lcom/google/protobuf/GeneratedMessageLite;->parseFrom(Lcom/google/protobuf/GeneratedMessageLite;[B)Lcom/google/protobuf/GeneratedMessageLite;

    move-result-object p0

    check-cast p0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags;

    return-object p0
.end method

.method public static parseFrom([BLcom/google/protobuf/ExtensionRegistryLite;)Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags;
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/google/protobuf/InvalidProtocolBufferException;
        }
    .end annotation

    .line 7461
    sget-object v0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags;->DEFAULT_INSTANCE:Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags;

    invoke-static {v0, p0, p1}, Lcom/google/protobuf/GeneratedMessageLite;->parseFrom(Lcom/google/protobuf/GeneratedMessageLite;[BLcom/google/protobuf/ExtensionRegistryLite;)Lcom/google/protobuf/GeneratedMessageLite;

    move-result-object p0

    check-cast p0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags;

    return-object p0
.end method

.method public static parser()Lcom/google/protobuf/Parser;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Lcom/google/protobuf/Parser<",
            "Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags;",
            ">;"
        }
    .end annotation

    .line 7884
    sget-object v0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags;->DEFAULT_INSTANCE:Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags;

    invoke-virtual {v0}, Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags;->getParserForType()Lcom/google/protobuf/Parser;

    move-result-object v0

    return-object v0
.end method

.method private setAppSheetBugCheckEnabled(Z)V
    .locals 0

    .line 7298
    iput-boolean p1, p0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags;->appSheetBugCheckEnabled_:Z

    return-void
.end method

.method private setBoldSdkNextSessionEnabled(Z)V
    .locals 0

    .line 7260
    iput-boolean p1, p0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags;->boldSdkNextSessionEnabled_:Z

    return-void
.end method

.method private setOpenglGpuEnabled(Z)V
    .locals 0

    .line 7184
    iput-boolean p1, p0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags;->openglGpuEnabled_:Z

    return-void
.end method

.method private setOpportunityIdPlacementValidation(Z)V
    .locals 0

    .line 7222
    iput-boolean p1, p0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags;->opportunityIdPlacementValidation_:Z

    return-void
.end method

.method private setRecoverTerminatedWebviews(Z)V
    .locals 0

    .line 7336
    iput-boolean p1, p0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags;->recoverTerminatedWebviews_:Z

    return-void
.end method

.method private setShouldHandleWebviewCaching(Z)V
    .locals 0

    .line 7374
    iput-boolean p1, p0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags;->shouldHandleWebviewCaching_:Z

    return-void
.end method

.method private setShouldSendIapHistory(Z)V
    .locals 0

    .line 7412
    iput-boolean p1, p0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags;->shouldSendIapHistory_:Z

    return-void
.end method


# virtual methods
.method protected final dynamicMethod(Lcom/google/protobuf/GeneratedMessageLite$MethodToInvoke;Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;
    .locals 1

    .line 7814
    sget-object p2, Lgatewayprotocol/v1/NativeConfigurationOuterClass$1;->$SwitchMap$com$google$protobuf$GeneratedMessageLite$MethodToInvoke:[I

    invoke-virtual {p1}, Lcom/google/protobuf/GeneratedMessageLite$MethodToInvoke;->ordinal()I

    move-result p1

    aget p1, p2, p1

    const/4 p2, 0x1

    const/4 p3, 0x0

    packed-switch p1, :pswitch_data_0

    .line 7862
    new-instance p1, Ljava/lang/UnsupportedOperationException;

    invoke-direct {p1}, Ljava/lang/UnsupportedOperationException;-><init>()V

    throw p1

    :pswitch_0
    return-object p3

    .line 7856
    :pswitch_1
    invoke-static {p2}, Ljava/lang/Byte;->valueOf(B)Ljava/lang/Byte;

    move-result-object p1

    return-object p1

    .line 7841
    :pswitch_2
    sget-object p1, Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags;->PARSER:Lcom/google/protobuf/Parser;

    if-nez p1, :cond_1

    .line 7843
    const-class p2, Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags;

    monitor-enter p2

    .line 7844
    :try_start_0
    sget-object p1, Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags;->PARSER:Lcom/google/protobuf/Parser;

    if-nez p1, :cond_0

    .line 7846
    new-instance p1, Lcom/google/protobuf/GeneratedMessageLite$DefaultInstanceBasedParser;

    sget-object p3, Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags;->DEFAULT_INSTANCE:Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags;

    invoke-direct {p1, p3}, Lcom/google/protobuf/GeneratedMessageLite$DefaultInstanceBasedParser;-><init>(Lcom/google/protobuf/GeneratedMessageLite;)V

    .line 7849
    sput-object p1, Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags;->PARSER:Lcom/google/protobuf/Parser;

    .line 7851
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

    .line 7838
    :pswitch_3
    sget-object p1, Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags;->DEFAULT_INSTANCE:Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags;

    return-object p1

    :pswitch_4
    const/4 p1, 0x7

    .line 7822
    new-array p1, p1, [Ljava/lang/Object;

    const-string p3, "openglGpuEnabled_"

    const/4 v0, 0x0

    aput-object p3, p1, v0

    const-string p3, "opportunityIdPlacementValidation_"

    aput-object p3, p1, p2

    const-string p2, "boldSdkNextSessionEnabled_"

    const/4 p3, 0x2

    aput-object p2, p1, p3

    const-string p2, "appSheetBugCheckEnabled_"

    const/4 p3, 0x3

    aput-object p2, p1, p3

    const-string p2, "recoverTerminatedWebviews_"

    const/4 p3, 0x4

    aput-object p2, p1, p3

    const-string p2, "shouldHandleWebviewCaching_"

    const/4 p3, 0x5

    aput-object p2, p1, p3

    const-string p2, "shouldSendIapHistory_"

    const/4 p3, 0x6

    aput-object p2, p1, p3

    .line 7831
    const-string p2, "\u0000\u0007\u0000\u0000\u0001\u0007\u0007\u0000\u0000\u0000\u0001\u0007\u0002\u0007\u0003\u0007\u0004\u0007\u0005\u0007\u0006\u0007\u0007\u0007"

    .line 7834
    sget-object p3, Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags;->DEFAULT_INSTANCE:Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags;

    invoke-static {p3, p2, p1}, Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags;->newMessageInfo(Lcom/google/protobuf/MessageLite;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    return-object p1

    .line 7819
    :pswitch_5
    new-instance p1, Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags$Builder;

    invoke-direct {p1, p3}, Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags$Builder;-><init>(Lgatewayprotocol/v1/NativeConfigurationOuterClass$1;)V

    return-object p1

    .line 7816
    :pswitch_6
    new-instance p1, Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags;

    invoke-direct {p1}, Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags;-><init>()V

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

.method public getAppSheetBugCheckEnabled()Z
    .locals 1

    .line 7286
    iget-boolean v0, p0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags;->appSheetBugCheckEnabled_:Z

    return v0
.end method

.method public getBoldSdkNextSessionEnabled()Z
    .locals 1

    .line 7248
    iget-boolean v0, p0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags;->boldSdkNextSessionEnabled_:Z

    return v0
.end method

.method public getOpenglGpuEnabled()Z
    .locals 1

    .line 7172
    iget-boolean v0, p0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags;->openglGpuEnabled_:Z

    return v0
.end method

.method public getOpportunityIdPlacementValidation()Z
    .locals 1

    .line 7210
    iget-boolean v0, p0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags;->opportunityIdPlacementValidation_:Z

    return v0
.end method

.method public getRecoverTerminatedWebviews()Z
    .locals 1

    .line 7324
    iget-boolean v0, p0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags;->recoverTerminatedWebviews_:Z

    return v0
.end method

.method public getShouldHandleWebviewCaching()Z
    .locals 1

    .line 7362
    iget-boolean v0, p0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags;->shouldHandleWebviewCaching_:Z

    return v0
.end method

.method public getShouldSendIapHistory()Z
    .locals 1

    .line 7400
    iget-boolean v0, p0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags;->shouldSendIapHistory_:Z

    return v0
.end method
