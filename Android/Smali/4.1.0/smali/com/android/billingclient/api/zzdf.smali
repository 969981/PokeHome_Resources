.class final enum Lcom/android/billingclient/api/zzdf;
.super Ljava/lang/Enum;
.source "com.android.billingclient:billing@@8.3.0"


# static fields
.field public static final enum zza:Lcom/android/billingclient/api/zzdf;

.field public static final enum zzb:Lcom/android/billingclient/api/zzdf;

.field public static final enum zzc:Lcom/android/billingclient/api/zzdf;

.field private static final synthetic zzd:[Lcom/android/billingclient/api/zzdf;


# instance fields
.field private final zze:Ljava/lang/String;

.field private final zzf:I


# direct methods
.method static constructor <clinit>()V
    .locals 9

    .line 1
    new-instance v0, Lcom/android/billingclient/api/zzdf;

    const/16 v1, 0x1d

    const-string v2, "GET_BILLING_CONFIG"

    const/4 v3, 0x0

    const-string v4, "getBillingConfig"

    invoke-direct {v0, v2, v3, v4, v1}, Lcom/android/billingclient/api/zzdf;-><init>(Ljava/lang/String;ILjava/lang/String;I)V

    sput-object v0, Lcom/android/billingclient/api/zzdf;->zza:Lcom/android/billingclient/api/zzdf;

    new-instance v1, Lcom/android/billingclient/api/zzdf;

    const/16 v2, 0x21

    .line 2
    const-string v4, "IS_BILLING_PROGRAM_AVAILABLE_ASYNC"

    const/4 v5, 0x1

    const-string v6, "isIndirectBillingProgramAvailable"

    invoke-direct {v1, v4, v5, v6, v2}, Lcom/android/billingclient/api/zzdf;-><init>(Ljava/lang/String;ILjava/lang/String;I)V

    sput-object v1, Lcom/android/billingclient/api/zzdf;->zzb:Lcom/android/billingclient/api/zzdf;

    new-instance v2, Lcom/android/billingclient/api/zzdf;

    const/16 v4, 0x23

    .line 3
    const-string v6, "CREATE_BILLING_PROGRAM_REPORTING_DETAILS_ASYNC"

    const/4 v7, 0x2

    const-string v8, "createIndirectBillingReportingDetails"

    invoke-direct {v2, v6, v7, v8, v4}, Lcom/android/billingclient/api/zzdf;-><init>(Ljava/lang/String;ILjava/lang/String;I)V

    sput-object v2, Lcom/android/billingclient/api/zzdf;->zzc:Lcom/android/billingclient/api/zzdf;

    const/4 v4, 0x3

    new-array v4, v4, [Lcom/android/billingclient/api/zzdf;

    aput-object v0, v4, v3

    aput-object v1, v4, v5

    aput-object v2, v4, v7

    sput-object v4, Lcom/android/billingclient/api/zzdf;->zzd:[Lcom/android/billingclient/api/zzdf;

    return-void
.end method

.method private constructor <init>(Ljava/lang/String;ILjava/lang/String;I)V
    .locals 0

    .line 1
    invoke-direct {p0, p1, p2}, Ljava/lang/Enum;-><init>(Ljava/lang/String;I)V

    iput-object p3, p0, Lcom/android/billingclient/api/zzdf;->zze:Ljava/lang/String;

    iput p4, p0, Lcom/android/billingclient/api/zzdf;->zzf:I

    return-void
.end method

.method public static values()[Lcom/android/billingclient/api/zzdf;
    .locals 1

    .line 1
    sget-object v0, Lcom/android/billingclient/api/zzdf;->zzd:[Lcom/android/billingclient/api/zzdf;

    invoke-virtual {v0}, [Lcom/android/billingclient/api/zzdf;->clone()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, [Lcom/android/billingclient/api/zzdf;

    return-object v0
.end method


# virtual methods
.method final zza()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/android/billingclient/api/zzdf;->zze:Ljava/lang/String;

    return-object v0
.end method

.method final zzb()I
    .locals 1

    iget v0, p0, Lcom/android/billingclient/api/zzdf;->zzf:I

    return v0
.end method
