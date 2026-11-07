.class public final Lcom/unity3d/services/UnityAdsSDK;
.super Ljava/lang/Object;
.source "UnityAdsSDK.kt"

# interfaces
.implements Lcom/unity3d/services/core/di/IServiceComponent;


# annotations
.annotation system Ldalvik/annotation/SourceDebugExtension;
    value = "SMAP\nUnityAdsSDK.kt\nKotlin\n*S Kotlin\n*F\n+ 1 UnityAdsSDK.kt\ncom/unity3d/services/UnityAdsSDK\n+ 2 IServiceComponent.kt\ncom/unity3d/services/core/di/IServiceComponentKt\n+ 3 fake.kt\nkotlin/jvm/internal/FakeKt\n*L\n1#1,243:1\n29#2,5:244\n29#2,5:249\n29#2,5:254\n29#2,5:259\n19#2:264\n29#2,5:265\n19#2:270\n29#2,5:271\n19#2:276\n16#2,4:277\n29#2,5:281\n29#2,5:286\n29#2,5:291\n19#2:296\n29#2,5:297\n29#2,5:302\n29#2,5:307\n29#2,5:312\n29#2,5:317\n29#2,5:323\n29#2,5:328\n29#2,5:333\n19#2:338\n29#2,5:339\n29#2,5:344\n1#3:322\n*S KotlinDebug\n*F\n+ 1 UnityAdsSDK.kt\ncom/unity3d/services/UnityAdsSDK\n*L\n87#1:244,5\n91#1:249,5\n92#1:254,5\n93#1:259,5\n95#1:264\n124#1:265,5\n127#1:270\n128#1:271,5\n138#1:276\n139#1:277,4\n160#1:281,5\n163#1:286,5\n164#1:291,5\n165#1:296\n174#1:297,5\n175#1:302,5\n176#1:307,5\n177#1:312,5\n178#1:317,5\n223#1:323,5\n226#1:328,5\n227#1:333,5\n228#1:338\n237#1:339,5\n240#1:344,5\n*E\n"
.end annotation

.annotation runtime Lkotlin/Metadata;
    d1 = {
        "\u0000\u00a4\u0001\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\u0008\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000e\n\u0002\u0008\u0007\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\u0008\u0006\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u0002\n\u0002\u0008\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0008\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\u0018\u00002\u00020\u0001B\u000f\u0012\u0008\u0008\u0002\u0010\u0002\u001a\u00020\u0003\u00a2\u0006\u0002\u0010\u0004J\u001b\u0010\u0007\u001a\u0004\u0018\u00010\u00082\u0006\u0010\t\u001a\u00020\u0008H\u0082@\u00f8\u0001\u0000\u00a2\u0006\u0002\u0010\nJ\u000e\u0010\u000b\u001a\u00020\u00062\u0006\u0010\u000c\u001a\u00020\u0008J\u0008\u0010\r\u001a\u00020\u0003H\u0016J\u0008\u0010\u000e\u001a\u0004\u0018\u00010\u0008J\u0010\u0010\u000e\u001a\u00020\u00062\u0008\u0010\u000f\u001a\u0004\u0018\u00010\u0010J\u001a\u0010\u000e\u001a\u00020\u00062\u0008\u0010\u0011\u001a\u0004\u0018\u00010\u00122\u0008\u0010\u000f\u001a\u0004\u0018\u00010\u0010J\u001a\u0010\u0013\u001a\u00020\u00062\u0008\u0010\u0014\u001a\u0004\u0018\u00010\u00082\u0008\u0008\u0002\u0010\u0015\u001a\u00020\u0008J.\u0010\u0016\u001a\u00020\u00062\u0008\u0010\u0017\u001a\u0004\u0018\u00010\u00082\u0006\u0010\u0018\u001a\u00020\u00192\u0008\u0010\u000f\u001a\u0004\u0018\u00010\u001a2\n\u0008\u0002\u0010\u001b\u001a\u0004\u0018\u00010\u001cJ\u0006\u0010\u001d\u001a\u00020\u001eJ\"\u0010\u001f\u001a\u00020\u00062\u0008\u0010\u0017\u001a\u0004\u0018\u00010\u00082\u0008\u0010 \u001a\u0004\u0018\u00010!2\u0006\u0010\u000f\u001a\u00020\"R\u0010\u0010\u0005\u001a\u0004\u0018\u00010\u0006X\u0082\u000e\u00a2\u0006\u0002\n\u0000R\u000e\u0010\u0002\u001a\u00020\u0003X\u0082\u0004\u00a2\u0006\u0002\n\u0000\u0082\u0002\u0004\n\u0002\u0008\u0019\u00a8\u0006#\u00b2\u0006\n\u0010$\u001a\u00020%X\u008a\u0084\u0002\u00b2\u0006\n\u0010&\u001a\u00020\'X\u008a\u0084\u0002\u00b2\u0006\n\u0010(\u001a\u00020)X\u008a\u0084\u0002\u00b2\u0006\n\u0010*\u001a\u00020+X\u008a\u0084\u0002\u00b2\u0006\n\u0010,\u001a\u00020-X\u008a\u0084\u0002\u00b2\u0006\n\u0010.\u001a\u00020/X\u008a\u0084\u0002\u00b2\u0006\n\u0010,\u001a\u00020-X\u008a\u0084\u0002\u00b2\u0006\n\u00100\u001a\u000201X\u008a\u0084\u0002\u00b2\u0006\n\u00102\u001a\u000203X\u008a\u0084\u0002\u00b2\u0006\n\u00100\u001a\u000201X\u008a\u0084\u0002\u00b2\u0006\n\u00104\u001a\u000205X\u008a\u0084\u0002\u00b2\u0006\n\u00106\u001a\u000207X\u008a\u0084\u0002\u00b2\u0006\n\u00108\u001a\u000209X\u008a\u0084\u0002\u00b2\u0006\n\u0010:\u001a\u00020;X\u008a\u0084\u0002\u00b2\u0006\n\u0010&\u001a\u00020\'X\u008a\u0084\u0002\u00b2\u0006\n\u0010<\u001a\u00020=X\u008a\u0084\u0002\u00b2\u0006\n\u0010>\u001a\u00020?X\u008a\u0084\u0002\u00b2\u0006\n\u0010&\u001a\u00020\'X\u008a\u0084\u0002\u00b2\u0006\n\u00108\u001a\u000209X\u008a\u0084\u0002"
    }
    d2 = {
        "Lcom/unity3d/services/UnityAdsSDK;",
        "Lcom/unity3d/services/core/di/IServiceComponent;",
        "serviceProvider",
        "Lcom/unity3d/services/core/di/IServiceProvider;",
        "(Lcom/unity3d/services/core/di/IServiceProvider;)V",
        "initializationJob",
        "Lkotlinx/coroutines/Job;",
        "fetchToken",
        "",
        "sync",
        "(Ljava/lang/String;Lkotlin/coroutines/Continuation;)Ljava/lang/Object;",
        "finishOMIDSession",
        "opportunityId",
        "getServiceProvider",
        "getToken",
        "listener",
        "Lcom/unity3d/ads/IUnityAdsTokenListener;",
        "tokenConfiguration",
        "Lcom/unity3d/ads/TokenConfiguration;",
        "initialize",
        "gameId",
        "source",
        "load",
        "placementId",
        "loadOptions",
        "Lcom/unity3d/ads/UnityAdsLoadOptions;",
        "Lcom/unity3d/ads/IUnityAdsLoadListener;",
        "bannerSize",
        "Lcom/unity3d/services/banners/UnityBannerSize;",
        "sendBannerDestroyed",
        "",
        "show",
        "showOptions",
        "Lcom/unity3d/ads/UnityAdsShowOptions;",
        "Lcom/unity3d/ads/core/data/model/Listeners;",
        "unity-ads_defaultRelease",
        "shouldAllowInitialization",
        "Lcom/unity3d/ads/core/domain/ShouldAllowInitialization;",
        "alternativeFlowReader",
        "Lcom/unity3d/ads/core/configuration/AlternativeFlowReader;",
        "initializeSDK",
        "Lcom/unity3d/services/core/domain/task/InitializeSDK;",
        "initializeBoldSDK",
        "Lcom/unity3d/ads/core/domain/InitializeBoldSDK;",
        "getGameId",
        "Lcom/unity3d/ads/core/domain/GetGameId;",
        "context",
        "Landroid/content/Context;",
        "tokenNumberProvider",
        "Lcom/unity3d/ads/core/domain/TokenNumberProvider;",
        "getAsyncHeaderBiddingToken",
        "Lcom/unity3d/ads/core/domain/GetAsyncHeaderBiddingToken;",
        "getHeaderBiddingToken",
        "Lcom/unity3d/ads/core/domain/GetHeaderBiddingToken;",
        "getInitializationState",
        "Lcom/unity3d/ads/core/domain/GetInitializationState;",
        "sendDiagnosticEvent",
        "Lcom/unity3d/ads/core/domain/SendDiagnosticEvent;",
        "logger",
        "Lcom/unity3d/ads/core/log/Logger;",
        "getAdObject",
        "Lcom/unity3d/ads/core/domain/GetAdObject;",
        "omFinishSession",
        "Lcom/unity3d/ads/core/domain/om/OmFinishSession;"
    }
    k = 0x1
    mv = {
        0x1,
        0x8,
        0x0
    }
    xi = 0x30
.end annotation


# instance fields
.field private initializationJob:Lkotlinx/coroutines/Job;

.field private final serviceProvider:Lcom/unity3d/services/core/di/IServiceProvider;


# direct methods
.method public constructor <init>()V
    .locals 2

    const/4 v0, 0x0

    const/4 v1, 0x1

    invoke-direct {p0, v0, v1, v0}, Lcom/unity3d/services/UnityAdsSDK;-><init>(Lcom/unity3d/services/core/di/IServiceProvider;ILkotlin/jvm/internal/DefaultConstructorMarker;)V

    return-void
.end method

.method public constructor <init>(Lcom/unity3d/services/core/di/IServiceProvider;)V
    .locals 1

    const-string v0, "serviceProvider"

    invoke-static {p1, v0}, Lkotlin/jvm/internal/Intrinsics;->checkNotNullParameter(Ljava/lang/Object;Ljava/lang/String;)V

    .line 67
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 68
    iput-object p1, p0, Lcom/unity3d/services/UnityAdsSDK;->serviceProvider:Lcom/unity3d/services/core/di/IServiceProvider;

    return-void
.end method

.method public synthetic constructor <init>(Lcom/unity3d/services/core/di/IServiceProvider;ILkotlin/jvm/internal/DefaultConstructorMarker;)V
    .locals 0

    and-int/lit8 p2, p2, 0x1

    if-eqz p2, :cond_0

    .line 68
    sget-object p1, Lcom/unity3d/services/core/di/ServiceProvider;->INSTANCE:Lcom/unity3d/services/core/di/ServiceProvider;

    check-cast p1, Lcom/unity3d/services/core/di/IServiceProvider;

    :cond_0
    invoke-direct {p0, p1}, Lcom/unity3d/services/UnityAdsSDK;-><init>(Lcom/unity3d/services/core/di/IServiceProvider;)V

    return-void
.end method

.method public static final synthetic access$fetchToken(Lcom/unity3d/services/UnityAdsSDK;Ljava/lang/String;Lkotlin/coroutines/Continuation;)Ljava/lang/Object;
    .locals 0

    .line 67
    invoke-direct {p0, p1, p2}, Lcom/unity3d/services/UnityAdsSDK;->fetchToken(Ljava/lang/String;Lkotlin/coroutines/Continuation;)Ljava/lang/Object;

    move-result-object p0

    return-object p0
.end method

.method public static final synthetic access$fetchToken$lambda$10(Lkotlin/Lazy;)Lcom/unity3d/ads/core/domain/TokenNumberProvider;
    .locals 0

    .line 67
    invoke-static {p0}, Lcom/unity3d/services/UnityAdsSDK;->fetchToken$lambda$10(Lkotlin/Lazy;)Lcom/unity3d/ads/core/domain/TokenNumberProvider;

    move-result-object p0

    return-object p0
.end method

.method public static final synthetic access$fetchToken$lambda$11(Lkotlin/Lazy;)Lcom/unity3d/ads/core/domain/GetHeaderBiddingToken;
    .locals 0

    .line 67
    invoke-static {p0}, Lcom/unity3d/services/UnityAdsSDK;->fetchToken$lambda$11(Lkotlin/Lazy;)Lcom/unity3d/ads/core/domain/GetHeaderBiddingToken;

    move-result-object p0

    return-object p0
.end method

.method public static final synthetic access$finishOMIDSession$lambda$20(Lkotlin/Lazy;)Lcom/unity3d/ads/core/domain/GetAdObject;
    .locals 0

    .line 67
    invoke-static {p0}, Lcom/unity3d/services/UnityAdsSDK;->finishOMIDSession$lambda$20(Lkotlin/Lazy;)Lcom/unity3d/ads/core/domain/GetAdObject;

    move-result-object p0

    return-object p0
.end method

.method public static final synthetic access$finishOMIDSession$lambda$21(Lkotlin/Lazy;)Lcom/unity3d/ads/core/domain/om/OmFinishSession;
    .locals 0

    .line 67
    invoke-static {p0}, Lcom/unity3d/services/UnityAdsSDK;->finishOMIDSession$lambda$21(Lkotlin/Lazy;)Lcom/unity3d/ads/core/domain/om/OmFinishSession;

    move-result-object p0

    return-object p0
.end method

.method public static final synthetic access$getToken$lambda$8(Lkotlin/Lazy;)Lcom/unity3d/ads/core/domain/TokenNumberProvider;
    .locals 0

    .line 67
    invoke-static {p0}, Lcom/unity3d/services/UnityAdsSDK;->getToken$lambda$8(Lkotlin/Lazy;)Lcom/unity3d/ads/core/domain/TokenNumberProvider;

    move-result-object p0

    return-object p0
.end method

.method public static final synthetic access$getToken$lambda$9(Lkotlin/Lazy;)Lcom/unity3d/ads/core/domain/GetAsyncHeaderBiddingToken;
    .locals 0

    .line 67
    invoke-static {p0}, Lcom/unity3d/services/UnityAdsSDK;->getToken$lambda$9(Lkotlin/Lazy;)Lcom/unity3d/ads/core/domain/GetAsyncHeaderBiddingToken;

    move-result-object p0

    return-object p0
.end method

.method public static final synthetic access$initialize$lambda$4$lambda$1(Lkotlin/Lazy;)Lcom/unity3d/ads/core/configuration/AlternativeFlowReader;
    .locals 0

    .line 67
    invoke-static {p0}, Lcom/unity3d/services/UnityAdsSDK;->initialize$lambda$4$lambda$1(Lkotlin/Lazy;)Lcom/unity3d/ads/core/configuration/AlternativeFlowReader;

    move-result-object p0

    return-object p0
.end method

.method public static final synthetic access$initialize$lambda$4$lambda$2(Lkotlin/Lazy;)Lcom/unity3d/services/core/domain/task/InitializeSDK;
    .locals 0

    .line 67
    invoke-static {p0}, Lcom/unity3d/services/UnityAdsSDK;->initialize$lambda$4$lambda$2(Lkotlin/Lazy;)Lcom/unity3d/services/core/domain/task/InitializeSDK;

    move-result-object p0

    return-object p0
.end method

.method public static final synthetic access$initialize$lambda$4$lambda$3(Lkotlin/Lazy;)Lcom/unity3d/ads/core/domain/InitializeBoldSDK;
    .locals 0

    .line 67
    invoke-static {p0}, Lcom/unity3d/services/UnityAdsSDK;->initialize$lambda$4$lambda$3(Lkotlin/Lazy;)Lcom/unity3d/ads/core/domain/InitializeBoldSDK;

    move-result-object p0

    return-object p0
.end method

.method public static final synthetic access$load$lambda$6(Lkotlin/Lazy;)Landroid/content/Context;
    .locals 0

    .line 67
    invoke-static {p0}, Lcom/unity3d/services/UnityAdsSDK;->load$lambda$6(Lkotlin/Lazy;)Landroid/content/Context;

    move-result-object p0

    return-object p0
.end method

.method private final fetchToken(Ljava/lang/String;Lkotlin/coroutines/Continuation;)Ljava/lang/Object;
    .locals 35
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            "Lkotlin/coroutines/Continuation<",
            "-",
            "Ljava/lang/String;",
            ">;)",
            "Ljava/lang/Object;"
        }
    .end annotation

    move-object/from16 v1, p1

    .line 174
    move-object/from16 v0, p0

    check-cast v0, Lcom/unity3d/services/core/di/IServiceComponent;

    .line 299
    sget-object v2, Lkotlin/LazyThreadSafetyMode;->NONE:Lkotlin/LazyThreadSafetyMode;

    .line 301
    new-instance v3, Lcom/unity3d/services/UnityAdsSDK$fetchToken$$inlined$inject$default$1;

    const-string v4, ""

    invoke-direct {v3, v0, v4}, Lcom/unity3d/services/UnityAdsSDK$fetchToken$$inlined$inject$default$1;-><init>(Lcom/unity3d/services/core/di/IServiceComponent;Ljava/lang/String;)V

    check-cast v3, Lkotlin/jvm/functions/Function0;

    invoke-static {v2, v3}, Lkotlin/LazyKt;->lazy(Lkotlin/LazyThreadSafetyMode;Lkotlin/jvm/functions/Function0;)Lkotlin/Lazy;

    move-result-object v2

    .line 304
    sget-object v3, Lkotlin/LazyThreadSafetyMode;->NONE:Lkotlin/LazyThreadSafetyMode;

    .line 306
    new-instance v5, Lcom/unity3d/services/UnityAdsSDK$fetchToken$$inlined$inject$default$2;

    invoke-direct {v5, v0, v4}, Lcom/unity3d/services/UnityAdsSDK$fetchToken$$inlined$inject$default$2;-><init>(Lcom/unity3d/services/core/di/IServiceComponent;Ljava/lang/String;)V

    check-cast v5, Lkotlin/jvm/functions/Function0;

    invoke-static {v3, v5}, Lkotlin/LazyKt;->lazy(Lkotlin/LazyThreadSafetyMode;Lkotlin/jvm/functions/Function0;)Lkotlin/Lazy;

    move-result-object v3

    .line 309
    sget-object v5, Lkotlin/LazyThreadSafetyMode;->NONE:Lkotlin/LazyThreadSafetyMode;

    .line 311
    new-instance v6, Lcom/unity3d/services/UnityAdsSDK$fetchToken$$inlined$inject$default$3;

    invoke-direct {v6, v0, v4}, Lcom/unity3d/services/UnityAdsSDK$fetchToken$$inlined$inject$default$3;-><init>(Lcom/unity3d/services/core/di/IServiceComponent;Ljava/lang/String;)V

    check-cast v6, Lkotlin/jvm/functions/Function0;

    invoke-static {v5, v6}, Lkotlin/LazyKt;->lazy(Lkotlin/LazyThreadSafetyMode;Lkotlin/jvm/functions/Function0;)Lkotlin/Lazy;

    move-result-object v5

    .line 314
    sget-object v6, Lkotlin/LazyThreadSafetyMode;->NONE:Lkotlin/LazyThreadSafetyMode;

    .line 316
    new-instance v7, Lcom/unity3d/services/UnityAdsSDK$fetchToken$$inlined$inject$default$4;

    invoke-direct {v7, v0, v4}, Lcom/unity3d/services/UnityAdsSDK$fetchToken$$inlined$inject$default$4;-><init>(Lcom/unity3d/services/core/di/IServiceComponent;Ljava/lang/String;)V

    check-cast v7, Lkotlin/jvm/functions/Function0;

    invoke-static {v6, v7}, Lkotlin/LazyKt;->lazy(Lkotlin/LazyThreadSafetyMode;Lkotlin/jvm/functions/Function0;)Lkotlin/Lazy;

    move-result-object v6

    .line 319
    sget-object v7, Lkotlin/LazyThreadSafetyMode;->NONE:Lkotlin/LazyThreadSafetyMode;

    .line 321
    new-instance v8, Lcom/unity3d/services/UnityAdsSDK$fetchToken$$inlined$inject$default$5;

    invoke-direct {v8, v0, v4}, Lcom/unity3d/services/UnityAdsSDK$fetchToken$$inlined$inject$default$5;-><init>(Lcom/unity3d/services/core/di/IServiceComponent;Ljava/lang/String;)V

    check-cast v8, Lkotlin/jvm/functions/Function0;

    invoke-static {v7, v8}, Lkotlin/LazyKt;->lazy(Lkotlin/LazyThreadSafetyMode;Lkotlin/jvm/functions/Function0;)Lkotlin/Lazy;

    move-result-object v4

    .line 179
    sget-object v0, Lkotlin/time/TimeSource$Monotonic;->INSTANCE:Lkotlin/time/TimeSource$Monotonic;

    invoke-virtual {v0}, Lkotlin/time/TimeSource$Monotonic;->markNow-z9LOYto()J

    move-result-wide v7

    .line 180
    invoke-static {v6}, Lcom/unity3d/services/UnityAdsSDK;->fetchToken$lambda$13(Lkotlin/Lazy;)Lcom/unity3d/ads/core/domain/SendDiagnosticEvent;

    move-result-object v9

    const/4 v10, 0x2

    .line 183
    new-array v0, v10, [Lkotlin/Pair;

    const-string v11, "sync"

    invoke-static {v11, v1}, Lkotlin/TuplesKt;->to(Ljava/lang/Object;Ljava/lang/Object;)Lkotlin/Pair;

    move-result-object v12

    const/4 v13, 0x0

    aput-object v12, v0, v13

    .line 184
    invoke-static {v5}, Lcom/unity3d/services/UnityAdsSDK;->fetchToken$lambda$12(Lkotlin/Lazy;)Lcom/unity3d/ads/core/domain/GetInitializationState;

    move-result-object v12

    const/4 v14, 0x1

    const/4 v15, 0x0

    invoke-static {v12, v13, v14, v15}, Lcom/unity3d/ads/core/domain/GetInitializationState$DefaultImpls;->invoke$default(Lcom/unity3d/ads/core/domain/GetInitializationState;ZILjava/lang/Object;)Lcom/unity3d/ads/core/data/model/InitializationState;

    move-result-object v12

    invoke-virtual {v12}, Lcom/unity3d/ads/core/data/model/InitializationState;->toString()Ljava/lang/String;

    move-result-object v12

    move-object/from16 p2, v11

    const-string v11, "state"

    invoke-static {v11, v12}, Lkotlin/TuplesKt;->to(Ljava/lang/Object;Ljava/lang/Object;)Lkotlin/Pair;

    move-result-object v12

    aput-object v12, v0, v14

    .line 182
    invoke-static {v0}, Lkotlin/collections/MapsKt;->mapOf([Lkotlin/Pair;)Ljava/util/Map;

    move-result-object v12

    const/16 v16, 0x3a

    const/16 v17, 0x0

    move/from16 v18, v10

    .line 180
    const-string v10, "native_gateway_token_started"

    move-object/from16 v19, v11

    const/4 v11, 0x0

    move/from16 v20, v13

    const/4 v13, 0x0

    move/from16 v21, v14

    const/4 v14, 0x0

    move-object/from16 v22, v15

    move-object/from16 v24, p2

    move-object/from16 v23, v4

    move-object/from16 p2, v5

    move-object/from16 v18, v6

    move-object/from16 v25, v19

    move/from16 v5, v20

    move/from16 v6, v21

    move-object/from16 v4, v22

    invoke-static/range {v9 .. v17}, Lcom/unity3d/ads/core/domain/SendDiagnosticEvent$DefaultImpls;->invoke$default(Lcom/unity3d/ads/core/domain/SendDiagnosticEvent;Ljava/lang/String;Ljava/lang/Double;Ljava/util/Map;Ljava/util/Map;Lcom/unity3d/ads/core/data/model/AdObject;Ljava/lang/Integer;ILjava/lang/Object;)V

    .line 188
    invoke-static/range {p2 .. p2}, Lcom/unity3d/services/UnityAdsSDK;->fetchToken$lambda$12(Lkotlin/Lazy;)Lcom/unity3d/ads/core/domain/GetInitializationState;

    move-result-object v0

    invoke-static {v0, v5, v6, v4}, Lcom/unity3d/ads/core/domain/GetInitializationState$DefaultImpls;->invoke$default(Lcom/unity3d/ads/core/domain/GetInitializationState;ZILjava/lang/Object;)Lcom/unity3d/ads/core/data/model/InitializationState;

    move-result-object v0

    sget-object v9, Lcom/unity3d/ads/core/data/model/InitializationState;->INITIALIZED:Lcom/unity3d/ads/core/data/model/InitializationState;

    if-eq v0, v9, :cond_0

    .line 190
    const-string v0, "not_initialized"

    move-object v3, v4

    move-object v15, v3

    goto :goto_0

    .line 193
    :cond_0
    :try_start_0
    new-instance v0, Lcom/unity3d/services/UnityAdsSDK$fetchToken$token$1;

    invoke-direct {v0, v3, v2, v4}, Lcom/unity3d/services/UnityAdsSDK$fetchToken$token$1;-><init>(Lkotlin/Lazy;Lkotlin/Lazy;Lkotlin/coroutines/Continuation;)V

    check-cast v0, Lkotlin/jvm/functions/Function2;

    invoke-static {v4, v0, v6, v4}, Lkotlinx/coroutines/BuildersKt;->runBlocking$default(Lkotlin/coroutines/CoroutineContext;Lkotlin/jvm/functions/Function2;ILjava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/String;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    move-object v15, v0

    move-object v0, v4

    move-object v3, v0

    goto :goto_0

    :catch_0
    move-exception v0

    .line 196
    check-cast v0, Ljava/lang/Throwable;

    invoke-static {v0, v5, v6, v4}, Lcom/unity3d/ads/core/extensions/ExceptionExtensionsKt;->getShortenedStackTrace$default(Ljava/lang/Throwable;IILjava/lang/Object;)Ljava/lang/String;

    move-result-object v15

    .line 197
    const-string v0, "uncaught_exception"

    move-object v3, v15

    move-object v15, v4

    .line 201
    :goto_0
    invoke-static/range {v18 .. v18}, Lcom/unity3d/services/UnityAdsSDK;->fetchToken$lambda$13(Lkotlin/Lazy;)Lcom/unity3d/ads/core/domain/SendDiagnosticEvent;

    move-result-object v26

    if-nez v15, :cond_1

    .line 202
    const-string v9, "native_gateway_token_failure_time"

    goto :goto_1

    :cond_1
    const-string v9, "native_gateway_token_success_time"

    :goto_1
    move-object/from16 v27, v9

    .line 203
    invoke-static {v7, v8}, Lkotlin/time/TimeSource$Monotonic$ValueTimeMark;->box-impl(J)Lkotlin/time/TimeSource$Monotonic$ValueTimeMark;

    move-result-object v7

    invoke-static {v7}, Lcom/unity3d/ads/core/extensions/TimeExtensionsKt;->elapsedMillis(Lkotlin/time/TimeMark;)D

    move-result-wide v7

    invoke-static {v7, v8}, Lkotlin/coroutines/jvm/internal/Boxing;->boxDouble(D)Ljava/lang/Double;

    move-result-object v28

    .line 204
    invoke-static {}, Lkotlin/collections/MapsKt;->createMapBuilder()Ljava/util/Map;

    move-result-object v7

    move-object/from16 v8, v24

    .line 205
    invoke-interface {v7, v8, v1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 206
    invoke-static/range {p2 .. p2}, Lcom/unity3d/services/UnityAdsSDK;->fetchToken$lambda$12(Lkotlin/Lazy;)Lcom/unity3d/ads/core/domain/GetInitializationState;

    move-result-object v1

    invoke-static {v1, v5, v6, v4}, Lcom/unity3d/ads/core/domain/GetInitializationState$DefaultImpls;->invoke$default(Lcom/unity3d/ads/core/domain/GetInitializationState;ZILjava/lang/Object;)Lcom/unity3d/ads/core/data/model/InitializationState;

    move-result-object v1

    invoke-virtual {v1}, Lcom/unity3d/ads/core/data/model/InitializationState;->toString()Ljava/lang/String;

    move-result-object v1

    move-object/from16 v5, v25

    invoke-interface {v7, v5, v1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    if-eqz v0, :cond_2

    .line 207
    const-string v1, "reason"

    invoke-interface {v7, v1, v0}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/String;

    :cond_2
    if-eqz v3, :cond_3

    .line 208
    const-string v1, "reason_debug"

    invoke-interface {v7, v1, v3}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 209
    :cond_3
    sget-object v1, Lkotlin/Unit;->INSTANCE:Lkotlin/Unit;

    .line 204
    invoke-static {v7}, Lkotlin/collections/MapsKt;->build(Ljava/util/Map;)Ljava/util/Map;

    move-result-object v29

    .line 210
    invoke-static {v2}, Lcom/unity3d/services/UnityAdsSDK;->fetchToken$lambda$10(Lkotlin/Lazy;)Lcom/unity3d/ads/core/domain/TokenNumberProvider;

    move-result-object v1

    invoke-interface {v1}, Lcom/unity3d/ads/core/domain/TokenNumberProvider;->invoke()I

    move-result v1

    invoke-static {v1}, Lkotlin/coroutines/jvm/internal/Boxing;->boxInt(I)Ljava/lang/Integer;

    move-result-object v32

    const/16 v33, 0x18

    const/16 v34, 0x0

    const/16 v30, 0x0

    const/16 v31, 0x0

    .line 201
    invoke-static/range {v26 .. v34}, Lcom/unity3d/ads/core/domain/SendDiagnosticEvent$DefaultImpls;->invoke$default(Lcom/unity3d/ads/core/domain/SendDiagnosticEvent;Ljava/lang/String;Ljava/lang/Double;Ljava/util/Map;Ljava/util/Map;Lcom/unity3d/ads/core/data/model/AdObject;Ljava/lang/Integer;ILjava/lang/Object;)V

    if-nez v15, :cond_4

    .line 214
    invoke-static/range {v23 .. v23}, Lcom/unity3d/services/UnityAdsSDK;->fetchToken$lambda$14(Lkotlin/Lazy;)Lcom/unity3d/ads/core/log/Logger;

    move-result-object v1

    new-instance v2, Ljava/lang/StringBuilder;

    const-string v3, "Returned nil token due to: "

    invoke-direct {v2, v3}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const/4 v2, 0x2

    invoke-static {v1, v0, v4, v2, v4}, Lcom/unity3d/ads/core/log/Logger$DefaultImpls;->error$default(Lcom/unity3d/ads/core/log/Logger;Ljava/lang/String;Ljava/lang/Throwable;ILjava/lang/Object;)V

    goto :goto_2

    .line 216
    :cond_4
    invoke-static/range {v23 .. v23}, Lcom/unity3d/services/UnityAdsSDK;->fetchToken$lambda$14(Lkotlin/Lazy;)Lcom/unity3d/ads/core/log/Logger;

    move-result-object v0

    const-string v1, "Generated a valid token."

    invoke-interface {v0, v1}, Lcom/unity3d/ads/core/log/Logger;->info(Ljava/lang/String;)V

    :goto_2
    return-object v15
.end method

.method private static final fetchToken$lambda$10(Lkotlin/Lazy;)Lcom/unity3d/ads/core/domain/TokenNumberProvider;
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lkotlin/Lazy<",
            "+",
            "Lcom/unity3d/ads/core/domain/TokenNumberProvider;",
            ">;)",
            "Lcom/unity3d/ads/core/domain/TokenNumberProvider;"
        }
    .end annotation

    .line 174
    invoke-interface {p0}, Lkotlin/Lazy;->getValue()Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Lcom/unity3d/ads/core/domain/TokenNumberProvider;

    return-object p0
.end method

.method private static final fetchToken$lambda$11(Lkotlin/Lazy;)Lcom/unity3d/ads/core/domain/GetHeaderBiddingToken;
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lkotlin/Lazy<",
            "+",
            "Lcom/unity3d/ads/core/domain/GetHeaderBiddingToken;",
            ">;)",
            "Lcom/unity3d/ads/core/domain/GetHeaderBiddingToken;"
        }
    .end annotation

    .line 175
    invoke-interface {p0}, Lkotlin/Lazy;->getValue()Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Lcom/unity3d/ads/core/domain/GetHeaderBiddingToken;

    return-object p0
.end method

.method private static final fetchToken$lambda$12(Lkotlin/Lazy;)Lcom/unity3d/ads/core/domain/GetInitializationState;
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lkotlin/Lazy<",
            "+",
            "Lcom/unity3d/ads/core/domain/GetInitializationState;",
            ">;)",
            "Lcom/unity3d/ads/core/domain/GetInitializationState;"
        }
    .end annotation

    .line 176
    invoke-interface {p0}, Lkotlin/Lazy;->getValue()Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Lcom/unity3d/ads/core/domain/GetInitializationState;

    return-object p0
.end method

.method private static final fetchToken$lambda$13(Lkotlin/Lazy;)Lcom/unity3d/ads/core/domain/SendDiagnosticEvent;
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lkotlin/Lazy<",
            "+",
            "Lcom/unity3d/ads/core/domain/SendDiagnosticEvent;",
            ">;)",
            "Lcom/unity3d/ads/core/domain/SendDiagnosticEvent;"
        }
    .end annotation

    .line 177
    invoke-interface {p0}, Lkotlin/Lazy;->getValue()Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Lcom/unity3d/ads/core/domain/SendDiagnosticEvent;

    return-object p0
.end method

.method private static final fetchToken$lambda$14(Lkotlin/Lazy;)Lcom/unity3d/ads/core/log/Logger;
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lkotlin/Lazy<",
            "+",
            "Lcom/unity3d/ads/core/log/Logger;",
            ">;)",
            "Lcom/unity3d/ads/core/log/Logger;"
        }
    .end annotation

    .line 178
    invoke-interface {p0}, Lkotlin/Lazy;->getValue()Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Lcom/unity3d/ads/core/log/Logger;

    return-object p0
.end method

.method private static final finishOMIDSession$lambda$18(Lkotlin/Lazy;)Lcom/unity3d/ads/core/configuration/AlternativeFlowReader;
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lkotlin/Lazy<",
            "+",
            "Lcom/unity3d/ads/core/configuration/AlternativeFlowReader;",
            ">;)",
            "Lcom/unity3d/ads/core/configuration/AlternativeFlowReader;"
        }
    .end annotation

    .line 223
    invoke-interface {p0}, Lkotlin/Lazy;->getValue()Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Lcom/unity3d/ads/core/configuration/AlternativeFlowReader;

    return-object p0
.end method

.method private static final finishOMIDSession$lambda$20(Lkotlin/Lazy;)Lcom/unity3d/ads/core/domain/GetAdObject;
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lkotlin/Lazy<",
            "+",
            "Lcom/unity3d/ads/core/domain/GetAdObject;",
            ">;)",
            "Lcom/unity3d/ads/core/domain/GetAdObject;"
        }
    .end annotation

    .line 226
    invoke-interface {p0}, Lkotlin/Lazy;->getValue()Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Lcom/unity3d/ads/core/domain/GetAdObject;

    return-object p0
.end method

.method private static final finishOMIDSession$lambda$21(Lkotlin/Lazy;)Lcom/unity3d/ads/core/domain/om/OmFinishSession;
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lkotlin/Lazy<",
            "+",
            "Lcom/unity3d/ads/core/domain/om/OmFinishSession;",
            ">;)",
            "Lcom/unity3d/ads/core/domain/om/OmFinishSession;"
        }
    .end annotation

    .line 227
    invoke-interface {p0}, Lkotlin/Lazy;->getValue()Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Lcom/unity3d/ads/core/domain/om/OmFinishSession;

    return-object p0
.end method

.method private static final getToken$lambda$7(Lkotlin/Lazy;)Lcom/unity3d/ads/core/domain/GetGameId;
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lkotlin/Lazy<",
            "+",
            "Lcom/unity3d/ads/core/domain/GetGameId;",
            ">;)",
            "Lcom/unity3d/ads/core/domain/GetGameId;"
        }
    .end annotation

    .line 160
    invoke-interface {p0}, Lkotlin/Lazy;->getValue()Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Lcom/unity3d/ads/core/domain/GetGameId;

    return-object p0
.end method

.method private static final getToken$lambda$8(Lkotlin/Lazy;)Lcom/unity3d/ads/core/domain/TokenNumberProvider;
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lkotlin/Lazy<",
            "+",
            "Lcom/unity3d/ads/core/domain/TokenNumberProvider;",
            ">;)",
            "Lcom/unity3d/ads/core/domain/TokenNumberProvider;"
        }
    .end annotation

    .line 163
    invoke-interface {p0}, Lkotlin/Lazy;->getValue()Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Lcom/unity3d/ads/core/domain/TokenNumberProvider;

    return-object p0
.end method

.method private static final getToken$lambda$9(Lkotlin/Lazy;)Lcom/unity3d/ads/core/domain/GetAsyncHeaderBiddingToken;
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lkotlin/Lazy<",
            "+",
            "Lcom/unity3d/ads/core/domain/GetAsyncHeaderBiddingToken;",
            ">;)",
            "Lcom/unity3d/ads/core/domain/GetAsyncHeaderBiddingToken;"
        }
    .end annotation

    .line 164
    invoke-interface {p0}, Lkotlin/Lazy;->getValue()Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Lcom/unity3d/ads/core/domain/GetAsyncHeaderBiddingToken;

    return-object p0
.end method

.method public static synthetic initialize$default(Lcom/unity3d/services/UnityAdsSDK;Ljava/lang/String;Ljava/lang/String;ILjava/lang/Object;)Lkotlinx/coroutines/Job;
    .locals 0

    and-int/lit8 p3, p3, 0x2

    if-eqz p3, :cond_0

    .line 80
    const-string p2, "api"

    :cond_0
    invoke-virtual {p0, p1, p2}, Lcom/unity3d/services/UnityAdsSDK;->initialize(Ljava/lang/String;Ljava/lang/String;)Lkotlinx/coroutines/Job;

    move-result-object p0

    return-object p0
.end method

.method private static final initialize$lambda$4$lambda$0(Lkotlin/Lazy;)Lcom/unity3d/ads/core/domain/ShouldAllowInitialization;
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lkotlin/Lazy<",
            "+",
            "Lcom/unity3d/ads/core/domain/ShouldAllowInitialization;",
            ">;)",
            "Lcom/unity3d/ads/core/domain/ShouldAllowInitialization;"
        }
    .end annotation

    .line 87
    invoke-interface {p0}, Lkotlin/Lazy;->getValue()Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Lcom/unity3d/ads/core/domain/ShouldAllowInitialization;

    return-object p0
.end method

.method private static final initialize$lambda$4$lambda$1(Lkotlin/Lazy;)Lcom/unity3d/ads/core/configuration/AlternativeFlowReader;
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lkotlin/Lazy<",
            "+",
            "Lcom/unity3d/ads/core/configuration/AlternativeFlowReader;",
            ">;)",
            "Lcom/unity3d/ads/core/configuration/AlternativeFlowReader;"
        }
    .end annotation

    .line 91
    invoke-interface {p0}, Lkotlin/Lazy;->getValue()Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Lcom/unity3d/ads/core/configuration/AlternativeFlowReader;

    return-object p0
.end method

.method private static final initialize$lambda$4$lambda$2(Lkotlin/Lazy;)Lcom/unity3d/services/core/domain/task/InitializeSDK;
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lkotlin/Lazy<",
            "Lcom/unity3d/services/core/domain/task/InitializeSDK;",
            ">;)",
            "Lcom/unity3d/services/core/domain/task/InitializeSDK;"
        }
    .end annotation

    .line 92
    invoke-interface {p0}, Lkotlin/Lazy;->getValue()Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Lcom/unity3d/services/core/domain/task/InitializeSDK;

    return-object p0
.end method

.method private static final initialize$lambda$4$lambda$3(Lkotlin/Lazy;)Lcom/unity3d/ads/core/domain/InitializeBoldSDK;
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lkotlin/Lazy<",
            "+",
            "Lcom/unity3d/ads/core/domain/InitializeBoldSDK;",
            ">;)",
            "Lcom/unity3d/ads/core/domain/InitializeBoldSDK;"
        }
    .end annotation

    .line 93
    invoke-interface {p0}, Lkotlin/Lazy;->getValue()Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Lcom/unity3d/ads/core/domain/InitializeBoldSDK;

    return-object p0
.end method

.method public static synthetic load$default(Lcom/unity3d/services/UnityAdsSDK;Ljava/lang/String;Lcom/unity3d/ads/UnityAdsLoadOptions;Lcom/unity3d/ads/IUnityAdsLoadListener;Lcom/unity3d/services/banners/UnityBannerSize;ILjava/lang/Object;)Lkotlinx/coroutines/Job;
    .locals 0

    and-int/lit8 p5, p5, 0x8

    if-eqz p5, :cond_0

    const/4 p4, 0x0

    .line 118
    :cond_0
    invoke-virtual {p0, p1, p2, p3, p4}, Lcom/unity3d/services/UnityAdsSDK;->load(Ljava/lang/String;Lcom/unity3d/ads/UnityAdsLoadOptions;Lcom/unity3d/ads/IUnityAdsLoadListener;Lcom/unity3d/services/banners/UnityBannerSize;)Lkotlinx/coroutines/Job;

    move-result-object p0

    return-object p0
.end method

.method private static final load$lambda$5(Lkotlin/Lazy;)Lcom/unity3d/ads/core/domain/GetGameId;
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lkotlin/Lazy<",
            "+",
            "Lcom/unity3d/ads/core/domain/GetGameId;",
            ">;)",
            "Lcom/unity3d/ads/core/domain/GetGameId;"
        }
    .end annotation

    .line 124
    invoke-interface {p0}, Lkotlin/Lazy;->getValue()Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Lcom/unity3d/ads/core/domain/GetGameId;

    return-object p0
.end method

.method private static final load$lambda$6(Lkotlin/Lazy;)Landroid/content/Context;
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lkotlin/Lazy<",
            "+",
            "Landroid/content/Context;",
            ">;)",
            "Landroid/content/Context;"
        }
    .end annotation

    .line 128
    invoke-interface {p0}, Lkotlin/Lazy;->getValue()Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Landroid/content/Context;

    return-object p0
.end method

.method private static final sendBannerDestroyed$lambda$22(Lkotlin/Lazy;)Lcom/unity3d/ads/core/configuration/AlternativeFlowReader;
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lkotlin/Lazy<",
            "+",
            "Lcom/unity3d/ads/core/configuration/AlternativeFlowReader;",
            ">;)",
            "Lcom/unity3d/ads/core/configuration/AlternativeFlowReader;"
        }
    .end annotation

    .line 237
    invoke-interface {p0}, Lkotlin/Lazy;->getValue()Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Lcom/unity3d/ads/core/configuration/AlternativeFlowReader;

    return-object p0
.end method

.method private static final sendBannerDestroyed$lambda$23(Lkotlin/Lazy;)Lcom/unity3d/ads/core/domain/SendDiagnosticEvent;
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lkotlin/Lazy<",
            "+",
            "Lcom/unity3d/ads/core/domain/SendDiagnosticEvent;",
            ">;)",
            "Lcom/unity3d/ads/core/domain/SendDiagnosticEvent;"
        }
    .end annotation

    .line 240
    invoke-interface {p0}, Lkotlin/Lazy;->getValue()Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Lcom/unity3d/ads/core/domain/SendDiagnosticEvent;

    return-object p0
.end method


# virtual methods
.method public final finishOMIDSession(Ljava/lang/String;)Lkotlinx/coroutines/Job;
    .locals 10

    const-string v0, "opportunityId"

    invoke-static {p1, v0}, Lkotlin/jvm/internal/Intrinsics;->checkNotNullParameter(Ljava/lang/Object;Ljava/lang/String;)V

    .line 223
    move-object v0, p0

    check-cast v0, Lcom/unity3d/services/core/di/IServiceComponent;

    .line 325
    sget-object v1, Lkotlin/LazyThreadSafetyMode;->NONE:Lkotlin/LazyThreadSafetyMode;

    .line 327
    new-instance v2, Lcom/unity3d/services/UnityAdsSDK$finishOMIDSession$$inlined$inject$default$1;

    const-string v3, ""

    invoke-direct {v2, v0, v3}, Lcom/unity3d/services/UnityAdsSDK$finishOMIDSession$$inlined$inject$default$1;-><init>(Lcom/unity3d/services/core/di/IServiceComponent;Ljava/lang/String;)V

    check-cast v2, Lkotlin/jvm/functions/Function0;

    invoke-static {v1, v2}, Lkotlin/LazyKt;->lazy(Lkotlin/LazyThreadSafetyMode;Lkotlin/jvm/functions/Function0;)Lkotlin/Lazy;

    move-result-object v1

    .line 224
    invoke-static {v1}, Lcom/unity3d/services/UnityAdsSDK;->finishOMIDSession$lambda$18(Lkotlin/Lazy;)Lcom/unity3d/ads/core/configuration/AlternativeFlowReader;

    move-result-object v1

    invoke-interface {v1}, Lcom/unity3d/ads/core/configuration/AlternativeFlowReader;->invoke()Z

    move-result v1

    if-nez v1, :cond_0

    const/4 p1, 0x1

    const/4 v0, 0x0

    invoke-static {v0, p1, v0}, Lkotlinx/coroutines/JobKt;->Job$default(Lkotlinx/coroutines/Job;ILjava/lang/Object;)Lkotlinx/coroutines/CompletableJob;

    move-result-object p1

    invoke-interface {p1}, Lkotlinx/coroutines/CompletableJob;->complete()Z

    check-cast p1, Lkotlinx/coroutines/Job;

    return-object p1

    .line 330
    :cond_0
    sget-object v1, Lkotlin/LazyThreadSafetyMode;->NONE:Lkotlin/LazyThreadSafetyMode;

    .line 332
    new-instance v2, Lcom/unity3d/services/UnityAdsSDK$finishOMIDSession$$inlined$inject$default$2;

    invoke-direct {v2, v0, v3}, Lcom/unity3d/services/UnityAdsSDK$finishOMIDSession$$inlined$inject$default$2;-><init>(Lcom/unity3d/services/core/di/IServiceComponent;Ljava/lang/String;)V

    check-cast v2, Lkotlin/jvm/functions/Function0;

    invoke-static {v1, v2}, Lkotlin/LazyKt;->lazy(Lkotlin/LazyThreadSafetyMode;Lkotlin/jvm/functions/Function0;)Lkotlin/Lazy;

    move-result-object v7

    .line 335
    sget-object v1, Lkotlin/LazyThreadSafetyMode;->NONE:Lkotlin/LazyThreadSafetyMode;

    .line 337
    new-instance v2, Lcom/unity3d/services/UnityAdsSDK$finishOMIDSession$$inlined$inject$default$3;

    invoke-direct {v2, v0, v3}, Lcom/unity3d/services/UnityAdsSDK$finishOMIDSession$$inlined$inject$default$3;-><init>(Lcom/unity3d/services/core/di/IServiceComponent;Ljava/lang/String;)V

    check-cast v2, Lkotlin/jvm/functions/Function0;

    invoke-static {v1, v2}, Lkotlin/LazyKt;->lazy(Lkotlin/LazyThreadSafetyMode;Lkotlin/jvm/functions/Function0;)Lkotlin/Lazy;

    move-result-object v8

    .line 338
    invoke-interface {v0}, Lcom/unity3d/services/core/di/IServiceComponent;->getServiceProvider()Lcom/unity3d/services/core/di/IServiceProvider;

    move-result-object v0

    invoke-interface {v0}, Lcom/unity3d/services/core/di/IServiceProvider;->getRegistry()Lcom/unity3d/services/core/di/IServicesRegistry;

    move-result-object v0

    const-class v1, Lkotlinx/coroutines/CoroutineScope;

    invoke-static {v1}, Lkotlin/jvm/internal/Reflection;->getOrCreateKotlinClass(Ljava/lang/Class;)Lkotlin/reflect/KClass;

    move-result-object v1

    const-string v2, "omid_scope"

    invoke-interface {v0, v2, v1}, Lcom/unity3d/services/core/di/IServicesRegistry;->getService(Ljava/lang/String;Lkotlin/reflect/KClass;)Ljava/lang/Object;

    move-result-object v0

    .line 228
    move-object v1, v0

    check-cast v1, Lkotlinx/coroutines/CoroutineScope;

    .line 229
    new-instance v4, Lcom/unity3d/services/UnityAdsSDK$finishOMIDSession$2;

    const/4 v9, 0x0

    move-object v5, p1

    move-object v6, v1

    invoke-direct/range {v4 .. v9}, Lcom/unity3d/services/UnityAdsSDK$finishOMIDSession$2;-><init>(Ljava/lang/String;Lkotlinx/coroutines/CoroutineScope;Lkotlin/Lazy;Lkotlin/Lazy;Lkotlin/coroutines/Continuation;)V

    check-cast v4, Lkotlin/jvm/functions/Function2;

    const/4 v5, 0x3

    const/4 v6, 0x0

    const/4 v2, 0x0

    const/4 v3, 0x0

    invoke-static/range {v1 .. v6}, Lkotlinx/coroutines/BuildersKt;->launch$default(Lkotlinx/coroutines/CoroutineScope;Lkotlin/coroutines/CoroutineContext;Lkotlinx/coroutines/CoroutineStart;Lkotlin/jvm/functions/Function2;ILjava/lang/Object;)Lkotlinx/coroutines/Job;

    move-result-object p1

    return-object p1
.end method

.method public getServiceProvider()Lcom/unity3d/services/core/di/IServiceProvider;
    .locals 1

    .line 71
    iget-object v0, p0, Lcom/unity3d/services/UnityAdsSDK;->serviceProvider:Lcom/unity3d/services/core/di/IServiceProvider;

    return-object v0
.end method

.method public final getToken()Ljava/lang/String;
    .locals 3

    .line 151
    new-instance v0, Lcom/unity3d/services/UnityAdsSDK$getToken$1;

    const/4 v1, 0x0

    invoke-direct {v0, p0, v1}, Lcom/unity3d/services/UnityAdsSDK$getToken$1;-><init>(Lcom/unity3d/services/UnityAdsSDK;Lkotlin/coroutines/Continuation;)V

    check-cast v0, Lkotlin/jvm/functions/Function2;

    const/4 v2, 0x1

    invoke-static {v1, v0, v2, v1}, Lkotlinx/coroutines/BuildersKt;->runBlocking$default(Lkotlin/coroutines/CoroutineContext;Lkotlin/jvm/functions/Function2;ILjava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/String;

    return-object v0
.end method

.method public final getToken(Lcom/unity3d/ads/IUnityAdsTokenListener;)Lkotlinx/coroutines/Job;
    .locals 1

    const/4 v0, 0x0

    .line 156
    invoke-virtual {p0, v0, p1}, Lcom/unity3d/services/UnityAdsSDK;->getToken(Lcom/unity3d/ads/TokenConfiguration;Lcom/unity3d/ads/IUnityAdsTokenListener;)Lkotlinx/coroutines/Job;

    move-result-object p1

    return-object p1
.end method

.method public final getToken(Lcom/unity3d/ads/TokenConfiguration;Lcom/unity3d/ads/IUnityAdsTokenListener;)Lkotlinx/coroutines/Job;
    .locals 11

    .line 160
    move-object v0, p0

    check-cast v0, Lcom/unity3d/services/core/di/IServiceComponent;

    .line 283
    sget-object v1, Lkotlin/LazyThreadSafetyMode;->NONE:Lkotlin/LazyThreadSafetyMode;

    .line 285
    new-instance v2, Lcom/unity3d/services/UnityAdsSDK$getToken$$inlined$inject$default$1;

    const-string v3, ""

    invoke-direct {v2, v0, v3}, Lcom/unity3d/services/UnityAdsSDK$getToken$$inlined$inject$default$1;-><init>(Lcom/unity3d/services/core/di/IServiceComponent;Ljava/lang/String;)V

    check-cast v2, Lkotlin/jvm/functions/Function0;

    invoke-static {v1, v2}, Lkotlin/LazyKt;->lazy(Lkotlin/LazyThreadSafetyMode;Lkotlin/jvm/functions/Function0;)Lkotlin/Lazy;

    move-result-object v1

    .line 161
    invoke-static {v1}, Lcom/unity3d/services/UnityAdsSDK;->getToken$lambda$7(Lkotlin/Lazy;)Lcom/unity3d/ads/core/domain/GetGameId;

    move-result-object v1

    invoke-interface {v1}, Lcom/unity3d/ads/core/domain/GetGameId;->invoke()Ljava/lang/String;

    move-result-object v1

    const-string v2, "get_token"

    invoke-virtual {p0, v1, v2}, Lcom/unity3d/services/UnityAdsSDK;->initialize(Ljava/lang/String;Ljava/lang/String;)Lkotlinx/coroutines/Job;

    .line 288
    sget-object v1, Lkotlin/LazyThreadSafetyMode;->NONE:Lkotlin/LazyThreadSafetyMode;

    .line 290
    new-instance v2, Lcom/unity3d/services/UnityAdsSDK$getToken$$inlined$inject$default$2;

    invoke-direct {v2, v0, v3}, Lcom/unity3d/services/UnityAdsSDK$getToken$$inlined$inject$default$2;-><init>(Lcom/unity3d/services/core/di/IServiceComponent;Ljava/lang/String;)V

    check-cast v2, Lkotlin/jvm/functions/Function0;

    invoke-static {v1, v2}, Lkotlin/LazyKt;->lazy(Lkotlin/LazyThreadSafetyMode;Lkotlin/jvm/functions/Function0;)Lkotlin/Lazy;

    move-result-object v9

    .line 293
    sget-object v1, Lkotlin/LazyThreadSafetyMode;->NONE:Lkotlin/LazyThreadSafetyMode;

    .line 295
    new-instance v2, Lcom/unity3d/services/UnityAdsSDK$getToken$$inlined$inject$default$3;

    invoke-direct {v2, v0, v3}, Lcom/unity3d/services/UnityAdsSDK$getToken$$inlined$inject$default$3;-><init>(Lcom/unity3d/services/core/di/IServiceComponent;Ljava/lang/String;)V

    check-cast v2, Lkotlin/jvm/functions/Function0;

    invoke-static {v1, v2}, Lkotlin/LazyKt;->lazy(Lkotlin/LazyThreadSafetyMode;Lkotlin/jvm/functions/Function0;)Lkotlin/Lazy;

    move-result-object v8

    .line 296
    invoke-interface {v0}, Lcom/unity3d/services/core/di/IServiceComponent;->getServiceProvider()Lcom/unity3d/services/core/di/IServiceProvider;

    move-result-object v0

    invoke-interface {v0}, Lcom/unity3d/services/core/di/IServiceProvider;->getRegistry()Lcom/unity3d/services/core/di/IServicesRegistry;

    move-result-object v0

    const-class v1, Lkotlinx/coroutines/CoroutineScope;

    invoke-static {v1}, Lkotlin/jvm/internal/Reflection;->getOrCreateKotlinClass(Ljava/lang/Class;)Lkotlin/reflect/KClass;

    move-result-object v1

    const-string v2, "get_token_scope"

    invoke-interface {v0, v2, v1}, Lcom/unity3d/services/core/di/IServicesRegistry;->getService(Ljava/lang/String;Lkotlin/reflect/KClass;)Ljava/lang/Object;

    move-result-object v0

    .line 165
    move-object v1, v0

    check-cast v1, Lkotlinx/coroutines/CoroutineScope;

    .line 167
    new-instance v4, Lcom/unity3d/services/UnityAdsSDK$getToken$2;

    const/4 v10, 0x0

    move-object v5, p1

    move-object v6, p2

    move-object v7, v1

    invoke-direct/range {v4 .. v10}, Lcom/unity3d/services/UnityAdsSDK$getToken$2;-><init>(Lcom/unity3d/ads/TokenConfiguration;Lcom/unity3d/ads/IUnityAdsTokenListener;Lkotlinx/coroutines/CoroutineScope;Lkotlin/Lazy;Lkotlin/Lazy;Lkotlin/coroutines/Continuation;)V

    check-cast v4, Lkotlin/jvm/functions/Function2;

    const/4 v5, 0x3

    const/4 v6, 0x0

    const/4 v2, 0x0

    const/4 v3, 0x0

    invoke-static/range {v1 .. v6}, Lkotlinx/coroutines/BuildersKt;->launch$default(Lkotlinx/coroutines/CoroutineScope;Lkotlin/coroutines/CoroutineContext;Lkotlinx/coroutines/CoroutineStart;Lkotlin/jvm/functions/Function2;ILjava/lang/Object;)Lkotlinx/coroutines/Job;

    move-result-object p1

    return-object p1
.end method

.method public final initialize(Ljava/lang/String;Ljava/lang/String;)Lkotlinx/coroutines/Job;
    .locals 12

    const-string v0, "source"

    invoke-static {p2, v0}, Lkotlin/jvm/internal/Intrinsics;->checkNotNullParameter(Ljava/lang/Object;Ljava/lang/String;)V

    .line 80
    monitor-enter p0

    .line 82
    :try_start_0
    iget-object v0, p0, Lcom/unity3d/services/UnityAdsSDK;->initializationJob:Lkotlinx/coroutines/Job;

    if-eqz v0, :cond_0

    .line 83
    invoke-interface {v0}, Lkotlinx/coroutines/Job;->isActive()Z

    move-result v1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-eqz v1, :cond_0

    .line 84
    monitor-exit p0

    return-object v0

    .line 87
    :cond_0
    :try_start_1
    move-object v0, p0

    check-cast v0, Lcom/unity3d/services/core/di/IServiceComponent;

    .line 245
    const-string v1, ""

    .line 246
    sget-object v2, Lkotlin/LazyThreadSafetyMode;->NONE:Lkotlin/LazyThreadSafetyMode;

    .line 248
    new-instance v3, Lcom/unity3d/services/UnityAdsSDK$initialize$lambda$4$$inlined$inject$default$1;

    invoke-direct {v3, v0, v1}, Lcom/unity3d/services/UnityAdsSDK$initialize$lambda$4$$inlined$inject$default$1;-><init>(Lcom/unity3d/services/core/di/IServiceComponent;Ljava/lang/String;)V

    check-cast v3, Lkotlin/jvm/functions/Function0;

    invoke-static {v2, v3}, Lkotlin/LazyKt;->lazy(Lkotlin/LazyThreadSafetyMode;Lkotlin/jvm/functions/Function0;)Lkotlin/Lazy;

    move-result-object v0

    .line 89
    invoke-static {v0}, Lcom/unity3d/services/UnityAdsSDK;->initialize$lambda$4$lambda$0(Lkotlin/Lazy;)Lcom/unity3d/ads/core/domain/ShouldAllowInitialization;

    move-result-object v0

    invoke-interface {v0, p1}, Lcom/unity3d/ads/core/domain/ShouldAllowInitialization;->invoke(Ljava/lang/String;)Z

    move-result v0

    if-nez v0, :cond_1

    const/4 p1, 0x1

    const/4 p2, 0x0

    invoke-static {p2, p1, p2}, Lkotlinx/coroutines/JobKt;->Job$default(Lkotlinx/coroutines/Job;ILjava/lang/Object;)Lkotlinx/coroutines/CompletableJob;

    move-result-object p1

    check-cast p1, Lkotlinx/coroutines/Job;
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    monitor-exit p0

    return-object p1

    .line 91
    :cond_1
    :try_start_2
    move-object v0, p0

    check-cast v0, Lcom/unity3d/services/core/di/IServiceComponent;

    .line 250
    const-string v1, ""

    .line 251
    sget-object v2, Lkotlin/LazyThreadSafetyMode;->NONE:Lkotlin/LazyThreadSafetyMode;

    .line 253
    new-instance v3, Lcom/unity3d/services/UnityAdsSDK$initialize$lambda$4$$inlined$inject$default$2;

    invoke-direct {v3, v0, v1}, Lcom/unity3d/services/UnityAdsSDK$initialize$lambda$4$$inlined$inject$default$2;-><init>(Lcom/unity3d/services/core/di/IServiceComponent;Ljava/lang/String;)V

    check-cast v3, Lkotlin/jvm/functions/Function0;

    invoke-static {v2, v3}, Lkotlin/LazyKt;->lazy(Lkotlin/LazyThreadSafetyMode;Lkotlin/jvm/functions/Function0;)Lkotlin/Lazy;

    move-result-object v8

    .line 92
    move-object v0, p0

    check-cast v0, Lcom/unity3d/services/core/di/IServiceComponent;

    .line 255
    const-string v1, ""

    .line 256
    sget-object v2, Lkotlin/LazyThreadSafetyMode;->NONE:Lkotlin/LazyThreadSafetyMode;

    .line 258
    new-instance v3, Lcom/unity3d/services/UnityAdsSDK$initialize$lambda$4$$inlined$inject$default$3;

    invoke-direct {v3, v0, v1}, Lcom/unity3d/services/UnityAdsSDK$initialize$lambda$4$$inlined$inject$default$3;-><init>(Lcom/unity3d/services/core/di/IServiceComponent;Ljava/lang/String;)V

    check-cast v3, Lkotlin/jvm/functions/Function0;

    invoke-static {v2, v3}, Lkotlin/LazyKt;->lazy(Lkotlin/LazyThreadSafetyMode;Lkotlin/jvm/functions/Function0;)Lkotlin/Lazy;

    move-result-object v10

    .line 93
    move-object v0, p0

    check-cast v0, Lcom/unity3d/services/core/di/IServiceComponent;

    .line 260
    const-string v1, ""

    .line 261
    sget-object v2, Lkotlin/LazyThreadSafetyMode;->NONE:Lkotlin/LazyThreadSafetyMode;

    .line 263
    new-instance v3, Lcom/unity3d/services/UnityAdsSDK$initialize$lambda$4$$inlined$inject$default$4;

    invoke-direct {v3, v0, v1}, Lcom/unity3d/services/UnityAdsSDK$initialize$lambda$4$$inlined$inject$default$4;-><init>(Lcom/unity3d/services/core/di/IServiceComponent;Ljava/lang/String;)V

    check-cast v3, Lkotlin/jvm/functions/Function0;

    invoke-static {v2, v3}, Lkotlin/LazyKt;->lazy(Lkotlin/LazyThreadSafetyMode;Lkotlin/jvm/functions/Function0;)Lkotlin/Lazy;

    move-result-object v9

    .line 95
    move-object v0, p0

    check-cast v0, Lcom/unity3d/services/core/di/IServiceComponent;

    const-string v1, "init_scope"

    .line 264
    invoke-interface {v0}, Lcom/unity3d/services/core/di/IServiceComponent;->getServiceProvider()Lcom/unity3d/services/core/di/IServiceProvider;

    move-result-object v0

    invoke-interface {v0}, Lcom/unity3d/services/core/di/IServiceProvider;->getRegistry()Lcom/unity3d/services/core/di/IServicesRegistry;

    move-result-object v0

    const-class v2, Lkotlinx/coroutines/CoroutineScope;

    invoke-static {v2}, Lkotlin/jvm/internal/Reflection;->getOrCreateKotlinClass(Ljava/lang/Class;)Lkotlin/reflect/KClass;

    move-result-object v2

    invoke-interface {v0, v1, v2}, Lcom/unity3d/services/core/di/IServicesRegistry;->getService(Ljava/lang/String;Lkotlin/reflect/KClass;)Ljava/lang/Object;

    move-result-object v0

    .line 95
    move-object v1, v0

    check-cast v1, Lkotlinx/coroutines/CoroutineScope;

    .line 98
    new-instance v4, Lcom/unity3d/services/UnityAdsSDK$initialize$1$newInitializationJob$1;

    const/4 v11, 0x0

    move-object v6, p1

    move-object v5, p2

    move-object v7, v1

    invoke-direct/range {v4 .. v11}, Lcom/unity3d/services/UnityAdsSDK$initialize$1$newInitializationJob$1;-><init>(Ljava/lang/String;Ljava/lang/String;Lkotlinx/coroutines/CoroutineScope;Lkotlin/Lazy;Lkotlin/Lazy;Lkotlin/Lazy;Lkotlin/coroutines/Continuation;)V

    check-cast v4, Lkotlin/jvm/functions/Function2;

    const/4 v5, 0x3

    const/4 v6, 0x0

    const/4 v2, 0x0

    const/4 v3, 0x0

    invoke-static/range {v1 .. v6}, Lkotlinx/coroutines/BuildersKt;->launch$default(Lkotlinx/coroutines/CoroutineScope;Lkotlin/coroutines/CoroutineContext;Lkotlinx/coroutines/CoroutineStart;Lkotlin/jvm/functions/Function2;ILjava/lang/Object;)Lkotlinx/coroutines/Job;

    move-result-object p1

    .line 113
    iput-object p1, p0, Lcom/unity3d/services/UnityAdsSDK;->initializationJob:Lkotlinx/coroutines/Job;
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    .line 115
    monitor-exit p0

    return-object p1

    :catchall_0
    move-exception v0

    move-object p1, v0

    monitor-exit p0

    throw p1
.end method

.method public final load(Ljava/lang/String;Lcom/unity3d/ads/UnityAdsLoadOptions;Lcom/unity3d/ads/IUnityAdsLoadListener;Lcom/unity3d/services/banners/UnityBannerSize;)Lkotlinx/coroutines/Job;
    .locals 12

    const-string v0, "loadOptions"

    invoke-static {p2, v0}, Lkotlin/jvm/internal/Intrinsics;->checkNotNullParameter(Ljava/lang/Object;Ljava/lang/String;)V

    .line 124
    move-object v0, p0

    check-cast v0, Lcom/unity3d/services/core/di/IServiceComponent;

    .line 267
    sget-object v2, Lkotlin/LazyThreadSafetyMode;->NONE:Lkotlin/LazyThreadSafetyMode;

    .line 269
    new-instance v4, Lcom/unity3d/services/UnityAdsSDK$load$$inlined$inject$default$1;

    const-string v5, ""

    invoke-direct {v4, v0, v5}, Lcom/unity3d/services/UnityAdsSDK$load$$inlined$inject$default$1;-><init>(Lcom/unity3d/services/core/di/IServiceComponent;Ljava/lang/String;)V

    check-cast v4, Lkotlin/jvm/functions/Function0;

    invoke-static {v2, v4}, Lkotlin/LazyKt;->lazy(Lkotlin/LazyThreadSafetyMode;Lkotlin/jvm/functions/Function0;)Lkotlin/Lazy;

    move-result-object v2

    .line 125
    invoke-static {v2}, Lcom/unity3d/services/UnityAdsSDK;->load$lambda$5(Lkotlin/Lazy;)Lcom/unity3d/ads/core/domain/GetGameId;

    move-result-object v2

    invoke-interface {v2}, Lcom/unity3d/ads/core/domain/GetGameId;->invoke()Ljava/lang/String;

    move-result-object v2

    const-string v4, "load"

    invoke-virtual {p0, v2, v4}, Lcom/unity3d/services/UnityAdsSDK;->initialize(Ljava/lang/String;Ljava/lang/String;)Lkotlinx/coroutines/Job;

    .line 270
    invoke-interface {v0}, Lcom/unity3d/services/core/di/IServiceComponent;->getServiceProvider()Lcom/unity3d/services/core/di/IServiceProvider;

    move-result-object v2

    invoke-interface {v2}, Lcom/unity3d/services/core/di/IServiceProvider;->getRegistry()Lcom/unity3d/services/core/di/IServicesRegistry;

    move-result-object v2

    const-class v4, Lkotlinx/coroutines/CoroutineScope;

    invoke-static {v4}, Lkotlin/jvm/internal/Reflection;->getOrCreateKotlinClass(Ljava/lang/Class;)Lkotlin/reflect/KClass;

    move-result-object v4

    const-string v6, "load_scope"

    invoke-interface {v2, v6, v4}, Lcom/unity3d/services/core/di/IServicesRegistry;->getService(Ljava/lang/String;Lkotlin/reflect/KClass;)Ljava/lang/Object;

    move-result-object v2

    .line 127
    move-object v6, v2

    check-cast v6, Lkotlinx/coroutines/CoroutineScope;

    .line 273
    sget-object v2, Lkotlin/LazyThreadSafetyMode;->NONE:Lkotlin/LazyThreadSafetyMode;

    .line 275
    new-instance v4, Lcom/unity3d/services/UnityAdsSDK$load$$inlined$inject$default$2;

    invoke-direct {v4, v0, v5}, Lcom/unity3d/services/UnityAdsSDK$load$$inlined$inject$default$2;-><init>(Lcom/unity3d/services/core/di/IServiceComponent;Ljava/lang/String;)V

    check-cast v4, Lkotlin/jvm/functions/Function0;

    invoke-static {v2, v4}, Lkotlin/LazyKt;->lazy(Lkotlin/LazyThreadSafetyMode;Lkotlin/jvm/functions/Function0;)Lkotlin/Lazy;

    move-result-object v7

    .line 130
    new-instance v0, Lcom/unity3d/services/UnityAdsSDK$load$1;

    const/4 v8, 0x0

    move-object v1, p0

    move-object v2, p1

    move-object v3, p2

    move-object v4, p3

    move-object/from16 v5, p4

    invoke-direct/range {v0 .. v8}, Lcom/unity3d/services/UnityAdsSDK$load$1;-><init>(Lcom/unity3d/services/UnityAdsSDK;Ljava/lang/String;Lcom/unity3d/ads/UnityAdsLoadOptions;Lcom/unity3d/ads/IUnityAdsLoadListener;Lcom/unity3d/services/banners/UnityBannerSize;Lkotlinx/coroutines/CoroutineScope;Lkotlin/Lazy;Lkotlin/coroutines/Continuation;)V

    move-object v9, v0

    check-cast v9, Lkotlin/jvm/functions/Function2;

    const/4 v10, 0x3

    const/4 v11, 0x0

    const/4 v7, 0x0

    invoke-static/range {v6 .. v11}, Lkotlinx/coroutines/BuildersKt;->launch$default(Lkotlinx/coroutines/CoroutineScope;Lkotlin/coroutines/CoroutineContext;Lkotlinx/coroutines/CoroutineStart;Lkotlin/jvm/functions/Function2;ILjava/lang/Object;)Lkotlinx/coroutines/Job;

    move-result-object v0

    return-object v0
.end method

.method public final sendBannerDestroyed()V
    .locals 10

    .line 237
    move-object v0, p0

    check-cast v0, Lcom/unity3d/services/core/di/IServiceComponent;

    .line 341
    sget-object v1, Lkotlin/LazyThreadSafetyMode;->NONE:Lkotlin/LazyThreadSafetyMode;

    .line 343
    new-instance v2, Lcom/unity3d/services/UnityAdsSDK$sendBannerDestroyed$$inlined$inject$default$1;

    const-string v3, ""

    invoke-direct {v2, v0, v3}, Lcom/unity3d/services/UnityAdsSDK$sendBannerDestroyed$$inlined$inject$default$1;-><init>(Lcom/unity3d/services/core/di/IServiceComponent;Ljava/lang/String;)V

    check-cast v2, Lkotlin/jvm/functions/Function0;

    invoke-static {v1, v2}, Lkotlin/LazyKt;->lazy(Lkotlin/LazyThreadSafetyMode;Lkotlin/jvm/functions/Function0;)Lkotlin/Lazy;

    move-result-object v1

    .line 238
    invoke-static {v1}, Lcom/unity3d/services/UnityAdsSDK;->sendBannerDestroyed$lambda$22(Lkotlin/Lazy;)Lcom/unity3d/ads/core/configuration/AlternativeFlowReader;

    move-result-object v1

    invoke-interface {v1}, Lcom/unity3d/ads/core/configuration/AlternativeFlowReader;->invoke()Z

    move-result v1

    if-nez v1, :cond_0

    return-void

    .line 346
    :cond_0
    sget-object v1, Lkotlin/LazyThreadSafetyMode;->NONE:Lkotlin/LazyThreadSafetyMode;

    .line 348
    new-instance v2, Lcom/unity3d/services/UnityAdsSDK$sendBannerDestroyed$$inlined$inject$default$2;

    invoke-direct {v2, v0, v3}, Lcom/unity3d/services/UnityAdsSDK$sendBannerDestroyed$$inlined$inject$default$2;-><init>(Lcom/unity3d/services/core/di/IServiceComponent;Ljava/lang/String;)V

    check-cast v2, Lkotlin/jvm/functions/Function0;

    invoke-static {v1, v2}, Lkotlin/LazyKt;->lazy(Lkotlin/LazyThreadSafetyMode;Lkotlin/jvm/functions/Function0;)Lkotlin/Lazy;

    move-result-object v0

    .line 241
    invoke-static {v0}, Lcom/unity3d/services/UnityAdsSDK;->sendBannerDestroyed$lambda$23(Lkotlin/Lazy;)Lcom/unity3d/ads/core/domain/SendDiagnosticEvent;

    move-result-object v1

    const/16 v8, 0x3e

    const/4 v9, 0x0

    const-string v2, "native_banner_destroyed"

    const/4 v3, 0x0

    const/4 v4, 0x0

    const/4 v5, 0x0

    const/4 v6, 0x0

    const/4 v7, 0x0

    invoke-static/range {v1 .. v9}, Lcom/unity3d/ads/core/domain/SendDiagnosticEvent$DefaultImpls;->invoke$default(Lcom/unity3d/ads/core/domain/SendDiagnosticEvent;Ljava/lang/String;Ljava/lang/Double;Ljava/util/Map;Ljava/util/Map;Lcom/unity3d/ads/core/data/model/AdObject;Ljava/lang/Integer;ILjava/lang/Object;)V

    return-void
.end method

.method public final show(Ljava/lang/String;Lcom/unity3d/ads/UnityAdsShowOptions;Lcom/unity3d/ads/core/data/model/Listeners;)Lkotlinx/coroutines/Job;
    .locals 9

    const-string v0, "listener"

    invoke-static {p3, v0}, Lkotlin/jvm/internal/Intrinsics;->checkNotNullParameter(Ljava/lang/Object;Ljava/lang/String;)V

    .line 138
    move-object v0, p0

    check-cast v0, Lcom/unity3d/services/core/di/IServiceComponent;

    .line 276
    invoke-interface {v0}, Lcom/unity3d/services/core/di/IServiceComponent;->getServiceProvider()Lcom/unity3d/services/core/di/IServiceProvider;

    move-result-object v1

    invoke-interface {v1}, Lcom/unity3d/services/core/di/IServiceProvider;->getRegistry()Lcom/unity3d/services/core/di/IServicesRegistry;

    move-result-object v1

    const-class v2, Lkotlinx/coroutines/CoroutineScope;

    invoke-static {v2}, Lkotlin/jvm/internal/Reflection;->getOrCreateKotlinClass(Ljava/lang/Class;)Lkotlin/reflect/KClass;

    move-result-object v2

    const-string v3, "show_scope"

    invoke-interface {v1, v3, v2}, Lcom/unity3d/services/core/di/IServicesRegistry;->getService(Ljava/lang/String;Lkotlin/reflect/KClass;)Ljava/lang/Object;

    move-result-object v1

    .line 138
    move-object v2, v1

    check-cast v2, Lkotlinx/coroutines/CoroutineScope;

    .line 280
    invoke-interface {v0}, Lcom/unity3d/services/core/di/IServiceComponent;->getServiceProvider()Lcom/unity3d/services/core/di/IServiceProvider;

    move-result-object v0

    invoke-interface {v0}, Lcom/unity3d/services/core/di/IServiceProvider;->getRegistry()Lcom/unity3d/services/core/di/IServicesRegistry;

    move-result-object v0

    const-class v1, Lcom/unity3d/ads/core/domain/LegacyShowUseCase;

    invoke-static {v1}, Lkotlin/jvm/internal/Reflection;->getOrCreateKotlinClass(Ljava/lang/Class;)Lkotlin/reflect/KClass;

    move-result-object v1

    const-string v3, ""

    invoke-interface {v0, v3, v1}, Lcom/unity3d/services/core/di/IServicesRegistry;->getService(Ljava/lang/String;Lkotlin/reflect/KClass;)Ljava/lang/Object;

    move-result-object v0

    .line 139
    move-object v3, v0

    check-cast v3, Lcom/unity3d/ads/core/domain/LegacyShowUseCase;

    move-object v7, v2

    .line 141
    new-instance v2, Lcom/unity3d/services/UnityAdsSDK$show$1;

    const/4 v8, 0x0

    move-object v4, p1

    move-object v5, p2

    move-object v6, p3

    invoke-direct/range {v2 .. v8}, Lcom/unity3d/services/UnityAdsSDK$show$1;-><init>(Lcom/unity3d/ads/core/domain/LegacyShowUseCase;Ljava/lang/String;Lcom/unity3d/ads/UnityAdsShowOptions;Lcom/unity3d/ads/core/data/model/Listeners;Lkotlinx/coroutines/CoroutineScope;Lkotlin/coroutines/Continuation;)V

    move-object v5, v2

    check-cast v5, Lkotlin/jvm/functions/Function2;

    const/4 v6, 0x3

    move-object v2, v7

    const/4 v7, 0x0

    const/4 v3, 0x0

    const/4 v4, 0x0

    invoke-static/range {v2 .. v7}, Lkotlinx/coroutines/BuildersKt;->launch$default(Lkotlinx/coroutines/CoroutineScope;Lkotlin/coroutines/CoroutineContext;Lkotlinx/coroutines/CoroutineStart;Lkotlin/jvm/functions/Function2;ILjava/lang/Object;)Lkotlinx/coroutines/Job;

    move-result-object p1

    return-object p1
.end method
