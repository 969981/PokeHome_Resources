/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0040cca0; name: FUN_.text__0040cca0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0040cca0(undefined8 param_1,uint param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long local_70;
  code *local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  uVar1 = (param_2 & 0xaaaaaaaa) >> 1 | (param_2 & 0x55555555) << 1;
  uVar1 = (uVar1 & 0xcccccccc) >> 2 | (uVar1 & 0x33333333) << 2;
  uVar1 = (uVar1 & 0xf0f0f0f0) >> 4 | (uVar1 & 0xf0f0f0f) << 4;
  uVar1 = (uVar1 & 0xff00ff00) >> 8 | (uVar1 & 0xff00ff) << 8;
  lVar3 = LZCOUNT(uVar1 >> 0x10 | uVar1 << 0x10);
  FUN__text__00413d14(param_1,1);
  uVar1 = *(uint *)(_DAT_008a4600 + lVar3 * 0x18);
  if (uVar1 == 0) {
    FUN__text__00413d04(&local_70);
  }
  else {
    lVar2 = *(long *)(_DAT_008a4600 + lVar3 * 0x18 + 0x10);
    if (lVar2 != 0) {
      uVar4 = 0;
      do {
        (**(code **)(lVar2 + 8))(&local_70,lVar2,param_2,*(undefined8 *)(lVar2 + 0x10));
        FUN__text__00413dec(&local_70 + (ulong)uVar1 * -2 + uVar4 * 2,&local_70);
        lVar2 = *(long *)(lVar2 + 0x18);
        uVar4 = (ulong)((int)uVar4 + 1);
      } while (lVar2 != 0);
    }
    FUN__text__00413990(&local_70,&local_70 + (ulong)uVar1 * -2,uVar1,0x71e8bc,1);
  }
  FUN__text__00413dec(param_1,&local_70);
  lVar3 = *(long *)(_DAT_008a45b8 + lVar3 * 0x18 + 0x10);
  if (lVar3 != 0) {
    if ((param_2 == 0x80) || (param_2 == 1)) {
      do {
        uStack_58 = *(undefined8 *)(lVar3 + 0x18);
        local_70 = _DAT_008a45f8 + 0x10;
        local_68 = *(code **)(lVar3 + 8);
        local_60 = *(undefined8 *)(lVar3 + 0x10);
        lVar3 = *(long *)(lVar3 + 0x18);
        (*local_68)(&local_70,param_2,local_60);
      } while (lVar3 != 0);
    }
    else {
      do {
        local_68 = *(code **)(lVar3 + 8);
        local_60 = *(undefined8 *)(lVar3 + 0x10);
        uStack_58 = *(undefined8 *)(lVar3 + 0x18);
        local_70 = 0x887228;
        lVar3 = *(long *)(lVar3 + 0x18);
        (*local_68)(&local_70,param_2,local_60);
      } while (lVar3 != 0);
    }
  }
  return;
}


