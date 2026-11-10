/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004fd870; name: FUN_.text__004fd870
 */


undefined8 FUN__text__004fd870(long *param_1,int param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  
  uVar1 = *(int *)((long)param_1 + 0xc) + param_2;
  if (*param_1 == 0) {
    uVar7 = *(uint *)(param_1 + 1);
    lVar8 = FUN__text__00400f80(0,(ulong)uVar1 * 0x48);
    if (lVar8 != 0) {
      lVar9 = *param_1;
      if ((lVar9 != 0) && (lVar9 != lVar8)) {
        if (uVar7 != 0) {
          lVar9 = 0;
          do {
            puVar2 = (undefined8 *)(lVar8 + lVar9);
            *puVar2 = 0x891510;
            *(undefined4 *)((long)puVar2 + 0xc) = 0xffffffff;
            puVar2[2] = 0;
            *(undefined4 *)(puVar2 + 3) = 0;
            *(undefined4 *)(puVar2 + 4) = 0;
            *(undefined1 *)(puVar2 + 5) = 0xff;
            *(undefined1 *)(puVar2 + 6) = 0xff;
            puVar2[7] = 0;
            puVar2[8] = 0;
            lVar3 = *param_1 + lVar9;
            uVar4 = *(undefined8 *)(lVar3 + 8);
            uVar5 = *(undefined8 *)(lVar3 + 0x10);
            uVar6 = *(undefined8 *)(lVar3 + 0x20);
            puVar2[3] = *(undefined8 *)(lVar3 + 0x18);
            puVar2[4] = uVar6;
            puVar2[1] = uVar4;
            puVar2[2] = uVar5;
            uVar4 = *(undefined8 *)(lVar3 + 0x28);
            uVar5 = *(undefined8 *)(lVar3 + 0x30);
            uVar6 = *(undefined8 *)(lVar3 + 0x40);
            puVar2[7] = *(undefined8 *)(lVar3 + 0x38);
            puVar2[8] = uVar6;
            puVar2[5] = uVar4;
            puVar2[6] = uVar5;
            (**(code **)(*(long *)(*param_1 + lVar9) + 0x10))();
            lVar9 = lVar9 + 0x48;
          } while ((ulong)uVar7 * 0x48 != lVar9);
          lVar9 = *param_1;
        }
        FUN__text__00400fc0(0,lVar9);
      }
      goto LAB__text__004fd998;
    }
  }
  else {
    lVar8 = FUN__text__00400fa0(0);
    if (lVar8 != 0) {
LAB__text__004fd998:
      *param_1 = lVar8;
      *(uint *)((long)param_1 + 0xc) = uVar1;
      return 1;
    }
  }
  return 0;
}


