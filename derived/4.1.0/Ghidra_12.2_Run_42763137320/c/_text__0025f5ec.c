/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0025f5ec; name: FUN_.text__0025f5ec
 */


void FUN__text__0025f5ec(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  
  iVar3 = (int)param_1[1];
  lVar4 = *param_1;
  *(int *)(lVar4 + 0x6e8) = iVar3;
  uVar1 = 0x72c6d0;
  if (iVar3 != 3) {
    uVar1 = 0x72c6e0;
  }
  uVar2 = 0x72c6d8;
  if (iVar3 != 3) {
    uVar2 = 0x72c6e8;
  }
  FUN__text__0012c378(lVar4 + 0x110,uVar1);
  FUN__text__0012c378(lVar4 + 0x110,uVar2);
  FUN__text__002575d4(lVar4);
  FUN__text__002579c0(lVar4,0,0xffffffffffffffff);
  if (*(long *)(lVar4 + 0x4e0) == 0) {
    return;
  }
  FUN__text__003c02e4();
  return;
}


