/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002862c4; name: FUN_.text__002862c4
 */


void FUN__text__002862c4(long param_1)

{
  long lVar1;
  bool bVar2;
  undefined2 uVar3;
  int iVar4;
  bool bVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  undefined2 *puVar9;
  long lVar10;
  ulong uVar11;
  undefined8 uVar12;
  
  lVar1 = param_1 + 0x110;
  iVar7 = FUN__text__0027a5c0(*(undefined8 *)(param_1 + 0x640),*(undefined4 *)(param_1 + 0x970));
  puVar9 = (undefined2 *)
           FUN__text__0027a640(*(undefined8 *)(param_1 + 0x640),*(undefined4 *)(param_1 + 0x970),
                               *(undefined4 *)(param_1 + 0x974),*(undefined1 *)(param_1 + 0x978),
                               *(undefined1 *)(param_1 + 0x979));
  uVar3 = *puVar9;
  iVar4 = *(int *)(param_1 + 0x970);
  iVar8 = FUN__text__0028f1c0(param_1,uVar3);
  lVar10 = *(long *)(param_1 + 0x640);
  if (*(int *)(lVar10 + 0x130) == 1) {
    uVar11 = FUN__text__0028f1a4(param_1,*(undefined1 *)(lVar10 + 0x92954),
                                 *(undefined4 *)(lVar10 + 0x92958),
                                 *(undefined1 *)(lVar10 + iVar4 + 0x92968),uVar3);
    lVar10 = *(long *)(param_1 + 0x640);
    iVar8 = 2;
    if ((uVar11 & 1) == 0) {
      iVar8 = 0;
    }
  }
  bVar2 = iVar8 == 2 && 0 < iVar7;
  bVar6 = FUN__text__0027a830(lVar10,*(undefined4 *)(param_1 + 0x970),
                              *(undefined4 *)(param_1 + 0x974));
  bVar6 = 0 < iVar7 & bVar6;
  if (*(int *)(param_1 + 0x878) == 0) {
    bVar5 = *(int *)(*(long *)(param_1 + 0x640) + 0x130) == 0;
  }
  else {
    bVar5 = false;
  }
  lVar10 = FUN__text__003c79c0(*(undefined8 *)(param_1 + 0x2d0),0x7307e0);
  *(byte *)(lVar10 + 0x58) = *(byte *)(lVar10 + 0x58) & 0xfe | bVar5;
  uVar12 = FUN__text__0012cb14(lVar1,0x7307e8);
  FUN__text__003a14c4(uVar12,bVar2);
  uVar12 = FUN__text__0012cb14(lVar1,0x730620);
  FUN__text__003a14c4(uVar12,bVar6);
  if (*(int *)(param_1 + 0x878) == 1) {
    bVar5 = *(int *)(*(long *)(param_1 + 0x640) + 0x130) == 0;
  }
  else {
    bVar5 = false;
  }
  lVar10 = FUN__text__003c79c0(*(undefined8 *)(param_1 + 0x2d0),0x7307f0);
  *(byte *)(lVar10 + 0x58) = *(byte *)(lVar10 + 0x58) & 0xfe | bVar5;
  uVar12 = FUN__text__0012cb14(lVar1,0x7307f8);
  FUN__text__003a14c4(uVar12,bVar2);
  uVar12 = FUN__text__0012cb14(lVar1,0x730648);
  FUN__text__003a14c4(uVar12,bVar6);
  if (*(int *)(param_1 + 0x878) == 0) {
    bVar5 = *(int *)(*(long *)(param_1 + 0x640) + 0x130) == 1;
  }
  else {
    bVar5 = false;
  }
  lVar10 = FUN__text__003c79c0(*(undefined8 *)(param_1 + 0x2d0),0x730800);
  *(byte *)(lVar10 + 0x58) = *(byte *)(lVar10 + 0x58) & 0xfe | bVar5;
  uVar12 = FUN__text__0012cb14(lVar1,0x730808);
  FUN__text__003a14c4(uVar12,bVar2);
  uVar12 = FUN__text__0012cb14(lVar1,0x730670);
  FUN__text__003a14c4(uVar12,bVar6);
  if (*(int *)(param_1 + 0x878) == 1) {
    bVar5 = *(int *)(*(long *)(param_1 + 0x640) + 0x130) == 1;
  }
  else {
    bVar5 = false;
  }
  lVar10 = FUN__text__003c79c0(*(undefined8 *)(param_1 + 0x2d0),0x730810);
  *(byte *)(lVar10 + 0x58) = *(byte *)(lVar10 + 0x58) & 0xfe | bVar5;
  uVar12 = FUN__text__0012cb14(lVar1,0x730818);
  FUN__text__003a14c4(uVar12,bVar2);
  uVar12 = FUN__text__0012cb14(lVar1,0x730698);
  FUN__text__003a14c4(uVar12,bVar6);
  return;
}


