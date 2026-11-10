/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004f8050; name: FUN_.text__004f8050
 */


undefined8 FUN__text__004f8050(long *param_1,int param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  
  uVar1 = *(int *)((long)param_1 + 0xc) + param_2;
  if (*param_1 == 0) {
    uVar6 = *(uint *)(param_1 + 1);
    lVar7 = FUN__text__00400f80(0,(ulong)uVar1 * 0x60);
    if (lVar7 != 0) {
      lVar8 = *param_1;
      if ((lVar8 != 0) && (lVar8 != lVar7)) {
        if (uVar6 != 0) {
          lVar8 = 0;
          do {
            puVar2 = (undefined8 *)(lVar7 + 0x50 + lVar8);
            *puVar2 = 0;
            puVar2[-10] = 0;
            puVar2[-9] = 0;
            puVar2[-8] = 0;
            puVar2[-7] = 0;
            puVar3 = (undefined8 *)(*param_1 + lVar8);
            uVar4 = *puVar3;
            uVar5 = puVar3[1];
            uVar9 = puVar3[3];
            puVar2[-8] = puVar3[2];
            puVar2[-7] = uVar9;
            puVar2[-10] = uVar4;
            puVar2[-9] = uVar5;
            uVar4 = puVar3[4];
            uVar5 = puVar3[5];
            uVar9 = puVar3[7];
            puVar2[-4] = puVar3[6];
            puVar2[-3] = uVar9;
            puVar2[-6] = uVar4;
            puVar2[-5] = uVar5;
            uVar9 = puVar3[10];
            uVar4 = puVar3[8];
            uVar5 = puVar3[9];
            *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar3 + 0xb);
            puVar2[-1] = uVar5;
            *puVar2 = uVar9;
            puVar2[-2] = uVar4;
            lVar10 = *param_1;
            puVar2 = (undefined8 *)(lVar10 + lVar8);
            if (puVar2[10] != 0) {
              FUN__text__00400fc0(2);
            }
            if (*(long *)(lVar10 + lVar8) != 0) {
              *(undefined4 *)(puVar2 + 1) = 0;
              FUN__text__00400fc0(0);
              *puVar2 = 0;
              *(undefined4 *)((long)puVar2 + 0xc) = 0;
            }
            if (puVar2[2] != 0) {
              *(undefined4 *)(puVar2 + 3) = 0;
              FUN__text__00400fc0(0);
              puVar2[2] = 0;
              *(undefined4 *)((long)puVar2 + 0x1c) = 0;
            }
            lVar8 = lVar8 + 0x60;
          } while ((ulong)uVar6 * 0x60 != lVar8);
          lVar8 = *param_1;
        }
        FUN__text__00400fc0(0,lVar8);
      }
      goto LAB__text__004f81ac;
    }
  }
  else {
    lVar7 = FUN__text__00400fa0(0);
    if (lVar7 != 0) {
LAB__text__004f81ac:
      *param_1 = lVar7;
      *(uint *)((long)param_1 + 0xc) = uVar1;
      return 1;
    }
  }
  return 0;
}


