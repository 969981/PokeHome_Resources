/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004c2c20; name: FUN_.text__004c2c20
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__004c2c20(undefined8 param_1,long param_2,long param_3,byte *param_4)

{
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined4 uVar6;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_50;
  byte local_48;
  byte local_40;
  undefined8 local_38;
  
  if (*(char *)(param_3 + 0x48) == '\0') {
    local_60 = *(undefined8 *)(param_3 + 0x10);
  }
  else {
    local_60 = 0;
  }
  bVar1 = *param_4;
  uVar3 = bVar1 - 0x80;
  local_50 = *(undefined4 *)(param_3 + 0x38);
  local_48 = param_4[1];
  if (uVar3 < 0x21 && (1L << ((ulong)uVar3 & 0x3f) & 0x100010001U) != 0) {
    local_40 = param_4[4];
  }
  else {
    local_40 = 0xff;
  }
  local_38 = 0;
  local_58 = 0;
  if (bVar1 == 0xe0) {
    FUN__text__00434a40((float)((uint)param_4[4] | (uint)param_4[5] << 7) * 0.0078125,DAT_00ae9a70,
                        0x100000083,&local_60,0,1,0);
    return;
  }
  if (bVar1 == 0xb0) {
    bVar1 = param_4[4];
    if ((bVar1 != 0x78) && (bVar1 != 0x7b)) {
      if (bVar1 == 0x79) {
        *(undefined2 *)(param_2 + 0x10) = 0;
        puVar4 = _DAT_008a45f0;
        uVar5 = 1;
        do {
          FUN__text__00434b30(*puVar4,uVar5 | 0x100000000,&local_60,0,1);
          uVar5 = uVar5 + 1;
        } while (uVar5 != 0x86);
      }
      else {
        uVar6 = NEON_ucvtf((uint)param_4[5]);
        FUN__text__00434a40(uVar6,*_DAT_008a45f0,(ulong)bVar1 + 0x100000001,&local_60,0,1,0);
        if (param_4[4] == 0x40) {
          uVar2 = *(ushort *)(param_2 + 0x10) & ((ushort)(1 << (ulong)(param_4[1] & 0x1f)) ^ 0xffff)
          ;
          *(ushort *)(param_2 + 0x10) = uVar2;
          *(ushort *)(param_2 + 0x10) =
               uVar2 | (ushort)(0x3f < param_4[5]) << (ulong)(param_4[1] & 0x1f);
          return;
        }
      }
    }
  }
  return;
}


