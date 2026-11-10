/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00464cf0; name: FUN_.text__00464cf0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN__text__00464cf0(long param_1)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  float fVar6;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_50;
  undefined1 local_48;
  undefined1 local_40;
  undefined8 local_38;
  
  if (*(long *)(param_1 + 0x70) == 0) {
    lVar3 = FUN__text__00464e40(&DAT_00aea6f0);
    *(long *)(param_1 + 0x70) = lVar3;
    uVar1 = 0;
    if (lVar3 != 0) {
      uVar2 = *(uint *)(param_1 + 0xd2);
      uVar1 = uVar2 & 0x3ff;
      if ((((*(long *)(param_1 + 0x58) != 0) &&
           ((*(byte *)(*(long *)(param_1 + 0x58) + 2) & 1) != 0)) && (uVar1 != 0)) &&
         (*(uint *)(param_1 + 0x50) != 0)) {
        plVar4 = *(long **)(param_1 + 0x48);
        lVar5 = (ulong)*(uint *)(param_1 + 0x50) << 3;
        do {
          if (*(int *)(*plVar4 + 8) == 0x10) {
            local_58 = 0;
            local_50 = 0;
            local_38 = 0;
            local_60 = 0;
            local_48 = 0xff;
            local_40 = 0xff;
            fVar6 = (float)FUN__text__00435a30(*_DAT_008a45f0,*plVar4,&local_60);
            uVar1 = (uint)fVar6;
            uVar2 = *(uint *)(param_1 + 0xd2);
            break;
          }
          plVar4 = plVar4 + 1;
          lVar5 = lVar5 + -8;
        } while (lVar5 != 0);
      }
      FUN__text__00463320(lVar3 + 0x18,param_1,0,uVar1,uVar2 >> 10 & 1,uVar2 >> 0xb & 1);
      *(undefined8 *)(lVar3 + 0xc0) = 0;
      *(byte *)(lVar3 + 200) = *(byte *)(lVar3 + 200) & 0xfe | (byte)(uVar2 >> 0xe) & 1;
      if (*(long *)(param_1 + 0x80) == 0) {
        uVar1 = 1;
        lVar3 = *(long *)(param_1 + 0x78);
      }
      else {
        uVar1 = FUN__text__00464cf0();
        lVar3 = *(long *)(param_1 + 0x78);
      }
      if (lVar3 != 0) {
        uVar2 = FUN__text__00464cf0();
        return uVar1 & uVar2 & 1;
      }
    }
  }
  else {
    uVar1 = 1;
  }
  return uVar1 & 1;
}


