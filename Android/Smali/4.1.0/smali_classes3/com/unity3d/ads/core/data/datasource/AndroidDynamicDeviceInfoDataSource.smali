.class public final Lcom/unity3d/ads/core/data/datasource/AndroidDynamicDeviceInfoDataSource;
.super Ljava/lang/Object;
.source "AndroidDynamicDeviceInfoDataSource.kt"

# interfaces
.implements Lcom/unity3d/ads/core/data/datasource/DynamicDeviceInfoDataSource;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/unity3d/ads/core/data/datasource/AndroidDynamicDeviceInfoDataSource$Companion;,
        Lcom/unity3d/ads/core/data/datasource/AndroidDynamicDeviceInfoDataSource$WhenMappings;
    }
.end annotation

.annotation system Ldalvik/annotation/SourceDebugExtension;
    value = "SMAP\nAndroidDynamicDeviceInfoDataSource.kt\nKotlin\n*S Kotlin\n*F\n+ 1 AndroidDynamicDeviceInfoDataSource.kt\ncom/unity3d/ads/core/data/datasource/AndroidDynamicDeviceInfoDataSource\n+ 2 DynamicDeviceInfoKt.kt\ngatewayprotocol/v1/DynamicDeviceInfoKtKt\n+ 3 fake.kt\nkotlin/jvm/internal/FakeKt\n+ 4 DynamicDeviceInfoKt.kt\ngatewayprotocol/v1/DynamicDeviceInfoKt\n+ 5 StateFlow.kt\nkotlinx/coroutines/flow/StateFlowKt\n+ 6 _Arrays.kt\nkotlin/collections/ArraysKt___ArraysKt\n*L\n1#1,732:1\n10#2:733\n1#3:734\n1#3:736\n1#3:742\n766#4:735\n230#5,5:737\n11335#6:743\n11670#6,3:744\n*S KotlinDebug\n*F\n+ 1 AndroidDynamicDeviceInfoDataSource.kt\ncom/unity3d/ads/core/data/datasource/AndroidDynamicDeviceInfoDataSource\n*L\n57#1:733\n57#1:734\n77#1:736\n77#1:735\n163#1:737,5\n656#1:743\n656#1:744,3\n*E\n"
.end annotation

.annotation runtime Lkotlin/Metadata;
    d1 = {
        "\u0000\u0096\u0001\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\u0008\u0004\n\u0002\u0018\u0002\n\u0002\u0010$\n\u0002\u0010\u000e\n\u0002\u0010\u000b\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0008\u0004\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\u0008\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u0006\n\u0000\n\u0002\u0010\u0008\n\u0002\u0008\u0002\n\u0002\u0018\u0002\n\u0002\u0008\u0002\n\u0002\u0018\u0002\n\u0002\u0008\u0002\n\u0002\u0010\t\n\u0002\u0008\u0004\n\u0002\u0018\u0002\n\u0002\u0008\u0003\n\u0002\u0010 \n\u0002\u0008\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\u0008\u0010\n\u0002\u0018\u0002\n\u0002\u0008\u0012\u0018\u0000 W2\u00020\u0001:\u0001WB\u0015\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0005\u00a2\u0006\u0002\u0010\u0006J\u0008\u0010\u0013\u001a\u00020\rH\u0002J\u0008\u0010\u0014\u001a\u00020\u0015H\u0016J\u0008\u0010\u0016\u001a\u00020\u0017H\u0002J\u0008\u0010\u0018\u001a\u00020\rH\u0002J\n\u0010\u0019\u001a\u0004\u0018\u00010\u001aH\u0002J\u0008\u0010\u001b\u001a\u00020\u001cH\u0002J\u0008\u0010\u001d\u001a\u00020\u001eH\u0002J\u0006\u0010\u001f\u001a\u00020\u001eJ\u0008\u0010 \u001a\u00020!H\u0002J\u0008\u0010\"\u001a\u00020\u000cH\u0016J\n\u0010#\u001a\u0004\u0018\u00010$H\u0002J\u0008\u0010%\u001a\u00020\u001eH\u0016J\u0008\u0010&\u001a\u00020\'H\u0002J\u0008\u0010(\u001a\u00020\'H\u0002J\u0006\u0010)\u001a\u00020\'J\u0012\u0010*\u001a\u00020\'2\u0008\u0010+\u001a\u0004\u0018\u00010,H\u0003J\u0006\u0010-\u001a\u00020\rJ\u0008\u0010.\u001a\u00020\u000cH\u0002J\u000e\u0010/\u001a\u0008\u0012\u0004\u0012\u00020\u000c00H\u0016J\u0010\u00101\u001a\u00020\'2\u0006\u00102\u001a\u000203H\u0002J\u0006\u00104\u001a\u000205J\u0006\u00106\u001a\u00020\u000cJ\u0008\u00107\u001a\u00020\rH\u0002J\u0008\u00108\u001a\u00020\u000cH\u0002J\u0008\u00109\u001a\u00020\u000cH\u0002J\u0008\u0010:\u001a\u00020\u001eH\u0003J\u0008\u0010;\u001a\u00020\u000cH\u0016J\u0012\u0010<\u001a\u000e\u0012\u0004\u0012\u00020\u000c\u0012\u0004\u0012\u00020\u000c0\u000bJ\u0008\u0010=\u001a\u00020\u001eH\u0016J\u0006\u0010>\u001a\u00020\u001eJ\u0008\u0010?\u001a\u00020\u001eH\u0002J\u0008\u0010@\u001a\u00020\u001eH\u0002J\u0006\u0010A\u001a\u00020\rJ\u000e\u0010B\u001a\u00020\u001c2\u0006\u0010C\u001a\u00020\u001eJ\u0010\u0010D\u001a\u00020\u001c2\u0006\u0010C\u001a\u00020\u001eH\u0002J\n\u0010E\u001a\u0004\u0018\u00010FH\u0002J\u0008\u0010G\u001a\u00020\u000cH\u0002J\u0008\u0010H\u001a\u00020\'H\u0002J\u0006\u0010I\u001a\u00020\'J\u0008\u0010J\u001a\u00020\'H\u0002J\u0012\u0010K\u001a\u00020\'2\u0008\u0010+\u001a\u0004\u0018\u00010,H\u0002J\u0008\u0010L\u001a\u00020\rH\u0016J\u0008\u0010M\u001a\u00020\rH\u0002J\u0008\u0010N\u001a\u00020\rH\u0003J\u0008\u0010O\u001a\u00020\rH\u0002J\u0008\u0010P\u001a\u00020\rH\u0002J\u0008\u0010Q\u001a\u00020\rH\u0002J\u0008\u0010R\u001a\u00020\rH\u0002J\u0008\u0010S\u001a\u00020\rH\u0002J\u0008\u0010T\u001a\u00020\rH\u0002J\u0008\u0010U\u001a\u00020\rH\u0002J\u0008\u0010V\u001a\u00020\rH\u0002R\u0011\u0010\u0002\u001a\u00020\u0003\u00a2\u0006\u0008\n\u0000\u001a\u0004\u0008\u0007\u0010\u0008R\u000e\u0010\u0004\u001a\u00020\u0005X\u0082\u0004\u00a2\u0006\u0002\n\u0000R \u0010\t\u001a\u0014\u0012\u0010\u0012\u000e\u0012\u0004\u0012\u00020\u000c\u0012\u0004\u0012\u00020\r0\u000b0\nX\u0082\u0004\u00a2\u0006\u0002\n\u0000R\u001a\u0010\u000e\u001a\u0008\u0012\u0004\u0012\u00020\u00100\u000fX\u0096\u0004\u00a2\u0006\u0008\n\u0000\u001a\u0004\u0008\u0011\u0010\u0012\u00a8\u0006X"
    }
    d2 = {
        "Lcom/unity3d/ads/core/data/datasource/AndroidDynamicDeviceInfoDataSource;",
        "Lcom/unity3d/ads/core/data/datasource/DynamicDeviceInfoDataSource;",
        "context",
        "Landroid/content/Context;",
        "lifecycleDataSource",
        "Lcom/unity3d/ads/core/data/datasource/LifecycleDataSource;",
        "(Landroid/content/Context;Lcom/unity3d/ads/core/data/datasource/LifecycleDataSource;)V",
        "getContext",
        "()Landroid/content/Context;",
        "reportedWarning",
        "Lkotlinx/coroutines/flow/MutableStateFlow;",
        "",
        "",
        "",
        "volumeSettingsChange",
        "Lkotlinx/coroutines/flow/Flow;",
        "Lcom/unity3d/ads/core/data/datasource/VolumeSettingsChange;",
        "getVolumeSettingsChange",
        "()Lkotlinx/coroutines/flow/Flow;",
        "adbStatus",
        "fetch",
        "Lgatewayprotocol/v1/DynamicDeviceInfoOuterClass$DynamicDeviceInfo;",
        "fetchAndroidDynamicDeviceInfo",
        "Lgatewayprotocol/v1/DynamicDeviceInfoOuterClass$DynamicDeviceInfo$Android;",
        "getAirplaneMode",
        "getAudioManager",
        "Landroid/media/AudioManager;",
        "getBatteryLevel",
        "",
        "getBatteryStatus",
        "",
        "getChargingType",
        "getConnectionType",
        "Lgatewayprotocol/v1/DynamicDeviceInfoOuterClass$ConnectionType;",
        "getConnectionTypeStr",
        "getConnectivityManager",
        "Landroid/net/ConnectivityManager;",
        "getCurrentUiTheme",
        "getElapsedRealtime",
        "",
        "getEventTimeStamp",
        "getFreeMemory",
        "getFreeSpace",
        "file",
        "Ljava/io/File;",
        "getIsSdCardPresent",
        "getLanguage",
        "getLocaleList",
        "",
        "getMemoryInfo",
        "infoType",
        "Lcom/unity3d/services/core/device/Device$MemoryInfoType;",
        "getNetworkCapabilityTransports",
        "Lgatewayprotocol/v1/NetworkCapabilityTransportsOuterClass$NetworkCapabilityTransports;",
        "getNetworkCountryISO",
        "getNetworkMetered",
        "getNetworkOperator",
        "getNetworkOperatorName",
        "getNetworkType",
        "getOrientation",
        "getProcessInfo",
        "getRingerMode",
        "getScreenBrightness",
        "getScreenHeight",
        "getScreenWidth",
        "getStayOnWhilePluggedIn",
        "getStreamMaxVolume",
        "streamType",
        "getStreamVolume",
        "getTelephonyManager",
        "Landroid/telephony/TelephonyManager;",
        "getTimeZone",
        "getTimeZoneOffset",
        "getTotalMemory",
        "getUptime",
        "getUsableSpace",
        "hasInternet",
        "hasInternetConnection",
        "hasInternetConnectionM",
        "isActiveNetworkConnected",
        "isAdbEnabled",
        "isAppActive",
        "isLimitAdTrackingEnabled",
        "isLimitOpenAdTrackingEnabled",
        "isUSBConnected",
        "isUsingWifi",
        "isWiredHeadsetOn",
        "Companion",
        "unity-ads_defaultRelease"
    }
    k = 0x1
    mv = {
        0x1,
        0x8,
        0x0
    }
    xi = 0x30
.end annotation


# static fields
.field public static final Companion:Lcom/unity3d/ads/core/data/datasource/AndroidDynamicDeviceInfoDataSource$Companion;

.field public static final DIRECTORY_MEM_INFO:Ljava/lang/String; = "/proc/meminfo"

.field public static final DIRECTORY_MODE_READ:Ljava/lang/String; = "r"

.field public static final DIRECTORY_PROCESS_INFO:Ljava/lang/String; = "/proc/self/stat"

.field public static final INTENT_USB_STATE:Ljava/lang/String; = "android.hardware.usb.action.USB_STATE"

.field public static final KEY_STAT_CONTENT:Ljava/lang/String; = "stat"

.field public static final USB_EXTRA_CONNECTED:Ljava/lang/String; = "connected"


# instance fields
.field private final context:Landroid/content/Context;

.field private final lifecycleDataSource:Lcom/unity3d/ads/core/data/datasource/LifecycleDataSource;

.field private final reportedWarning:Lkotlinx/coroutines/flow/MutableStateFlow;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Lkotlinx/coroutines/flow/MutableStateFlow<",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Boolean;",
            ">;>;"
        }
    .end annotation
.end field

.field private final volumeSettingsChange:Lkotlinx/coroutines/flow/Flow;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Lkotlinx/coroutines/flow/Flow<",
            "Lcom/unity3d/ads/core/data/datasource/VolumeSettingsChange;",
            ">;"
        }
    .end annotation
.end field


# direct methods
.method static constructor <clinit>()V
    .locals 2

    new-instance v0, Lcom/unity3d/ads/core/data/datasource/AndroidDynamicDeviceInfoDataSource$Companion;

    const/4 v1, 0x0

    invoke-direct {v0, v1}, Lcom/unity3d/ads/core/data/datasource/AndroidDynamicDeviceInfoDataSource$Companion;-><init>(Lkotlin/jvm/internal/DefaultConstructorMarker;)V

    sput-object v0, Lcom/unity3d/ads/core/data/datasource/AndroidDynamicDeviceInfoDataSource;->Companion:Lcom/unity3d/ads/core/data/datasource/AndroidDynamicDeviceInfoDataSource$Companion;

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Lcom/unity3d/ads/core/data/datasource/LifecycleDataSource;)V
    .locals 1

    const-string v0, "context"

    invoke-static {p1, v0}, Lkotlin/jvm/internal/Intrinsics;->checkNotNullParameter(Ljava/lang/Object;Ljava/lang/String;)V

    const-string v0, "lifecycleDataSource"

    invoke-static {p2, v0}, Lkotlin/jvm/internal/Intrinsics;->checkNotNullParameter(Ljava/lang/Object;Ljava/lang/String;)V

    .line 47
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 49
    iput-object p1, p0, Lcom/unity3d/ads/core/data/datasource/AndroidDynamicDeviceInfoDataSource;->context:Landroid/content/Context;

    .line 50
    iput-object p2, p0, Lcom/unity3d/ads/core/data/datasource/AndroidDynamicDeviceInfoDataSource;->lifecycleDataSource:Lcom/unity3d/ads/core/data/datasource/LifecycleDataSource;

    .line 52
    invoke-static {}, Lkotlin/collections/MapsKt;->emptyMap()Ljava/util/Map;

    move-result-object p1

    invoke-static {p1}, Lkotlinx/coroutines/flow/StateFlowKt;->MutableStateFlow(Ljava/lang/Object;)Lkotlinx/coroutines/flow/MutableStateFlow;

    move-result-object p1

    iput-object p1, p0, Lcom/unity3d/ads/core/data/datasource/AndroidDynamicDeviceInfoDataSource;->reportedWarning:Lkotlinx/coroutines/flow/MutableStateFlow;

    .line 579
    new-instance p1, Lcom/unity3d/ads/core/data/datasource/AndroidDynamicDeviceInfoDataSource$volumeSettingsChange$1;

    const/4 p2, 0x0

    invoke-direct {p1, p0, p2}, Lcom/unity3d/ads/core/data/datasource/AndroidDynamicDeviceInfoDataSource$volumeSettingsChange$1;-><init>(Lcom/unity3d/ads/core/data/datasource/AndroidDynamicDeviceInfoDataSource;Lkotlin/coroutines/Continuation;)V

    check-cast p1, Lkotlin/jvm/functions/Function2;

    invoke-static {p1}, Lkotlinx/coroutines/flow/FlowKt;->callbackFlow(Lkotlin/jvm/functions/Function2;)Lkotlinx/coroutines/flow/Flow;

    move-result-object p1

    iput-object p1, p0, Lcom/unity3d/ads/core/data/datasource/AndroidDynamicDeviceInfoDataSource;->volumeSettingsChange:Lkotlinx/coroutines/flow/Flow;

    return-void
.end method

.method public static final synthetic access$getStreamVolume(Lcom/unity3d/ads/core/data/datasource/AndroidDynamicDeviceInfoDataSource;I)D
    .locals 0

    .line 47
    invoke-direct {p0, p1}, Lcom/unity3d/ads/core/data/datasource/AndroidDynamicDeviceInfoDataSource;->getStreamVolume(I)D

    move-result-wide p0

    return-wide p0
.end method

.method private final adbStatus()Z
    .locals 3

    const/4 v0, 0x0

    .line 428
    :try_start_0
    iget-object v1, p0, Lcom/unity3d/ads/core/data/datasource/AndroidDynamicDeviceInfoDataSource;->context:Landroid/content/Context;

    invoke-virtual {v1}, Landroid/content/Context;->getContentResolver()Landroid/content/ContentResolver;

    move-result-object v1

    .line 429
    const-string v2, "adb_enabled"

    .line 427
    invoke-static {v1, v2, v0}, Landroid/provider/Settings$Global;->getInt(Landroid/content/ContentResolver;Ljava/lang/String;I)I

    move-result v1

    const/4 v2, 0x1

    if-ne v2, v1, :cond_0

    goto :goto_0

    :cond_0
    move v2, v0

    :goto_0
    invoke-static {v2}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v1
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_1

    :catch_0
    move-exception v1

    .line 433
    const-string v2, "Problems fetching adb enabled status"

    invoke-static {v2, v1}, Lcom/unity3d/services/core/log/DeviceLog;->exception(Ljava/lang/String;Ljava/lang/Exception;)V

    const/4 v1, 0x0

    :goto_1
    if-eqz v1, :cond_1

    .line 435
    invoke-virtual {v1}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v0

    :cond_1
    return v0
.end method

.method private final fetchAndroidDynamicDeviceInfo()Lgatewayprotocol/v1/DynamicDeviceInfoOuterClass$DynamicDeviceInfo$Android;
    .locals 4

    .line 77
    sget-object v0, Lgatewayprotocol/v1/DynamicDeviceInfoKt;->INSTANCE:Lgatewayprotocol/v1/DynamicDeviceInfoKt;

    .line 735
    sget-object v0, Lgatewayprotocol/v1/DynamicDeviceInfoKt$AndroidKt$Dsl;->Companion:Lgatewayprotocol/v1/DynamicDeviceInfoKt$AndroidKt$Dsl$Companion;

    invoke-static {}, Lgatewayprotocol/v1/DynamicDeviceInfoOuterClass$DynamicDeviceInfo$Android;->newBuilder()Lgatewayprotocol/v1/DynamicDeviceInfoOuterClass$DynamicDeviceInfo$Android$Builder;

    move-result-object v1

    const-string v2, "newBuilder()"

    invoke-static {v1, v2}, Lkotlin/jvm/internal/Intrinsics;->checkNotNullExpressionValue(Ljava/lang/Object;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Lgatewayprotocol/v1/DynamicDeviceInfoKt$AndroidKt$Dsl$Companion;->_create(Lgatewayprotocol/v1/DynamicDeviceInfoOuterClass$DynamicDeviceInfo$Android$Builder;)Lgatewayprotocol/v1/DynamicDeviceInfoKt$AndroidKt$Dsl;

    move-result-object v0

    .line 78
    invoke-direct {p0}, Lcom/unity3d/ads/core/data/datasource/AndroidDynamicDeviceInfoDataSource;->isActiveNetworkConnected()Z

    move-result v1

    invoke-virtual {v0, v1}, Lgatewayprotocol/v1/DynamicDeviceInfoKt$AndroidKt$Dsl;->setNetworkConnected(Z)V

    .line 79
    invoke-direct {p0}, Lcom/unity3d/ads/core/data/datasource/AndroidDynamicDeviceInfoDataSource;->getNetworkType()I

    move-result v1

    invoke-virtual {v0, v1}, Lgatewayprotocol/v1/DynamicDeviceInfoKt$AndroidKt$Dsl;->setNetworkType(I)V

    .line 80
    invoke-direct {p0}, Lcom/unity3d/ads/core/data/datasource/AndroidDynamicDeviceInfoDataSource;->getNetworkMetered()Z

    move-result v1

    invoke-virtual {v0, v1}, Lgatewayprotocol/v1/DynamicDeviceInfoKt$AndroidKt$Dsl;->setNetworkMetered(Z)V

    .line 81
    invoke-direct {p0}, Lcom/unity3d/ads/core/data/datasource/AndroidDynamicDeviceInfoDataSource;->getNetworkType()I

    move-result v1

    invoke-virtual {v0, v1}, Lgatewayprotocol/v1/DynamicDeviceInfoKt$AndroidKt$Dsl;->setTelephonyManagerNetworkType(I)V

    .line 82
    invoke-direct {p0}, Lcom/unity3d/ads/core/data/datasource/AndroidDynamicDeviceInfoDataSource;->isAdbEnabled()Z

    move-result v1

    invoke-virtual {v0, v1}, Lgatewayprotocol/v1/DynamicDeviceInfoKt$AndroidKt$Dsl;->setAdbEnabled(Z)V

    .line 83
    invoke-direct {p0}, Lcom/unity3d/ads/core/data/datasource/AndroidDynamicDeviceInfoDataSource;->isUSBConnected()Z

    move-result v1

    invoke-virtual {v0, v1}, Lgatewayprotocol/v1/DynamicDeviceInfoKt$AndroidKt$Dsl;->setUsbConnected(Z)V

    const/4 v1, 0x3

    .line 84
    invoke-direct {p0, v1}, Lcom/unity3d/ads/core/data/datasource/AndroidDynamicDeviceInfoDataSource;->getStreamVolume(I)D

    move-result-wide v2

    invoke-virtual {v0, v2, v3}, Lgatewayprotocol/v1/DynamicDeviceInfoKt$AndroidKt$Dsl;->setVolume(D)V

    .line 85
    invoke-virtual {p0, v1}, Lcom/unity3d/ads/core/data/datasource/AndroidDynamicDeviceInfoDataSource;->getStreamMaxVolume(I)D

    move-result-wide v1

    invoke-virtual {v0, v1, v2}, Lgatewayprotocol/v1/DynamicDeviceInfoKt$AndroidKt$Dsl;->setMaxVolume(D)V

    .line 86
    invoke-direct {p0}, Lcom/unity3d/ads/core/data/datasource/AndroidDynamicDeviceInfoDataSource;->getElapsedRealtime()J

    move-result-wide v1

    invoke-virtual {v0, v1, v2}, Lgatewayprotocol/v1/DynamicDeviceInfoKt$AndroidKt$Dsl;->setDeviceElapsedRealtime(J)V

    .line 87
    invoke-direct {p0}, Lcom/unity3d/ads/core/data/datasource/AndroidDynamicDeviceInfoDataSource;->getUptime()J

    move-result-wide v1

    invoke-virtual {v0, v1, v2}, Lgatewayprotocol/v1/DynamicDeviceInfoKt$AndroidKt$Dsl;->setDeviceUpTime(J)V

    .line 88
    invoke-direct {p0}, Lcom/unity3d/ads/core/data/datasource/AndroidDynamicDeviceInfoDataSource;->getAirplaneMode()Z

    move-result v1

    invoke-virtual {v0, v1}, Lgatewayprotocol/v1/DynamicDeviceInfoKt$AndroidKt$Dsl;->setAirplaneMode(Z)V

    .line 89
    invoke-virtual {p0}, Lcom/unity3d/ads/core/data/datasource/AndroidDynamicDeviceInfoDataSource;->getChargingType()I

    move-result v1

    invoke-virtual {v0, v1}, Lgatewayprotocol/v1/DynamicDeviceInfoKt$AndroidKt$Dsl;->setChargingType(I)V

    .line 90
    invoke-virtual {p0}, Lcom/unity3d/ads/core/data/datasource/AndroidDynamicDeviceInfoDataSource;->getStayOnWhilePluggedIn()Z

    move-result v1

    invoke-virtual {v0, v1}, Lgatewayprotocol/v1/DynamicDeviceInfoKt$AndroidKt$Dsl;->setStayOnWhilePluggedIn(Z)V

    .line 91
    invoke-virtual {p0}, Lcom/unity3d/ads/core/data/datasource/AndroidDynamicDeviceInfoDataSource;->getIsSdCardPresent()Z

    move-result v1

    invoke-virtual {v0, v1}, Lgatewayprotocol/v1/DynamicDeviceInfoKt$AndroidKt$Dsl;->setSdCardPresent(Z)V

    .line 92
    invoke-virtual {p0}, Lcom/unity3d/ads/core/data/datasource/AndroidDynamicDeviceInfoDataSource;->getNetworkCapabilityTransports()Lgatewayprotocol/v1/NetworkCapabilityTransportsOuterClass$NetworkCapabilityTransports;

    move-result-object v1

    invoke-virtual {v0, v1}, Lgatewayprotocol/v1/DynamicDeviceInfoKt$AndroidKt$Dsl;->setNetworkCapabilityTransports(Lgatewayprotocol/v1/NetworkCapabilityTransportsOuterClass$NetworkCapabilityTransports;)V

    .line 735
    invoke-virtual {v0}, Lgatewayprotocol/v1/DynamicDeviceInfoKt$AndroidKt$Dsl;->_build()Lgatewayprotocol/v1/DynamicDeviceInfoOuterClass$DynamicDeviceInfo$Android;

    move-result-object v0

    return-object v0
.end method

.method private final getAirplaneMode()Z
    .locals 4

    const/4 v0, 0x1

    const/4 v1, 0x0

    .line 662
    :try_start_0
    iget-object v2, p0, Lcom/unity3d/ads/core/data/datasource/AndroidDynamicDeviceInfoDataSource;->context:Landroid/content/Context;

    invoke-virtual {v2}, Landroid/content/Context;->getContentResolver()Landroid/content/ContentResolver;

    move-result-object v2

    const-string v3, "airplane_mode_on"

    invoke-static {v2, v3, v1}, Landroid/provider/Settings$Global;->getInt(Landroid/content/ContentResolver;Ljava/lang/String;I)I

    move-result v2
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-eqz v2, :cond_0

    return v0

    :cond_0
    return v1

    :catchall_0
    move-exception v2

    .line 664
    invoke-virtual {v2}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v2

    new-array v0, v0, [Ljava/lang/Object;

    aput-object v2, v0, v1

    const-string v2, "Problems fetching airplane mode status"

    invoke-static {v2, v0}, Lcom/unity3d/services/core/log/DeviceLog;->error(Ljava/lang/String;[Ljava/lang/Object;)V

    return v1
.end method

.method private final getAudioManager()Landroid/media/AudioManager;
    .locals 2

    .line 533
    iget-object v0, p0, Lcom/unity3d/ads/core/data/datasource/AndroidDynamicDeviceInfoDataSource;->context:Landroid/content/Context;

    const-string v1, "audio"

    invoke-virtual {v0, v1}, Landroid/content/Context;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v0

    instance-of v1, v0, Landroid/media/AudioManager;

    if-eqz v1, :cond_0

    check-cast v0, Landroid/media/AudioManager;

    return-object v0

    :cond_0
    const/4 v0, 0x0

    return-object v0
.end method

.method private final getBatteryLevel()D
    .locals 5

    .line 340
    iget-object v0, p0, Lcom/unity3d/ads/core/data/datasource/AndroidDynamicDeviceInfoDataSource;->context:Landroid/content/Context;

    .line 341
    new-instance v1, Landroid/content/IntentFilter;

    .line 342
    const-string v2, "android.intent.action.BATTERY_CHANGED"

    .line 341
    invoke-direct {v1, v2}, Landroid/content/IntentFilter;-><init>(Ljava/lang/String;)V

    const/4 v2, 0x0

    .line 340
    invoke-virtual {v0, v2, v1}, Landroid/content/Context;->registerReceiver(Landroid/content/BroadcastReceiver;Landroid/content/IntentFilter;)Landroid/content/Intent;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 346
    const-string v1, "level"

    const/4 v2, 0x0

    invoke-virtual {v0, v1, v2}, Landroid/content/Intent;->getIntExtra(Ljava/lang/String;I)I

    move-result v1

    .line 347
    const-string v3, "scale"

    invoke-virtual {v0, v3, v2}, Landroid/content/Intent;->getIntExtra(Ljava/lang/String;I)I

    move-result v0

    int-to-double v1, v1

    int-to-double v3, v0

    div-double/2addr v1, v3

    return-wide v1

    :cond_0
    const-wide/high16 v0, -0x4010000000000000L    # -1.0

    return-wide v0
.end method

.method private final getBatteryStatus()I
    .locals 3

    .line 366
    iget-object v0, p0, Lcom/unity3d/ads/core/data/datasource/AndroidDynamicDeviceInfoDataSource;->context:Landroid/content/Context;

    .line 367
    new-instance v1, Landroid/content/IntentFilter;

    .line 368
    const-string v2, "android.intent.action.BATTERY_CHANGED"

    .line 367
    invoke-direct {v1, v2}, Landroid/content/IntentFilter;-><init>(Ljava/lang/String;)V

    const/4 v2, 0x0

    .line 366
    invoke-virtual {v0, v2, v1}, Landroid/content/Context;->registerReceiver(Landroid/content/BroadcastReceiver;Landroid/content/IntentFilter;)Landroid/content/Intent;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 372
    const-string v1, "status"

    const/4 v2, 0x0

    invoke-virtual {v0, v1, v2}, Landroid/content/Intent;->getIntExtra(Ljava/lang/String;I)I

    move-result v0

    return v0

    :cond_0
    const/4 v0, -0x1

    return v0
.end method

.method private final getConnectionType()Lgatewayprotocol/v1/DynamicDeviceInfoOuterClass$ConnectionType;
    .locals 1

    .line 140
    invoke-direct {p0}, Lcom/unity3d/ads/core/data/datasource/AndroidDynamicDeviceInfoDataSource;->isUsingWifi()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 141
    sget-object v0, Lgatewayprotocol/v1/DynamicDeviceInfoOuterClass$ConnectionType;->CONNECTION_TYPE_WIFI:Lgatewayprotocol/v1/DynamicDeviceInfoOuterClass$ConnectionType;

    return-object v0

    .line 142
    :cond_0
    invoke-direct {p0}, Lcom/unity3d/ads/core/data/datasource/AndroidDynamicDeviceInfoDataSource;->isActiveNetworkConnected()Z

    move-result v0

    if-eqz v0, :cond_1

    .line 143
    sget-object v0, Lgatewayprotocol/v1/DynamicDeviceInfoOuterClass$ConnectionType;->CONNECTION_TYPE_CELLULAR:Lgatewayprotocol/v1/DynamicDeviceInfoOuterClass$ConnectionType;

    return-object v0

    .line 145
    :cond_1
    sget-object v0, Lgatewayprotocol/v1/DynamicDeviceInfoOuterClass$ConnectionType;->CONNECTION_TYPE_UNSPECIFIED:Lgatewayprotocol/v1/DynamicDeviceInfoOuterClass$ConnectionType;

    return-object v0
.end method

.method private final getConnectivityManager()Landroid/net/ConnectivityManager;
    .locals 2

    .line 525
    iget-object v0, p0, Lcom/unity3d/ads/core/data/datasource/AndroidDynamicDeviceInfoDataSource;->context:Landroid/content/Context;

    const-string v1, "connectivity"

    invoke-virtual {v0, v1}, Landroid/content/Context;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v0

    instance-of v1, v0, Landroid/net/ConnectivityManager;

    if-eqz v1, :cond_0

    check-cast v0, Landroid/net/ConnectivityManager;

    return-object v0

    :cond_0
    const/4 v0, 0x0

    return-object v0
.end method

.method private final getElapsedRealtime()J
    .locals 2

    .line 468
    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v0

    return-wide v0
.end method

.method private final getEventTimeStamp()J
    .locals 4

    .line 509
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    const/16 v2, 0x3e8

    int-to-long v2, v2

    div-long/2addr v0, v2

    return-wide v0
.end method

.method private final getFreeSpace(Ljava/io/File;)J
    .locals 4
    .annotation runtime Lkotlin/Deprecated;
        message = "Legacy method, migrated from to .getUsableSpace()"
    .end annotation

    if-eqz p1, :cond_0

    .line 313
    invoke-virtual {p1}, Ljava/io/File;->exists()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 314
    invoke-virtual {p1}, Ljava/io/File;->getFreeSpace()J

    move-result-wide v0

    const/16 p1, 0x400

    int-to-long v2, p1

    div-long/2addr v0, v2

    long-to-float p1, v0

    invoke-static {p1}, Lkotlin/math/MathKt;->roundToInt(F)I

    move-result p1

    int-to-long v0, p1

    return-wide v0

    :cond_0
    const-wide/16 v0, -0x1

    return-wide v0
.end method

.method private final getLanguage()Ljava/lang/String;
    .locals 2

    .line 98
    invoke-static {}, Ljava/util/Locale;->getDefault()Ljava/util/Locale;

    move-result-object v0

    invoke-virtual {v0}, Ljava/util/Locale;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "getDefault().toString()"

    invoke-static {v0, v1}, Lkotlin/jvm/internal/Intrinsics;->checkNotNullExpressionValue(Ljava/lang/Object;Ljava/lang/String;)V

    return-object v0
.end method

.method private final getMemoryInfo(Lcom/unity3d/services/core/device/Device$MemoryInfoType;)J
    .locals 5

    .line 396
    sget-object v0, Lcom/unity3d/ads/core/data/datasource/AndroidDynamicDeviceInfoDataSource$WhenMappings;->$EnumSwitchMapping$0:[I

    invoke-virtual {p1}, Lcom/unity3d/services/core/device/Device$MemoryInfoType;->ordinal()I

    move-result p1

    aget p1, v0, p1

    const/4 v0, 0x1

    if-eq p1, v0, :cond_0

    const/4 v0, 0x2

    if-eq p1, v0, :cond_0

    const/4 v0, -0x1

    .line 402
    :cond_0
    new-instance p1, Ljava/io/RandomAccessFile;

    const-string v1, "/proc/meminfo"

    const-string v2, "r"

    invoke-direct {p1, v1, v2}, Ljava/io/RandomAccessFile;-><init>(Ljava/lang/String;Ljava/lang/String;)V

    check-cast p1, Ljava/io/Closeable;

    :try_start_0
    move-object v1, p1

    check-cast v1, Ljava/io/RandomAccessFile;

    const/4 v2, 0x0

    const/4 v3, 0x0

    move-object v4, v2

    :goto_0
    if-ge v3, v0, :cond_1

    .line 404
    invoke-virtual {v1}, Ljava/io/RandomAccessFile;->readLine()Ljava/lang/String;

    move-result-object v4

    add-int/lit8 v3, v3, 0x1

    goto :goto_0

    .line 406
    :cond_1
    sget-object v0, Lkotlin/Unit;->INSTANCE:Lkotlin/Unit;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 402
    invoke-static {p1, v2}, Lkotlin/io/CloseableKt;->closeFinally(Ljava/io/Closeable;Ljava/lang/Throwable;)V

    .line 407
    invoke-static {v4}, Lcom/unity3d/ads/core/utils/GetMemoryValueFromStringKt;->getMemoryValueFromString(Ljava/lang/String;)J

    move-result-wide v0

    return-wide v0

    :catchall_0
    move-exception v0

    .line 402
    :try_start_1
    throw v0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    :catchall_1
    move-exception v1

    invoke-static {p1, v0}, Lkotlin/io/CloseableKt;->closeFinally(Ljava/io/Closeable;Ljava/lang/Throwable;)V

    throw v1
.end method

.method private final getNetworkMetered()Z
    .locals 3

    .line 172
    invoke-direct {p0}, Lcom/unity3d/ads/core/data/datasource/AndroidDynamicDeviceInfoDataSource;->getConnectivityManager()Landroid/net/ConnectivityManager;

    move-result-object v0

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    .line 173
    invoke-virtual {v0}, Landroid/net/ConnectivityManager;->isActiveNetworkMetered()Z

    move-result v0

    const/4 v2, 0x1

    if-ne v0, v2, :cond_0

    return v2

    :cond_0
    return v1
.end method

.method private final getNetworkOperator()Ljava/lang/String;
    .locals 1

    .line 184
    invoke-direct {p0}, Lcom/unity3d/ads/core/data/datasource/AndroidDynamicDeviceInfoDataSource;->getTelephonyManager()Landroid/telephony/TelephonyManager;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 185
    invoke-virtual {v0}, Landroid/telephony/TelephonyManager;->getNetworkOperator()Ljava/lang/String;

    move-result-object v0

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    if-nez v0, :cond_1

    const-string v0, ""

    :cond_1
    return-object v0
.end method

.method private final getNetworkOperatorName()Ljava/lang/String;
    .locals 1

    .line 196
    invoke-direct {p0}, Lcom/unity3d/ads/core/data/datasource/AndroidDynamicDeviceInfoDataSource;->getTelephonyManager()Landroid/telephony/TelephonyManager;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 197
    invoke-virtual {v0}, Landroid/telephony/TelephonyManager;->getNetworkOperatorName()Ljava/lang/String;

    move-result-object v0

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    if-nez v0, :cond_1

    const-string v0, ""

    :cond_1
    return-object v0
.end method

.method private final getNetworkType()I
    .locals 7
    .annotation runtime Lkotlin/Deprecated;
        message = "This method was deprecated in API level 30. Use getDataNetworkType()"
    .end annotation

    .line 157
    invoke-direct {p0}, Lcom/unity3d/ads/core/data/datasource/AndroidDynamicDeviceInfoDataSource;->getTelephonyManager()Landroid/telephony/TelephonyManager;

    move-result-object v0

    const/4 v1, -0x1

    if-eqz v0, :cond_1

    .line 160
    :try_start_0
    invoke-virtual {v0}, Landroid/telephony/TelephonyManager;->getNetworkType()I

    move-result v0
    :try_end_0
    .catch Ljava/lang/SecurityException; {:try_start_0 .. :try_end_0} :catch_0

    return v0

    .line 162
    :catch_0
    iget-object v0, p0, Lcom/unity3d/ads/core/data/datasource/AndroidDynamicDeviceInfoDataSource;->reportedWarning:Lkotlinx/coroutines/flow/MutableStateFlow;

    invoke-interface {v0}, Lkotlinx/coroutines/flow/MutableStateFlow;->getValue()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/util/Map;

    const-string v2, "getNetworkType"

    invoke-interface {v0, v2}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    const/4 v3, 0x1

    invoke-static {v3}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v4

    invoke-static {v0, v4}, Lkotlin/jvm/internal/Intrinsics;->areEqual(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_1

    .line 163
    iget-object v0, p0, Lcom/unity3d/ads/core/data/datasource/AndroidDynamicDeviceInfoDataSource;->reportedWarning:Lkotlinx/coroutines/flow/MutableStateFlow;

    .line 738
    :cond_0
    invoke-interface {v0}, Lkotlinx/coroutines/flow/MutableStateFlow;->getValue()Ljava/lang/Object;

    move-result-object v4

    .line 739
    move-object v5, v4

    check-cast v5, Ljava/util/Map;

    .line 163
    invoke-static {v3}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v6

    invoke-static {v2, v6}, Lkotlin/TuplesKt;->to(Ljava/lang/Object;Ljava/lang/Object;)Lkotlin/Pair;

    move-result-object v6

    invoke-static {v5, v6}, Lkotlin/collections/MapsKt;->plus(Ljava/util/Map;Lkotlin/Pair;)Ljava/util/Map;

    move-result-object v5

    .line 740
    invoke-interface {v0, v4, v5}, Lkotlinx/coroutines/flow/MutableStateFlow;->compareAndSet(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v4

    if-eqz v4, :cond_0

    .line 164
    const-string v0, "Unity Ads was not able to get current network type due to missing permission"

    invoke-static {v0}, Lcom/unity3d/services/core/log/DeviceLog;->warning(Ljava/lang/String;)V

    :cond_1
    return v1
.end method

.method private final getScreenHeight()I
    .locals 1

    .line 227
    iget-object v0, p0, Lcom/unity3d/ads/core/data/datasource/AndroidDynamicDeviceInfoDataSource;->context:Landroid/content/Context;

    invoke-virtual {v0}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object v0

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Landroid/content/res/Resources;->getDisplayMetrics()Landroid/util/DisplayMetrics;

    move-result-object v0

    if-eqz v0, :cond_0

    iget v0, v0, Landroid/util/DisplayMetrics;->heightPixels:I

    return v0

    :cond_0
    const/4 v0, -0x1

    return v0
.end method

.method private final getScreenWidth()I
    .locals 1

    .line 218
    iget-object v0, p0, Lcom/unity3d/ads/core/data/datasource/AndroidDynamicDeviceInfoDataSource;->context:Landroid/content/Context;

    invoke-virtual {v0}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object v0

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Landroid/content/res/Resources;->getDisplayMetrics()Landroid/util/DisplayMetrics;

    move-result-object v0

    if-eqz v0, :cond_0

    iget v0, v0, Landroid/util/DisplayMetrics;->widthPixels:I

    return v0

    :cond_0
    const/4 v0, -0x1

    return v0
.end method

.method private final getStreamVolume(I)D
    .locals 2

    .line 277
    invoke-direct {p0}, Lcom/unity3d/ads/core/data/datasource/AndroidDynamicDeviceInfoDataSource;->getAudioManager()Landroid/media/AudioManager;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 278
    invoke-virtual {v0, p1}, Landroid/media/AudioManager;->getStreamVolume(I)I

    move-result p1

    goto :goto_0

    :cond_0
    const/4 p1, -0x2

    :goto_0
    int-to-double v0, p1

    return-wide v0
.end method

.method private final getTelephonyManager()Landroid/telephony/TelephonyManager;
    .locals 2

    .line 517
    iget-object v0, p0, Lcom/unity3d/ads/core/data/datasource/AndroidDynamicDeviceInfoDataSource;->context:Landroid/content/Context;

    const-string v1, "phone"

    invoke-virtual {v0, v1}, Landroid/content/Context;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v0

    instance-of v1, v0, Landroid/telephony/TelephonyManager;

    if-eqz v1, :cond_0

    check-cast v0, Landroid/telephony/TelephonyManager;

    return-object v0

    :cond_0
    const/4 v0, 0x0

    return-object v0
.end method

.method private final getTimeZone()Ljava/lang/String;
    .locals 3

    const/4 v0, 0x0

    .line 105
    :try_start_0
    invoke-static {}, Ljava/util/TimeZone;->getDefault()Ljava/util/TimeZone;

    move-result-object v1

    sget-object v2, Ljava/util/Locale;->US:Ljava/util/Locale;

    invoke-virtual {v1, v0, v0, v2}, Ljava/util/TimeZone;->getDisplayName(ZILjava/util/Locale;)Ljava/lang/String;

    move-result-object v1

    .line 104
    const-string v2, "{\n            TimeZone.g\u2026ORT, Locale.US)\n        }"

    invoke-static {v1, v2}, Lkotlin/jvm/internal/Intrinsics;->checkNotNullExpressionValue(Ljava/lang/Object;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/AssertionError; {:try_start_0 .. :try_end_0} :catch_0

    return-object v1

    :catch_0
    move-exception v1

    .line 108
    invoke-virtual {v1}, Ljava/lang/AssertionError;->getMessage()Ljava/lang/String;

    move-result-object v1

    const/4 v2, 0x1

    new-array v2, v2, [Ljava/lang/Object;

    aput-object v1, v2, v0

    const-string v0, "Could not read timeZone information: %s"

    invoke-static {v0, v2}, Lcom/unity3d/services/core/log/DeviceLog;->error(Ljava/lang/String;[Ljava/lang/Object;)V

    .line 104
    const-string v0, ""

    return-object v0
.end method

.method private final getTimeZoneOffset()J
    .locals 4

    .line 117
    invoke-static {}, Ljava/util/TimeZone;->getDefault()Ljava/util/TimeZone;

    move-result-object v0

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v1

    invoke-virtual {v0, v1, v2}, Ljava/util/TimeZone;->getOffset(J)I

    move-result v0

    int-to-long v0, v0

    const/16 v2, 0x3e8

    int-to-long v2, v2

    div-long/2addr v0, v2

    return-wide v0
.end method

.method private final getUptime()J
    .locals 2

    .line 459
    invoke-static {}, Landroid/os/SystemClock;->uptimeMillis()J

    move-result-wide v0

    return-wide v0
.end method

.method private final getUsableSpace(Ljava/io/File;)J
    .locals 4

    if-eqz p1, :cond_0

    .line 325
    invoke-virtual {p1}, Ljava/io/File;->exists()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 326
    invoke-virtual {p1}, Ljava/io/File;->getUsableSpace()J

    move-result-wide v0

    const/16 p1, 0x400

    int-to-long v2, p1

    div-long/2addr v0, v2

    long-to-float p1, v0

    invoke-static {p1}, Lkotlin/math/MathKt;->roundToInt(F)I

    move-result p1

    int-to-long v0, p1

    return-wide v0

    :cond_0
    const-wide/16 v0, -0x1

    return-wide v0
.end method

.method private final hasInternetConnection()Z
    .locals 3

    .line 558
    invoke-direct {p0}, Lcom/unity3d/ads/core/data/datasource/AndroidDynamicDeviceInfoDataSource;->getConnectivityManager()Landroid/net/ConnectivityManager;

    move-result-object v0

    const/4 v1, 0x0

    if-nez v0, :cond_0

    return v1

    .line 559
    :cond_0
    invoke-virtual {v0}, Landroid/net/ConnectivityManager;->getActiveNetworkInfo()Landroid/net/NetworkInfo;

    move-result-object v0

    if-eqz v0, :cond_1

    .line 560
    invoke-virtual {v0}, Landroid/net/NetworkInfo;->isConnected()Z

    move-result v0

    const/4 v2, 0x1

    if-ne v0, v2, :cond_1

    return v2

    :cond_1
    return v1
.end method

.method private final hasInternetConnectionM()Z
    .locals 3

    .line 571
    invoke-direct {p0}, Lcom/unity3d/ads/core/data/datasource/AndroidDynamicDeviceInfoDataSource;->getConnectivityManager()Landroid/net/ConnectivityManager;

    move-result-object v0

    const/4 v1, 0x0

    if-nez v0, :cond_0

    return v1

    .line 572
    :cond_0
    invoke-virtual {v0}, Landroid/net/ConnectivityManager;->getActiveNetwork()Landroid/net/Network;

    move-result-object v2

    .line 573
    invoke-virtual {v0, v2}, Landroid/net/ConnectivityManager;->getNetworkCapabilities(Landroid/net/Network;)Landroid/net/NetworkCapabilities;

    move-result-object v0

    if-eqz v0, :cond_1

    const/16 v2, 0xc

    .line 575
    invoke-virtual {v0, v2}, Landroid/net/NetworkCapabilities;->hasCapability(I)Z

    move-result v2

    if-eqz v2, :cond_1

    const/16 v2, 0x10

    .line 576
    invoke-virtual {v0, v2}, Landroid/net/NetworkCapabilities;->hasCapability(I)Z

    move-result v0

    if-eqz v0, :cond_1

    const/4 v0, 0x1

    return v0

    :cond_1
    return v1
.end method

.method private final isActiveNetworkConnected()Z
    .locals 1

    .line 238
    invoke-direct {p0}, Lcom/unity3d/ads/core/data/datasource/AndroidDynamicDeviceInfoDataSource;->getConnectivityManager()Landroid/net/ConnectivityManager;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 239
    invoke-virtual {v0}, Landroid/net/ConnectivityManager;->getActiveNetworkInfo()Landroid/net/NetworkInfo;

    move-result-object v0

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    if-eqz v0, :cond_1

    .line 240
    invoke-virtual {v0}, Landroid/net/NetworkInfo;->isConnected()Z

    move-result v0

    if-eqz v0, :cond_1

    const/4 v0, 0x1

    return v0

    :cond_1
    const/4 v0, 0x0

    return v0
.end method

.method private final isAdbEnabled()Z
    .locals 1

    .line 416
    invoke-direct {p0}, Lcom/unity3d/ads/core/data/datasource/AndroidDynamicDeviceInfoDataSource;->adbStatus()Z

    move-result v0

    return v0
.end method

.method private final isAppActive()Z
    .locals 1

    .line 504
    iget-object v0, p0, Lcom/unity3d/ads/core/data/datasource/AndroidDynamicDeviceInfoDataSource;->lifecycleDataSource:Lcom/unity3d/ads/core/data/datasource/LifecycleDataSource;

    invoke-interface {v0}, Lcom/unity3d/ads/core/data/datasource/LifecycleDataSource;->appIsForeground()Z

    move-result v0

    return v0
.end method

.method private final isLimitAdTrackingEnabled()Z
    .locals 1

    .line 494
    invoke-static {}, Lcom/unity3d/services/core/device/AdvertisingId;->getLimitedAdTracking()Z

    move-result v0

    return v0
.end method

.method private final isLimitOpenAdTrackingEnabled()Z
    .locals 1

    .line 498
    invoke-static {}, Lcom/unity3d/services/core/device/OpenAdvertisingId;->getLimitedOpenAdTracking()Z

    move-result v0

    return v0
.end method

.method private final isUSBConnected()Z
    .locals 3

    .line 444
    iget-object v0, p0, Lcom/unity3d/ads/core/data/datasource/AndroidDynamicDeviceInfoDataSource;->context:Landroid/content/Context;

    .line 445
    new-instance v1, Landroid/content/IntentFilter;

    const-string v2, "android.hardware.usb.action.USB_STATE"

    invoke-direct {v1, v2}, Landroid/content/IntentFilter;-><init>(Ljava/lang/String;)V

    const/4 v2, 0x0

    invoke-virtual {v0, v2, v1}, Landroid/content/Context;->registerReceiver(Landroid/content/BroadcastReceiver;Landroid/content/IntentFilter;)Landroid/content/Intent;

    move-result-object v0

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    .line 447
    const-string v2, "connected"

    invoke-virtual {v0, v2, v1}, Landroid/content/Intent;->getBooleanExtra(Ljava/lang/String;Z)Z

    move-result v0

    return v0

    :cond_0
    return v1
.end method

.method private final isUsingWifi()Z
    .locals 4

    .line 123
    invoke-direct {p0}, Lcom/unity3d/ads/core/data/datasource/AndroidDynamicDeviceInfoDataSource;->getConnectivityManager()Landroid/net/ConnectivityManager;

    move-result-object v0

    const/4 v1, 0x0

    if-nez v0, :cond_0

    return v1

    .line 124
    :cond_0
    invoke-direct {p0}, Lcom/unity3d/ads/core/data/datasource/AndroidDynamicDeviceInfoDataSource;->getTelephonyManager()Landroid/telephony/TelephonyManager;

    move-result-object v2

    .line 127
    invoke-virtual {v0}, Landroid/net/ConnectivityManager;->getActiveNetworkInfo()Landroid/net/NetworkInfo;

    move-result-object v3

    if-eqz v3, :cond_2

    .line 128
    invoke-virtual {v0}, Landroid/net/ConnectivityManager;->getBackgroundDataSetting()Z

    move-result v0

    if-eqz v0, :cond_2

    invoke-virtual {v3}, Landroid/net/NetworkInfo;->isConnected()Z

    move-result v0

    if-eqz v0, :cond_2

    if-nez v2, :cond_1

    goto :goto_0

    .line 132
    :cond_1
    invoke-virtual {v3}, Landroid/net/NetworkInfo;->getType()I

    move-result v0

    const/4 v2, 0x1

    if-ne v0, v2, :cond_2

    .line 133
    invoke-virtual {v3}, Landroid/net/NetworkInfo;->isConnected()Z

    move-result v0

    if-eqz v0, :cond_2

    return v2

    :cond_2
    :goto_0
    return v1
.end method

.method private final isWiredHeadsetOn()Z
    .locals 3

    .line 252
    invoke-direct {p0}, Lcom/unity3d/ads/core/data/datasource/AndroidDynamicDeviceInfoDataSource;->getAudioManager()Landroid/media/AudioManager;

    move-result-object v0

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    .line 253
    invoke-virtual {v0}, Landroid/media/AudioManager;->isWiredHeadsetOn()Z

    move-result v0

    const/4 v2, 0x1

    if-ne v0, v2, :cond_0

    return v2

    :cond_0
    return v1
.end method


# virtual methods
.method public fetch()Lgatewayprotocol/v1/DynamicDeviceInfoOuterClass$DynamicDeviceInfo;
    .locals 3

    .line 733
    sget-object v0, Lgatewayprotocol/v1/DynamicDeviceInfoKt$Dsl;->Companion:Lgatewayprotocol/v1/DynamicDeviceInfoKt$Dsl$Companion;

    invoke-static {}, Lgatewayprotocol/v1/DynamicDeviceInfoOuterClass$DynamicDeviceInfo;->newBuilder()Lgatewayprotocol/v1/DynamicDeviceInfoOuterClass$DynamicDeviceInfo$Builder;

    move-result-object v1

    const-string v2, "newBuilder()"

    invoke-static {v1, v2}, Lkotlin/jvm/internal/Intrinsics;->checkNotNullExpressionValue(Ljava/lang/Object;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Lgatewayprotocol/v1/DynamicDeviceInfoKt$Dsl$Companion;->_create(Lgatewayprotocol/v1/DynamicDeviceInfoOuterClass$DynamicDeviceInfo$Builder;)Lgatewayprotocol/v1/DynamicDeviceInfoKt$Dsl;

    move-result-object v0

    .line 58
    invoke-direct {p0}, Lcom/unity3d/ads/core/data/datasource/AndroidDynamicDeviceInfoDataSource;->getLanguage()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lgatewayprotocol/v1/DynamicDeviceInfoKt$Dsl;->setLanguage(Ljava/lang/String;)V

    .line 59
    invoke-direct {p0}, Lcom/unity3d/ads/core/data/datasource/AndroidDynamicDeviceInfoDataSource;->getNetworkOperator()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lgatewayprotocol/v1/DynamicDeviceInfoKt$Dsl;->setNetworkOperator(Ljava/lang/String;)V

    .line 60
    invoke-direct {p0}, Lcom/unity3d/ads/core/data/datasource/AndroidDynamicDeviceInfoDataSource;->getNetworkOperatorName()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lgatewayprotocol/v1/DynamicDeviceInfoKt$Dsl;->setNetworkOperatorName(Ljava/lang/String;)V

    .line 61
    iget-object v1, p0, Lcom/unity3d/ads/core/data/datasource/AndroidDynamicDeviceInfoDataSource;->context:Landroid/content/Context;

    const/4 v2, 0x0

    invoke-virtual {v1, v2}, Landroid/content/Context;->getExternalFilesDir(Ljava/lang/String;)Ljava/io/File;

    move-result-object v1

    invoke-direct {p0, v1}, Lcom/unity3d/ads/core/data/datasource/AndroidDynamicDeviceInfoDataSource;->getUsableSpace(Ljava/io/File;)J

    move-result-wide v1

    invoke-virtual {v0, v1, v2}, Lgatewayprotocol/v1/DynamicDeviceInfoKt$Dsl;->setFreeDiskSpace(J)V

    .line 62
    invoke-virtual {p0}, Lcom/unity3d/ads/core/data/datasource/AndroidDynamicDeviceInfoDataSource;->getFreeMemory()J

    move-result-wide v1

    invoke-virtual {v0, v1, v2}, Lgatewayprotocol/v1/DynamicDeviceInfoKt$Dsl;->setFreeRamMemory(J)V

    .line 63
    invoke-direct {p0}, Lcom/unity3d/ads/core/data/datasource/AndroidDynamicDeviceInfoDataSource;->isWiredHeadsetOn()Z

    move-result v1

    invoke-virtual {v0, v1}, Lgatewayprotocol/v1/DynamicDeviceInfoKt$Dsl;->setWiredHeadset(Z)V

    .line 64
    invoke-direct {p0}, Lcom/unity3d/ads/core/data/datasource/AndroidDynamicDeviceInfoDataSource;->getTimeZone()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lgatewayprotocol/v1/DynamicDeviceInfoKt$Dsl;->setTimeZone(Ljava/lang/String;)V

    .line 65
    invoke-direct {p0}, Lcom/unity3d/ads/core/data/datasource/AndroidDynamicDeviceInfoDataSource;->getTimeZoneOffset()J

    move-result-wide v1

    invoke-virtual {v0, v1, v2}, Lgatewayprotocol/v1/DynamicDeviceInfoKt$Dsl;->setTimeZoneOffset(J)V

    .line 66
    invoke-direct {p0}, Lcom/unity3d/ads/core/data/datasource/AndroidDynamicDeviceInfoDataSource;->isLimitAdTrackingEnabled()Z

    move-result v1

    invoke-virtual {v0, v1}, Lgatewayprotocol/v1/DynamicDeviceInfoKt$Dsl;->setLimitedTracking(Z)V

    .line 67
    invoke-direct {p0}, Lcom/unity3d/ads/core/data/datasource/AndroidDynamicDeviceInfoDataSource;->isLimitOpenAdTrackingEnabled()Z

    move-result v1

    invoke-virtual {v0, v1}, Lgatewayprotocol/v1/DynamicDeviceInfoKt$Dsl;->setLimitedOpenAdTracking(Z)V

    .line 68
    invoke-direct {p0}, Lcom/unity3d/ads/core/data/datasource/AndroidDynamicDeviceInfoDataSource;->getBatteryLevel()D

    move-result-wide v1

    invoke-virtual {v0, v1, v2}, Lgatewayprotocol/v1/DynamicDeviceInfoKt$Dsl;->setBatteryLevel(D)V

    .line 69
    invoke-direct {p0}, Lcom/unity3d/ads/core/data/datasource/AndroidDynamicDeviceInfoDataSource;->getBatteryStatus()I

    move-result v1

    invoke-virtual {v0, v1}, Lgatewayprotocol/v1/DynamicDeviceInfoKt$Dsl;->setBatteryStatus(I)V

    .line 70
    invoke-direct {p0}, Lcom/unity3d/ads/core/data/datasource/AndroidDynamicDeviceInfoDataSource;->getConnectionType()Lgatewayprotocol/v1/DynamicDeviceInfoOuterClass$ConnectionType;

    move-result-object v1

    invoke-virtual {v0, v1}, Lgatewayprotocol/v1/DynamicDeviceInfoKt$Dsl;->setConnectionType(Lgatewayprotocol/v1/DynamicDeviceInfoOuterClass$ConnectionType;)V

    .line 71
    invoke-direct {p0}, Lcom/unity3d/ads/core/data/datasource/AndroidDynamicDeviceInfoDataSource;->fetchAndroidDynamicDeviceInfo()Lgatewayprotocol/v1/DynamicDeviceInfoOuterClass$DynamicDeviceInfo$Android;

    move-result-object v1

    invoke-virtual {v0, v1}, Lgatewayprotocol/v1/DynamicDeviceInfoKt$Dsl;->setAndroid(Lgatewayprotocol/v1/DynamicDeviceInfoOuterClass$DynamicDeviceInfo$Android;)V

    .line 72
    invoke-direct {p0}, Lcom/unity3d/ads/core/data/datasource/AndroidDynamicDeviceInfoDataSource;->isAppActive()Z

    move-result v1

    invoke-virtual {v0, v1}, Lgatewayprotocol/v1/DynamicDeviceInfoKt$Dsl;->setAppActive(Z)V

    .line 73
    invoke-direct {p0}, Lcom/unity3d/ads/core/data/datasource/AndroidDynamicDeviceInfoDataSource;->getScreenWidth()I

    move-result v1

    invoke-virtual {v0, v1}, Lgatewayprotocol/v1/DynamicDeviceInfoKt$Dsl;->setScreenWidth(I)V

    .line 74
    invoke-direct {p0}, Lcom/unity3d/ads/core/data/datasource/AndroidDynamicDeviceInfoDataSource;->getScreenHeight()I

    move-result v1

    invoke-virtual {v0, v1}, Lgatewayprotocol/v1/DynamicDeviceInfoKt$Dsl;->setScreenHeight(I)V

    .line 733
    invoke-virtual {v0}, Lgatewayprotocol/v1/DynamicDeviceInfoKt$Dsl;->_build()Lgatewayprotocol/v1/DynamicDeviceInfoOuterClass$DynamicDeviceInfo;

    move-result-object v0

    return-object v0
.end method

.method public final getChargingType()I
    .locals 3

    .line 670
    new-instance v0, Landroid/content/IntentFilter;

    const-string v1, "android.intent.action.BATTERY_CHANGED"

    invoke-direct {v0, v1}, Landroid/content/IntentFilter;-><init>(Ljava/lang/String;)V

    .line 671
    iget-object v1, p0, Lcom/unity3d/ads/core/data/datasource/AndroidDynamicDeviceInfoDataSource;->context:Landroid/content/Context;

    const/4 v2, 0x0

    invoke-virtual {v1, v2, v0}, Landroid/content/Context;->registerReceiver(Landroid/content/BroadcastReceiver;Landroid/content/IntentFilter;)Landroid/content/Intent;

    move-result-object v0

    const/4 v1, -0x1

    if-eqz v0, :cond_0

    .line 672
    const-string v2, "plugged"

    invoke-virtual {v0, v2, v1}, Landroid/content/Intent;->getIntExtra(Ljava/lang/String;I)I

    move-result v0

    return v0

    :cond_0
    return v1
.end method

.method public getConnectionTypeStr()Ljava/lang/String;
    .locals 2

    .line 639
    invoke-direct {p0}, Lcom/unity3d/ads/core/data/datasource/AndroidDynamicDeviceInfoDataSource;->getConnectionType()Lgatewayprotocol/v1/DynamicDeviceInfoOuterClass$ConnectionType;

    move-result-object v0

    sget-object v1, Lcom/unity3d/ads/core/data/datasource/AndroidDynamicDeviceInfoDataSource$WhenMappings;->$EnumSwitchMapping$1:[I

    invoke-virtual {v0}, Lgatewayprotocol/v1/DynamicDeviceInfoOuterClass$ConnectionType;->ordinal()I

    move-result v0

    aget v0, v1, v0

    const/4 v1, 0x1

    if-eq v0, v1, :cond_1

    const/4 v1, 0x2

    if-eq v0, v1, :cond_0

    .line 643
    const-string v0, "none"

    return-object v0

    .line 641
    :cond_0
    const-string v0, "cellular"

    return-object v0

    .line 640
    :cond_1
    const-string v0, "wifi"

    return-object v0
.end method

.method public final getContext()Landroid/content/Context;
    .locals 1

    .line 49
    iget-object v0, p0, Lcom/unity3d/ads/core/data/datasource/AndroidDynamicDeviceInfoDataSource;->context:Landroid/content/Context;

    return-object v0
.end method

.method public getCurrentUiTheme()I
    .locals 1

    .line 648
    iget-object v0, p0, Lcom/unity3d/ads/core/data/datasource/AndroidDynamicDeviceInfoDataSource;->context:Landroid/content/Context;

    invoke-virtual {v0}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object v0

    invoke-virtual {v0}, Landroid/content/res/Resources;->getConfiguration()Landroid/content/res/Configuration;

    move-result-object v0

    iget v0, v0, Landroid/content/res/Configuration;->uiMode:I

    return v0
.end method

.method public final getFreeMemory()J
    .locals 2

    .line 388
    sget-object v0, Lcom/unity3d/services/core/device/Device$MemoryInfoType;->FREE_MEMORY:Lcom/unity3d/services/core/device/Device$MemoryInfoType;

    invoke-direct {p0, v0}, Lcom/unity3d/ads/core/data/datasource/AndroidDynamicDeviceInfoDataSource;->getMemoryInfo(Lcom/unity3d/services/core/device/Device$MemoryInfoType;)J

    move-result-wide v0

    return-wide v0
.end method

.method public final getIsSdCardPresent()Z
    .locals 2

    .line 685
    invoke-static {}, Landroid/os/Environment;->getExternalStorageState()Ljava/lang/String;

    move-result-object v0

    const-string v1, "mounted"

    invoke-static {v0, v1}, Lkotlin/jvm/internal/Intrinsics;->areEqual(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v0

    return v0
.end method

.method public getLocaleList()Ljava/util/List;
    .locals 6
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation

    .line 652
    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v1, 0x18

    const/4 v2, 0x0

    if-lt v0, v1, :cond_1

    .line 653
    iget-object v0, p0, Lcom/unity3d/ads/core/data/datasource/AndroidDynamicDeviceInfoDataSource;->context:Landroid/content/Context;

    invoke-virtual {v0}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object v0

    invoke-virtual {v0}, Landroid/content/res/Resources;->getConfiguration()Landroid/content/res/Configuration;

    move-result-object v0

    invoke-static {v0}, Lbitter/jnibridge/a$$ExternalSyntheticApiModelOutline0;->m(Landroid/content/res/Configuration;)Landroid/os/LocaleList;

    move-result-object v0

    const-string v1, "context.resources.configuration.locales"

    invoke-static {v0, v1}, Lkotlin/jvm/internal/Intrinsics;->checkNotNullExpressionValue(Ljava/lang/Object;Ljava/lang/String;)V

    .line 654
    invoke-static {v0}, Landroidx/core/util/HalfKt$$ExternalSyntheticApiModelOutline0;->m(Landroid/os/LocaleList;)I

    move-result v1

    new-instance v3, Ljava/util/ArrayList;

    invoke-direct {v3, v1}, Ljava/util/ArrayList;-><init>(I)V

    :goto_0
    if-ge v2, v1, :cond_0

    invoke-static {v0, v2}, Landroidx/core/util/HalfKt$$ExternalSyntheticApiModelOutline0;->m(Landroid/os/LocaleList;I)Ljava/util/Locale;

    move-result-object v4

    invoke-virtual {v4}, Ljava/util/Locale;->toString()Ljava/lang/String;

    move-result-object v4

    const-string v5, "locales[it].toString()"

    invoke-static {v4, v5}, Lkotlin/jvm/internal/Intrinsics;->checkNotNullExpressionValue(Ljava/lang/Object;Ljava/lang/String;)V

    invoke-virtual {v3, v4}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    add-int/lit8 v2, v2, 0x1

    goto :goto_0

    :cond_0
    check-cast v3, Ljava/util/List;

    return-object v3

    .line 656
    :cond_1
    invoke-static {}, Ljava/util/Locale;->getAvailableLocales()[Ljava/util/Locale;

    move-result-object v0

    const-string v1, "getAvailableLocales()"

    invoke-static {v0, v1}, Lkotlin/jvm/internal/Intrinsics;->checkNotNullExpressionValue(Ljava/lang/Object;Ljava/lang/String;)V

    check-cast v0, [Ljava/lang/Object;

    .line 743
    new-instance v1, Ljava/util/ArrayList;

    array-length v3, v0

    invoke-direct {v1, v3}, Ljava/util/ArrayList;-><init>(I)V

    check-cast v1, Ljava/util/Collection;

    .line 744
    array-length v3, v0

    :goto_1
    if-ge v2, v3, :cond_2

    aget-object v4, v0, v2

    .line 745
    check-cast v4, Ljava/util/Locale;

    .line 656
    invoke-virtual {v4}, Ljava/util/Locale;->toString()Ljava/lang/String;

    move-result-object v4

    .line 745
    invoke-interface {v1, v4}, Ljava/util/Collection;->add(Ljava/lang/Object;)Z

    add-int/lit8 v2, v2, 0x1

    goto :goto_1

    .line 746
    :cond_2
    check-cast v1, Ljava/util/List;

    return-object v1
.end method

.method public final getNetworkCapabilityTransports()Lgatewayprotocol/v1/NetworkCapabilityTransportsOuterClass$NetworkCapabilityTransports;
    .locals 5

    .line 689
    invoke-static {}, Lgatewayprotocol/v1/NetworkCapabilityTransportsOuterClass$NetworkCapabilityTransports;->newBuilder()Lgatewayprotocol/v1/NetworkCapabilityTransportsOuterClass$NetworkCapabilityTransports$Builder;

    move-result-object v0

    .line 691
    sget v1, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v2, 0x1f

    const-string v3, "result.build()"

    if-ge v1, v2, :cond_0

    .line 692
    invoke-virtual {v0}, Lgatewayprotocol/v1/NetworkCapabilityTransportsOuterClass$NetworkCapabilityTransports$Builder;->build()Lcom/google/protobuf/GeneratedMessageLite;

    move-result-object v0

    invoke-static {v0, v3}, Lkotlin/jvm/internal/Intrinsics;->checkNotNullExpressionValue(Ljava/lang/Object;Ljava/lang/String;)V

    check-cast v0, Lgatewayprotocol/v1/NetworkCapabilityTransportsOuterClass$NetworkCapabilityTransports;

    return-object v0

    .line 694
    :cond_0
    iget-object v1, p0, Lcom/unity3d/ads/core/data/datasource/AndroidDynamicDeviceInfoDataSource;->context:Landroid/content/Context;

    const-string v2, "connectivity"

    invoke-virtual {v1, v2}, Landroid/content/Context;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v1

    instance-of v2, v1, Landroid/net/ConnectivityManager;

    if-eqz v2, :cond_1

    check-cast v1, Landroid/net/ConnectivityManager;

    goto :goto_0

    :cond_1
    const/4 v1, 0x0

    :goto_0
    if-eqz v1, :cond_4

    .line 695
    invoke-virtual {v1}, Landroid/net/ConnectivityManager;->getActiveNetwork()Landroid/net/Network;

    move-result-object v2

    if-nez v2, :cond_2

    goto :goto_1

    .line 696
    :cond_2
    invoke-virtual {v1, v2}, Landroid/net/ConnectivityManager;->getNetworkCapabilities(Landroid/net/Network;)Landroid/net/NetworkCapabilities;

    move-result-object v1

    if-nez v1, :cond_3

    invoke-virtual {v0}, Lgatewayprotocol/v1/NetworkCapabilityTransportsOuterClass$NetworkCapabilityTransports$Builder;->build()Lcom/google/protobuf/GeneratedMessageLite;

    move-result-object v0

    invoke-static {v0, v3}, Lkotlin/jvm/internal/Intrinsics;->checkNotNullExpressionValue(Ljava/lang/Object;Ljava/lang/String;)V

    check-cast v0, Lgatewayprotocol/v1/NetworkCapabilityTransportsOuterClass$NetworkCapabilityTransports;

    return-object v0

    :cond_3
    const/4 v2, 0x1

    .line 698
    invoke-virtual {v1, v2}, Landroid/net/NetworkCapabilities;->hasTransport(I)Z

    move-result v2

    .line 699
    const-string v4, "result"

    invoke-static {v0, v4}, Lkotlin/jvm/internal/Intrinsics;->checkNotNullExpressionValue(Ljava/lang/Object;Ljava/lang/String;)V

    invoke-virtual {v0, v2}, Lgatewayprotocol/v1/NetworkCapabilityTransportsOuterClass$NetworkCapabilityTransports$Builder;->setWifi(Z)Lgatewayprotocol/v1/NetworkCapabilityTransportsOuterClass$NetworkCapabilityTransports$Builder;

    const/4 v2, 0x0

    .line 700
    invoke-virtual {v1, v2}, Landroid/net/NetworkCapabilities;->hasTransport(I)Z

    move-result v2

    .line 701
    invoke-virtual {v0, v2}, Lgatewayprotocol/v1/NetworkCapabilityTransportsOuterClass$NetworkCapabilityTransports$Builder;->setCellular(Z)Lgatewayprotocol/v1/NetworkCapabilityTransportsOuterClass$NetworkCapabilityTransports$Builder;

    const/4 v2, 0x4

    .line 702
    invoke-virtual {v1, v2}, Landroid/net/NetworkCapabilities;->hasTransport(I)Z

    move-result v2

    .line 703
    invoke-virtual {v0, v2}, Lgatewayprotocol/v1/NetworkCapabilityTransportsOuterClass$NetworkCapabilityTransports$Builder;->setVpn(Z)Lgatewayprotocol/v1/NetworkCapabilityTransportsOuterClass$NetworkCapabilityTransports$Builder;

    const/4 v2, 0x3

    .line 704
    invoke-virtual {v1, v2}, Landroid/net/NetworkCapabilities;->hasTransport(I)Z

    move-result v2

    .line 705
    invoke-virtual {v0, v2}, Lgatewayprotocol/v1/NetworkCapabilityTransportsOuterClass$NetworkCapabilityTransports$Builder;->setEthernet(Z)Lgatewayprotocol/v1/NetworkCapabilityTransportsOuterClass$NetworkCapabilityTransports$Builder;

    const/4 v2, 0x5

    .line 706
    invoke-virtual {v1, v2}, Landroid/net/NetworkCapabilities;->hasTransport(I)Z

    move-result v2

    .line 707
    invoke-virtual {v0, v2}, Lgatewayprotocol/v1/NetworkCapabilityTransportsOuterClass$NetworkCapabilityTransports$Builder;->setWifiAware(Z)Lgatewayprotocol/v1/NetworkCapabilityTransportsOuterClass$NetworkCapabilityTransports$Builder;

    const/4 v2, 0x6

    .line 708
    invoke-virtual {v1, v2}, Landroid/net/NetworkCapabilities;->hasTransport(I)Z

    move-result v2

    .line 709
    invoke-virtual {v0, v2}, Lgatewayprotocol/v1/NetworkCapabilityTransportsOuterClass$NetworkCapabilityTransports$Builder;->setLowpan(Z)Lgatewayprotocol/v1/NetworkCapabilityTransportsOuterClass$NetworkCapabilityTransports$Builder;

    const/4 v2, 0x2

    .line 710
    invoke-virtual {v1, v2}, Landroid/net/NetworkCapabilities;->hasTransport(I)Z

    move-result v1

    .line 711
    invoke-virtual {v0, v1}, Lgatewayprotocol/v1/NetworkCapabilityTransportsOuterClass$NetworkCapabilityTransports$Builder;->setBluetooth(Z)Lgatewayprotocol/v1/NetworkCapabilityTransportsOuterClass$NetworkCapabilityTransports$Builder;

    .line 713
    invoke-virtual {v0}, Lgatewayprotocol/v1/NetworkCapabilityTransportsOuterClass$NetworkCapabilityTransports$Builder;->build()Lcom/google/protobuf/GeneratedMessageLite;

    move-result-object v0

    invoke-static {v0, v3}, Lkotlin/jvm/internal/Intrinsics;->checkNotNullExpressionValue(Ljava/lang/Object;Ljava/lang/String;)V

    check-cast v0, Lgatewayprotocol/v1/NetworkCapabilityTransportsOuterClass$NetworkCapabilityTransports;

    return-object v0

    .line 695
    :cond_4
    :goto_1
    invoke-virtual {v0}, Lgatewayprotocol/v1/NetworkCapabilityTransportsOuterClass$NetworkCapabilityTransports$Builder;->build()Lcom/google/protobuf/GeneratedMessageLite;

    move-result-object v0

    invoke-static {v0, v3}, Lkotlin/jvm/internal/Intrinsics;->checkNotNullExpressionValue(Ljava/lang/Object;Ljava/lang/String;)V

    check-cast v0, Lgatewayprotocol/v1/NetworkCapabilityTransportsOuterClass$NetworkCapabilityTransports;

    return-object v0
.end method

.method public final getNetworkCountryISO()Ljava/lang/String;
    .locals 1

    .line 208
    invoke-direct {p0}, Lcom/unity3d/ads/core/data/datasource/AndroidDynamicDeviceInfoDataSource;->getTelephonyManager()Landroid/telephony/TelephonyManager;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 209
    invoke-virtual {v0}, Landroid/telephony/TelephonyManager;->getNetworkCountryIso()Ljava/lang/String;

    move-result-object v0

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    if-nez v0, :cond_1

    const-string v0, ""

    :cond_1
    return-object v0
.end method

.method public getOrientation()Ljava/lang/String;
    .locals 2

    .line 616
    invoke-direct {p0}, Lcom/unity3d/ads/core/data/datasource/AndroidDynamicDeviceInfoDataSource;->getScreenHeight()I

    move-result v0

    invoke-direct {p0}, Lcom/unity3d/ads/core/data/datasource/AndroidDynamicDeviceInfoDataSource;->getScreenWidth()I

    move-result v1

    if-le v0, v1, :cond_0

    .line 617
    const-string v0, "portrait"

    return-object v0

    .line 619
    :cond_0
    const-string v0, "landscape"

    return-object v0
.end method

.method public final getProcessInfo()Ljava/util/Map;
    .locals 6
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation

    .line 478
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    .line 479
    new-instance v1, Ljava/io/RandomAccessFile;

    const-string v2, "/proc/self/stat"

    const-string v3, "r"

    invoke-direct {v1, v2, v3}, Ljava/io/RandomAccessFile;-><init>(Ljava/lang/String;Ljava/lang/String;)V

    check-cast v1, Ljava/io/Closeable;

    :try_start_0
    move-object v2, v1

    check-cast v2, Ljava/io/RandomAccessFile;

    .line 480
    invoke-virtual {v2}, Ljava/io/RandomAccessFile;->readLine()Ljava/lang/String;

    move-result-object v2

    .line 481
    move-object v3, v0

    check-cast v3, Ljava/util/Map;

    const-string v4, "stat"

    const-string v5, "statContent"

    invoke-static {v2, v5}, Lkotlin/jvm/internal/Intrinsics;->checkNotNullExpressionValue(Ljava/lang/Object;Ljava/lang/String;)V

    invoke-interface {v3, v4, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 482
    sget-object v2, Lkotlin/Unit;->INSTANCE:Lkotlin/Unit;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    const/4 v2, 0x0

    .line 479
    invoke-static {v1, v2}, Lkotlin/io/CloseableKt;->closeFinally(Ljava/io/Closeable;Ljava/lang/Throwable;)V

    .line 483
    check-cast v0, Ljava/util/Map;

    return-object v0

    :catchall_0
    move-exception v0

    .line 479
    :try_start_1
    throw v0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    :catchall_1
    move-exception v2

    invoke-static {v1, v0}, Lkotlin/io/CloseableKt;->closeFinally(Ljava/io/Closeable;Ljava/lang/Throwable;)V

    throw v2
.end method

.method public getRingerMode()I
    .locals 1

    .line 266
    invoke-direct {p0}, Lcom/unity3d/ads/core/data/datasource/AndroidDynamicDeviceInfoDataSource;->getAudioManager()Landroid/media/AudioManager;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 267
    invoke-virtual {v0}, Landroid/media/AudioManager;->getRingerMode()I

    move-result v0

    return v0

    :cond_0
    const/4 v0, -0x2

    return v0
.end method

.method public final getScreenBrightness()I
    .locals 3

    .line 299
    iget-object v0, p0, Lcom/unity3d/ads/core/data/datasource/AndroidDynamicDeviceInfoDataSource;->context:Landroid/content/Context;

    invoke-virtual {v0}, Landroid/content/Context;->getContentResolver()Landroid/content/ContentResolver;

    move-result-object v0

    .line 300
    const-string v1, "screen_brightness"

    const/4 v2, -0x1

    .line 298
    invoke-static {v0, v1, v2}, Landroid/provider/Settings$System;->getInt(Landroid/content/ContentResolver;Ljava/lang/String;I)I

    move-result v0

    return v0
.end method

.method public final getStayOnWhilePluggedIn()Z
    .locals 4

    const/4 v0, 0x1

    const/4 v1, 0x0

    .line 677
    :try_start_0
    iget-object v2, p0, Lcom/unity3d/ads/core/data/datasource/AndroidDynamicDeviceInfoDataSource;->context:Landroid/content/Context;

    invoke-virtual {v2}, Landroid/content/Context;->getContentResolver()Landroid/content/ContentResolver;

    move-result-object v2

    const-string v3, "stay_on_while_plugged_in"

    invoke-static {v2, v3, v1}, Landroid/provider/Settings$Global;->getInt(Landroid/content/ContentResolver;Ljava/lang/String;I)I

    move-result v2
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-eqz v2, :cond_0

    return v0

    :cond_0
    return v1

    :catchall_0
    move-exception v2

    .line 679
    invoke-virtual {v2}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v2

    new-array v0, v0, [Ljava/lang/Object;

    aput-object v2, v0, v1

    const-string v2, "Problems fetching stay on while plugged in status"

    invoke-static {v2, v0}, Lcom/unity3d/services/core/log/DeviceLog;->error(Ljava/lang/String;[Ljava/lang/Object;)V

    return v1
.end method

.method public final getStreamMaxVolume(I)D
    .locals 2

    .line 288
    invoke-direct {p0}, Lcom/unity3d/ads/core/data/datasource/AndroidDynamicDeviceInfoDataSource;->getAudioManager()Landroid/media/AudioManager;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 289
    invoke-virtual {v0, p1}, Landroid/media/AudioManager;->getStreamMaxVolume(I)I

    move-result p1

    goto :goto_0

    :cond_0
    const/4 p1, -0x2

    :goto_0
    int-to-double v0, p1

    return-wide v0
.end method

.method public final getTotalMemory()J
    .locals 2

    .line 381
    sget-object v0, Lcom/unity3d/services/core/device/Device$MemoryInfoType;->TOTAL_MEMORY:Lcom/unity3d/services/core/device/Device$MemoryInfoType;

    invoke-direct {p0, v0}, Lcom/unity3d/ads/core/data/datasource/AndroidDynamicDeviceInfoDataSource;->getMemoryInfo(Lcom/unity3d/services/core/device/Device$MemoryInfoType;)J

    move-result-wide v0

    return-wide v0
.end method

.method public getVolumeSettingsChange()Lkotlinx/coroutines/flow/Flow;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Lkotlinx/coroutines/flow/Flow<",
            "Lcom/unity3d/ads/core/data/datasource/VolumeSettingsChange;",
            ">;"
        }
    .end annotation

    .line 579
    iget-object v0, p0, Lcom/unity3d/ads/core/data/datasource/AndroidDynamicDeviceInfoDataSource;->volumeSettingsChange:Lkotlinx/coroutines/flow/Flow;

    return-object v0
.end method

.method public hasInternet()Z
    .locals 1

    .line 546
    invoke-direct {p0}, Lcom/unity3d/ads/core/data/datasource/AndroidDynamicDeviceInfoDataSource;->hasInternetConnectionM()Z

    move-result v0

    return v0
.end method
