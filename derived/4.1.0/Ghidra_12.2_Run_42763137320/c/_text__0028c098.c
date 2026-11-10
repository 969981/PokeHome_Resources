/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0028c098; name: FUN_.text__0028c098
 */


void FUN__text__0028c098(long *param_1)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar5 = *param_1;
  iVar3 = FUN__text__0027a5c0(*(undefined8 *)(lVar5 + 0x640),*(undefined4 *)(lVar5 + 0x970));
  if (1 < iVar3) {
    iVar1 = 0;
    if (*(int *)(lVar5 + 0x974) + 1 < iVar3) {
      iVar1 = *(int *)(lVar5 + 0x974) + 1;
    }
    *(int *)(lVar5 + 0x974) = iVar1;
    FUN__text__0028aca0(lVar5);
    FUN__text__00285880(lVar5);
    *(undefined1 *)(lVar5 + 0x97a) = 0;
    bVar2 = *(int *)(lVar5 + 0x878) != 1;
    uVar4 = FUN__text__0012cb14(lVar5 + 0x110,0x7305f0);
    FUN__text__003a14e8(uVar4,bVar2);
    uVar4 = FUN__text__0012cb14(lVar5 + 0x110,0x7305f8);
    FUN__text__003a14e8(uVar4,bVar2);
    FUN__text__00286570(lVar5);
  }
  if (*(long *)(lVar5 + 0x4e0) == 0) {
    return;
  }
  FUN__text__003c02e4();
  return;
}


