/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001bd134; name: FUN_.text__001bd134
 */


void FUN__text__001bd134(long param_1,ulong param_2,byte param_3)

{
  long lVar1;
  byte bVar2;
  int iVar3;
  undefined8 uVar4;
  
  if ((param_2 & 1) == 0) {
    if (*(char *)(param_1 + 0x5a58) == '\0') {
      iVar3 = FUN__text__001c1e90(*(undefined8 *)(*(long *)(param_1 + 0x38) + 0x108),
                                  *(undefined4 *)(param_1 + 0x30));
      param_3 = iVar3 == 0;
    }
    else {
      param_3 = 1;
    }
  }
  lVar1 = *(long *)(param_1 + 8) + 0x110;
  uVar4 = FUN__text__0012cb14(lVar1,param_1 + 0xd0);
  bVar2 = param_3 & 1;
  FUN__text__003a14c4(uVar4,bVar2);
  uVar4 = FUN__text__0012cb14(lVar1,param_1 + 0x140);
  FUN__text__003a14c4(uVar4,bVar2);
  uVar4 = FUN__text__0012cb14(lVar1,param_1 + 0x1b0);
  if (*(int *)(param_1 + 0x4cc) != 0) {
    FUN__text__003a14c4(uVar4,bVar2);
  }
  if (*(char *)(param_1 + 0x280) == '\0') {
    return;
  }
  uVar4 = FUN__text__0012cb14(lVar1,param_1 + 0x288);
  FUN__text__003a14c4(uVar4,param_3 & 1);
  return;
}


