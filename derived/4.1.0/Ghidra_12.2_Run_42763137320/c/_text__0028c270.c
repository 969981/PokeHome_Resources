/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0028c270; name: FUN_.text__0028c270
 */


void FUN__text__0028c270(long *param_1)

{
  int iVar1;
  bool bVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar5 = *param_1;
  *(undefined4 *)(lVar5 + 0x878) = 1;
  FUN__text__002862c4(lVar5);
  iVar1 = *(int *)(lVar5 + 0x878);
  lVar3 = FUN__text__003c79c0(*(undefined8 *)(lVar5 + 0x2d0),0x7307d0);
  *(byte *)(lVar3 + 0x58) = *(byte *)(lVar3 + 0x58) & 0xfe | iVar1 == 0;
  iVar1 = *(int *)(lVar5 + 0x878);
  lVar3 = FUN__text__003c79c0(*(undefined8 *)(lVar5 + 0x2d0),0x7307d8);
  *(byte *)(lVar3 + 0x58) = *(byte *)(lVar3 + 0x58) & 0xfe | iVar1 == 1;
  *(undefined1 *)(lVar5 + 0x97a) = 0;
  bVar2 = *(int *)(lVar5 + 0x878) != 1;
  uVar4 = FUN__text__0012cb14(lVar5 + 0x110,0x7305f0);
  FUN__text__003a14e8(uVar4,bVar2);
  uVar4 = FUN__text__0012cb14(lVar5 + 0x110,0x7305f8);
  FUN__text__003a14e8(uVar4,bVar2);
  FUN__text__00286570(lVar5);
  if (*(long *)(lVar5 + 0x4e0) == 0) {
    return;
  }
  FUN__text__003c02e4();
  return;
}


