/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003164cc; name: FUN_.text__003164cc
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN__text__003164cc(long param_1)

{
  char *pcVar1;
  char *__s;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  size_t sVar8;
  ulong uVar9;
  longlong lVar10;
  long lVar11;
  ulong uVar12;
  byte *pbVar13;
  undefined1 uVar14;
  undefined8 local_24e0;
  int local_24d8;
  undefined8 local_24d0;
  undefined8 uStack_24c8;
  undefined8 local_24c0;
  undefined8 uStack_24b8;
  byte *local_24b0;
  undefined8 local_24a8;
  int local_24a0;
  undefined8 local_2498;
  undefined8 uStack_2490;
  undefined8 local_2488;
  undefined8 uStack_2480;
  byte *local_2478;
  undefined1 uStack_2469;
  byte *local_2468;
  undefined8 uStack_2460;
  undefined8 local_2458;
  undefined8 uStack_2450;
  undefined8 local_1868;
  undefined8 local_1860;
  undefined8 local_1858;
  undefined8 local_1850;
  undefined8 local_1848;
  undefined8 local_1840;
  undefined8 local_1838;
  undefined8 local_1830;
  long local_c68 [385];
  
  __s = (char *)(param_1 + 0x13560a0);
  iVar4 = FUN__text__0064baec(param_1 + 0x2ff2420);
  uVar6 = FUN__text__0064c260();
  FUN__text__005f559c(&uStack_2469,uVar6,1,1);
  lVar7 = FUN__text__0064bad0(param_1 + 0x2ff2420);
  FUN__text__00317c34(param_1,*(undefined8 *)(lVar7 + 8));
  local_c68[6] = 0;
  local_c68[5] = 0;
  local_c68[4] = 1;
  local_c68[0] = 0x1e00000;
  local_c68[1] = 0x1e00000;
  local_c68[2] = 0x1e00000;
  local_c68[3] = 0x400;
  sVar8 = strlen(__s);
  local_1868 = 0;
  local_1860 = (ulong)local_1860._4_4_ << 0x20;
  local_1850 = 0;
  local_1848 = 0;
  local_1858 = 0xffffffff;
  local_1840 = 0;
  iVar5 = FUN__text__003dd89c(&local_1868,local_c68);
  local_24a8 = local_1868;
  if (iVar5 != 0) {
    local_1860 = CONCAT44(local_1860._4_4_,0xe);
    local_24a0 = 0xe;
    local_1868 = 0;
    local_2478 = (byte *)0x0;
    local_2498 = local_1858;
    uStack_2490 = local_1850;
    local_1850 = 0;
    local_2488 = local_1848;
    uStack_2480 = local_1840;
    FUN__text__003dd6cc(&local_1868);
    pbVar13 = (byte *)0x0;
    goto LAB__text__0031756c;
  }
  iVar5 = FUN__text__003ddea8(&local_1868,__s,__s + sVar8);
  if (iVar5 == 0) {
    FUN__text__003dd208(&local_2468,&local_1868,0);
    local_24a8 = local_1868;
    local_2478 = local_2468;
    uStack_2490 = local_1850;
    iVar5 = (int)local_1860;
  }
  else {
    local_2478 = (byte *)0x0;
    local_24a8 = local_1868;
    uStack_2490 = local_1850;
    iVar5 = (int)local_1860;
  }
  pbVar13 = local_2478;
  local_1868 = 0;
  local_1850 = 0;
  local_2488 = local_1848;
  uStack_2480 = local_1840;
  local_24a0 = iVar5;
  local_2498 = local_1858;
  FUN__text__003dd6cc(&local_1868);
  if (iVar5 != 0) goto LAB__text__0031756c;
  memset(__s,0,10000000);
  local_c68[7] = 0;
  local_c68[6] = 0;
  local_c68[5] = 0;
  local_c68[4] = 0;
  local_c68[3] = 0;
  local_c68[2] = 0;
  local_c68[1] = 0;
  local_c68[0] = 0;
  uVar9 = FUN__text__00317e00(param_1,local_c68,0x710fb3,pbVar13);
  if ((uVar9 & 1) == 0) goto LAB__text__0031756c;
  iVar4 = atoi((char *)local_c68);
  lVar7 = FUN__text__00321ac0();
  local_c68[7] = 0;
  local_c68[6] = 0;
  local_c68[5] = 0;
  local_c68[4] = 0;
  local_c68[3] = 0;
  local_c68[2] = 0;
  local_c68[1] = 0;
  local_c68[0] = 0;
  uVar9 = FUN__text__00317e00(param_1,local_c68,*(undefined8 *)(param_1 + 0x50),pbVar13);
  if ((uVar9 & 1) != 0) {
    iVar5 = atoi((char *)local_c68);
    *(int *)(lVar7 + 0x7a878) = iVar5;
  }
  local_c68[7] = 0;
  local_c68[6] = 0;
  local_c68[5] = 0;
  local_c68[4] = 0;
  local_c68[3] = 0;
  local_c68[2] = 0;
  local_c68[1] = 0;
  local_c68[0] = 0;
  uVar9 = FUN__text__00317e00(param_1,local_c68,*(undefined8 *)(param_1 + 0x38),pbVar13);
  if ((uVar9 & 1) != 0) {
    iVar5 = atoi((char *)local_c68);
    *(int *)(param_1 + 0x31270b8) = iVar5;
  }
  lVar7 = FUN__text__00321ac0();
  FUN__text__00317e00(param_1,lVar7 + 0x934dd,*(undefined8 *)(param_1 + 0x40),pbVar13);
  lVar7 = FUN__text__00321ac0();
  local_c68[7] = 0;
  local_c68[6] = 0;
  local_c68[5] = 0;
  local_c68[4] = 0;
  local_c68[3] = 0;
  local_c68[2] = 0;
  local_c68[1] = 0;
  local_c68[0] = 0;
  uVar9 = FUN__text__00317e00(param_1,local_c68,*(undefined8 *)(param_1 + 0x48),pbVar13);
  if ((uVar9 & 1) != 0) {
    lVar10 = atoll((char *)local_c68);
    *(longlong *)(lVar7 + 0x93520) = lVar10;
  }
  pcVar1 = (char *)(param_1 + 0x68);
  uVar9 = FUN__text__00318020(param_1,pcVar1,0x711c24,pbVar13);
  if ((uVar9 & 1) == 0) goto LAB__text__0031756c;
  FUN__text__00318240(param_1,pcVar1);
  local_c68[4] = 1;
  local_c68[6] = 0;
  local_c68[5] = 0;
  local_c68[0] = 0x1e00000;
  local_c68[1] = 0x1e00000;
  local_c68[2] = 0x1e00000;
  local_c68[3] = 0x400;
  sVar8 = strlen(pcVar1);
  local_1868 = 0;
  local_1860 = local_1860 & 0xffffffff00000000;
  local_1850 = 0;
  local_1848 = 0;
  local_1858 = 0xffffffff;
  local_1840 = 0;
  iVar5 = FUN__text__003dd89c(&local_1868,local_c68);
  local_24e0 = local_1868;
  if (iVar5 == 0) {
    iVar5 = FUN__text__003ddea8(&local_1868,pcVar1,pcVar1 + sVar8);
    if (iVar5 == 0) {
      FUN__text__003dd208(&local_2468,&local_1868,0);
      local_24e0 = local_1868;
      local_24b0 = local_2468;
      uStack_24c8 = local_1850;
      iVar5 = (int)local_1860;
    }
    else {
      local_24b0 = (byte *)0x0;
      local_24e0 = local_1868;
      uStack_24c8 = local_1850;
      iVar5 = (int)local_1860;
    }
    pbVar13 = local_24b0;
    local_1868 = 0;
    local_1850 = 0;
    local_24c0 = local_1848;
    uStack_24b8 = local_1840;
    local_24d8 = iVar5;
    local_24d0 = local_1858;
    FUN__text__003dd6cc(&local_1868);
    if (iVar5 == 0) {
      local_c68[7] = 0;
      local_c68[6] = 0;
      local_c68[5] = 0;
      local_c68[4] = 0;
      local_c68[3] = 0;
      local_c68[2] = 0;
      local_c68[1] = 0;
      local_c68[0] = 0;
      uVar9 = FUN__text__00317e00(param_1,local_c68,0x71b89c,pbVar13);
      if ((uVar9 & 1) == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = atoi((char *)local_c68);
      }
      lVar7 = FUN__text__0030d5f0();
      if (*(int *)(lVar7 + 0x13b4) < iVar5) {
        lVar7 = FUN__text__00321ac0();
        *(undefined1 *)(lVar7 + 0x9a40) = 1;
      }
      if (pbVar13 == (byte *)0x0) goto LAB__text__003175cc;
      memset(local_c68,0,0xc00);
      FUN__text__0031bf00(param_1,local_c68,0x71dae2,pbVar13);
      lVar7 = FUN__text__00110d14();
      memcpy((void *)(lVar7 + 0x730),local_c68,0xbff);
      *(undefined1 *)(lVar7 + 0x132f) = 0;
      memset(&local_1868,0,0xc00);
      FUN__text__0031bf00(param_1,&local_1868,0x720262,pbVar13);
      lVar7 = FUN__text__00110d14();
      memcpy((void *)(lVar7 + 0x1330),&local_1868,0xbff);
      *(undefined1 *)(lVar7 + 0x1f2f) = 0;
      memset(&local_2468,0,0xc00);
      FUN__text__0031bf00(param_1,&local_2468,0x720269,pbVar13);
      lVar7 = FUN__text__00110d14();
      *(undefined1 *)(lVar7 + 0x2b2f) = 0;
      memcpy((void *)(lVar7 + 0x1f30),&local_2468,0xbff);
      lVar7 = FUN__text__00321ac0();
      FUN__text__00319030(param_1,lVar7 + 0x193530,0x70d154,pbVar13);
      FUN__text__00319250(param_1,param_1 + 0x3946294,0x71ac81,pbVar13);
      lVar7 = FUN__text__0030d5f0();
      FUN__text__00319470(param_1,lVar7 + 0x121d,0x70af1a,pbVar13);
      FUN__text__00319690(param_1,param_1 + 0x3951c0c,0x717e01,pbVar13);
      FUN__text__00319030(param_1,param_1 + 0x3951d0c,0x71330f,pbVar13);
      FUN__text__00319030(param_1,param_1 + 0x3951d8c,0x716adf,pbVar13);
      uVar6 = FUN__text__00321ac0();
      FUN__text__003198b0(param_1,uVar6,0x71f488,pbVar13);
      lVar7 = FUN__text__00321ac0();
      FUN__text__00319ad0(param_1,lVar7 + 0x79f88,0x70f9d9,pbVar13);
      lVar7 = FUN__text__00321ac0();
      FUN__text__00319ad0(param_1,lVar7 + 0x79fa8,0x71f48f,pbVar13);
      lVar7 = FUN__text__00321ac0();
      FUN__text__00319ad0(param_1,lVar7 + 0x79fa8,0x720f35,pbVar13);
      lVar7 = FUN__text__00321ac0();
      if (*(char *)(lVar7 + 0x79fa8) != '\0') {
        lVar7 = FUN__text__0030d5f0();
        lVar11 = FUN__text__00321ac0();
        uVar2 = *(undefined8 *)(lVar11 + 0x79fc0);
        uVar6 = *(undefined8 *)(lVar11 + 0x79fa8);
        uVar3 = *(undefined8 *)(lVar11 + 0x79fb0);
        *(undefined8 *)(lVar7 + 0x50cdc0) = *(undefined8 *)(lVar11 + 0x79fb8);
        *(undefined8 *)(lVar7 + 0x50cdc8) = uVar2;
        *(undefined8 *)(lVar7 + 0x50cdb0) = uVar6;
        *(undefined8 *)(lVar7 + 0x50cdb8) = uVar3;
      }
      local_1830 = 0;
      local_1838 = 0;
      local_1840 = 0;
      local_1848 = 0;
      local_1850 = 0;
      local_1858 = 0;
      local_1860 = 0;
      local_1868 = 0;
      FUN__text__00317e00(param_1,&local_1868,0x70af20,pbVar13);
      lVar7 = FUN__text__00321ac0();
      local_c68[7] = 0;
      local_c68[6] = 0;
      local_c68[5] = 0;
      local_c68[4] = 0;
      local_c68[3] = 0;
      local_c68[2] = 0;
      local_c68[1] = 0;
      local_c68[0] = 0;
      uVar9 = FUN__text__00317e00(param_1,local_c68,0x720f3c,pbVar13);
      if ((uVar9 & 1) != 0) {
        iVar5 = atoi((char *)local_c68);
        *(int *)(lVar7 + 0x9a30) = iVar5;
      }
      lVar7 = FUN__text__00321ac0();
      local_c68[7] = 0;
      local_c68[6] = 0;
      local_c68[5] = 0;
      local_c68[4] = 0;
      local_c68[3] = 0;
      local_c68[2] = 0;
      local_c68[1] = 0;
      local_c68[0] = 0;
      uVar9 = FUN__text__00317e00(param_1,local_c68,0x71cf2a,pbVar13);
      if ((uVar9 & 1) != 0) {
        iVar5 = atoi((char *)local_c68);
        *(int *)(lVar7 + 0x79fc8) = iVar5;
      }
      lVar7 = FUN__text__00321ac0();
      local_c68[7] = 0;
      local_c68[6] = 0;
      local_c68[5] = 0;
      local_c68[4] = 0;
      local_c68[3] = 0;
      local_c68[2] = 0;
      local_c68[1] = 0;
      local_c68[0] = 0;
      uVar9 = FUN__text__00317e00(param_1,local_c68,0x70dbc9,pbVar13);
      if ((uVar9 & 1) != 0) {
        iVar5 = atoi((char *)local_c68);
        *(int *)(lVar7 + 0x1935b8) = iVar5;
      }
      pcVar1 = (char *)(param_1 + 0x3951e0c);
      lVar7 = FUN__text__00321ac0();
      local_c68[7] = 0;
      local_c68[6] = 0;
      local_c68[5] = 0;
      local_c68[4] = 0;
      local_c68[3] = 0;
      local_c68[2] = 0;
      local_c68[1] = 0;
      local_c68[0] = 0;
      uVar9 = FUN__text__00317e00(param_1,local_c68,0x71ac87,pbVar13);
      if ((uVar9 & 1) != 0) {
        iVar5 = atoi((char *)local_c68);
        *(int *)(lVar7 + 0x79fcc) = iVar5;
      }
      uVar9 = FUN__text__00333440();
      if ((uVar9 & 1) != 0) {
        *(undefined1 *)(param_1 + 0x3951e2c) = 1;
      }
      lVar7 = FUN__text__00321ac0();
      local_c68[7] = 0;
      local_c68[6] = 0;
      local_c68[5] = 0;
      local_c68[4] = 0;
      local_c68[3] = 0;
      local_c68[2] = 0;
      local_c68[1] = 0;
      local_c68[0] = 0;
      uVar9 = FUN__text__00317e00(param_1,local_c68,0x716ae6,pbVar13);
      if ((uVar9 & 1) != 0) {
        iVar5 = atoi((char *)local_c68);
        *(int *)(lVar7 + 0x79fd0) = iVar5;
      }
      lVar7 = FUN__text__00321ac0();
      local_c68[7] = 0;
      local_c68[6] = 0;
      local_c68[5] = 0;
      local_c68[4] = 0;
      local_c68[3] = 0;
      local_c68[2] = 0;
      local_c68[1] = 0;
      local_c68[0] = 0;
      uVar9 = FUN__text__00317e00(param_1,local_c68,0x711c28,pbVar13);
      if ((uVar9 & 1) != 0) {
        iVar5 = atoi((char *)local_c68);
        *(int *)(lVar7 + 0x79fd4) = iVar5;
      }
      lVar7 = FUN__text__00321ac0();
      local_c68[7] = 0;
      local_c68[6] = 0;
      local_c68[5] = 0;
      local_c68[4] = 0;
      local_c68[3] = 0;
      local_c68[2] = 0;
      local_c68[1] = 0;
      local_c68[0] = 0;
      uVar9 = FUN__text__00317e00(param_1,local_c68,0x70af2a,pbVar13);
      if ((uVar9 & 1) != 0) {
        iVar5 = atoi((char *)local_c68);
        *(int *)(lVar7 + 0x79fd8) = iVar5;
      }
      lVar7 = FUN__text__00321ac0();
      local_c68[7] = 0;
      local_c68[6] = 0;
      local_c68[5] = 0;
      local_c68[4] = 0;
      local_c68[3] = 0;
      local_c68[2] = 0;
      local_c68[1] = 0;
      local_c68[0] = 0;
      uVar9 = FUN__text__00317e00(param_1,local_c68,0x71b8a3,pbVar13);
      if ((uVar9 & 1) != 0) {
        iVar5 = atoi((char *)local_c68);
        *(int *)(lVar7 + 0x79fe0) = iVar5;
      }
      lVar7 = FUN__text__00321ac0();
      local_c68[7] = 0;
      local_c68[6] = 0;
      local_c68[5] = 0;
      local_c68[4] = 0;
      local_c68[3] = 0;
      local_c68[2] = 0;
      local_c68[1] = 0;
      local_c68[0] = 0;
      uVar9 = FUN__text__00317e00(param_1,local_c68,0x71b8ac,pbVar13);
      if ((uVar9 & 1) != 0) {
        iVar5 = atoi((char *)local_c68);
        *(int *)(lVar7 + 0x79fe4) = iVar5;
      }
      lVar7 = FUN__text__00321ac0();
      local_c68[7] = 0;
      local_c68[6] = 0;
      local_c68[5] = 0;
      local_c68[4] = 0;
      local_c68[3] = 0;
      local_c68[2] = 0;
      local_c68[1] = 0;
      local_c68[0] = 0;
      uVar9 = FUN__text__00317e00(param_1,local_c68,0x717e08,pbVar13);
      if ((uVar9 & 1) != 0) {
        iVar5 = atoi((char *)local_c68);
        *(int *)(lVar7 + 0x934c8) = iVar5;
      }
      lVar7 = FUN__text__00321ac0();
      if (*(int *)(lVar7 + 0x934c8) != 0) {
        local_c68[0] = 0;
        iVar5 = nn::time::StandardNetworkSystemClock::GetCurrentTime((PosixTime *)local_c68);
        if (iVar5 == 0) {
          lVar7 = FUN__text__00321ac0();
          if (local_c68[0] < *(int *)(lVar7 + 0x934c8)) {
            lVar7 = FUN__text__00321ac0();
            FUN__text__00319ad0(param_1,lVar7 + 0x934a4,0x71e77d,pbVar13);
            *(undefined1 *)(param_1 + 0x3951e2c) = 1;
            goto LAB__text__003170cc;
          }
        }
        lVar7 = FUN__text__00321ac0();
        *(undefined4 *)(lVar7 + 0x934c8) = 0;
      }
LAB__text__003170cc:
      local_c68[7] = 0;
      local_c68[6] = 0;
      local_c68[5] = 0;
      local_c68[4] = 0;
      local_c68[3] = 0;
      local_c68[2] = 0;
      local_c68[1] = 0;
      local_c68[0] = 0;
      uVar9 = FUN__text__00317e00(param_1,local_c68,0x71dad7,pbVar13);
      if ((uVar9 & 1) != 0) {
        iVar5 = atoi((char *)local_c68);
        if (iVar5 - 1U < 2) {
          lVar7 = FUN__text__00321ac0();
          *(uint *)(lVar7 + 0x7b06c) = iVar5 - 1U;
        }
      }
      lVar7 = FUN__text__00321ac0();
      local_c68[7] = 0;
      local_c68[6] = 0;
      local_c68[5] = 0;
      local_c68[4] = 0;
      local_c68[3] = 0;
      local_c68[2] = 0;
      local_c68[1] = 0;
      local_c68[0] = 0;
      uVar9 = FUN__text__00317e00(param_1,local_c68,0x71c2f0,pbVar13);
      if ((uVar9 & 1) != 0) {
        iVar5 = atoi((char *)local_c68);
        *(int *)(lVar7 + 0x7b070) = iVar5;
      }
      lVar7 = FUN__text__00321ac0();
      local_c68[7] = 0;
      local_c68[6] = 0;
      local_c68[5] = 0;
      local_c68[4] = 0;
      local_c68[3] = 0;
      local_c68[2] = 0;
      local_c68[1] = 0;
      local_c68[0] = 0;
      uVar9 = FUN__text__00317e00(param_1,local_c68,0x713316,pbVar13);
      if ((uVar9 & 1) != 0) {
        iVar5 = atoi((char *)local_c68);
        *(int *)(lVar7 + 0x7b074) = iVar5;
      }
      local_c68[7] = 0;
      local_c68[6] = 0;
      local_c68[5] = 0;
      local_c68[4] = 0;
      local_c68[3] = 0;
      local_c68[2] = 0;
      local_c68[1] = 0;
      local_c68[0] = 0;
      uVar9 = FUN__text__00317e00(param_1,local_c68,0x71dacb,pbVar13);
      if ((uVar9 & 1) != 0) {
        iVar5 = atoi((char *)local_c68);
        if (iVar5 == 1) {
          lVar7 = FUN__text__00321ac0();
          *(undefined4 *)(lVar7 + 0x7b070) = 0;
        }
      }
      local_2458 = 0;
      uStack_2450 = 0;
      local_2468 = (byte *)0x0;
      uStack_2460 = 0;
      iVar5 = snprintf((char *)&local_2468,0x20,(char *)0x716aef,0);
      lVar7 = FUN__text__00321ac0(iVar5);
      local_c68[7] = 0;
      local_c68[6] = 0;
      local_c68[5] = 0;
      local_c68[4] = 0;
      local_c68[3] = 0;
      local_c68[2] = 0;
      local_c68[1] = 0;
      local_c68[0] = 0;
      uVar9 = FUN__text__00317e00(param_1,local_c68,&local_2468,pbVar13);
      if ((uVar9 & 1) != 0) {
        uVar9 = 0;
        do {
          lVar11 = uVar9 * 8;
          lVar10 = atoll((char *)local_c68);
          uVar9 = uVar9 + 1;
          *(longlong *)(lVar7 + lVar11 + 0x7a078) = lVar10;
          local_2458 = 0;
          uStack_2450 = 0;
          local_2468 = (byte *)0x0;
          uStack_2460 = 0;
          iVar5 = snprintf((char *)&local_2468,0x20,(char *)0x716aef,uVar9 & 0xffffffff);
          lVar7 = FUN__text__00321ac0(iVar5);
          local_c68[7] = 0;
          local_c68[6] = 0;
          local_c68[5] = 0;
          local_c68[4] = 0;
          local_c68[3] = 0;
          local_c68[2] = 0;
          local_c68[1] = 0;
          local_c68[0] = 0;
          uVar12 = FUN__text__00317e00(param_1,local_c68,&local_2468,pbVar13);
        } while ((uVar12 & 1) != 0);
      }
      FUN__text__00319ad0(param_1,pcVar1,0x718ada,pbVar13);
      if (*pcVar1 != '\0') {
        iVar5 = atoi(pcVar1);
        if (iVar5 == 0) {
          uVar14 = 0;
LAB__text__00317394:
          lVar7 = FUN__text__00321ac0();
          *(undefined1 *)(lVar7 + 0x9a24) = uVar14;
        }
        else if (iVar5 == 9) {
          uVar14 = 1;
          goto LAB__text__00317394;
        }
        *(undefined8 *)(param_1 + 0x3951e1c) = 0;
        *(undefined8 *)(param_1 + 0x3951e24) = 0;
        pcVar1[0] = '\0';
        pcVar1[1] = '\0';
        pcVar1[2] = '\0';
        pcVar1[3] = '\0';
        pcVar1[4] = '\0';
        pcVar1[5] = '\0';
        pcVar1[6] = '\0';
        pcVar1[7] = '\0';
        *(undefined8 *)(param_1 + 0x3951e14) = 0;
      }
      FUN__text__00318020(param_1,__s,0x70c59d,pbVar13);
      if (*(char *)(param_1 + 0x39674e0) != '\0' || *__s != '\0') {
        if (*(char *)(param_1 + 0x39674e0) != '\0') {
          lVar7 = FUN__text__00321ac0();
          memset((void *)(lVar7 + 0x9a48),0,0x382a0);
        }
        FUN__text__00319cf0(param_1);
        memset(__s,0,10000000);
      }
      FUN__text__0031a160(param_1,pbVar13);
      uVar9 = FUN__text__0031cb40(param_1,pbVar13);
      if ((uVar9 & 1) == 0) {
        FUN__text__00304fc8(*_DAT_008a1478,1);
      }
      uVar9 = FUN__text__0031ce60(param_1,pbVar13);
      if ((uVar9 & 1) == 0) {
        FUN__text__00304fc8(*_DAT_008a1478,1);
      }
      FUN__text__0031a3c0(param_1,pbVar13);
      local_c68[7] = 0;
      local_c68[6] = 0;
      local_c68[5] = 0;
      local_c68[4] = 0;
      local_c68[3] = 0;
      local_c68[2] = 0;
      local_c68[1] = 0;
      local_c68[0] = 0;
      uVar9 = FUN__text__00317e00(param_1,local_c68,0x713e42,pbVar13);
      if ((uVar9 & 1) != 0) {
        iVar5 = atoi((char *)local_c68);
        lVar7 = FUN__text__00304b90();
        if ((lVar7 != 0) && (*(int *)(lVar7 + 4) != iVar5)) {
          if (DAT_008e1d78 == 0) {
LAB__text__003175cc:
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl();
          }
          FUN__text__003059a4(DAT_008e1d78,0);
        }
      }
      uVar9 = FUN__text__0031a614(param_1,pbVar13);
      if ((uVar9 & 1) == 0) {
        *(undefined4 *)(param_1 + 0x3951c00) = 30000;
        iVar4 = 0;
      }
      else {
        memset((void *)(param_1 + 0x1cdf720),0,10000000);
      }
      pbVar13 = local_24b0;
    }
    local_24b0 = (byte *)0x0;
    if (pbVar13 != (byte *)0x0) {
      if (*pbVar13 - 6 < 5) {
        FUN__text__0031d370(pbVar13);
      }
      operator_delete(pbVar13);
    }
  }
  else {
    local_1860 = CONCAT44(local_1860._4_4_,0xe);
    local_24d8 = 0xe;
    local_1868 = 0;
    local_24d0 = local_1858;
    uStack_24c8 = local_1850;
    local_1850 = 0;
    local_24c0 = local_1848;
    uStack_24b8 = local_1840;
    FUN__text__003dd6cc(&local_1868);
    local_24b0 = (byte *)0x0;
  }
  FUN__text__003dd6cc(&local_24e0);
  pbVar13 = local_2478;
LAB__text__0031756c:
  local_2478 = (byte *)0x0;
  if (pbVar13 != (byte *)0x0) {
    if (*pbVar13 - 6 < 5) {
      FUN__text__0031d370(pbVar13);
    }
    operator_delete(pbVar13);
  }
  FUN__text__003dd6cc(&local_24a8);
  FUN__text__005f5690(&uStack_2469);
  return iVar4;
}


