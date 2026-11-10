/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004f62c0; name: FUN_.text__004f62c0
 */


ulong FUN__text__004f62c0(long param_1,long param_2,int param_3,undefined4 *param_4,uint param_5,
                         ulong param_6,long *param_7)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  uint local_44;
  
  lVar3 = param_1 + 0x108;
  if (*(long *)(param_1 + 0x108) == 0) {
    lVar2 = 0x7fffffffffffffff;
    uVar4 = *(uint *)(param_1 + 0x100);
    lVar8 = 0x7fffffffffffffff;
    if (0x7ffffffffffffffe < param_2) {
      lVar8 = param_2;
    }
  }
  else {
    uVar4 = *(uint *)(param_1 + 0x100);
    if (uVar4 == 0) {
      lVar8 = 0;
    }
    else {
      if (uVar4 == 1) {
        uVar5 = 0;
        lVar8 = 0;
      }
      else {
        uVar5 = 0;
        lVar8 = 0;
        do {
          plVar1 = (long *)(param_1 + uVar5 * 8);
          uVar5 = uVar5 + 2;
          lVar8 = *(long *)(*(long *)(plVar1[1] + 8) + 0x68) +
                  *(long *)(*(long *)(*plVar1 + 8) + 0x68) + lVar8;
        } while (((ulong)uVar4 & 0xfffffffe) != uVar5);
      }
      if ((uVar4 & 1) != 0) {
        lVar8 = *(long *)(*(long *)(*(long *)(param_1 + uVar5 * 8) + 8) + 0x68) + lVar8;
      }
    }
    lVar2 = FUN__text__004f52bc(lVar3);
    lVar2 = lVar2 + lVar8;
    uVar4 = *(uint *)(param_1 + 0x100);
    lVar8 = lVar2;
    if (lVar2 <= param_2) {
      lVar8 = param_2;
    }
  }
  if (uVar4 == 0) {
    lVar7 = 0;
  }
  else {
    if (uVar4 == 1) {
      uVar5 = 0;
      lVar7 = 0;
    }
    else {
      uVar5 = 0;
      lVar7 = 0;
      do {
        plVar1 = (long *)(param_1 + uVar5 * 8);
        uVar5 = uVar5 + 2;
        lVar7 = *(long *)(*(long *)(plVar1[1] + 8) + 0x68) +
                *(long *)(*(long *)(*plVar1 + 8) + 0x68) + lVar7;
      } while (((ulong)uVar4 & 0xfffffffe) != uVar5);
    }
    if ((uVar4 & 1) != 0) {
      lVar7 = *(long *)(*(long *)(*(long *)(param_1 + uVar5 * 8) + 8) + 0x68) + lVar7;
    }
  }
  uVar5 = FUN__text__004f52d4(lVar3,lVar8 - lVar7);
  lVar8 = *(long *)(*(long *)(param_1 + 0x108) + 0x18);
  if ((lVar8 == 0) || (*(char *)(param_1 + 0x129) != '\0')) {
    *param_4 = 0;
    if ((param_3 != 0) && ((param_6 & 1) == 0)) {
      return 2;
    }
  }
  else {
    uVar5 = FUN__text__004f41e0(*(undefined8 *)(lVar8 + 0x78),uVar5,param_3,param_4,param_5 & 1,
                                &local_44);
    if ((int)uVar5 != 1) {
      return uVar5;
    }
    uVar5 = (ulong)local_44;
  }
  uVar4 = *(uint *)(param_1 + 0x100);
  if (uVar4 == 0) {
    lVar8 = 0;
  }
  else {
    if (uVar4 == 1) {
      uVar6 = 0;
      lVar8 = 0;
    }
    else {
      uVar6 = 0;
      lVar8 = 0;
      do {
        plVar1 = (long *)(param_1 + uVar6 * 8);
        uVar6 = uVar6 + 2;
        lVar8 = *(long *)(*(long *)(plVar1[1] + 8) + 0x68) +
                *(long *)(*(long *)(*plVar1 + 8) + 0x68) + lVar8;
      } while (((ulong)uVar4 & 0xfffffffe) != uVar6);
    }
    if ((uVar4 & 1) != 0) {
      lVar8 = *(long *)(*(long *)(*(long *)(param_1 + uVar6 * 8) + 8) + 0x68) + lVar8;
    }
  }
  lVar3 = FUN__text__004f52ec(lVar3,uVar5);
  *param_7 = lVar3 + lVar8;
  if (*(char *)(param_1 + 0x128) == '\0') {
    uVar4 = 3;
    if (lVar3 + lVar8 <= *(long *)(param_1 + 0x120) + lVar2) {
      uVar4 = 1;
    }
    uVar5 = (ulong)uVar4;
  }
  else {
    uVar5 = 1;
  }
  return uVar5;
}


