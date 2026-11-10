/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004185c0; name: FUN_.text__004185c0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN__text__004185c0(long param_1,undefined4 *param_2,undefined4 *param_3)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  byte *pbVar5;
  byte *pbVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_60;
  undefined1 local_58;
  undefined1 local_50;
  undefined8 local_48;
  
  lVar3 = _DAT_008a4ac8;
  lVar2 = _DAT_008a4ac0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0xff;
  local_50 = 0xff;
  local_48 = 0;
  if ((*(ulong **)(param_1 + 0x58) == (ulong *)0x0) ||
     ((**(ulong **)(param_1 + 0x58) >> ((ulong)*(uint *)(_DAT_008a4ac8 + 0x6c) & 0x3f) & 1) == 0)) {
    uVar8 = *(undefined4 *)(_DAT_008a4ac0 + 0x6c);
    pbVar5 = *(byte **)(param_1 + 0x90);
    if (pbVar5 != (byte *)0x0) {
      bVar1 = *pbVar5;
      uVar7 = (uint)bVar1;
      if (bVar1 < 2) {
        uVar7 = 1;
      }
      uVar4 = (ulong)uVar7;
      pbVar6 = pbVar5 + ((ulong)bVar1 & 0xfc);
      do {
        pbVar6 = pbVar6 + 4;
        pbVar5 = pbVar5 + 1;
        if (*pbVar5 == 0x1b) {
          uVar8 = *(undefined4 *)pbVar6;
          break;
        }
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
  }
  else {
    uVar8 = FUN__text__00419e90(*_DAT_008a45f0,param_1 + 0x48,(ulong)*(uint *)(_DAT_008a4ac8 + 0x6c)
                                ,&local_70);
  }
  *param_2 = uVar8;
  local_70 = 0;
  local_58 = 0xff;
  local_50 = 0xff;
  local_68 = 0;
  local_60 = 0;
  local_48 = 0;
  if ((*(ulong **)(param_1 + 0x58) == (ulong *)0x0) ||
     ((**(ulong **)(param_1 + 0x58) >> ((ulong)*(uint *)(lVar3 + 0x70) & 0x3f) & 1) == 0)) {
    uVar8 = *(undefined4 *)(lVar2 + 0x70);
    pbVar5 = *(byte **)(param_1 + 0x90);
    if (pbVar5 != (byte *)0x0) {
      bVar1 = *pbVar5;
      uVar7 = (uint)bVar1;
      if (bVar1 < 2) {
        uVar7 = 1;
      }
      uVar4 = (ulong)uVar7;
      pbVar6 = pbVar5 + ((ulong)bVar1 & 0xfc);
      do {
        pbVar6 = pbVar6 + 4;
        pbVar5 = pbVar5 + 1;
        if (*pbVar5 == 0x1c) {
          uVar8 = *(undefined4 *)pbVar6;
          break;
        }
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
  }
  else {
    uVar8 = FUN__text__00419e90(*_DAT_008a45f0,param_1 + 0x48,(ulong)*(uint *)(lVar3 + 0x70),
                                &local_70);
  }
  *param_3 = uVar8;
  bVar1 = *(byte *)(param_1 + 0x19c);
  *(byte *)(param_1 + 0x19c) = bVar1 & 0xdf;
  return bVar1 >> 5 & 1;
}


