/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0019c300; name: FUN_.text__0019c300
 */


bool FUN__text__0019c300(long param_1,long param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  ulong uVar4;
  
  uVar4 = -(ulong)(param_3 >> 0x1f) & 0xfffffffc00000000 | (ulong)param_3 << 2;
  iVar1 = *(int *)(param_1 + uVar4);
  iVar2 = *(int *)(param_2 + uVar4);
  bVar3 = iVar1 == iVar2;
  if (param_3 == 5) {
    bVar3 = (((((*(int *)(param_1 + 0x5c) == *(int *)(param_2 + 0x5c) &&
                *(int *)(param_1 + 0x58) == *(int *)(param_2 + 0x58)) &&
               *(int *)(param_1 + 0x54) == *(int *)(param_2 + 0x54)) &&
              *(int *)(param_1 + 0x50) == *(int *)(param_2 + 0x50)) &&
             *(int *)(param_1 + 0x4c) == *(int *)(param_2 + 0x4c)) &&
            *(int *)(param_1 + 0x48) == *(int *)(param_2 + 0x48)) && iVar1 == iVar2;
  }
  return bVar3;
}


