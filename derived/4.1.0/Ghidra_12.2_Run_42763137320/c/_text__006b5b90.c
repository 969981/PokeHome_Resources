/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006b5b90; name: FUN_.text__006b5b90
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__006b5b90(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                        undefined8 param_5,undefined8 param_6)

{
  undefined8 *__s;
  byte bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 *puVar13;
  byte local_68 [4];
  undefined4 local_64;
  
  puVar13 = param_1 + 2;
  *param_1 = param_3;
  __s = param_1 + 1;
  FUN__text__006bc130(puVar13);
  FUN__text__006bc130(param_1 + 4);
  FUN__text__006bc130(param_1 + 0xc);
  *(undefined1 *)(param_1 + 0x45) = 0;
  param_1[0x44] = 0;
  param_1[0x43] = 0;
  bVar1 = *(byte *)(param_2 + 0x228) & 4;
  *(byte *)(param_1 + 0x45) = bVar1;
  bVar1 = *(byte *)(param_2 + 0x228) & 8 | bVar1;
  *(byte *)(param_1 + 0x45) = bVar1;
  *(byte *)(param_1 + 0x45) = *(byte *)(param_2 + 0x228) & 2 | bVar1;
  memset(__s,0,0x210);
  lVar7 = FUN__text__006b253c(*param_1,3);
  lVar8 = FUN__text__006b253c(*param_1,4);
  uVar9 = FUN__text__006a2854(param_6);
  if (lVar7 == 0) {
    if (lVar8 != 0) goto LAB__text__006b5e74;
    iVar5 = *(int *)(param_1 + 0x44);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x10);
    *__s = *(undefined8 *)(param_2 + 8);
    param_1[2] = uVar2;
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    uVar3 = *(undefined8 *)(param_2 + 0x20);
    uVar4 = *(undefined8 *)(param_2 + 0x30);
    param_1[5] = *(undefined8 *)(param_2 + 0x28);
    param_1[6] = uVar4;
    param_1[3] = uVar2;
    param_1[4] = uVar3;
    uVar2 = *(undefined8 *)(param_2 + 0x38);
    uVar3 = *(undefined8 *)(param_2 + 0x40);
    uVar4 = *(undefined8 *)(param_2 + 0x50);
    param_1[9] = *(undefined8 *)(param_2 + 0x48);
    param_1[10] = uVar4;
    param_1[7] = uVar2;
    param_1[8] = uVar3;
    if ((*(byte *)(lVar7 + 0x14) & 1) != 0) {
      puVar10 = (undefined8 *)(**(code **)(**(long **)(param_2 + 0x28) + 0x48))();
      if (((*_DAT_008a6898 & 1) == 0) && (iVar5 = __cxa_guard_acquire(_DAT_008a6898), iVar5 != 0)) {
        if (((*_DAT_008a68a8 & 1) == 0) && (iVar5 = __cxa_guard_acquire(_DAT_008a68a8), iVar5 != 0))
        {
          *_DAT_008a68b0 = 0;
          __cxa_guard_release(_DAT_008a68a8);
        }
        *_DAT_008a68a0 = _DAT_008a68b0;
        __cxa_guard_release(_DAT_008a6898);
      }
      if (puVar10 == (undefined8 *)0x0) {
LAB__text__006b5cf8:
        puVar10 = (undefined8 *)0x0;
      }
      else {
        puVar11 = (undefined8 *)(**(code **)*puVar10)(puVar10);
        if (puVar11 != _DAT_008a68a0) {
          do {
            puVar11 = (undefined8 *)*puVar11;
          } while (puVar11 != _DAT_008a68a0 && puVar11 != (undefined8 *)0x0);
          if (puVar11 == (undefined8 *)0x0) goto LAB__text__006b5cf8;
        }
      }
      lVar12 = FUN__text__006a4900(uVar9,0,puVar10);
      FUN__text__006bc174(param_1 + 4,*(undefined8 *)(lVar12 + 8));
    }
    if ((*(uint *)(lVar7 + 0xc) & 1) == 0) {
      if ((*(uint *)(lVar7 + 0xc) >> 1 & 1) != 0) {
        puVar10 = (undefined8 *)(**(code **)(**(long **)(param_2 + 0x18) + 0x48))();
        if (((*_DAT_008a69f8 & 1) == 0) && (iVar5 = __cxa_guard_acquire(_DAT_008a69f8), iVar5 != 0))
        {
          if (((*_DAT_008a68a8 & 1) == 0) &&
             (iVar5 = __cxa_guard_acquire(_DAT_008a68a8), iVar5 != 0)) {
            *_DAT_008a68b0 = 0;
            __cxa_guard_release(_DAT_008a68a8);
          }
          *_DAT_008a6a00 = _DAT_008a68b0;
          __cxa_guard_release(_DAT_008a69f8);
        }
        if (puVar10 == (undefined8 *)0x0) {
LAB__text__006b5d84:
          puVar10 = (undefined8 *)0x0;
        }
        else {
          puVar11 = (undefined8 *)(**(code **)*puVar10)(puVar10);
          if (puVar11 != _DAT_008a6a00) {
            do {
              puVar11 = (undefined8 *)*puVar11;
            } while (puVar11 != _DAT_008a6a00 && puVar11 != (undefined8 *)0x0);
            if (puVar11 == (undefined8 *)0x0) goto LAB__text__006b5d84;
          }
        }
        lVar12 = FUN__text__006a4aa4(uVar9,param_4,param_5,puVar10);
        FUN__text__006bc174(puVar13,*(undefined8 *)(lVar12 + 8));
        *(byte *)(param_1 + 0x45) = *(byte *)(param_1 + 0x45) | 1;
      }
      param_1[9] = 0;
      *(undefined1 *)((long)param_1 + 0x54) = 0;
    }
    else {
      local_68[0] = 0;
      puVar10 = (undefined8 *)(**(code **)(**(long **)(param_2 + 0x18) + 0x48))();
      if (((*_DAT_008a6898 & 1) == 0) && (iVar5 = __cxa_guard_acquire(_DAT_008a6898), iVar5 != 0)) {
        if (((*_DAT_008a68a8 & 1) == 0) && (iVar5 = __cxa_guard_acquire(_DAT_008a68a8), iVar5 != 0))
        {
          *_DAT_008a68b0 = 0;
          __cxa_guard_release(_DAT_008a68a8);
        }
        *_DAT_008a68a0 = _DAT_008a68b0;
        __cxa_guard_release(_DAT_008a6898);
      }
      if (puVar10 == (undefined8 *)0x0) {
LAB__text__006b5e34:
        puVar10 = (undefined8 *)0x0;
      }
      else {
        puVar11 = (undefined8 *)(**(code **)*puVar10)(puVar10);
        if (puVar11 != _DAT_008a68a0) {
          do {
            puVar11 = (undefined8 *)*puVar11;
          } while (puVar11 != _DAT_008a68a0 && puVar11 != (undefined8 *)0x0);
          if (puVar11 == (undefined8 *)0x0) goto LAB__text__006b5e34;
        }
      }
      lVar12 = FUN__text__006a4900(uVar9,local_68,puVar10);
      *(byte *)(param_1 + 0x45) = *(byte *)(param_1 + 0x45) & 0xfe | local_68[0];
      FUN__text__006bc174(puVar13,*(undefined8 *)(lVar12 + 8));
      param_1[9] = 0;
      *(undefined1 *)((long)param_1 + 0x54) = 0;
    }
    if (lVar8 != 0) {
LAB__text__006b5e74:
      memcpy(param_1 + 0xb,(void *)(param_2 + 0x58),0x1c0);
      puVar13 = (undefined8 *)(**(code **)(**(long **)(param_2 + 0x68) + 0x48))();
      if (((*_DAT_008a6898 & 1) == 0) && (iVar5 = __cxa_guard_acquire(_DAT_008a6898), iVar5 != 0)) {
        if (((*_DAT_008a68a8 & 1) == 0) && (iVar5 = __cxa_guard_acquire(_DAT_008a68a8), iVar5 != 0))
        {
          *_DAT_008a68b0 = 0;
          __cxa_guard_release(_DAT_008a68a8);
        }
        *_DAT_008a68a0 = _DAT_008a68b0;
        __cxa_guard_release(_DAT_008a6898);
      }
      if (puVar13 == (undefined8 *)0x0) {
LAB__text__006b5ee4:
        puVar13 = (undefined8 *)0x0;
      }
      else {
        puVar10 = (undefined8 *)(**(code **)*puVar13)(puVar13);
        if (puVar10 != _DAT_008a68a0) {
          do {
            puVar10 = (undefined8 *)*puVar10;
          } while (puVar10 != _DAT_008a68a0 && puVar10 != (undefined8 *)0x0);
          if (puVar10 == (undefined8 *)0x0) goto LAB__text__006b5ee4;
        }
      }
      lVar12 = FUN__text__006a4900(uVar9,0,puVar13);
      FUN__text__006bc174(param_1 + 0xc,*(undefined8 *)(lVar12 + 8));
      uVar9 = *(undefined8 *)(lVar12 + 0x20);
      param_1[0x10] = 0;
      param_1[0x11] = 0;
      param_1[0x12] = 0;
      *(undefined1 *)(param_1 + 0x13) = 0;
      param_1[0xe] = uVar9;
      param_1[0xf] = 0;
      FUN__text__006b5ad0(param_1,param_4,param_5,lVar7,lVar8);
      goto LAB__text__006b5f90;
    }
    local_64 = 1;
    lVar7 = FUN__text__006a4248(param_5,param_4,0x4b53414d,1,&local_64);
    param_1[0x43] = lVar7;
    iVar5 = FUN__text__006c0d80(*(undefined8 *)(lVar7 + 0x38),0x4b53414d,1,&local_64);
    *(int *)(param_1 + 0x44) = iVar5;
  }
  lVar7 = *(long *)(param_1[0x43] + 0x30);
  iVar6 = FUN__text__006b1998();
  *(undefined4 *)((long)param_1 + 0x224) = *(undefined4 *)(lVar7 + (long)(iVar6 * iVar5) * 4);
LAB__text__006b5f90:
  *__s = 0;
  param_1[0xb] = 0;
  return;
}


