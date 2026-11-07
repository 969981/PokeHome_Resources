.class public final Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags$Builder;
.super Lcom/google/protobuf/GeneratedMessageLite$Builder;
.source "NativeConfigurationOuterClass.java"

# interfaces
.implements Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlagsOrBuilder;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x19
    name = "Builder"
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Lcom/google/protobuf/GeneratedMessageLite$Builder<",
        "Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags;",
        "Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags$Builder;",
        ">;",
        "Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlagsOrBuilder;"
    }
.end annotation


# direct methods
.method private constructor <init>()V
    .locals 1

    .line 7523
    invoke-static {}, Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags;->access$12600()Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags;

    move-result-object v0

    invoke-direct {p0, v0}, Lcom/google/protobuf/GeneratedMessageLite$Builder;-><init>(Lcom/google/protobuf/GeneratedMessageLite;)V

    return-void
.end method

.method synthetic constructor <init>(Lgatewayprotocol/v1/NativeConfigurationOuterClass$1;)V
    .locals 0

    .line 7516
    invoke-direct {p0}, Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags$Builder;-><init>()V

    return-void
.end method


# virtual methods
.method public clearAppSheetBugCheckEnabled()Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags$Builder;
    .locals 1

    .line 7682
    invoke-virtual {p0}, Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags$Builder;->copyOnWrite()V

    .line 7683
    iget-object v0, p0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags$Builder;->instance:Lcom/google/protobuf/GeneratedMessageLite;

    check-cast v0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags;

    invoke-static {v0}, Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags;->access$13400(Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags;)V

    return-object p0
.end method

.method public clearBoldSdkNextSessionEnabled()Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags$Builder;
    .locals 1

    .line 7642
    invoke-virtual {p0}, Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags$Builder;->copyOnWrite()V

    .line 7643
    iget-object v0, p0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags$Builder;->instance:Lcom/google/protobuf/GeneratedMessageLite;

    check-cast v0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags;

    invoke-static {v0}, Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags;->access$13200(Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags;)V

    return-object p0
.end method

.method public clearOpenglGpuEnabled()Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags$Builder;
    .locals 1

    .line 7562
    invoke-virtual {p0}, Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags$Builder;->copyOnWrite()V

    .line 7563
    iget-object v0, p0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags$Builder;->instance:Lcom/google/protobuf/GeneratedMessageLite;

    check-cast v0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags;

    invoke-static {v0}, Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags;->access$12800(Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags;)V

    return-object p0
.end method

.method public clearOpportunityIdPlacementValidation()Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags$Builder;
    .locals 1

    .line 7602
    invoke-virtual {p0}, Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags$Builder;->copyOnWrite()V

    .line 7603
    iget-object v0, p0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags$Builder;->instance:Lcom/google/protobuf/GeneratedMessageLite;

    check-cast v0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags;

    invoke-static {v0}, Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags;->access$13000(Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags;)V

    return-object p0
.end method

.method public clearRecoverTerminatedWebviews()Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags$Builder;
    .locals 1

    .line 7722
    invoke-virtual {p0}, Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags$Builder;->copyOnWrite()V

    .line 7723
    iget-object v0, p0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags$Builder;->instance:Lcom/google/protobuf/GeneratedMessageLite;

    check-cast v0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags;

    invoke-static {v0}, Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags;->access$13600(Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags;)V

    return-object p0
.end method

.method public clearShouldHandleWebviewCaching()Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags$Builder;
    .locals 1

    .line 7762
    invoke-virtual {p0}, Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags$Builder;->copyOnWrite()V

    .line 7763
    iget-object v0, p0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags$Builder;->instance:Lcom/google/protobuf/GeneratedMessageLite;

    check-cast v0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags;

    invoke-static {v0}, Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags;->access$13800(Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags;)V

    return-object p0
.end method

.method public clearShouldSendIapHistory()Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags$Builder;
    .locals 1

    .line 7802
    invoke-virtual {p0}, Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags$Builder;->copyOnWrite()V

    .line 7803
    iget-object v0, p0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags$Builder;->instance:Lcom/google/protobuf/GeneratedMessageLite;

    check-cast v0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags;

    invoke-static {v0}, Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags;->access$14000(Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags;)V

    return-object p0
.end method

.method public getAppSheetBugCheckEnabled()Z
    .locals 1

    .line 7657
    iget-object v0, p0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags$Builder;->instance:Lcom/google/protobuf/GeneratedMessageLite;

    check-cast v0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags;

    invoke-virtual {v0}, Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags;->getAppSheetBugCheckEnabled()Z

    move-result v0

    return v0
.end method

.method public getBoldSdkNextSessionEnabled()Z
    .locals 1

    .line 7617
    iget-object v0, p0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags$Builder;->instance:Lcom/google/protobuf/GeneratedMessageLite;

    check-cast v0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags;

    invoke-virtual {v0}, Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags;->getBoldSdkNextSessionEnabled()Z

    move-result v0

    return v0
.end method

.method public getOpenglGpuEnabled()Z
    .locals 1

    .line 7537
    iget-object v0, p0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags$Builder;->instance:Lcom/google/protobuf/GeneratedMessageLite;

    check-cast v0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags;

    invoke-virtual {v0}, Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags;->getOpenglGpuEnabled()Z

    move-result v0

    return v0
.end method

.method public getOpportunityIdPlacementValidation()Z
    .locals 1

    .line 7577
    iget-object v0, p0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags$Builder;->instance:Lcom/google/protobuf/GeneratedMessageLite;

    check-cast v0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags;

    invoke-virtual {v0}, Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags;->getOpportunityIdPlacementValidation()Z

    move-result v0

    return v0
.end method

.method public getRecoverTerminatedWebviews()Z
    .locals 1

    .line 7697
    iget-object v0, p0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags$Builder;->instance:Lcom/google/protobuf/GeneratedMessageLite;

    check-cast v0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags;

    invoke-virtual {v0}, Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags;->getRecoverTerminatedWebviews()Z

    move-result v0

    return v0
.end method

.method public getShouldHandleWebviewCaching()Z
    .locals 1

    .line 7737
    iget-object v0, p0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags$Builder;->instance:Lcom/google/protobuf/GeneratedMessageLite;

    check-cast v0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags;

    invoke-virtual {v0}, Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags;->getShouldHandleWebviewCaching()Z

    move-result v0

    return v0
.end method

.method public getShouldSendIapHistory()Z
    .locals 1

    .line 7777
    iget-object v0, p0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags$Builder;->instance:Lcom/google/protobuf/GeneratedMessageLite;

    check-cast v0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags;

    invoke-virtual {v0}, Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags;->getShouldSendIapHistory()Z

    move-result v0

    return v0
.end method

.method public setAppSheetBugCheckEnabled(Z)Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags$Builder;
    .locals 1

    .line 7669
    invoke-virtual {p0}, Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags$Builder;->copyOnWrite()V

    .line 7670
    iget-object v0, p0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags$Builder;->instance:Lcom/google/protobuf/GeneratedMessageLite;

    check-cast v0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags;

    invoke-static {v0, p1}, Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags;->access$13300(Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags;Z)V

    return-object p0
.end method

.method public setBoldSdkNextSessionEnabled(Z)Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags$Builder;
    .locals 1

    .line 7629
    invoke-virtual {p0}, Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags$Builder;->copyOnWrite()V

    .line 7630
    iget-object v0, p0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags$Builder;->instance:Lcom/google/protobuf/GeneratedMessageLite;

    check-cast v0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags;

    invoke-static {v0, p1}, Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags;->access$13100(Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags;Z)V

    return-object p0
.end method

.method public setOpenglGpuEnabled(Z)Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags$Builder;
    .locals 1

    .line 7549
    invoke-virtual {p0}, Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags$Builder;->copyOnWrite()V

    .line 7550
    iget-object v0, p0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags$Builder;->instance:Lcom/google/protobuf/GeneratedMessageLite;

    check-cast v0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags;

    invoke-static {v0, p1}, Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags;->access$12700(Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags;Z)V

    return-object p0
.end method

.method public setOpportunityIdPlacementValidation(Z)Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags$Builder;
    .locals 1

    .line 7589
    invoke-virtual {p0}, Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags$Builder;->copyOnWrite()V

    .line 7590
    iget-object v0, p0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags$Builder;->instance:Lcom/google/protobuf/GeneratedMessageLite;

    check-cast v0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags;

    invoke-static {v0, p1}, Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags;->access$12900(Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags;Z)V

    return-object p0
.end method

.method public setRecoverTerminatedWebviews(Z)Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags$Builder;
    .locals 1

    .line 7709
    invoke-virtual {p0}, Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags$Builder;->copyOnWrite()V

    .line 7710
    iget-object v0, p0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags$Builder;->instance:Lcom/google/protobuf/GeneratedMessageLite;

    check-cast v0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags;

    invoke-static {v0, p1}, Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags;->access$13500(Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags;Z)V

    return-object p0
.end method

.method public setShouldHandleWebviewCaching(Z)Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags$Builder;
    .locals 1

    .line 7749
    invoke-virtual {p0}, Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags$Builder;->copyOnWrite()V

    .line 7750
    iget-object v0, p0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags$Builder;->instance:Lcom/google/protobuf/GeneratedMessageLite;

    check-cast v0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags;

    invoke-static {v0, p1}, Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags;->access$13700(Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags;Z)V

    return-object p0
.end method

.method public setShouldSendIapHistory(Z)Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags$Builder;
    .locals 1

    .line 7789
    invoke-virtual {p0}, Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags$Builder;->copyOnWrite()V

    .line 7790
    iget-object v0, p0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags$Builder;->instance:Lcom/google/protobuf/GeneratedMessageLite;

    check-cast v0, Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags;

    invoke-static {v0, p1}, Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags;->access$13900(Lgatewayprotocol/v1/NativeConfigurationOuterClass$FeatureFlags;Z)V

    return-object p0
.end method
