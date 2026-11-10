/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0028bfbc; name: FUN_.text__0028bfbc
 */


void FUN__text__0028bfbc(long *param_1)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = *param_1;
  iVar2 = FUN__text__0027a5c0(*(undefined8 *)(lVar4 + 0x640),*(undefined4 *)(lVar4 + 0x970));
  if (1 < iVar2) {
    if (0 < *(int *)(lVar4 + 0x974)) {
      iVar2 = *(int *)(lVar4 + 0x974);
    }
    *(int *)(lVar4 + 0x974) = iVar2 + -1;
    FUN__text__0028aca0(lVar4);
    FUN__text__00285880(lVar4);
    *(undefined1 *)(lVar4 + 0x97a) = 0;
    bVar1 = *(int *)(lVar4 + 0x878) != 1;
    uVar3 = FUN__text__0012cb14(lVar4 + 0x110,0x7305f0);
    FUN__text__003a14e8(uVar3,bVar1);
    uVar3 = FUN__text__0012cb14(lVar4 + 0x110,0x7305f8);
    FUN__text__003a14e8(uVar3,bVar1);
    FUN__text__00286570(lVar4);
  }
  if (*(long *)(lVar4 + 0x4e0) == 0) {
    return;
  }
  FUN__text__003c02e4();
  return;
}


