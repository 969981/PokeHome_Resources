.class public final Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration$Builder;
.super Lcom/google/protobuf/GeneratedMessageLite$Builder;
.source "NativeConfigurationOuterClass.java"

# interfaces
.implements Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfigurationOrBuilder;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x19
    name = "Builder"
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Lcom/google/protobuf/GeneratedMessageLite$Builder<",
        "Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;",
        "Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration$Builder;",
        ">;",
        "Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfigurationOrBuilder;"
    }
.end annotation


# direct methods
.method private constructor <init>()V
    .locals 1

    .line 5775
    invoke-static {}, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;->access$7300()Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;

    move-result-object v0

    invoke-direct {p0, v0}, Lcom/google/protobuf/GeneratedMessageLite$Builder;-><init>(Lcom/google/protobuf/GeneratedMessageLite;)V

    return-void
.end method

.method synthetic constructor <init>(Lgatewayprotocol/v1/NativeConfigurationOuterClass$1;)V
    .locals 0

    .line 5768
    invoke-direct {p0}, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration$Builder;-><init>()V

    return-void
.end method


# virtual methods
.method public addAdditionalStorePackages(Ljava/lang/String;)Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration$Builder;
    .locals 1

    .line 6436
    invoke-virtual {p0}, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration$Builder;->copyOnWrite()V

    .line 6437
    iget-object v0, p0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration$Builder;->instance:Lcom/google/protobuf/GeneratedMessageLite;

    check-cast v0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;

    invoke-static {v0, p1}, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;->access$10000(Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;Ljava/lang/String;)V

    return-object p0
.end method

.method public addAdditionalStorePackagesBytes(Lcom/google/protobuf/ByteString;)Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration$Builder;
    .locals 1

    .line 6479
    invoke-virtual {p0}, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration$Builder;->copyOnWrite()V

    .line 6480
    iget-object v0, p0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration$Builder;->instance:Lcom/google/protobuf/GeneratedMessageLite;

    check-cast v0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;

    invoke-static {v0, p1}, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;->access$10300(Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;Lcom/google/protobuf/ByteString;)V

    return-object p0
.end method

.method public addAllAdditionalStorePackages(Ljava/lang/Iterable;)Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration$Builder;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/Iterable<",
            "Ljava/lang/String;",
            ">;)",
            "Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration$Builder;"
        }
    .end annotation

    .line 6451
    invoke-virtual {p0}, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration$Builder;->copyOnWrite()V

    .line 6452
    iget-object v0, p0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration$Builder;->instance:Lcom/google/protobuf/GeneratedMessageLite;

    check-cast v0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;

    invoke-static {v0, p1}, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;->access$10100(Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;Ljava/lang/Iterable;)V

    return-object p0
.end method

.method public addAllObservableAndroidActivities(Ljava/lang/Iterable;)Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration$Builder;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/Iterable<",
            "+",
            "Lcom/google/protobuf/ByteString;",
            ">;)",
            "Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration$Builder;"
        }
    .end annotation

    .line 6640
    invoke-virtual {p0}, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration$Builder;->copyOnWrite()V

    .line 6641
    iget-object v0, p0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration$Builder;->instance:Lcom/google/protobuf/GeneratedMessageLite;

    check-cast v0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;

    invoke-static {v0, p1}, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;->access$10900(Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;Ljava/lang/Iterable;)V

    return-object p0
.end method

.method public addObservableAndroidActivities(Lcom/google/protobuf/ByteString;)Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration$Builder;
    .locals 1

    .line 6624
    invoke-virtual {p0}, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration$Builder;->copyOnWrite()V

    .line 6625
    iget-object v0, p0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration$Builder;->instance:Lcom/google/protobuf/GeneratedMessageLite;

    check-cast v0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;

    invoke-static {v0, p1}, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;->access$10800(Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;Lcom/google/protobuf/ByteString;)V

    return-object p0
.end method

.method public clearAdOperations()Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration$Builder;
    .locals 1

    .line 6200
    invoke-virtual {p0}, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration$Builder;->copyOnWrite()V

    .line 6201
    iget-object v0, p0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration$Builder;->instance:Lcom/google/protobuf/GeneratedMessageLite;

    check-cast v0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;

    invoke-static {v0}, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;->access$9100(Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;)V

    return-object p0
.end method

.method public clearAdPolicy()Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration$Builder;
    .locals 1

    .line 5987
    invoke-virtual {p0}, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration$Builder;->copyOnWrite()V

    .line 5988
    iget-object v0, p0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration$Builder;->instance:Lcom/google/protobuf/GeneratedMessageLite;

    check-cast v0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;

    invoke-static {v0}, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;->access$8200(Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;)V

    return-object p0
.end method

.method public clearAdditionalStorePackages()Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration$Builder;
    .locals 1

    .line 6464
    invoke-virtual {p0}, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration$Builder;->copyOnWrite()V

    .line 6465
    iget-object v0, p0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration$Builder;->instance:Lcom/google/protobuf/GeneratedMessageLite;

    check-cast v0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;

    invoke-static {v0}, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;->access$10200(Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;)V

    return-object p0
.end method

.method public clearCachedAssetsConfiguration()Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration$Builder;
    .locals 1

    .line 6550
    invoke-virtual {p0}, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration$Builder;->copyOnWrite()V

    .line 6551
    iget-object v0, p0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration$Builder;->instance:Lcom/google/protobuf/GeneratedMessageLite;

    check-cast v0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;

    invoke-static {v0}, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;->access$10600(Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;)V

    return-object p0
.end method

.method public clearCachedWebviewFilesConfiguration()Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration$Builder;
    .locals 1

    .line 6725
    invoke-virtual {p0}, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration$Builder;->copyOnWrite()V

    .line 6726
    iget-object v0, p0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration$Builder;->instance:Lcom/google/protobuf/GeneratedMessageLite;

    check-cast v0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;

    invoke-static {v0}, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;->access$11300(Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;)V

    return-object p0
.end method

.method public clearDebugSettings()Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration$Builder;
    .locals 1

    .line 6933
    invoke-virtual {p0}, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration$Builder;->copyOnWrite()V

    .line 6934
    iget-object v0, p0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration$Builder;->instance:Lcom/google/protobuf/GeneratedMessageLite;

    check-cast v0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;

    invoke-static {v0}, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;->access$12200(Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;)V

    return-object p0
.end method

.method public clearDefaultShowCompletionState()Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration$Builder;
    .locals 1

    .line 6791
    invoke-virtual {p0}, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration$Builder;->copyOnWrite()V

    .line 6792
    iget-object v0, p0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration$Builder;->instance:Lcom/google/protobuf/GeneratedMessageLite;

    check-cast v0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;

    invoke-static {v0}, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;->access$11600(Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;)V

    return-object p0
.end method

.method public clearDiagnosticEvents()Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration$Builder;
    .locals 1

    .line 5845
    invoke-virtual {p0}, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration$Builder;->copyOnWrite()V

    .line 5846
    iget-object v0, p0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration$Builder;->instance:Lcom/google/protobuf/GeneratedMessageLite;

    check-cast v0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;

    invoke-static {v0}, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;->access$7600(Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;)V

    return-object p0
.end method

.method public clearDownloadPolicy()Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration$Builder;
    .locals 1

    .line 6862
    invoke-virtual {p0}, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration$Builder;->copyOnWrite()V

    .line 6863
    iget-object v0, p0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration$Builder;->instance:Lcom/google/protobuf/GeneratedMessageLite;

    check-cast v0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;

    invoke-static {v0}, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;->access$11900(Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;)V

    return-object p0
.end method

.method public clearEnableIapEvent()Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration$Builder;
    .locals 1

    .line 6311
    invoke-virtual {p0}, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration$Builder;->copyOnWrite()V

    .line 6312
    iget-object v0, p0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration$Builder;->instance:Lcom/google/protobuf/GeneratedMessageLite;

    check-cast v0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;

    invoke-static {v0}, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;->access$9600(Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;)V

    return-object p0
.end method

.method public clearEnableOm()Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration$Builder;
    .locals 1

    .line 6351
    invoke-virtual {p0}, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration$Builder;->copyOnWrite()V

    .line 6352
    iget-object v0, p0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration$Builder;->instance:Lcom/google/protobuf/GeneratedMessageLite;

    check-cast v0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;

    invoke-static {v0}, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;->access$9800(Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;)V

    return-object p0
.end method

.method public clearFeatureFlags()Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration$Builder;
    .locals 1

    .line 6271
    invoke-virtual {p0}, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration$Builder;->copyOnWrite()V

    .line 6272
    iget-object v0, p0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration$Builder;->instance:Lcom/google/protobuf/GeneratedMessageLite;

    check-cast v0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;

    invoke-static {v0}, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;->access$9400(Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;)V

    return-object p0
.end method

.method public clearInitPolicy()Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration$Builder;
    .locals 1

    .line 5916
    invoke-virtual {p0}, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration$Builder;->copyOnWrite()V

    .line 5917
    iget-object v0, p0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration$Builder;->instance:Lcom/google/protobuf/GeneratedMessageLite;

    check-cast v0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;

    invoke-static {v0}, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;->access$7900(Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;)V

    return-object p0
.end method

.method public clearMaxExtrasSizeKb()Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration$Builder;
    .locals 1

    .line 6973
    invoke-virtual {p0}, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration$Builder;->copyOnWrite()V

    .line 6974
    iget-object v0, p0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration$Builder;->instance:Lcom/google/protobuf/GeneratedMessageLite;

    check-cast v0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;

    invoke-static {v0}, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;->access$12400(Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;)V

    return-object p0
.end method

.method public clearObservableAndroidActivities()Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration$Builder;
    .locals 1

    .line 6654
    invoke-virtual {p0}, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration$Builder;->copyOnWrite()V

    .line 6655
    iget-object v0, p0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration$Builder;->instance:Lcom/google/protobuf/GeneratedMessageLite;

    check-cast v0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;

    invoke-static {v0}, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;->access$11000(Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;)V

    return-object p0
.end method

.method public clearOperativeEventPolicy()Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration$Builder;
    .locals 1

    .line 6058
    invoke-virtual {p0}, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration$Builder;->copyOnWrite()V

    .line 6059
    iget-object v0, p0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration$Builder;->instance:Lcom/google/protobuf/GeneratedMessageLite;

    check-cast v0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;

    invoke-static {v0}, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;->access$8500(Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;)V

    return-object p0
.end method

.method public clearOtherPolicy()Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration$Builder;
    .locals 1

    .line 6129
    invoke-virtual {p0}, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration$Builder;->copyOnWrite()V

    .line 6130
    iget-object v0, p0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration$Builder;->instance:Lcom/google/protobuf/GeneratedMessageLite;

    check-cast v0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;

    invoke-static {v0}, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;->access$8800(Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;)V

    return-object p0
.end method

.method public getAdOperations()Lgatewayprotocol/v1/NativeConfigurationOuterClass$AdOperationsConfiguration;
    .locals 1

    .line 6154
    iget-object v0, p0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration$Builder;->instance:Lcom/google/protobuf/GeneratedMessageLite;

    check-cast v0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;

    invoke-virtual {v0}, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;->getAdOperations()Lgatewayprotocol/v1/NativeConfigurationOuterClass$AdOperationsConfiguration;

    move-result-object v0

    return-object v0
.end method

.method public getAdPolicy()Lgatewayprotocol/v1/NativeConfigurationOuterClass$RequestPolicy;
    .locals 1

    .line 5941
    iget-object v0, p0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration$Builder;->instance:Lcom/google/protobuf/GeneratedMessageLite;

    check-cast v0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;

    invoke-virtual {v0}, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;->getAdPolicy()Lgatewayprotocol/v1/NativeConfigurationOuterClass$RequestPolicy;

    move-result-object v0

    return-object v0
.end method

.method public getAdditionalStorePackages(I)Ljava/lang/String;
    .locals 1

    .line 6393
    iget-object v0, p0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration$Builder;->instance:Lcom/google/protobuf/GeneratedMessageLite;

    check-cast v0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;

    invoke-virtual {v0, p1}, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;->getAdditionalStorePackages(I)Ljava/lang/String;

    move-result-object p1

    return-object p1
.end method

.method public getAdditionalStorePackagesBytes(I)Lcom/google/protobuf/ByteString;
    .locals 1

    .line 6407
    iget-object v0, p0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration$Builder;->instance:Lcom/google/protobuf/GeneratedMessageLite;

    check-cast v0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;

    invoke-virtual {v0, p1}, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;->getAdditionalStorePackagesBytes(I)Lcom/google/protobuf/ByteString;

    move-result-object p1

    return-object p1
.end method

.method public getAdditionalStorePackagesCount()I
    .locals 1

    .line 6380
    iget-object v0, p0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration$Builder;->instance:Lcom/google/protobuf/GeneratedMessageLite;

    check-cast v0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;

    invoke-virtual {v0}, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;->getAdditionalStorePackagesCount()I

    move-result v0

    return v0
.end method

.method public getAdditionalStorePackagesList()Ljava/util/List;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation

    .line 6367
    iget-object v0, p0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration$Builder;->instance:Lcom/google/protobuf/GeneratedMessageLite;

    check-cast v0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;

    .line 6368
    invoke-virtual {v0}, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;->getAdditionalStorePackagesList()Ljava/util/List;

    move-result-object v0

    .line 6367
    invoke-static {v0}, Ljava/util/Collections;->unmodifiableList(Ljava/util/List;)Ljava/util/List;

    move-result-object v0

    return-object v0
.end method

.method public getCachedAssetsConfiguration()Lgatewayprotocol/v1/NativeConfigurationOuterClass$CachedAssetsConfiguration;
    .locals 1

    .line 6504
    iget-object v0, p0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration$Builder;->instance:Lcom/google/protobuf/GeneratedMessageLite;

    check-cast v0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;

    invoke-virtual {v0}, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;->getCachedAssetsConfiguration()Lgatewayprotocol/v1/NativeConfigurationOuterClass$CachedAssetsConfiguration;

    move-result-object v0

    return-object v0
.end method

.method public getCachedWebviewFilesConfiguration()Lgatewayprotocol/v1/NativeConfigurationOuterClass$CachedAssetsConfiguration;
    .locals 1

    .line 6679
    iget-object v0, p0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration$Builder;->instance:Lcom/google/protobuf/GeneratedMessageLite;

    check-cast v0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;

    invoke-virtual {v0}, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;->getCachedWebviewFilesConfiguration()Lgatewayprotocol/v1/NativeConfigurationOuterClass$CachedAssetsConfiguration;

    move-result-object v0

    return-object v0
.end method

.method public getDebugSettings()Lgatewayprotocol/v1/NativeConfigurationOuterClass$DebugSettings;
    .locals 1

    .line 6887
    iget-object v0, p0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration$Builder;->instance:Lcom/google/protobuf/GeneratedMessageLite;

    check-cast v0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;

    invoke-virtual {v0}, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;->getDebugSettings()Lgatewayprotocol/v1/NativeConfigurationOuterClass$DebugSettings;

    move-result-object v0

    return-object v0
.end method

.method public getDefaultShowCompletionState()Lgatewayprotocol/v1/NativeConfigurationOuterClass$ShowCompletionState;
    .locals 1

    .line 6766
    iget-object v0, p0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration$Builder;->instance:Lcom/google/protobuf/GeneratedMessageLite;

    check-cast v0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;

    invoke-virtual {v0}, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;->getDefaultShowCompletionState()Lgatewayprotocol/v1/NativeConfigurationOuterClass$ShowCompletionState;

    move-result-object v0

    return-object v0
.end method

.method public getDefaultShowCompletionStateValue()I
    .locals 1

    .line 6740
    iget-object v0, p0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration$Builder;->instance:Lcom/google/protobuf/GeneratedMessageLite;

    check-cast v0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;

    invoke-virtual {v0}, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;->getDefaultShowCompletionStateValue()I

    move-result v0

    return v0
.end method

.method public getDiagnosticEvents()Lgatewayprotocol/v1/NativeConfigurationOuterClass$DiagnosticEventsConfiguration;
    .locals 1

    .line 5799
    iget-object v0, p0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration$Builder;->instance:Lcom/google/protobuf/GeneratedMessageLite;

    check-cast v0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;

    invoke-virtual {v0}, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;->getDiagnosticEvents()Lgatewayprotocol/v1/NativeConfigurationOuterClass$DiagnosticEventsConfiguration;

    move-result-object v0

    return-object v0
.end method

.method public getDownloadPolicy()Lgatewayprotocol/v1/NativeConfigurationOuterClass$RequestPolicy;
    .locals 1

    .line 6816
    iget-object v0, p0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration$Builder;->instance:Lcom/google/protobuf/GeneratedMessageLite;

    check-cast v0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;

    invoke-virtual {v0}, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;->getDownloadPolicy()Lgatewayprotocol/v1/NativeConfigurationOuterClass$RequestPolicy;

    move-result-object v0

    return-object v0
.end method

.method public getEnableIapEvent()Z
    .locals 1

    .line 6286
    iget-object v0, p0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration$Builder;->instance:Lcom/google/protobuf/GeneratedMessageLite;

    check-cast v0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;

    invoke-virtual {v0}, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;->getEnableIapEvent()Z

    move-result v0

    return v0
.end method

.method public getEnableOm()Z
    .locals 1

    .line 6326
    iget-object v0, p0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration$Builder;->instance:Lcom/google/protobuf/GeneratedMessageLite;

    check-cast v0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;

    invoke-virtual {v0}, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;->getEnableOm()Z

    move-result v0

    return v0
.end method

.method public getFeatureFlags()Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags;
    .locals 1

    .line 6225
    iget-object v0, p0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration$Builder;->instance:Lcom/google/protobuf/GeneratedMessageLite;

    check-cast v0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;

    invoke-virtual {v0}, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;->getFeatureFlags()Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags;

    move-result-object v0

    return-object v0
.end method

.method public getInitPolicy()Lgatewayprotocol/v1/NativeConfigurationOuterClass$RequestPolicy;
    .locals 1

    .line 5870
    iget-object v0, p0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration$Builder;->instance:Lcom/google/protobuf/GeneratedMessageLite;

    check-cast v0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;

    invoke-virtual {v0}, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;->getInitPolicy()Lgatewayprotocol/v1/NativeConfigurationOuterClass$RequestPolicy;

    move-result-object v0

    return-object v0
.end method

.method public getMaxExtrasSizeKb()I
    .locals 1

    .line 6948
    iget-object v0, p0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration$Builder;->instance:Lcom/google/protobuf/GeneratedMessageLite;

    check-cast v0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;

    invoke-virtual {v0}, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;->getMaxExtrasSizeKb()I

    move-result v0

    return v0
.end method

.method public getObservableAndroidActivities(I)Lcom/google/protobuf/ByteString;
    .locals 1

    .line 6595
    iget-object v0, p0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration$Builder;->instance:Lcom/google/protobuf/GeneratedMessageLite;

    check-cast v0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;

    invoke-virtual {v0, p1}, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;->getObservableAndroidActivities(I)Lcom/google/protobuf/ByteString;

    move-result-object p1

    return-object p1
.end method

.method public getObservableAndroidActivitiesCount()I
    .locals 1

    .line 6581
    iget-object v0, p0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration$Builder;->instance:Lcom/google/protobuf/GeneratedMessageLite;

    check-cast v0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;

    invoke-virtual {v0}, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;->getObservableAndroidActivitiesCount()I

    move-result v0

    return v0
.end method

.method public getObservableAndroidActivitiesList()Ljava/util/List;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/List<",
            "Lcom/google/protobuf/ByteString;",
            ">;"
        }
    .end annotation

    .line 6567
    iget-object v0, p0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration$Builder;->instance:Lcom/google/protobuf/GeneratedMessageLite;

    check-cast v0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;

    .line 6568
    invoke-virtual {v0}, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;->getObservableAndroidActivitiesList()Ljava/util/List;

    move-result-object v0

    .line 6567
    invoke-static {v0}, Ljava/util/Collections;->unmodifiableList(Ljava/util/List;)Ljava/util/List;

    move-result-object v0

    return-object v0
.end method

.method public getOperativeEventPolicy()Lgatewayprotocol/v1/NativeConfigurationOuterClass$RequestPolicy;
    .locals 1

    .line 6012
    iget-object v0, p0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration$Builder;->instance:Lcom/google/protobuf/GeneratedMessageLite;

    check-cast v0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;

    invoke-virtual {v0}, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;->getOperativeEventPolicy()Lgatewayprotocol/v1/NativeConfigurationOuterClass$RequestPolicy;

    move-result-object v0

    return-object v0
.end method

.method public getOtherPolicy()Lgatewayprotocol/v1/NativeConfigurationOuterClass$RequestPolicy;
    .locals 1

    .line 6083
    iget-object v0, p0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration$Builder;->instance:Lcom/google/protobuf/GeneratedMessageLite;

    check-cast v0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;

    invoke-virtual {v0}, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;->getOtherPolicy()Lgatewayprotocol/v1/NativeConfigurationOuterClass$RequestPolicy;

    move-result-object v0

    return-object v0
.end method

.method public hasAdOperations()Z
    .locals 1

    .line 6143
    iget-object v0, p0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration$Builder;->instance:Lcom/google/protobuf/GeneratedMessageLite;

    check-cast v0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;

    invoke-virtual {v0}, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;->hasAdOperations()Z

    move-result v0

    return v0
.end method

.method public hasAdPolicy()Z
    .locals 1

    .line 5930
    iget-object v0, p0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration$Builder;->instance:Lcom/google/protobuf/GeneratedMessageLite;

    check-cast v0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;

    invoke-virtual {v0}, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;->hasAdPolicy()Z

    move-result v0

    return v0
.end method

.method public hasCachedAssetsConfiguration()Z
    .locals 1

    .line 6493
    iget-object v0, p0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration$Builder;->instance:Lcom/google/protobuf/GeneratedMessageLite;

    check-cast v0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;

    invoke-virtual {v0}, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;->hasCachedAssetsConfiguration()Z

    move-result v0

    return v0
.end method

.method public hasCachedWebviewFilesConfiguration()Z
    .locals 1

    .line 6668
    iget-object v0, p0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration$Builder;->instance:Lcom/google/protobuf/GeneratedMessageLite;

    check-cast v0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;

    invoke-virtual {v0}, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;->hasCachedWebviewFilesConfiguration()Z

    move-result v0

    return v0
.end method

.method public hasDebugSettings()Z
    .locals 1

    .line 6876
    iget-object v0, p0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration$Builder;->instance:Lcom/google/protobuf/GeneratedMessageLite;

    check-cast v0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;

    invoke-virtual {v0}, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;->hasDebugSettings()Z

    move-result v0

    return v0
.end method

.method public hasDiagnosticEvents()Z
    .locals 1

    .line 5788
    iget-object v0, p0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration$Builder;->instance:Lcom/google/protobuf/GeneratedMessageLite;

    check-cast v0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;

    invoke-virtual {v0}, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;->hasDiagnosticEvents()Z

    move-result v0

    return v0
.end method

.method public hasDownloadPolicy()Z
    .locals 1

    .line 6805
    iget-object v0, p0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration$Builder;->instance:Lcom/google/protobuf/GeneratedMessageLite;

    check-cast v0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;

    invoke-virtual {v0}, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;->hasDownloadPolicy()Z

    move-result v0

    return v0
.end method

.method public hasFeatureFlags()Z
    .locals 1

    .line 6214
    iget-object v0, p0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration$Builder;->instance:Lcom/google/protobuf/GeneratedMessageLite;

    check-cast v0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;

    invoke-virtual {v0}, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;->hasFeatureFlags()Z

    move-result v0

    return v0
.end method

.method public hasInitPolicy()Z
    .locals 1

    .line 5859
    iget-object v0, p0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration$Builder;->instance:Lcom/google/protobuf/GeneratedMessageLite;

    check-cast v0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;

    invoke-virtual {v0}, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;->hasInitPolicy()Z

    move-result v0

    return v0
.end method

.method public hasOperativeEventPolicy()Z
    .locals 1

    .line 6001
    iget-object v0, p0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration$Builder;->instance:Lcom/google/protobuf/GeneratedMessageLite;

    check-cast v0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;

    invoke-virtual {v0}, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;->hasOperativeEventPolicy()Z

    move-result v0

    return v0
.end method

.method public hasOtherPolicy()Z
    .locals 1

    .line 6072
    iget-object v0, p0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration$Builder;->instance:Lcom/google/protobuf/GeneratedMessageLite;

    check-cast v0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;

    invoke-virtual {v0}, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;->hasOtherPolicy()Z

    move-result v0

    return v0
.end method

.method public mergeAdOperations(Lgatewayprotocol/v1/NativeConfigurationOuterClass$AdOperationsConfiguration;)Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration$Builder;
    .locals 1

    .line 6189
    invoke-virtual {p0}, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration$Builder;->copyOnWrite()V

    .line 6190
    iget-object v0, p0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration$Builder;->instance:Lcom/google/protobuf/GeneratedMessageLite;

    check-cast v0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;

    invoke-static {v0, p1}, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;->access$9000(Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;Lgatewayprotocol/v1/NativeConfigurationOuterClass$AdOperationsConfiguration;)V

    return-object p0
.end method

.method public mergeAdPolicy(Lgatewayprotocol/v1/NativeConfigurationOuterClass$RequestPolicy;)Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration$Builder;
    .locals 1

    .line 5976
    invoke-virtual {p0}, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration$Builder;->copyOnWrite()V

    .line 5977
    iget-object v0, p0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration$Builder;->instance:Lcom/google/protobuf/GeneratedMessageLite;

    check-cast v0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;

    invoke-static {v0, p1}, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;->access$8100(Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;Lgatewayprotocol/v1/NativeConfigurationOuterClass$RequestPolicy;)V

    return-object p0
.end method

.method public mergeCachedAssetsConfiguration(Lgatewayprotocol/v1/NativeConfigurationOuterClass$CachedAssetsConfiguration;)Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration$Builder;
    .locals 1

    .line 6539
    invoke-virtual {p0}, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration$Builder;->copyOnWrite()V

    .line 6540
    iget-object v0, p0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration$Builder;->instance:Lcom/google/protobuf/GeneratedMessageLite;

    check-cast v0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;

    invoke-static {v0, p1}, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;->access$10500(Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;Lgatewayprotocol/v1/NativeConfigurationOuterClass$CachedAssetsConfiguration;)V

    return-object p0
.end method

.method public mergeCachedWebviewFilesConfiguration(Lgatewayprotocol/v1/NativeConfigurationOuterClass$CachedAssetsConfiguration;)Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration$Builder;
    .locals 1

    .line 6714
    invoke-virtual {p0}, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration$Builder;->copyOnWrite()V

    .line 6715
    iget-object v0, p0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration$Builder;->instance:Lcom/google/protobuf/GeneratedMessageLite;

    check-cast v0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;

    invoke-static {v0, p1}, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;->access$11200(Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;Lgatewayprotocol/v1/NativeConfigurationOuterClass$CachedAssetsConfiguration;)V

    return-object p0
.end method

.method public mergeDebugSettings(Lgatewayprotocol/v1/NativeConfigurationOuterClass$DebugSettings;)Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration$Builder;
    .locals 1

    .line 6922
    invoke-virtual {p0}, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration$Builder;->copyOnWrite()V

    .line 6923
    iget-object v0, p0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration$Builder;->instance:Lcom/google/protobuf/GeneratedMessageLite;

    check-cast v0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;

    invoke-static {v0, p1}, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;->access$12100(Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;Lgatewayprotocol/v1/NativeConfigurationOuterClass$DebugSettings;)V

    return-object p0
.end method

.method public mergeDiagnosticEvents(Lgatewayprotocol/v1/NativeConfigurationOuterClass$DiagnosticEventsConfiguration;)Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration$Builder;
    .locals 1

    .line 5834
    invoke-virtual {p0}, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration$Builder;->copyOnWrite()V

    .line 5835
    iget-object v0, p0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration$Builder;->instance:Lcom/google/protobuf/GeneratedMessageLite;

    check-cast v0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;

    invoke-static {v0, p1}, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;->access$7500(Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;Lgatewayprotocol/v1/NativeConfigurationOuterClass$DiagnosticEventsConfiguration;)V

    return-object p0
.end method

.method public mergeDownloadPolicy(Lgatewayprotocol/v1/NativeConfigurationOuterClass$RequestPolicy;)Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration$Builder;
    .locals 1

    .line 6851
    invoke-virtual {p0}, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration$Builder;->copyOnWrite()V

    .line 6852
    iget-object v0, p0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration$Builder;->instance:Lcom/google/protobuf/GeneratedMessageLite;

    check-cast v0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;

    invoke-static {v0, p1}, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;->access$11800(Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;Lgatewayprotocol/v1/NativeConfigurationOuterClass$RequestPolicy;)V

    return-object p0
.end method

.method public mergeFeatureFlags(Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags;)Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration$Builder;
    .locals 1

    .line 6260
    invoke-virtual {p0}, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration$Builder;->copyOnWrite()V

    .line 6261
    iget-object v0, p0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration$Builder;->instance:Lcom/google/protobuf/GeneratedMessageLite;

    check-cast v0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;

    invoke-static {v0, p1}, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;->access$9300(Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags;)V

    return-object p0
.end method

.method public mergeInitPolicy(Lgatewayprotocol/v1/NativeConfigurationOuterClass$RequestPolicy;)Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration$Builder;
    .locals 1

    .line 5905
    invoke-virtual {p0}, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration$Builder;->copyOnWrite()V

    .line 5906
    iget-object v0, p0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration$Builder;->instance:Lcom/google/protobuf/GeneratedMessageLite;

    check-cast v0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;

    invoke-static {v0, p1}, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;->access$7800(Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;Lgatewayprotocol/v1/NativeConfigurationOuterClass$RequestPolicy;)V

    return-object p0
.end method

.method public mergeOperativeEventPolicy(Lgatewayprotocol/v1/NativeConfigurationOuterClass$RequestPolicy;)Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration$Builder;
    .locals 1

    .line 6047
    invoke-virtual {p0}, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration$Builder;->copyOnWrite()V

    .line 6048
    iget-object v0, p0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration$Builder;->instance:Lcom/google/protobuf/GeneratedMessageLite;

    check-cast v0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;

    invoke-static {v0, p1}, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;->access$8400(Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;Lgatewayprotocol/v1/NativeConfigurationOuterClass$RequestPolicy;)V

    return-object p0
.end method

.method public mergeOtherPolicy(Lgatewayprotocol/v1/NativeConfigurationOuterClass$RequestPolicy;)Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration$Builder;
    .locals 1

    .line 6118
    invoke-virtual {p0}, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration$Builder;->copyOnWrite()V

    .line 6119
    iget-object v0, p0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration$Builder;->instance:Lcom/google/protobuf/GeneratedMessageLite;

    check-cast v0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;

    invoke-static {v0, p1}, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;->access$8700(Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;Lgatewayprotocol/v1/NativeConfigurationOuterClass$RequestPolicy;)V

    return-object p0
.end method

.method public setAdOperations(Lgatewayprotocol/v1/NativeConfigurationOuterClass$AdOperationsConfiguration$Builder;)Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration$Builder;
    .locals 1

    .line 6177
    invoke-virtual {p0}, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration$Builder;->copyOnWrite()V

    .line 6178
    iget-object v0, p0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration$Builder;->instance:Lcom/google/protobuf/GeneratedMessageLite;

    check-cast v0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;

    invoke-virtual {p1}, Lgatewayprotocol/v1/NativeConfigurationOuterClass$AdOperationsConfiguration$Builder;->build()Lcom/google/protobuf/GeneratedMessageLite;

    move-result-object p1

    check-cast p1, Lgatewayprotocol/v1/NativeConfigurationOuterClass$AdOperationsConfiguration;

    invoke-static {v0, p1}, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;->access$8900(Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;Lgatewayprotocol/v1/NativeConfigurationOuterClass$AdOperationsConfiguration;)V

    return-object p0
.end method

.method public setAdOperations(Lgatewayprotocol/v1/NativeConfigurationOuterClass$AdOperationsConfiguration;)Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration$Builder;
    .locals 1

    .line 6164
    invoke-virtual {p0}, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration$Builder;->copyOnWrite()V

    .line 6165
    iget-object v0, p0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration$Builder;->instance:Lcom/google/protobuf/GeneratedMessageLite;

    check-cast v0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;

    invoke-static {v0, p1}, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;->access$8900(Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;Lgatewayprotocol/v1/NativeConfigurationOuterClass$AdOperationsConfiguration;)V

    return-object p0
.end method

.method public setAdPolicy(Lgatewayprotocol/v1/NativeConfigurationOuterClass$RequestPolicy$Builder;)Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration$Builder;
    .locals 1

    .line 5964
    invoke-virtual {p0}, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration$Builder;->copyOnWrite()V

    .line 5965
    iget-object v0, p0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration$Builder;->instance:Lcom/google/protobuf/GeneratedMessageLite;

    check-cast v0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;

    invoke-virtual {p1}, Lgatewayprotocol/v1/NativeConfigurationOuterClass$RequestPolicy$Builder;->build()Lcom/google/protobuf/GeneratedMessageLite;

    move-result-object p1

    check-cast p1, Lgatewayprotocol/v1/NativeConfigurationOuterClass$RequestPolicy;

    invoke-static {v0, p1}, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;->access$8000(Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;Lgatewayprotocol/v1/NativeConfigurationOuterClass$RequestPolicy;)V

    return-object p0
.end method

.method public setAdPolicy(Lgatewayprotocol/v1/NativeConfigurationOuterClass$RequestPolicy;)Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration$Builder;
    .locals 1

    .line 5951
    invoke-virtual {p0}, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration$Builder;->copyOnWrite()V

    .line 5952
    iget-object v0, p0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration$Builder;->instance:Lcom/google/protobuf/GeneratedMessageLite;

    check-cast v0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;

    invoke-static {v0, p1}, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;->access$8000(Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;Lgatewayprotocol/v1/NativeConfigurationOuterClass$RequestPolicy;)V

    return-object p0
.end method

.method public setAdditionalStorePackages(ILjava/lang/String;)Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration$Builder;
    .locals 1

    .line 6421
    invoke-virtual {p0}, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration$Builder;->copyOnWrite()V

    .line 6422
    iget-object v0, p0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration$Builder;->instance:Lcom/google/protobuf/GeneratedMessageLite;

    check-cast v0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;

    invoke-static {v0, p1, p2}, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;->access$9900(Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;ILjava/lang/String;)V

    return-object p0
.end method

.method public setCachedAssetsConfiguration(Lgatewayprotocol/v1/NativeConfigurationOuterClass$CachedAssetsConfiguration$Builder;)Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration$Builder;
    .locals 1

    .line 6527
    invoke-virtual {p0}, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration$Builder;->copyOnWrite()V

    .line 6528
    iget-object v0, p0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration$Builder;->instance:Lcom/google/protobuf/GeneratedMessageLite;

    check-cast v0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;

    invoke-virtual {p1}, Lgatewayprotocol/v1/NativeConfigurationOuterClass$CachedAssetsConfiguration$Builder;->build()Lcom/google/protobuf/GeneratedMessageLite;

    move-result-object p1

    check-cast p1, Lgatewayprotocol/v1/NativeConfigurationOuterClass$CachedAssetsConfiguration;

    invoke-static {v0, p1}, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;->access$10400(Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;Lgatewayprotocol/v1/NativeConfigurationOuterClass$CachedAssetsConfiguration;)V

    return-object p0
.end method

.method public setCachedAssetsConfiguration(Lgatewayprotocol/v1/NativeConfigurationOuterClass$CachedAssetsConfiguration;)Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration$Builder;
    .locals 1

    .line 6514
    invoke-virtual {p0}, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration$Builder;->copyOnWrite()V

    .line 6515
    iget-object v0, p0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration$Builder;->instance:Lcom/google/protobuf/GeneratedMessageLite;

    check-cast v0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;

    invoke-static {v0, p1}, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;->access$10400(Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;Lgatewayprotocol/v1/NativeConfigurationOuterClass$CachedAssetsConfiguration;)V

    return-object p0
.end method

.method public setCachedWebviewFilesConfiguration(Lgatewayprotocol/v1/NativeConfigurationOuterClass$CachedAssetsConfiguration$Builder;)Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration$Builder;
    .locals 1

    .line 6702
    invoke-virtual {p0}, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration$Builder;->copyOnWrite()V

    .line 6703
    iget-object v0, p0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration$Builder;->instance:Lcom/google/protobuf/GeneratedMessageLite;

    check-cast v0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;

    invoke-virtual {p1}, Lgatewayprotocol/v1/NativeConfigurationOuterClass$CachedAssetsConfiguration$Builder;->build()Lcom/google/protobuf/GeneratedMessageLite;

    move-result-object p1

    check-cast p1, Lgatewayprotocol/v1/NativeConfigurationOuterClass$CachedAssetsConfiguration;

    invoke-static {v0, p1}, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;->access$11100(Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;Lgatewayprotocol/v1/NativeConfigurationOuterClass$CachedAssetsConfiguration;)V

    return-object p0
.end method

.method public setCachedWebviewFilesConfiguration(Lgatewayprotocol/v1/NativeConfigurationOuterClass$CachedAssetsConfiguration;)Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration$Builder;
    .locals 1

    .line 6689
    invoke-virtual {p0}, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration$Builder;->copyOnWrite()V

    .line 6690
    iget-object v0, p0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration$Builder;->instance:Lcom/google/protobuf/GeneratedMessageLite;

    check-cast v0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;

    invoke-static {v0, p1}, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;->access$11100(Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;Lgatewayprotocol/v1/NativeConfigurationOuterClass$CachedAssetsConfiguration;)V

    return-object p0
.end method

.method public setDebugSettings(Lgatewayprotocol/v1/NativeConfigurationOuterClass$DebugSettings$Builder;)Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration$Builder;
    .locals 1

    .line 6910
    invoke-virtual {p0}, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration$Builder;->copyOnWrite()V

    .line 6911
    iget-object v0, p0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration$Builder;->instance:Lcom/google/protobuf/GeneratedMessageLite;

    check-cast v0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;

    invoke-virtual {p1}, Lgatewayprotocol/v1/NativeConfigurationOuterClass$DebugSettings$Builder;->build()Lcom/google/protobuf/GeneratedMessageLite;

    move-result-object p1

    check-cast p1, Lgatewayprotocol/v1/NativeConfigurationOuterClass$DebugSettings;

    invoke-static {v0, p1}, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;->access$12000(Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;Lgatewayprotocol/v1/NativeConfigurationOuterClass$DebugSettings;)V

    return-object p0
.end method

.method public setDebugSettings(Lgatewayprotocol/v1/NativeConfigurationOuterClass$DebugSettings;)Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration$Builder;
    .locals 1

    .line 6897
    invoke-virtual {p0}, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration$Builder;->copyOnWrite()V

    .line 6898
    iget-object v0, p0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration$Builder;->instance:Lcom/google/protobuf/GeneratedMessageLite;

    check-cast v0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;

    invoke-static {v0, p1}, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;->access$12000(Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;Lgatewayprotocol/v1/NativeConfigurationOuterClass$DebugSettings;)V

    return-object p0
.end method

.method public setDefaultShowCompletionState(Lgatewayprotocol/v1/NativeConfigurationOuterClass$ShowCompletionState;)Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration$Builder;
    .locals 1

    .line 6778
    invoke-virtual {p0}, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration$Builder;->copyOnWrite()V

    .line 6779
    iget-object v0, p0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration$Builder;->instance:Lcom/google/protobuf/GeneratedMessageLite;

    check-cast v0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;

    invoke-static {v0, p1}, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;->access$11500(Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;Lgatewayprotocol/v1/NativeConfigurationOuterClass$ShowCompletionState;)V

    return-object p0
.end method

.method public setDefaultShowCompletionStateValue(I)Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration$Builder;
    .locals 1

    .line 6752
    invoke-virtual {p0}, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration$Builder;->copyOnWrite()V

    .line 6753
    iget-object v0, p0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration$Builder;->instance:Lcom/google/protobuf/GeneratedMessageLite;

    check-cast v0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;

    invoke-static {v0, p1}, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;->access$11400(Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;I)V

    return-object p0
.end method

.method public setDiagnosticEvents(Lgatewayprotocol/v1/NativeConfigurationOuterClass$DiagnosticEventsConfiguration$Builder;)Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration$Builder;
    .locals 1

    .line 5822
    invoke-virtual {p0}, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration$Builder;->copyOnWrite()V

    .line 5823
    iget-object v0, p0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration$Builder;->instance:Lcom/google/protobuf/GeneratedMessageLite;

    check-cast v0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;

    invoke-virtual {p1}, Lgatewayprotocol/v1/NativeConfigurationOuterClass$DiagnosticEventsConfiguration$Builder;->build()Lcom/google/protobuf/GeneratedMessageLite;

    move-result-object p1

    check-cast p1, Lgatewayprotocol/v1/NativeConfigurationOuterClass$DiagnosticEventsConfiguration;

    invoke-static {v0, p1}, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;->access$7400(Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;Lgatewayprotocol/v1/NativeConfigurationOuterClass$DiagnosticEventsConfiguration;)V

    return-object p0
.end method

.method public setDiagnosticEvents(Lgatewayprotocol/v1/NativeConfigurationOuterClass$DiagnosticEventsConfiguration;)Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration$Builder;
    .locals 1

    .line 5809
    invoke-virtual {p0}, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration$Builder;->copyOnWrite()V

    .line 5810
    iget-object v0, p0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration$Builder;->instance:Lcom/google/protobuf/GeneratedMessageLite;

    check-cast v0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;

    invoke-static {v0, p1}, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;->access$7400(Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;Lgatewayprotocol/v1/NativeConfigurationOuterClass$DiagnosticEventsConfiguration;)V

    return-object p0
.end method

.method public setDownloadPolicy(Lgatewayprotocol/v1/NativeConfigurationOuterClass$RequestPolicy$Builder;)Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration$Builder;
    .locals 1

    .line 6839
    invoke-virtual {p0}, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration$Builder;->copyOnWrite()V

    .line 6840
    iget-object v0, p0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration$Builder;->instance:Lcom/google/protobuf/GeneratedMessageLite;

    check-cast v0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;

    invoke-virtual {p1}, Lgatewayprotocol/v1/NativeConfigurationOuterClass$RequestPolicy$Builder;->build()Lcom/google/protobuf/GeneratedMessageLite;

    move-result-object p1

    check-cast p1, Lgatewayprotocol/v1/NativeConfigurationOuterClass$RequestPolicy;

    invoke-static {v0, p1}, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;->access$11700(Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;Lgatewayprotocol/v1/NativeConfigurationOuterClass$RequestPolicy;)V

    return-object p0
.end method

.method public setDownloadPolicy(Lgatewayprotocol/v1/NativeConfigurationOuterClass$RequestPolicy;)Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration$Builder;
    .locals 1

    .line 6826
    invoke-virtual {p0}, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration$Builder;->copyOnWrite()V

    .line 6827
    iget-object v0, p0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration$Builder;->instance:Lcom/google/protobuf/GeneratedMessageLite;

    check-cast v0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;

    invoke-static {v0, p1}, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;->access$11700(Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;Lgatewayprotocol/v1/NativeConfigurationOuterClass$RequestPolicy;)V

    return-object p0
.end method

.method public setEnableIapEvent(Z)Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration$Builder;
    .locals 1

    .line 6298
    invoke-virtual {p0}, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration$Builder;->copyOnWrite()V

    .line 6299
    iget-object v0, p0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration$Builder;->instance:Lcom/google/protobuf/GeneratedMessageLite;

    check-cast v0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;

    invoke-static {v0, p1}, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;->access$9500(Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;Z)V

    return-object p0
.end method

.method public setEnableOm(Z)Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration$Builder;
    .locals 1

    .line 6338
    invoke-virtual {p0}, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration$Builder;->copyOnWrite()V

    .line 6339
    iget-object v0, p0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration$Builder;->instance:Lcom/google/protobuf/GeneratedMessageLite;

    check-cast v0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;

    invoke-static {v0, p1}, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;->access$9700(Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;Z)V

    return-object p0
.end method

.method public setFeatureFlags(Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags$Builder;)Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration$Builder;
    .locals 1

    .line 6248
    invoke-virtual {p0}, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration$Builder;->copyOnWrite()V

    .line 6249
    iget-object v0, p0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration$Builder;->instance:Lcom/google/protobuf/GeneratedMessageLite;

    check-cast v0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;

    invoke-virtual {p1}, Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags$Builder;->build()Lcom/google/protobuf/GeneratedMessageLite;

    move-result-object p1

    check-cast p1, Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags;

    invoke-static {v0, p1}, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;->access$9200(Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags;)V

    return-object p0
.end method

.method public setFeatureFlags(Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags;)Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration$Builder;
    .locals 1

    .line 6235
    invoke-virtual {p0}, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration$Builder;->copyOnWrite()V

    .line 6236
    iget-object v0, p0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration$Builder;->instance:Lcom/google/protobuf/GeneratedMessageLite;

    check-cast v0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;

    invoke-static {v0, p1}, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;->access$9200(Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags;)V

    return-object p0
.end method

.method public setInitPolicy(Lgatewayprotocol/v1/NativeConfigurationOuterClass$RequestPolicy$Builder;)Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration$Builder;
    .locals 1

    .line 5893
    invoke-virtual {p0}, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration$Builder;->copyOnWrite()V

    .line 5894
    iget-object v0, p0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration$Builder;->instance:Lcom/google/protobuf/GeneratedMessageLite;

    check-cast v0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;

    invoke-virtual {p1}, Lgatewayprotocol/v1/NativeConfigurationOuterClass$RequestPolicy$Builder;->build()Lcom/google/protobuf/GeneratedMessageLite;

    move-result-object p1

    check-cast p1, Lgatewayprotocol/v1/NativeConfigurationOuterClass$RequestPolicy;

    invoke-static {v0, p1}, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;->access$7700(Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;Lgatewayprotocol/v1/NativeConfigurationOuterClass$RequestPolicy;)V

    return-object p0
.end method

.method public setInitPolicy(Lgatewayprotocol/v1/NativeConfigurationOuterClass$RequestPolicy;)Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration$Builder;
    .locals 1

    .line 5880
    invoke-virtual {p0}, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration$Builder;->copyOnWrite()V

    .line 5881
    iget-object v0, p0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration$Builder;->instance:Lcom/google/protobuf/GeneratedMessageLite;

    check-cast v0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;

    invoke-static {v0, p1}, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;->access$7700(Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;Lgatewayprotocol/v1/NativeConfigurationOuterClass$RequestPolicy;)V

    return-object p0
.end method

.method public setMaxExtrasSizeKb(I)Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration$Builder;
    .locals 1

    .line 6960
    invoke-virtual {p0}, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration$Builder;->copyOnWrite()V

    .line 6961
    iget-object v0, p0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration$Builder;->instance:Lcom/google/protobuf/GeneratedMessageLite;

    check-cast v0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;

    invoke-static {v0, p1}, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;->access$12300(Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;I)V

    return-object p0
.end method

.method public setObservableAndroidActivities(ILcom/google/protobuf/ByteString;)Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration$Builder;
    .locals 1

    .line 6609
    invoke-virtual {p0}, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration$Builder;->copyOnWrite()V

    .line 6610
    iget-object v0, p0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration$Builder;->instance:Lcom/google/protobuf/GeneratedMessageLite;

    check-cast v0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;

    invoke-static {v0, p1, p2}, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;->access$10700(Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;ILcom/google/protobuf/ByteString;)V

    return-object p0
.end method

.method public setOperativeEventPolicy(Lgatewayprotocol/v1/NativeConfigurationOuterClass$RequestPolicy$Builder;)Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration$Builder;
    .locals 1

    .line 6035
    invoke-virtual {p0}, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration$Builder;->copyOnWrite()V

    .line 6036
    iget-object v0, p0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration$Builder;->instance:Lcom/google/protobuf/GeneratedMessageLite;

    check-cast v0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;

    invoke-virtual {p1}, Lgatewayprotocol/v1/NativeConfigurationOuterClass$RequestPolicy$Builder;->build()Lcom/google/protobuf/GeneratedMessageLite;

    move-result-object p1

    check-cast p1, Lgatewayprotocol/v1/NativeConfigurationOuterClass$RequestPolicy;

    invoke-static {v0, p1}, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;->access$8300(Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;Lgatewayprotocol/v1/NativeConfigurationOuterClass$RequestPolicy;)V

    return-object p0
.end method

.method public setOperativeEventPolicy(Lgatewayprotocol/v1/NativeConfigurationOuterClass$RequestPolicy;)Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration$Builder;
    .locals 1

    .line 6022
    invoke-virtual {p0}, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration$Builder;->copyOnWrite()V

    .line 6023
    iget-object v0, p0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration$Builder;->instance:Lcom/google/protobuf/GeneratedMessageLite;

    check-cast v0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;

    invoke-static {v0, p1}, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;->access$8300(Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;Lgatewayprotocol/v1/NativeConfigurationOuterClass$RequestPolicy;)V

    return-object p0
.end method

.method public setOtherPolicy(Lgatewayprotocol/v1/NativeConfigurationOuterClass$RequestPolicy$Builder;)Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration$Builder;
    .locals 1

    .line 6106
    invoke-virtual {p0}, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration$Builder;->copyOnWrite()V

    .line 6107
    iget-object v0, p0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration$Builder;->instance:Lcom/google/protobuf/GeneratedMessageLite;

    check-cast v0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;

    invoke-virtual {p1}, Lgatewayprotocol/v1/NativeConfigurationOuterClass$RequestPolicy$Builder;->build()Lcom/google/protobuf/GeneratedMessageLite;

    move-result-object p1

    check-cast p1, Lgatewayprotocol/v1/NativeConfigurationOuterClass$RequestPolicy;

    invoke-static {v0, p1}, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;->access$8600(Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;Lgatewayprotocol/v1/NativeConfigurationOuterClass$RequestPolicy;)V

    return-object p0
.end method

.method public setOtherPolicy(Lgatewayprotocol/v1/NativeConfigurationOuterClass$RequestPolicy;)Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration$Builder;
    .locals 1

    .line 6093
    invoke-virtual {p0}, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration$Builder;->copyOnWrite()V

    .line 6094
    iget-object v0, p0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration$Builder;->instance:Lcom/google/protobuf/GeneratedMessageLite;

    check-cast v0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;

    invoke-static {v0, p1}, Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;->access$8600(Lgatewayprotocol/v1/NativeConfigurationOuterClass$NativeConfiguration;Lgatewayprotocol/v1/NativeConfigurationOuterClass$RequestPolicy;)V

    return-object p0
.end method
