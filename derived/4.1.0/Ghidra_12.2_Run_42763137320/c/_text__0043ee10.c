/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0043ee10; name: FUN_.text__0043ee10
 */


void FUN__text__0043ee10(long param_1,ulong *param_2)

{
  int iVar1;
  uint uVar2;
  ulong *puVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  ulong local_70;
  undefined4 local_68 [2];
  undefined4 local_60;
  undefined1 local_58;
  undefined1 local_50;
  undefined8 local_48;
  
  local_68[0] = 0;
  local_60 = 0;
  local_58 = 0xff;
  local_50 = 0xff;
  local_70 = *param_2;
  local_48 = 0;
  if (local_70 == 0) {
    uVar4 = *(uint *)(param_1 + 0x78);
    if (0 < (int)uVar4) {
      lVar7 = 0;
      do {
        puVar3 = (ulong *)(*(long *)(param_1 + 0x70) + lVar7);
        local_70 = *puVar3;
        FUN__text__004433e0(puVar3,param_2 + 1,&local_70,local_68);
        lVar7 = lVar7 + 0x28;
      } while ((ulong)uVar4 * 0x28 != lVar7);
    }
  }
  else {
    uVar4 = *(uint *)(param_1 + 0x78);
    if (uVar4 != 0) {
      iVar5 = 0;
      do {
        iVar1 = iVar5 + (uVar4 >> 1);
        puVar3 = (ulong *)(*(long *)(param_1 + 0x70) + (long)iVar1 * 0x28);
        uVar6 = *puVar3;
        if (uVar6 == local_70) {
          FUN__text__004433e0(puVar3,param_2 + 1,&local_70,local_68);
          return;
        }
        if (uVar6 < local_70) {
          iVar5 = iVar1 + 1;
        }
        uVar2 = uVar4 - (uVar6 < local_70);
        uVar4 = uVar2 >> 1;
      } while (1 < uVar2);
    }
  }
  return;
}


