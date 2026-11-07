.class final Lcom/android/billingclient/api/zzaa;
.super Landroid/content/BroadcastReceiver;
.source "com.android.billingclient:billing@@8.3.0"


# instance fields
.field final synthetic zza:Lcom/android/billingclient/api/zzab;

.field private zzb:Z

.field private final zzc:Z


# direct methods
.method constructor <init>(Lcom/android/billingclient/api/zzab;Z)V
    .locals 0

    .line 1
    invoke-static {p1}, Ljava/util/Objects;->requireNonNull(Ljava/lang/Object;)Ljava/lang/Object;

    iput-object p1, p0, Lcom/android/billingclient/api/zzaa;->zza:Lcom/android/billingclient/api/zzab;

    invoke-direct {p0}, Landroid/content/BroadcastReceiver;-><init>()V

    iput-boolean p2, p0, Lcom/android/billingclient/api/zzaa;->zzc:Z

    return-void
.end method

.method private final zzd(Landroid/os/Bundle;Lcom/android/billingclient/api/BillingResult;ILcom/google/android/gms/internal/play_billing/zzjk;JZ)V
    .locals 2

    .line 1
    const-string v0, "FAILURE_LOGGING_PAYLOAD"

    :try_start_0
    invoke-virtual {p1, v0}, Landroid/os/Bundle;->getByteArray(Ljava/lang/String;)[B

    move-result-object v1

    if-eqz v1, :cond_0

    iget-object p2, p0, Lcom/android/billingclient/api/zzaa;->zza:Lcom/android/billingclient/api/zzab;

    invoke-static {p2}, Lcom/android/billingclient/api/zzab;->zzb(Lcom/android/billingclient/api/zzab;)Lcom/android/billingclient/api/zzcz;

    move-result-object p2

    .line 2
    invoke-virtual {p1, v0}, Landroid/os/Bundle;->getByteArray(Ljava/lang/String;)[B

    move-result-object p1

    invoke-static {p1}, Lcom/google/android/gms/internal/play_billing/zziw;->zzc([B)Lcom/google/android/gms/internal/play_billing/zziw;

    move-result-object p1

    .line 3
    invoke-interface {p2, p1, p5, p6, p7}, Lcom/android/billingclient/api/zzcz;->zzd(Lcom/google/android/gms/internal/play_billing/zziw;JZ)V

    return-void

    :cond_0
    iget-object p1, p0, Lcom/android/billingclient/api/zzaa;->zza:Lcom/android/billingclient/api/zzab;

    invoke-static {p1}, Lcom/android/billingclient/api/zzab;->zzb(Lcom/android/billingclient/api/zzab;)Lcom/android/billingclient/api/zzcz;

    move-result-object p1

    sget-object v0, Lcom/google/android/gms/internal/play_billing/zzjd;->zzw:Lcom/google/android/gms/internal/play_billing/zzjd;

    const/4 v1, 0x0

    .line 4
    invoke-static {v0, p3, p2, v1, p4}, Lcom/android/billingclient/api/zzcy;->zzb(Lcom/google/android/gms/internal/play_billing/zzjd;ILcom/android/billingclient/api/BillingResult;Ljava/lang/String;Lcom/google/android/gms/internal/play_billing/zzjk;)Lcom/google/android/gms/internal/play_billing/zziw;

    move-result-object p2

    .line 5
    invoke-interface {p1, p2, p5, p6, p7}, Lcom/android/billingclient/api/zzcz;->zzd(Lcom/google/android/gms/internal/play_billing/zziw;JZ)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    const-string p1, "BillingBroadcastManager"

    const-string p2, "Failed parsing Api failure."

    .line 6
    invoke-static {p1, p2}, Lcom/google/android/gms/internal/play_billing/zzc;->zzo(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method


# virtual methods
.method public final onReceive(Landroid/content/Context;Landroid/content/Intent;)V
    .locals 16

    move-object/from16 v0, p0

    move-object/from16 v1, p2

    .line 1
    invoke-virtual {v1}, Landroid/content/Intent;->getAction()Ljava/lang/String;

    move-result-object v2

    .line 2
    invoke-virtual {v2}, Ljava/lang/String;->hashCode()I

    move-result v3

    const v4, -0x58756162

    const/4 v5, 0x2

    const/4 v8, 0x1

    const/4 v9, 0x0

    if-eq v3, v4, :cond_2

    const v4, -0x141f9074

    if-eq v3, v4, :cond_1

    const v4, 0x14937179

    if-eq v3, v4, :cond_0

    goto :goto_0

    .line 5
    :cond_0
    const-string v3, "com.android.vending.billing.ALTERNATIVE_BILLING"

    .line 2
    invoke-virtual {v2, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_3

    move v2, v5

    goto :goto_1

    :cond_1
    const-string v3, "com.android.vending.billing.LOCAL_BROADCAST_PURCHASES_UPDATED"

    invoke-virtual {v2, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_3

    move v2, v8

    goto :goto_1

    :cond_2
    const-string v3, "com.android.vending.billing.PURCHASES_UPDATED"

    invoke-virtual {v2, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_3

    move v2, v9

    goto :goto_1

    :cond_3
    :goto_0
    const/4 v2, -0x1

    :goto_1
    if-eqz v2, :cond_6

    if-eq v2, v8, :cond_5

    if-eq v2, v5, :cond_4

    sget-object v2, Lcom/google/android/gms/internal/play_billing/zzjk;->zza:Lcom/google/android/gms/internal/play_billing/zzjk;

    goto :goto_2

    .line 5
    :cond_4
    sget-object v2, Lcom/google/android/gms/internal/play_billing/zzjk;->zzd:Lcom/google/android/gms/internal/play_billing/zzjk;

    goto :goto_2

    :cond_5
    sget-object v2, Lcom/google/android/gms/internal/play_billing/zzjk;->zzc:Lcom/google/android/gms/internal/play_billing/zzjk;

    goto :goto_2

    :cond_6
    sget-object v2, Lcom/google/android/gms/internal/play_billing/zzjk;->zzb:Lcom/google/android/gms/internal/play_billing/zzjk;

    :goto_2
    move-object v4, v2

    .line 2
    sget-object v2, Lcom/google/android/gms/internal/play_billing/zzjk;->zzc:Lcom/google/android/gms/internal/play_billing/zzjk;

    .line 3
    invoke-virtual {v4, v2}, Lcom/google/android/gms/internal/play_billing/zzjk;->equals(Ljava/lang/Object;)Z

    move-result v3

    if-nez v3, :cond_9

    sget-object v3, Lcom/google/android/gms/internal/play_billing/zzjk;->zzd:Lcom/google/android/gms/internal/play_billing/zzjk;

    .line 4
    invoke-virtual {v4, v3}, Lcom/google/android/gms/internal/play_billing/zzjk;->equals(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_7

    goto :goto_3

    .line 29
    :cond_7
    sget-object v3, Lcom/google/android/gms/internal/play_billing/zzjk;->zzb:Lcom/google/android/gms/internal/play_billing/zzjk;

    .line 5
    invoke-virtual {v4, v3}, Lcom/google/android/gms/internal/play_billing/zzjk;->equals(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_8

    const/16 v3, 0x20

    goto :goto_4

    :cond_8
    move v3, v8

    goto :goto_4

    :cond_9
    :goto_3
    move v3, v5

    .line 6
    :goto_4
    invoke-virtual {v1}, Landroid/content/Intent;->getExtras()Landroid/os/Bundle;

    move-result-object v6

    const/4 v10, 0x0

    const-string v11, "BillingBroadcastManager"

    if-nez v6, :cond_a

    const-string v1, "Bundle is null."

    .line 7
    invoke-static {v11, v1}, Lcom/google/android/gms/internal/play_billing/zzc;->zzo(Ljava/lang/String;Ljava/lang/String;)V

    iget-object v1, v0, Lcom/android/billingclient/api/zzaa;->zza:Lcom/android/billingclient/api/zzab;

    invoke-static {v1}, Lcom/android/billingclient/api/zzab;->zzb(Lcom/android/billingclient/api/zzab;)Lcom/android/billingclient/api/zzcz;

    move-result-object v2

    sget-object v5, Lcom/google/android/gms/internal/play_billing/zzjd;->zzk:Lcom/google/android/gms/internal/play_billing/zzjd;

    .line 8
    sget-object v6, Lcom/android/billingclient/api/zzdc;->zzh:Lcom/android/billingclient/api/BillingResult;

    .line 9
    invoke-static {v5, v3, v6, v10, v4}, Lcom/android/billingclient/api/zzcy;->zzb(Lcom/google/android/gms/internal/play_billing/zzjd;ILcom/android/billingclient/api/BillingResult;Ljava/lang/String;Lcom/google/android/gms/internal/play_billing/zzjk;)Lcom/google/android/gms/internal/play_billing/zziw;

    move-result-object v3

    .line 8
    invoke-interface {v2, v3}, Lcom/android/billingclient/api/zzcz;->zza(Lcom/google/android/gms/internal/play_billing/zziw;)V

    invoke-static {v1}, Lcom/android/billingclient/api/zzab;->zze(Lcom/android/billingclient/api/zzab;)Lcom/android/billingclient/api/PurchasesUpdatedListener;

    move-result-object v2

    if-eqz v2, :cond_19

    invoke-static {v1}, Lcom/android/billingclient/api/zzab;->zze(Lcom/android/billingclient/api/zzab;)Lcom/android/billingclient/api/PurchasesUpdatedListener;

    move-result-object v1

    .line 10
    invoke-interface {v1, v6, v10}, Lcom/android/billingclient/api/PurchasesUpdatedListener;->onPurchasesUpdated(Lcom/android/billingclient/api/BillingResult;Ljava/util/List;)V

    return-void

    :cond_a
    if-ne v3, v5, :cond_f

    .line 11
    sget v5, Lcom/google/android/gms/internal/play_billing/zzc;->zza:I

    if-nez v1, :cond_b

    const-string v1, "BillingHelper"

    const-string v5, "Got null intent!"

    .line 12
    invoke-static {v1, v5}, Lcom/google/android/gms/internal/play_billing/zzc;->zzo(Ljava/lang/String;Ljava/lang/String;)V

    invoke-static {}, Lcom/android/billingclient/api/BillingResult;->newBuilder()Lcom/android/billingclient/api/BillingResult$Builder;

    move-result-object v1

    const/4 v5, 0x6

    .line 13
    invoke-virtual {v1, v5}, Lcom/android/billingclient/api/BillingResult$Builder;->setResponseCode(I)Lcom/android/billingclient/api/BillingResult$Builder;

    .line 14
    invoke-virtual {v1, v9}, Lcom/android/billingclient/api/BillingResult$Builder;->setOnPurchasesUpdatedSubResponseCode(I)Lcom/android/billingclient/api/BillingResult$Builder;

    const-string v5, "An internal error occurred."

    .line 15
    invoke-virtual {v1, v5}, Lcom/android/billingclient/api/BillingResult$Builder;->setDebugMessage(Ljava/lang/String;)Lcom/android/billingclient/api/BillingResult$Builder;

    .line 16
    invoke-virtual {v1}, Lcom/android/billingclient/api/BillingResult$Builder;->build()Lcom/android/billingclient/api/BillingResult;

    move-result-object v1

    goto :goto_7

    .line 72
    :cond_b
    invoke-static {}, Lcom/android/billingclient/api/BillingResult;->newBuilder()Lcom/android/billingclient/api/BillingResult$Builder;

    move-result-object v5

    .line 17
    invoke-virtual {v1}, Landroid/content/Intent;->getExtras()Landroid/os/Bundle;

    move-result-object v7

    invoke-static {v7, v11}, Lcom/google/android/gms/internal/play_billing/zzc;->zzb(Landroid/os/Bundle;Ljava/lang/String;)I

    move-result v7

    invoke-virtual {v5, v7}, Lcom/android/billingclient/api/BillingResult$Builder;->setResponseCode(I)Lcom/android/billingclient/api/BillingResult$Builder;

    .line 18
    invoke-virtual {v1}, Landroid/content/Intent;->getExtras()Landroid/os/Bundle;

    move-result-object v7

    if-nez v7, :cond_c

    const-string v7, "Unexpected null bundle received!"

    .line 19
    invoke-static {v11, v7}, Lcom/google/android/gms/internal/play_billing/zzc;->zzo(Ljava/lang/String;Ljava/lang/String;)V

    :goto_5
    move v7, v9

    goto :goto_6

    .line 28
    :cond_c
    const-string v12, "SUB_RESPONSE_CODE"

    .line 20
    invoke-virtual {v7, v12}, Landroid/os/Bundle;->get(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v7

    if-nez v7, :cond_d

    const-string v7, "getOnPurchasesUpdatedSubResponseCodeFromBundle() got null response code, assuming OK"

    .line 21
    invoke-static {v11, v7}, Lcom/google/android/gms/internal/play_billing/zzc;->zzn(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_5

    .line 22
    :cond_d
    instance-of v12, v7, Ljava/lang/Integer;

    if-eqz v12, :cond_e

    .line 23
    check-cast v7, Ljava/lang/Integer;

    invoke-virtual {v7}, Ljava/lang/Integer;->intValue()I

    move-result v7

    goto :goto_6

    :cond_e
    invoke-virtual {v7}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v7

    .line 24
    invoke-virtual {v7}, Ljava/lang/Class;->getName()Ljava/lang/String;

    move-result-object v7

    invoke-static {v7}, Ljava/lang/String;->valueOf(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v7

    const-string v12, "Unexpected type for bundle sub response code: "

    invoke-virtual {v12, v7}, Ljava/lang/String;->concat(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v7

    .line 25
    invoke-static {v11, v7}, Lcom/google/android/gms/internal/play_billing/zzc;->zzo(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_5

    .line 26
    :goto_6
    invoke-virtual {v5, v7}, Lcom/android/billingclient/api/BillingResult$Builder;->setOnPurchasesUpdatedSubResponseCode(I)Lcom/android/billingclient/api/BillingResult$Builder;

    .line 27
    invoke-virtual {v1}, Landroid/content/Intent;->getExtras()Landroid/os/Bundle;

    move-result-object v1

    invoke-static {v1, v11}, Lcom/google/android/gms/internal/play_billing/zzc;->zzk(Landroid/os/Bundle;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v5, v1}, Lcom/android/billingclient/api/BillingResult$Builder;->setDebugMessage(Ljava/lang/String;)Lcom/android/billingclient/api/BillingResult$Builder;

    .line 28
    invoke-virtual {v5}, Lcom/android/billingclient/api/BillingResult$Builder;->build()Lcom/android/billingclient/api/BillingResult;

    move-result-object v1

    goto :goto_7

    .line 29
    :cond_f
    invoke-static {v1, v11}, Lcom/google/android/gms/internal/play_billing/zzc;->zzi(Landroid/content/Intent;Ljava/lang/String;)Lcom/android/billingclient/api/BillingResult;

    move-result-object v1

    .line 16
    :goto_7
    const-string v5, "billingClientTransactionId"

    const-wide/16 v12, 0x0

    .line 30
    invoke-virtual {v6, v5, v12, v13}, Landroid/os/Bundle;->getLong(Ljava/lang/String;J)J

    move-result-wide v12

    const-string v5, "wasServiceAutoReconnected"

    .line 31
    invoke-virtual {v6, v5, v9}, Landroid/os/Bundle;->getBoolean(Ljava/lang/String;Z)Z

    move-result v7

    sget-object v5, Lcom/google/android/gms/internal/play_billing/zzjk;->zzb:Lcom/google/android/gms/internal/play_billing/zzjk;

    .line 32
    invoke-virtual {v4, v5}, Lcom/google/android/gms/internal/play_billing/zzjk;->equals(Ljava/lang/Object;)Z

    move-result v5

    if-nez v5, :cond_1a

    .line 33
    invoke-virtual {v4, v2}, Lcom/google/android/gms/internal/play_billing/zzjk;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_10

    goto/16 :goto_c

    .line 37
    :cond_10
    sget-object v2, Lcom/google/android/gms/internal/play_billing/zzjk;->zzd:Lcom/google/android/gms/internal/play_billing/zzjk;

    .line 39
    invoke-virtual {v4, v2}, Lcom/google/android/gms/internal/play_billing/zzjk;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_19

    invoke-virtual {v1}, Lcom/android/billingclient/api/BillingResult;->getResponseCode()I

    move-result v2

    if-eqz v2, :cond_11

    move-object v2, v1

    move-object v1, v6

    move-wide v5, v12

    .line 40
    invoke-direct/range {v0 .. v7}, Lcom/android/billingclient/api/zzaa;->zzd(Landroid/os/Bundle;Lcom/android/billingclient/api/BillingResult;ILcom/google/android/gms/internal/play_billing/zzjk;JZ)V

    iget-object v1, v0, Lcom/android/billingclient/api/zzaa;->zza:Lcom/android/billingclient/api/zzab;

    invoke-static {v1}, Lcom/android/billingclient/api/zzab;->zze(Lcom/android/billingclient/api/zzab;)Lcom/android/billingclient/api/PurchasesUpdatedListener;

    move-result-object v1

    .line 41
    invoke-static {}, Lcom/google/android/gms/internal/play_billing/zzbw;->zzk()Lcom/google/android/gms/internal/play_billing/zzbw;

    move-result-object v3

    .line 42
    invoke-interface {v1, v2, v3}, Lcom/android/billingclient/api/PurchasesUpdatedListener;->onPurchasesUpdated(Lcom/android/billingclient/api/BillingResult;Ljava/util/List;)V

    return-void

    :cond_11
    move-object v1, v6

    move-wide v5, v12

    iget-object v2, v0, Lcom/android/billingclient/api/zzaa;->zza:Lcom/android/billingclient/api/zzab;

    invoke-static {v2}, Lcom/android/billingclient/api/zzab;->zza(Lcom/android/billingclient/api/zzab;)Lcom/android/billingclient/api/zzb;

    move-result-object v12

    if-nez v12, :cond_12

    invoke-static {v2}, Lcom/android/billingclient/api/zzab;->zzg(Lcom/android/billingclient/api/zzab;)Lcom/android/billingclient/api/UserChoiceBillingListener;

    move-result-object v12

    if-nez v12, :cond_12

    invoke-static {v2}, Lcom/android/billingclient/api/zzab;->zzc(Lcom/android/billingclient/api/zzab;)Lcom/android/billingclient/api/DeveloperProvidedBillingListener;

    move-result-object v12

    if-nez v12, :cond_12

    const-string v1, "No valid alternative billing listener is registered."

    .line 43
    invoke-static {v11, v1}, Lcom/google/android/gms/internal/play_billing/zzc;->zzo(Ljava/lang/String;Ljava/lang/String;)V

    invoke-static {v2}, Lcom/android/billingclient/api/zzab;->zzb(Lcom/android/billingclient/api/zzab;)Lcom/android/billingclient/api/zzcz;

    move-result-object v1

    sget-object v8, Lcom/google/android/gms/internal/play_billing/zzjd;->zzbK:Lcom/google/android/gms/internal/play_billing/zzjd;

    .line 44
    sget-object v9, Lcom/android/billingclient/api/zzdc;->zzh:Lcom/android/billingclient/api/BillingResult;

    .line 45
    invoke-static {v8, v3, v9, v10, v4}, Lcom/android/billingclient/api/zzcy;->zzb(Lcom/google/android/gms/internal/play_billing/zzjd;ILcom/android/billingclient/api/BillingResult;Ljava/lang/String;Lcom/google/android/gms/internal/play_billing/zzjk;)Lcom/google/android/gms/internal/play_billing/zziw;

    move-result-object v3

    .line 44
    invoke-interface {v1, v3, v5, v6, v7}, Lcom/android/billingclient/api/zzcz;->zzd(Lcom/google/android/gms/internal/play_billing/zziw;JZ)V

    invoke-static {v2}, Lcom/android/billingclient/api/zzab;->zze(Lcom/android/billingclient/api/zzab;)Lcom/android/billingclient/api/PurchasesUpdatedListener;

    move-result-object v1

    .line 46
    invoke-static {}, Lcom/google/android/gms/internal/play_billing/zzbw;->zzk()Lcom/google/android/gms/internal/play_billing/zzbw;

    move-result-object v2

    .line 47
    invoke-interface {v1, v9, v2}, Lcom/android/billingclient/api/PurchasesUpdatedListener;->onPurchasesUpdated(Lcom/android/billingclient/api/BillingResult;Ljava/util/List;)V

    return-void

    :cond_12
    const-string v12, "ALTERNATIVE_BILLING_USER_CHOICE_DATA"

    .line 48
    invoke-virtual {v1, v12}, Landroid/os/Bundle;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    if-eqz v1, :cond_18

    :try_start_0
    invoke-static {v2}, Lcom/android/billingclient/api/zzab;->zzg(Lcom/android/billingclient/api/zzab;)Lcom/android/billingclient/api/UserChoiceBillingListener;

    move-result-object v12

    if-eqz v12, :cond_13

    new-instance v12, Lcom/android/billingclient/api/UserChoiceDetails;

    .line 58
    invoke-direct {v12, v1}, Lcom/android/billingclient/api/UserChoiceDetails;-><init>(Ljava/lang/String;)V

    invoke-static {v2}, Lcom/android/billingclient/api/zzab;->zzg(Lcom/android/billingclient/api/zzab;)Lcom/android/billingclient/api/UserChoiceBillingListener;

    move-result-object v2

    .line 59
    invoke-interface {v2, v12}, Lcom/android/billingclient/api/UserChoiceBillingListener;->userSelectedAlternativeBilling(Lcom/android/billingclient/api/UserChoiceDetails;)V

    goto :goto_b

    .line 67
    :cond_13
    invoke-static {v2}, Lcom/android/billingclient/api/zzab;->zzc(Lcom/android/billingclient/api/zzab;)Lcom/android/billingclient/api/DeveloperProvidedBillingListener;

    move-result-object v12

    if-eqz v12, :cond_14

    new-instance v12, Lcom/android/billingclient/api/DeveloperProvidedBillingDetails;

    .line 56
    invoke-direct {v12, v1}, Lcom/android/billingclient/api/DeveloperProvidedBillingDetails;-><init>(Ljava/lang/String;)V

    invoke-static {v2}, Lcom/android/billingclient/api/zzab;->zzc(Lcom/android/billingclient/api/zzab;)Lcom/android/billingclient/api/DeveloperProvidedBillingListener;

    move-result-object v2

    .line 57
    invoke-interface {v2, v12}, Lcom/android/billingclient/api/DeveloperProvidedBillingListener;->onUserSelectedDeveloperBilling(Lcom/android/billingclient/api/DeveloperProvidedBillingDetails;)V

    goto :goto_b

    .line 49
    :cond_14
    new-instance v12, Lorg/json/JSONObject;

    invoke-direct {v12, v1}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    const-string v13, "products"

    .line 50
    invoke-virtual {v12, v13}, Lorg/json/JSONObject;->optJSONArray(Ljava/lang/String;)Lorg/json/JSONArray;

    move-result-object v12

    new-instance v13, Ljava/util/ArrayList;

    .line 51
    invoke-direct {v13}, Ljava/util/ArrayList;-><init>()V

    if-nez v12, :cond_16

    :cond_15
    move/from16 p1, v9

    goto :goto_a

    :cond_16
    move v14, v9

    .line 52
    :goto_8
    invoke-virtual {v12}, Lorg/json/JSONArray;->length()I

    move-result v15

    if-ge v14, v15, :cond_15

    .line 53
    invoke-virtual {v12, v14}, Lorg/json/JSONArray;->optJSONObject(I)Lorg/json/JSONObject;

    move-result-object v15
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    if-eqz v15, :cond_17

    move/from16 p1, v9

    :try_start_1
    new-instance v9, Lcom/android/billingclient/api/zzc;

    .line 54
    invoke-direct {v9, v15, v10}, Lcom/android/billingclient/api/zzc;-><init>(Lorg/json/JSONObject;Lcom/android/billingclient/api/zzd;)V

    invoke-interface {v13, v9}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    goto :goto_9

    :cond_17
    move/from16 p1, v9

    :goto_9
    add-int/lit8 v14, v14, 0x1

    move/from16 v9, p1

    goto :goto_8

    .line 51
    :goto_a
    invoke-static {v2}, Lcom/android/billingclient/api/zzab;->zza(Lcom/android/billingclient/api/zzab;)Lcom/android/billingclient/api/zzb;

    move-result-object v2

    .line 55
    invoke-interface {v2}, Lcom/android/billingclient/api/zzb;->zza()V
    :try_end_1
    .catch Lorg/json/JSONException; {:try_start_1 .. :try_end_1} :catch_1

    .line 59
    :goto_b
    iget-object v1, v0, Lcom/android/billingclient/api/zzaa;->zza:Lcom/android/billingclient/api/zzab;

    invoke-static {v1}, Lcom/android/billingclient/api/zzab;->zzb(Lcom/android/billingclient/api/zzab;)Lcom/android/billingclient/api/zzcz;

    move-result-object v1

    .line 66
    invoke-static {v3, v4}, Lcom/android/billingclient/api/zzcy;->zzc(ILcom/google/android/gms/internal/play_billing/zzjk;)Lcom/google/android/gms/internal/play_billing/zzja;

    move-result-object v2

    .line 67
    invoke-interface {v1, v2, v5, v6, v7}, Lcom/android/billingclient/api/zzcz;->zzh(Lcom/google/android/gms/internal/play_billing/zzja;JZ)V

    return-void

    :catch_0
    move/from16 p1, v9

    .line 2
    :catch_1
    new-array v2, v8, [Ljava/lang/Object;

    aput-object v1, v2, p1

    const-string v1, "Error when parsing invalid user choice data: [%s]"

    .line 60
    invoke-static {v1, v2}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v1

    .line 61
    invoke-static {v11, v1}, Lcom/google/android/gms/internal/play_billing/zzc;->zzo(Ljava/lang/String;Ljava/lang/String;)V

    iget-object v1, v0, Lcom/android/billingclient/api/zzaa;->zza:Lcom/android/billingclient/api/zzab;

    invoke-static {v1}, Lcom/android/billingclient/api/zzab;->zzb(Lcom/android/billingclient/api/zzab;)Lcom/android/billingclient/api/zzcz;

    move-result-object v2

    sget-object v8, Lcom/google/android/gms/internal/play_billing/zzjd;->zzq:Lcom/google/android/gms/internal/play_billing/zzjd;

    .line 62
    sget-object v9, Lcom/android/billingclient/api/zzdc;->zzh:Lcom/android/billingclient/api/BillingResult;

    .line 63
    invoke-static {v8, v3, v9, v10, v4}, Lcom/android/billingclient/api/zzcy;->zzb(Lcom/google/android/gms/internal/play_billing/zzjd;ILcom/android/billingclient/api/BillingResult;Ljava/lang/String;Lcom/google/android/gms/internal/play_billing/zzjk;)Lcom/google/android/gms/internal/play_billing/zziw;

    move-result-object v3

    .line 62
    invoke-interface {v2, v3, v5, v6, v7}, Lcom/android/billingclient/api/zzcz;->zzd(Lcom/google/android/gms/internal/play_billing/zziw;JZ)V

    invoke-static {v1}, Lcom/android/billingclient/api/zzab;->zze(Lcom/android/billingclient/api/zzab;)Lcom/android/billingclient/api/PurchasesUpdatedListener;

    move-result-object v1

    .line 64
    invoke-static {}, Lcom/google/android/gms/internal/play_billing/zzbw;->zzk()Lcom/google/android/gms/internal/play_billing/zzbw;

    move-result-object v2

    .line 65
    invoke-interface {v1, v9, v2}, Lcom/android/billingclient/api/PurchasesUpdatedListener;->onPurchasesUpdated(Lcom/android/billingclient/api/BillingResult;Ljava/util/List;)V

    return-void

    .line 54
    :cond_18
    const-string v1, "Couldn\'t find alternative billing user choice data in bundle."

    .line 68
    invoke-static {v11, v1}, Lcom/google/android/gms/internal/play_billing/zzc;->zzo(Ljava/lang/String;Ljava/lang/String;)V

    invoke-static {v2}, Lcom/android/billingclient/api/zzab;->zzb(Lcom/android/billingclient/api/zzab;)Lcom/android/billingclient/api/zzcz;

    move-result-object v1

    sget-object v8, Lcom/google/android/gms/internal/play_billing/zzjd;->zzp:Lcom/google/android/gms/internal/play_billing/zzjd;

    .line 69
    sget-object v9, Lcom/android/billingclient/api/zzdc;->zzh:Lcom/android/billingclient/api/BillingResult;

    .line 70
    invoke-static {v8, v3, v9, v10, v4}, Lcom/android/billingclient/api/zzcy;->zzb(Lcom/google/android/gms/internal/play_billing/zzjd;ILcom/android/billingclient/api/BillingResult;Ljava/lang/String;Lcom/google/android/gms/internal/play_billing/zzjk;)Lcom/google/android/gms/internal/play_billing/zziw;

    move-result-object v3

    .line 69
    invoke-interface {v1, v3, v5, v6, v7}, Lcom/android/billingclient/api/zzcz;->zzd(Lcom/google/android/gms/internal/play_billing/zziw;JZ)V

    invoke-static {v2}, Lcom/android/billingclient/api/zzab;->zze(Lcom/android/billingclient/api/zzab;)Lcom/android/billingclient/api/PurchasesUpdatedListener;

    move-result-object v1

    .line 71
    invoke-static {}, Lcom/google/android/gms/internal/play_billing/zzbw;->zzk()Lcom/google/android/gms/internal/play_billing/zzbw;

    move-result-object v2

    .line 72
    invoke-interface {v1, v9, v2}, Lcom/android/billingclient/api/PurchasesUpdatedListener;->onPurchasesUpdated(Lcom/android/billingclient/api/BillingResult;Ljava/util/List;)V

    :cond_19
    return-void

    :cond_1a
    :goto_c
    move-object v2, v1

    move-object v1, v6

    move-wide v5, v12

    .line 34
    invoke-static {v1}, Lcom/google/android/gms/internal/play_billing/zzc;->zzm(Landroid/os/Bundle;)Ljava/util/List;

    move-result-object v8

    invoke-virtual {v2}, Lcom/android/billingclient/api/BillingResult;->getResponseCode()I

    move-result v9

    if-nez v9, :cond_1b

    iget-object v1, v0, Lcom/android/billingclient/api/zzaa;->zza:Lcom/android/billingclient/api/zzab;

    invoke-static {v1}, Lcom/android/billingclient/api/zzab;->zzb(Lcom/android/billingclient/api/zzab;)Lcom/android/billingclient/api/zzcz;

    move-result-object v1

    .line 35
    invoke-static {v3, v4}, Lcom/android/billingclient/api/zzcy;->zzc(ILcom/google/android/gms/internal/play_billing/zzjk;)Lcom/google/android/gms/internal/play_billing/zzja;

    move-result-object v3

    .line 36
    invoke-interface {v1, v3, v5, v6, v7}, Lcom/android/billingclient/api/zzcz;->zzh(Lcom/google/android/gms/internal/play_billing/zzja;JZ)V

    goto :goto_d

    .line 37
    :cond_1b
    invoke-direct/range {v0 .. v7}, Lcom/android/billingclient/api/zzaa;->zzd(Landroid/os/Bundle;Lcom/android/billingclient/api/BillingResult;ILcom/google/android/gms/internal/play_billing/zzjk;JZ)V

    .line 36
    :goto_d
    iget-object v1, v0, Lcom/android/billingclient/api/zzaa;->zza:Lcom/android/billingclient/api/zzab;

    invoke-static {v1}, Lcom/android/billingclient/api/zzab;->zze(Lcom/android/billingclient/api/zzab;)Lcom/android/billingclient/api/PurchasesUpdatedListener;

    move-result-object v1

    .line 38
    invoke-interface {v1, v2, v8}, Lcom/android/billingclient/api/PurchasesUpdatedListener;->onPurchasesUpdated(Lcom/android/billingclient/api/BillingResult;Ljava/util/List;)V

    return-void
.end method

.method public final declared-synchronized zza(Landroid/content/Context;Landroid/content/IntentFilter;)V
    .locals 3

    monitor-enter p0

    .line 1
    :try_start_0
    iget-boolean v0, p0, Lcom/android/billingclient/api/zzaa;->zzb:Z
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-eqz v0, :cond_0

    monitor-exit p0

    return-void

    :cond_0
    :try_start_1
    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v1, 0x21

    const/4 v2, 0x1

    if-lt v0, v1, :cond_2

    iget-boolean v0, p0, Lcom/android/billingclient/api/zzaa;->zzc:Z

    if-eq v2, v0, :cond_1

    const/4 v0, 0x4

    goto :goto_0

    :cond_1
    const/4 v0, 0x2

    :goto_0
    invoke-static {p1, p0, p2, v0}, Lbitter/jnibridge/a$$ExternalSyntheticApiModelOutline0;->m(Landroid/content/Context;Landroid/content/BroadcastReceiver;Landroid/content/IntentFilter;I)Landroid/content/Intent;

    goto :goto_1

    .line 2
    :cond_2
    invoke-virtual {p1, p0, p2}, Landroid/content/Context;->registerReceiver(Landroid/content/BroadcastReceiver;Landroid/content/IntentFilter;)Landroid/content/Intent;

    .line 1
    :goto_1
    iput-boolean v2, p0, Lcom/android/billingclient/api/zzaa;->zzb:Z
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    monitor-exit p0

    return-void

    :catchall_0
    move-exception p1

    :try_start_2
    monitor-exit p0
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    throw p1
.end method

.method public final declared-synchronized zzb(Landroid/content/Context;Landroid/content/IntentFilter;Ljava/lang/String;)V
    .locals 7

    monitor-enter p0

    .line 1
    :try_start_0
    iget-boolean p3, p0, Lcom/android/billingclient/api/zzaa;->zzb:Z
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-eqz p3, :cond_0

    monitor-exit p0

    return-void

    :cond_0
    :try_start_1
    sget p3, Landroid/os/Build$VERSION;->SDK_INT:I

    const-string v3, "com.google.android.finsky.permission.PLAY_BILLING_LIBRARY_BROADCAST"

    const/16 v0, 0x21

    const/4 v6, 0x1

    if-lt p3, v0, :cond_2

    iget-boolean p3, p0, Lcom/android/billingclient/api/zzaa;->zzc:Z
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    if-eq v6, p3, :cond_1

    const/4 p3, 0x4

    goto :goto_0

    :cond_1
    const/4 p3, 0x2

    :goto_0
    move v5, p3

    const/4 v4, 0x0

    move-object v1, p0

    move-object v0, p1

    move-object v2, p2

    :try_start_2
    invoke-static/range {v0 .. v5}, Lbitter/jnibridge/a$$ExternalSyntheticApiModelOutline0;->m(Landroid/content/Context;Landroid/content/BroadcastReceiver;Landroid/content/IntentFilter;Ljava/lang/String;Landroid/os/Handler;I)Landroid/content/Intent;

    goto :goto_1

    :cond_2
    move-object v1, p0

    move-object v0, p1

    move-object v2, p2

    const/4 p1, 0x0

    .line 2
    invoke-virtual {v0, p0, v2, v3, p1}, Landroid/content/Context;->registerReceiver(Landroid/content/BroadcastReceiver;Landroid/content/IntentFilter;Ljava/lang/String;Landroid/os/Handler;)Landroid/content/Intent;

    .line 1
    :goto_1
    iput-boolean v6, v1, Lcom/android/billingclient/api/zzaa;->zzb:Z
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_1

    monitor-exit p0

    return-void

    :catchall_0
    move-exception v0

    move-object v1, p0

    :goto_2
    move-object p1, v0

    :try_start_3
    monitor-exit p0
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_1

    throw p1

    :catchall_1
    move-exception v0

    goto :goto_2
.end method

.method public final declared-synchronized zzc(Landroid/content/Context;)V
    .locals 1

    monitor-enter p0

    .line 1
    :try_start_0
    iget-boolean v0, p0, Lcom/android/billingclient/api/zzaa;->zzb:Z

    if-eqz v0, :cond_0

    invoke-virtual {p1, p0}, Landroid/content/Context;->unregisterReceiver(Landroid/content/BroadcastReceiver;)V

    const/4 p1, 0x0

    iput-boolean p1, p0, Lcom/android/billingclient/api/zzaa;->zzb:Z
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    monitor-exit p0

    return-void

    :cond_0
    :try_start_1
    const-string p1, "BillingBroadcastManager"

    const-string v0, "Receiver is not registered."

    .line 2
    invoke-static {p1, v0}, Lcom/google/android/gms/internal/play_billing/zzc;->zzo(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    monitor-exit p0

    return-void

    :catchall_0
    move-exception p1

    :try_start_2
    monitor-exit p0
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    throw p1
.end method
