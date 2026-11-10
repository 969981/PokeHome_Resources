/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00518a70; name: FUN_.text__00518a70
 */


void FUN__text__00518a70(undefined8 param_1,long param_2,long param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 *__src;
  undefined8 uVar7;
  uint uVar8;
  undefined4 *puVar9;
  long lVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  
  uVar3 = *(uint *)(param_3 + 0x40);
  do {
    if (*(long *)(param_2 + 0x40) == 0) {
      return;
    }
    uVar8 = *(uint *)(param_3 + 0x40);
    uVar2 = *(uint *)(param_3 + 0x44);
    if (uVar8 < uVar2) {
LAB__text__00518ae4:
      lVar10 = *(long *)(param_3 + 0x38);
      __src = (undefined8 *)(lVar10 + (ulong)uVar3 * 0x28);
      if (uVar3 < uVar8) {
        memmove(__src + 5,__src,(ulong)((uVar8 - uVar3) * 0x28));
      }
      if (lVar10 != 0) {
        lVar10 = lVar10 + (ulong)uVar3 * 0x28;
        *__src = 0;
        *(undefined4 *)(__src + 1) = 0;
        *(undefined8 *)(lVar10 + 0x10) = 0;
        *(undefined8 *)(lVar10 + 0x18) = 0;
      }
      *(int *)(param_3 + 0x40) = *(int *)(param_3 + 0x40) + 1;
      if (*(long *)(param_3 + 0x38) != 0) {
        uVar7 = *(undefined8 *)(param_2 + 0x30);
        puVar9 = (undefined4 *)(*(long *)(param_3 + 0x38) + (ulong)uVar3 * 0x28);
        uVar12 = *(undefined4 *)(param_2 + 0x1c);
        uVar13 = *(undefined4 *)(param_2 + 0x20);
        uVar11 = FUN__text__0051727c(*(undefined4 *)(param_2 + 0x18),uVar7);
        uVar6 = *(undefined8 *)(param_2 + 0x38);
        cVar4 = *(char *)(param_2 + 0x6c);
        *puVar9 = uVar11;
        puVar9[1] = uVar12;
        *(undefined8 *)(puVar9 + 4) = 0;
        *(undefined8 *)(puVar9 + 6) = uVar7;
        puVar9[2] = uVar13;
        *(undefined8 *)(puVar9 + 8) = uVar6;
        puVar9[3] = (int)cVar4;
      }
    }
    else {
      iVar1 = uVar2 + (uVar2 >> 1);
      if (uVar2 == 0) {
        iVar1 = 1;
      }
      uVar5 = FUN__text__0051bfc0((long *)(param_3 + 0x38),iVar1);
      if (((uVar5 & 1) != 0) && (uVar8 < *(uint *)(param_3 + 0x44))) {
        uVar8 = *(uint *)(param_3 + 0x40);
        goto LAB__text__00518ae4;
      }
    }
    param_2 = *(long *)(param_2 + 0x40);
    if (param_2 == 0) {
      return;
    }
  } while( true );
}


