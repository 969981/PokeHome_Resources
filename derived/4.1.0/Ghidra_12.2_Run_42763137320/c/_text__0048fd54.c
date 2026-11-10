/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0048fd54; name: FUN_.text__0048fd54
 */


void FUN__text__0048fd54(long param_1,long *param_2)

{
  byte bVar1;
  int iVar2;
  long lVar3;
  undefined1 uStack_11;
  
  bVar1 = (**(code **)(*param_2 + 0x30))(param_2);
  if ((bVar1 & 1) != 0) {
    *(int *)(param_1 + 0xa8) = *(int *)(param_1 + 0xa8) + 1;
  }
  *(byte *)((long)param_2 + 0x1c) = bVar1 & 1;
  bVar1 = (**(code **)(*param_2 + 0x38))(param_2);
  if ((bVar1 & 1) == 0) {
    *(byte *)((long)param_2 + 0x1d) = bVar1 & 1;
    bVar1 = (**(code **)(*param_2 + 0x40))(param_2);
  }
  else {
    *(int *)(param_1 + 0xac) = *(int *)(param_1 + 0xac) + 1;
    *(byte *)((long)param_2 + 0x1d) = bVar1 & 1;
    bVar1 = (**(code **)(*param_2 + 0x40))(param_2);
  }
  if ((bVar1 & 1) == 0) {
    *(byte *)((long)param_2 + 0x1e) = bVar1 & 1;
    iVar2 = FUN__text__0048f840(param_2);
  }
  else {
    *(int *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) + 1;
    *(byte *)((long)param_2 + 0x1e) = bVar1 & 1;
    iVar2 = FUN__text__0048f840(param_2);
  }
  if (iVar2 == 0) {
    lVar3 = *(long *)(param_1 + 0xa0);
  }
  else {
    lVar3 = FUN__text__00491720(param_1 + 0x20,iVar2,&uStack_11);
    if (lVar3 != 0) {
      *(int *)(lVar3 + 4) = *(int *)(lVar3 + 4) + 1;
      *(undefined1 *)(lVar3 + 8) = 1;
    }
    *(int *)(param_2 + 3) = iVar2;
    lVar3 = *(long *)(param_1 + 0xa0);
  }
  if (lVar3 == 0) {
    *(long **)(param_1 + 0xa0) = param_2;
    param_2[2] = 0;
  }
  else {
    param_2[2] = lVar3;
    *(long **)(param_1 + 0xa0) = param_2;
  }
  *(undefined1 *)(param_1 + 0xc4) = 1;
  *(undefined2 *)(param_1 + 199) = 0x101;
  return;
}


