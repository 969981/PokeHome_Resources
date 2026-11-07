.class public Lcom/example/locationplugin/LocationPlugin;
.super Ljava/lang/Object;
.source "LocationPlugin.java"

# interfaces
.implements Landroid/location/LocationListener;


# static fields
.field private static instance:Lcom/example/locationplugin/LocationPlugin;


# instance fields
.field private callbackTarget:Ljava/lang/String;

.field private locationManager:Landroid/location/LocationManager;


# direct methods
.method static constructor <clinit>()V
    .locals 0

    return-void
.end method

.method public constructor <init>()V
    .locals 1

    .line 24
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, 0x0

    .line 37
    iput-object v0, p0, Lcom/example/locationplugin/LocationPlugin;->locationManager:Landroid/location/LocationManager;

    .line 38
    iput-object v0, p0, Lcom/example/locationplugin/LocationPlugin;->callbackTarget:Ljava/lang/String;

    return-void
.end method

.method public static declared-synchronized getInstance()Lcom/example/locationplugin/LocationPlugin;
    .locals 2

    const-class v0, Lcom/example/locationplugin/LocationPlugin;

    monitor-enter v0

    .line 30
    :try_start_0
    sget-object v1, Lcom/example/locationplugin/LocationPlugin;->instance:Lcom/example/locationplugin/LocationPlugin;

    if-nez v1, :cond_0

    .line 32
    new-instance v1, Lcom/example/locationplugin/LocationPlugin;

    invoke-direct {v1}, Lcom/example/locationplugin/LocationPlugin;-><init>()V

    sput-object v1, Lcom/example/locationplugin/LocationPlugin;->instance:Lcom/example/locationplugin/LocationPlugin;

    .line 34
    :cond_0
    sget-object v1, Lcom/example/locationplugin/LocationPlugin;->instance:Lcom/example/locationplugin/LocationPlugin;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    monitor-exit v0

    return-object v1

    :catchall_0
    move-exception v1

    :try_start_1
    monitor-exit v0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    throw v1
.end method


# virtual methods
.method public onLocationChanged(Landroid/location/Location;)V
    .locals 7

    .line 76
    sget-object v0, Lcom/unity3d/player/UnityPlayer;->currentActivity:Landroid/app/Activity;

    .line 78
    invoke-virtual {p1}, Landroid/location/Location;->isFromMockProvider()Z

    move-result v0

    .line 81
    sget-object v1, Ljava/util/Locale;->UK:Ljava/util/Locale;

    .line 82
    invoke-virtual {p1}, Landroid/location/Location;->getLatitude()D

    move-result-wide v2

    invoke-static {v2, v3}, Ljava/lang/Double;->valueOf(D)Ljava/lang/Double;

    move-result-object v2

    .line 83
    invoke-virtual {p1}, Landroid/location/Location;->getLongitude()D

    move-result-wide v3

    invoke-static {v3, v4}, Ljava/lang/Double;->valueOf(D)Ljava/lang/Double;

    move-result-object v3

    .line 84
    invoke-virtual {p1}, Landroid/location/Location;->getSpeed()F

    move-result v4

    invoke-static {v4}, Ljava/lang/Float;->valueOf(F)Ljava/lang/Float;

    move-result-object v4

    .line 85
    invoke-virtual {p1}, Landroid/location/Location;->getAccuracy()F

    move-result p1

    invoke-static {p1}, Ljava/lang/Float;->valueOf(F)Ljava/lang/Float;

    move-result-object p1

    .line 86
    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const/4 v5, 0x5

    new-array v5, v5, [Ljava/lang/Object;

    const/4 v6, 0x0

    aput-object v2, v5, v6

    const/4 v2, 0x1

    aput-object v3, v5, v2

    const/4 v2, 0x2

    aput-object v4, v5, v2

    const/4 v2, 0x3

    aput-object p1, v5, v2

    const/4 p1, 0x4

    aput-object v0, v5, p1

    .line 81
    const-string p1, "%f\t%f\t%f\t%f\t%d"

    invoke-static {v1, p1, v5}, Ljava/lang/String;->format(Ljava/util/Locale;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p1

    .line 89
    iget-object v0, p0, Lcom/example/locationplugin/LocationPlugin;->callbackTarget:Ljava/lang/String;

    const-string v1, "OnUpdateLocation"

    invoke-static {v0, v1, p1}, Lcom/unity3d/player/UnityPlayer;->UnitySendMessage(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public onProviderDisabled(Ljava/lang/String;)V
    .locals 0

    return-void
.end method

.method public onProviderEnabled(Ljava/lang/String;)V
    .locals 0

    return-void
.end method

.method public onStatusChanged(Ljava/lang/String;ILandroid/os/Bundle;)V
    .locals 0

    return-void
.end method

.method public startUpdatingLocation(Ljava/lang/String;)Z
    .locals 11

    .line 41
    iput-object p1, p0, Lcom/example/locationplugin/LocationPlugin;->callbackTarget:Ljava/lang/String;

    .line 43
    sget-object p1, Lcom/unity3d/player/UnityPlayer;->currentActivity:Landroid/app/Activity;

    .line 44
    iget-object v0, p0, Lcom/example/locationplugin/LocationPlugin;->locationManager:Landroid/location/LocationManager;

    if-nez v0, :cond_0

    .line 46
    const-string v0, "location"

    invoke-virtual {p1, v0}, Landroid/app/Activity;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Landroid/location/LocationManager;

    iput-object v0, p0, Lcom/example/locationplugin/LocationPlugin;->locationManager:Landroid/location/LocationManager;

    .line 49
    :cond_0
    new-instance v0, Landroid/location/Criteria;

    invoke-direct {v0}, Landroid/location/Criteria;-><init>()V

    const/4 v1, 0x0

    .line 50
    invoke-virtual {v0, v1}, Landroid/location/Criteria;->setBearingRequired(Z)V

    .line 51
    iget-object v2, p0, Lcom/example/locationplugin/LocationPlugin;->locationManager:Landroid/location/LocationManager;

    const/4 v3, 0x1

    invoke-virtual {v2, v0, v3}, Landroid/location/LocationManager;->getProviders(Landroid/location/Criteria;Z)Ljava/util/List;

    move-result-object v0

    .line 52
    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v2

    if-ge v2, v3, :cond_1

    .line 53
    new-instance v0, Landroid/content/Intent;

    const-string v2, "android.settings.LOCATION_SOURCE_SETTINGS"

    invoke-direct {v0, v2}, Landroid/content/Intent;-><init>(Ljava/lang/String;)V

    .line 54
    invoke-virtual {p1, v0}, Landroid/app/Activity;->startActivity(Landroid/content/Intent;)V

    return v1

    .line 58
    :cond_1
    invoke-static {}, Landroid/os/Looper;->getMainLooper()Landroid/os/Looper;

    move-result-object v10

    .line 59
    invoke-interface {v0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object p1

    :goto_0
    invoke-interface {p1}, Ljava/util/Iterator;->hasNext()Z

    move-result v0

    if-eqz v0, :cond_2

    invoke-interface {p1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v0

    move-object v5, v0

    check-cast v5, Ljava/lang/String;

    .line 61
    iget-object v4, p0, Lcom/example/locationplugin/LocationPlugin;->locationManager:Landroid/location/LocationManager;

    const-wide/16 v6, 0x3e8

    const/4 v8, 0x0

    move-object v9, p0

    invoke-virtual/range {v4 .. v10}, Landroid/location/LocationManager;->requestLocationUpdates(Ljava/lang/String;JFLandroid/location/LocationListener;Landroid/os/Looper;)V

    goto :goto_0

    :cond_2
    return v3
.end method

.method public stopUpdatingLocation()V
    .locals 1

    .line 69
    iget-object v0, p0, Lcom/example/locationplugin/LocationPlugin;->locationManager:Landroid/location/LocationManager;

    if-eqz v0, :cond_0

    .line 71
    invoke-virtual {v0, p0}, Landroid/location/LocationManager;->removeUpdates(Landroid/location/LocationListener;)V

    :cond_0
    return-void
.end method
