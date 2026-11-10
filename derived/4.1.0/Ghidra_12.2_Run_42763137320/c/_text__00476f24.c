/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00476f24; name: FUN_.text__00476f24
 */


void FUN__text__00476f24(long param_1,uint param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  uint local_34;
  undefined8 local_18;
  
  puVar1 = (uint *)(param_1 + 0x313);
  uVar2 = *puVar1;
  if ((uVar2 >> 7 & 1) == 0) {
    *puVar1 = uVar2 | 0x80;
    uVar3 = FUN__text__00495c50(*(undefined8 *)(param_1 + 0x1e8),&local_34);
    if (uVar3 == 3) {
      uVar4 = (**(code **)(**(long **)(param_1 + 0x1e8) + 600))
                        (*(long **)(param_1 + 0x1e8),*(undefined8 *)(param_1 + 0x298));
      uVar3 = 1;
      if ((uVar4 & 1) != 0) {
        uVar3 = 2;
      }
    }
    uVar2 = local_34 & 7 | (uVar3 & 0xf) << 3 | *puVar1 & 0xffffff80;
    *puVar1 = uVar2;
  }
  else {
    local_34 = uVar2 & 7;
    uVar3 = uVar2 >> 3 & 0xf;
  }
  if (uVar3 == 2) {
    *(ushort *)(param_1 + 0x220) = *(ushort *)(param_1 + 0x220) | 0x100;
    return;
  }
  if (uVar3 == 1) {
    if ((uVar2 >> 0x10 & 1) == 0) {
      *puVar1 = uVar2 & 0xfff00000 | uVar2 & 0xffff | (param_2 & 7) << 0x11 | 0x10000;
    }
    local_18 = 0x400000000;
    FUN__text__00474488(param_1,&local_18,1);
  }
  return;
}


