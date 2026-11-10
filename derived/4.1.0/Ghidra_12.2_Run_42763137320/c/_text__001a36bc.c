/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001a36bc; name: FUN_.text__001a36bc
 */


void FUN__text__001a36bc(long param_1,int param_2)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  
  *(int *)(param_1 + 0x280) = param_2;
  lVar5 = *(long *)(*(long *)(param_1 + 8) + 0x2d0);
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
    param_2 = *(int *)(param_1 + 0x280);
  }
  if ((*(long *)(param_1 + 0x210) != 0) && (param_2 != 0)) {
    FUN__text__003a14e8(*(long *)(param_1 + 0x210),0);
    param_2 = *(int *)(param_1 + 0x280);
  }
  if ((*(long *)(param_1 + 0x218) != 0) && (param_2 != 1)) {
    FUN__text__003a14e8(*(long *)(param_1 + 0x218),0);
    param_2 = *(int *)(param_1 + 0x280);
  }
  if ((*(long *)(param_1 + 0x220) != 0) && (param_2 != 2)) {
    FUN__text__003a14e8(*(long *)(param_1 + 0x220),0);
    param_2 = *(int *)(param_1 + 0x280);
  }
  if ((*(long *)(param_1 + 0x228) != 0) && (param_2 != 3)) {
    FUN__text__003a14e8(*(long *)(param_1 + 0x228),0);
    param_2 = *(int *)(param_1 + 0x280);
  }
  if ((*(long *)(param_1 + 0x230) != 0) && (param_2 != 4)) {
    FUN__text__003a14e8(*(long *)(param_1 + 0x230),0);
    param_2 = *(int *)(param_1 + 0x280);
  }
  if ((*(long *)(param_1 + 0x238) != 0) && (param_2 != 5)) {
    FUN__text__003a14e8(*(long *)(param_1 + 0x238),0);
    param_2 = *(int *)(param_1 + 0x280);
  }
  if ((*(long *)(param_1 + 0x240) != 0) && (param_2 != 6)) {
    FUN__text__003a14e8(*(long *)(param_1 + 0x240),0);
    param_2 = *(int *)(param_1 + 0x280);
  }
  if ((*(long *)(param_1 + 0x248) != 0) && (param_2 != 7)) {
    FUN__text__003a14e8(*(long *)(param_1 + 0x248),0);
    param_2 = *(int *)(param_1 + 0x280);
  }
  if ((*(long *)(param_1 + 0x250) != 0) && (param_2 != 8)) {
    FUN__text__003a14e8(*(long *)(param_1 + 0x250),0);
    param_2 = *(int *)(param_1 + 0x280);
  }
  if ((*(long *)(param_1 + 600) != 0) && (param_2 != 9)) {
    FUN__text__003a14e8(*(long *)(param_1 + 600),0);
    param_2 = *(int *)(param_1 + 0x280);
  }
  if ((*(long *)(param_1 + 0x260) != 0) && (param_2 != 10)) {
    FUN__text__003a14e8(*(long *)(param_1 + 0x260),0);
    param_2 = *(int *)(param_1 + 0x280);
  }
  if ((*(long *)(param_1 + 0x268) != 0) && (param_2 != 0xb)) {
    FUN__text__003a14e8(*(long *)(param_1 + 0x268),0);
    param_2 = *(int *)(param_1 + 0x280);
  }
  if ((*(long *)(param_1 + 0x270) != 0) && (param_2 != 0xc)) {
    FUN__text__003a14e8(*(long *)(param_1 + 0x270),0);
    param_2 = *(int *)(param_1 + 0x280);
  }
  if ((*(long *)(param_1 + 0x278) != 0) && (param_2 != 0xd)) {
    FUN__text__003a14e8(*(long *)(param_1 + 0x278),0);
    param_2 = *(int *)(param_1 + 0x280);
  }
  lVar4 = *(long *)(param_1 + (long)param_2 * 8 + 0x210);
  if (lVar4 == 0) {
    lVar4 = (long)param_2;
    if (3 < lVar4 - 1U) goto LAB__text__001a38c4;
LAB__text__001a389c:
    FUN__text__003c7c60(lVar5,param_1 + 0x40,1);
  }
  else {
    FUN__text__003a14e8(lVar4,1);
    lVar4 = (long)*(int *)(param_1 + 0x280);
    if (lVar4 - 1U < 4) goto LAB__text__001a389c;
LAB__text__001a38c4:
    FUN__text__003c7c60(lVar5,param_1 + 0x40,0);
    if (lVar4 - 5U < 9) {
      FUN__text__003c7c60(lVar5,param_1 + 0x48,1);
      cVar2 = *(char *)(param_1 + 0x285);
      goto joined_r0x001a390c;
    }
  }
  FUN__text__003c7c60(lVar5,param_1 + 0x48,0);
  cVar2 = *(char *)(param_1 + 0x285);
joined_r0x001a390c:
  if (cVar2 != '\0') {
    uVar1 = *(uint *)(param_1 + 0x280);
    lVar4 = *(long *)(*(long *)(param_1 + 8) + 0x2d0);
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
    }
    bVar3 = (uVar1 | 2) != 3;
    FUN__text__003c7c60(lVar4,param_1 + 0x80,!bVar3);
    FUN__text__003c7c60(lVar4,param_1 + 0x188,bVar3);
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
    }
  }
  if (lVar5 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x001a39a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
  return;
}


