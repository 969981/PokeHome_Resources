/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0046fe70; name: FUN_.text__0046fe70
 */


undefined8 FUN__text__0046fe70(long *param_1,int param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  
  uVar1 = *(int *)((long)param_1 + 0xc) + param_2;
  lVar8 = (ulong)uVar1 * 0x18;
  if (*param_1 == 0) {
    uVar6 = *(uint *)(param_1 + 1);
    lVar8 = FUN__text__00400f90(0,lVar8,0x10);
    if (lVar8 != 0) {
      lVar7 = *param_1;
      if ((lVar7 != 0) && (lVar7 != lVar8)) {
        if (uVar6 != 0) {
          lVar7 = 0;
          do {
            puVar2 = (undefined8 *)(lVar8 + lVar7);
            *puVar2 = 0;
            *(undefined4 *)(puVar2 + 1) = 0xffffffff;
            *(undefined8 *)((long)puVar2 + 0xc) = 0;
            puVar3 = (undefined8 *)(*param_1 + lVar7);
            lVar7 = lVar7 + 0x18;
            uVar4 = *puVar3;
            uVar5 = puVar3[1];
            *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(puVar3 + 2);
            *puVar2 = uVar4;
            puVar2[1] = uVar5;
          } while ((ulong)uVar6 * 0x18 != lVar7);
          lVar7 = *param_1;
        }
        FUN__text__00400fc0(0,lVar7);
      }
      goto LAB__text__0046ff40;
    }
  }
  else {
    lVar8 = FUN__text__00400fb0(0,*param_1,lVar8,0x10);
    if (lVar8 != 0) {
LAB__text__0046ff40:
      *param_1 = lVar8;
      *(uint *)((long)param_1 + 0xc) = uVar1;
      return 1;
    }
  }
  return 0;
}


