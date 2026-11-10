/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00433280; name: FUN_.text__00433280
 */


undefined8 FUN__text__00433280(long *param_1,int param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  
  uVar1 = *(int *)((long)param_1 + 0xc) + param_2;
  if (*param_1 == 0) {
    uVar5 = *(uint *)(param_1 + 1);
    lVar6 = FUN__text__00400f80(0,(ulong)uVar1 * 0x18);
    if (lVar6 != 0) {
      lVar7 = *param_1;
      if ((lVar7 != 0) && (lVar7 != lVar6)) {
        if (uVar5 != 0) {
          lVar7 = 0;
          do {
            puVar2 = (undefined8 *)(lVar6 + lVar7);
            *(undefined4 *)puVar2 = 0;
            *(undefined1 *)((long)puVar2 + 4) = 8;
            *(undefined4 *)(puVar2 + 1) = 0;
            puVar2[2] = 0;
            puVar3 = (undefined8 *)(*param_1 + lVar7);
            lVar7 = lVar7 + 0x18;
            uVar4 = *puVar3;
            uVar8 = puVar3[2];
            puVar2[1] = puVar3[1];
            puVar2[2] = uVar8;
            *puVar2 = uVar4;
          } while ((ulong)uVar5 * 0x18 != lVar7);
          lVar7 = *param_1;
        }
        FUN__text__00400fc0(0,lVar7);
      }
      goto LAB__text__00433354;
    }
  }
  else {
    lVar6 = FUN__text__00400fa0(0);
    if (lVar6 != 0) {
LAB__text__00433354:
      *param_1 = lVar6;
      *(uint *)((long)param_1 + 0xc) = uVar1;
      return 1;
    }
  }
  return 0;
}


