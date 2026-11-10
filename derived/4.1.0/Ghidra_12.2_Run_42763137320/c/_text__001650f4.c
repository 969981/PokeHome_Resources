/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001650f4; name: FUN_.text__001650f4
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN__text__001650f4(long param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  uint uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  
  if (param_2 == 0xfd) {
    lVar5 = *(long *)(DAT_008e15a0 + 0x80);
    if (lVar5 != 0) {
      (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
    }
    lVar7 = *(long *)(lVar5 + 0x58);
    if (lVar7 != 0) {
      (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
    }
    uVar8 = FUN__text__0063ada0(lVar7);
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
    uVar2 = 0;
    uVar10 = 0;
    param_2 = 0xfd;
    uVar4 = 0x20000;
    uVar1 = (uint)((uVar8 & 0xfe) != 0) << 6;
  }
  else {
    if (param_2 == 0xfe) {
      param_2 = *(uint *)(param_1 + 0x234);
    }
    else if (param_2 == 0xff) {
      lVar5 = *(long *)(DAT_008e14b8 + 0x210);
      if (lVar5 != 0) {
        (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
      }
      uVar1 = FUN__text__00367a84(lVar5);
      (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
      uVar2 = 0;
      uVar10 = 0;
      uVar1 = uVar1 & 3;
      param_2 = 0xff;
      uVar4 = 0x20000;
      goto LAB__text__0016522c;
    }
    if (*(uint *)(param_1 + 0x1a0) <= param_2) {
      return 0;
    }
    lVar5 = *(long *)(param_1 + 0x1a8) + (ulong)param_2 * 0x18;
    uVar1 = *(uint *)(lVar5 + 8);
    uVar10 = (ulong)*(uint *)(lVar5 + 0xc);
    uVar2 = uVar1 & 0xff000000;
    uVar4 = uVar1 & 0xff0000;
  }
LAB__text__0016522c:
  uVar4 = *(uint *)(param_1 + 0x23c) & *(uint *)(param_1 + 0x244) |
          (uVar4 | uVar2 | uVar1 & 0xffff) & ~*(uint *)(param_1 + 0x244);
  uVar8 = (ulong)uVar4;
  uVar2 = uVar4 >> 0x10;
  uVar9 = uVar8 & 0xff000000;
  uVar1 = uVar2 & 0xff;
  if ((uVar4 & 0x40) != 0) {
    uVar1 = uVar2 & 0xe7 | 4;
  }
  if ((uVar4 & 0x20) != 0) {
    uVar1 = uVar2 & 0xe3 | 8;
  }
  if ((uVar1 >> 1 & 1) == 0) {
    uVar6 = *_DAT_0089f538;
    uVar3 = FUN__text__005f3244(*(undefined8 *)(*(long *)(param_1 + 0x1a8) + (ulong)param_2 * 0x18))
    ;
    uVar2 = FUN__text__0015885c(uVar6,uVar3);
    uVar8 = (ulong)(uVar4 & 0xffe0 | uVar4 & 3 | (uVar2 & 7) << 2);
  }
  return uVar8 & 0xffff | uVar9 | (ulong)uVar1 << 0x10 | uVar10 << 0x20;
}


