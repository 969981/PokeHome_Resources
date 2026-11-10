/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0042a540; name: FUN_.text__0042a540
 */


undefined8
FUN__text__0042a540(long param_1,undefined4 param_2,undefined4 param_3,uint param_4,uint param_5,
                   undefined4 param_6,undefined4 param_7,undefined8 param_8,undefined4 param_9)

{
  uint *puVar1;
  void *pvVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  ushort *puVar5;
  ulong uVar6;
  void *pvVar7;
  uint uVar8;
  ushort *puVar9;
  long lVar10;
  long lVar11;
  void *__dest;
  long lVar12;
  undefined4 *local_28;
  
  local_28 = (undefined4 *)0x0;
  uVar4 = FUN__text__004324b0(param_1 + 0x50,3,*(undefined4 *)(param_1 + 0x10),param_2,param_3,
                              param_4,param_5,param_6,param_7,param_8,param_9,&local_28);
  if ((int)uVar4 != 1) {
    return uVar4;
  }
  if (local_28 != (undefined4 *)0x0) {
    puVar3 = local_28;
    for (lVar12 = *(long *)(param_1 + 0x90); local_28 = puVar3, lVar12 != 0;
        lVar12 = *(long *)(lVar12 + 0x70)) {
      FUN__text__00432b54(lVar12 + 0x78,puVar3);
      FUN__text__00433670(lVar12 + 8,(ulong)CONCAT14(*(undefined1 *)((long)puVar3 + 0xd),*puVar3));
      puVar3 = local_28;
    }
  }
  lVar12 = *(long *)(param_1 + 0x60);
  uVar8 = *(uint *)(param_1 + 0x68);
  uVar6 = (ulong)uVar8;
  if (uVar8 == 0) {
    uVar6 = 0;
    lVar11 = lVar12;
  }
  else {
    lVar11 = lVar12 + (ulong)uVar8 * 8;
    lVar10 = 0;
    do {
      if ((uint)*(ushort *)(lVar12 + lVar10) == (param_5 & 0xffff)) {
        lVar11 = lVar12 + lVar10;
        *(char *)(lVar11 + 2) = (char)param_4;
        lVar12 = *(long *)(param_1 + 0x60);
        uVar6 = (ulong)*(uint *)(param_1 + 0x68);
        break;
      }
      lVar10 = lVar10 + 8;
    } while (uVar6 * 8 != lVar10);
  }
  if (((param_4 & 0xff) != 0) && (uVar8 = (uint)uVar6, lVar11 == lVar12 + uVar6 * 8)) {
    if (*(uint *)(param_1 + 0x6c) <= uVar8) {
      uVar6 = FUN__text__0042cca0();
      if (((uVar6 & 1) == 0) || (*(uint *)(param_1 + 0x6c) <= uVar8)) goto LAB__text__0042a6c0;
      uVar8 = *(uint *)(param_1 + 0x68);
      lVar12 = *(long *)(param_1 + 0x60);
    }
    *(uint *)(param_1 + 0x68) = uVar8 + 1;
    if (lVar12 != 0) {
      puVar1 = (uint *)(lVar12 + (ulong)uVar8 * 8);
      uVar8 = 0x3f800000;
      if ((param_4 & 0xff) != 3) {
        uVar8 = 0;
      }
      *puVar1 = param_5 & 0xffff | (param_4 & 0xff) << 0x10;
      puVar1[1] = uVar8;
    }
  }
LAB__text__0042a6c0:
  lVar12 = *(long *)(param_1 + 0x90);
  do {
    if (lVar12 == 0) {
      return 1;
    }
    uVar8 = *(uint *)(lVar12 + 0x68);
    if (uVar8 != 0) {
      pvVar7 = *(void **)(lVar12 + 0x60);
      __dest = pvVar7;
      do {
        while ((uint)*(ushort *)((long)__dest + 8) == (param_5 & 0xffff)) {
          uVar8 = uVar8 - 1;
          pvVar2 = (void *)((long)pvVar7 + (ulong)uVar8 * 0x10);
          if (__dest < pvVar2) {
            memmove(__dest,(void *)((long)__dest + 0x10),
                    (ulong)(uint)((int)pvVar2 - (int)__dest) & 0xfffffff0);
            uVar8 = *(int *)(lVar12 + 0x68) - 1;
            pvVar7 = *(void **)(lVar12 + 0x60);
          }
          *(uint *)(lVar12 + 0x68) = uVar8;
          if (__dest == (void *)((long)pvVar7 + (ulong)uVar8 * 0x10)) goto LAB__text__0042a75c;
        }
        __dest = (void *)((long)__dest + 0x10);
      } while (__dest != (void *)((long)pvVar7 + (ulong)uVar8 * 0x10));
    }
LAB__text__0042a75c:
    puVar5 = *(ushort **)(*(long *)(lVar12 + 0x58) + 0x60);
    uVar8 = *(uint *)(*(long *)(lVar12 + 0x58) + 0x68);
    puVar9 = puVar5;
    if (uVar8 == 0) {
LAB__text__0042a794:
      if (puVar9 != puVar5 + (ulong)uVar8 * 4) {
        FUN__text__0042bf90(*(undefined4 *)(puVar9 + 2),lVar12,param_5);
      }
    }
    else {
      lVar11 = (ulong)uVar8 << 3;
      do {
        if ((uint)*puVar9 == (param_5 & 0xffff)) goto LAB__text__0042a794;
        puVar9 = puVar9 + 4;
        lVar11 = lVar11 + -8;
      } while (lVar11 != 0);
    }
    lVar12 = *(long *)(lVar12 + 0x70);
  } while( true );
}


