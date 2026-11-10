/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006517b4; name: FUN_.text__006517b4
 */


long FUN__text__006517b4(undefined8 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined2 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined4 *puVar6;
  long lVar7;
  long lVar8;
  
  if ((param_1 == (undefined8 *)0x0) ||
     (puVar6 = *(undefined4 **)param_1[3], puVar6 == (undefined4 *)0x0)) {
LAB__text__006518a8:
    lVar4 = 0;
  }
  else {
    lVar5 = 8;
    lVar8 = 0;
    lVar7 = 0;
    do {
      lVar3 = FUN__text__00678414(1,0x30);
      if (lVar3 == 0) {
LAB__text__006518a0:
        FUN__text__00651770(lVar8);
        goto LAB__text__006518a8;
      }
      lVar4 = FUN__text__00678404(*param_1);
      *(long *)(lVar3 + 0x18) = lVar4;
      if (lVar4 == 0) {
LAB__text__00651898:
        FUN__text__006783e4(lVar3);
        goto LAB__text__006518a0;
      }
      lVar4 = FUN__text__00678414(1,0x10);
      *(long *)(lVar3 + 0x20) = lVar4;
      if (lVar4 == 0) {
        FUN__text__006783e4(*(undefined8 *)(lVar3 + 0x18));
        goto LAB__text__00651898;
      }
      lVar4 = lVar3;
      if (lVar8 != 0) {
        lVar4 = lVar8;
      }
      if (lVar7 != 0) {
        *(long *)(lVar7 + 0x28) = lVar3;
      }
      iVar1 = *(int *)(param_1 + 2);
      *(undefined4 *)(lVar3 + 0x10) = 0x10;
      *(int *)(lVar3 + 4) = iVar1;
      *(undefined4 *)(lVar3 + 8) = 1;
      if (iVar1 == 2) {
        lVar8 = *(long *)(lVar3 + 0x20);
        *(undefined4 *)(lVar8 + 4) = *puVar6;
        *(char *)(lVar8 + 1) = (char)*(undefined4 *)(param_1 + 2);
        uVar2 = nnsocketInetHtons(param_2);
        *(undefined2 *)(lVar8 + 2) = uVar2;
      }
      puVar6 = *(undefined4 **)(param_1[3] + lVar5);
      lVar5 = lVar5 + 8;
      lVar8 = lVar4;
      lVar7 = lVar3;
    } while (puVar6 != (undefined4 *)0x0);
  }
  return lVar4;
}


