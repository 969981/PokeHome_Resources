/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0012c130; name: FUN_.text__0012c130
 */


void FUN__text__0012c130(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  
  if ((*(long *)(param_1 + 0x3d8) != 0) && (*(int *)(param_1 + 0x8c) != 0)) {
    lVar1 = 0;
    uVar2 = 0;
    do {
      FUN__text__003d17a0(*(long *)(param_1 + 0x3d8) + lVar1);
      uVar2 = uVar2 + 1;
      lVar1 = lVar1 + 0x670;
    } while (uVar2 < *(uint *)(param_1 + 0x8c));
  }
  if ((*(long *)(param_1 + 0x3f8) != 0) && (*(int *)(param_1 + 0x9c) != 0)) {
    lVar1 = 0;
    uVar2 = 0;
    do {
      FUN__text__003d17a0(*(long *)(param_1 + 0x3f8) + lVar1);
      uVar2 = uVar2 + 1;
      lVar1 = lVar1 + 0x660;
    } while (uVar2 < *(uint *)(param_1 + 0x9c));
  }
  if ((*(long *)(param_1 + 0x418) != 0) && (*(int *)(param_1 + 0xa0) != 0)) {
    lVar1 = 0;
    uVar2 = 0;
    do {
      FUN__text__003d17a0(*(long *)(param_1 + 0x418) + lVar1);
      uVar2 = uVar2 + 1;
      lVar1 = lVar1 + 0x660;
    } while (uVar2 < *(uint *)(param_1 + 0xa0));
  }
  lVar1 = *(long *)(param_1 + 0x438);
  if ((lVar1 != 0) && (*(int *)(lVar1 + 0x1a0) != 0)) {
    lVar3 = 0;
    uVar2 = 0;
    do {
      FUN__text__003d17a0(*(long *)(lVar1 + 0x180) + lVar3);
      uVar2 = uVar2 + 1;
      lVar3 = lVar3 + 0x660;
    } while (uVar2 < *(uint *)(lVar1 + 0x1a0));
  }
  if ((*(long *)(param_1 + 0x488) != 0) && (*(int *)(param_1 + 0xa4) != 0)) {
    lVar1 = 0;
    uVar2 = 0;
    do {
      FUN__text__003cf450(*(long *)(param_1 + 0x488) + lVar1);
      uVar2 = uVar2 + 1;
      lVar1 = lVar1 + 0x20068;
    } while (uVar2 < *(uint *)(param_1 + 0xa4));
  }
  if (*(long *)(param_1 + 0x3d0) == 0) {
    return;
  }
  FUN__text__003c0554(*(long *)(param_1 + 0x3d0),param_2);
  FUN__text__003c03bc(*(undefined8 *)(param_1 + 0x3d0));
  FUN__text__003c0548(*(undefined8 *)(param_1 + 0x3d0));
  return;
}


