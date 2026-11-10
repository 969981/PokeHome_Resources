/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004f4b40; name: FUN_.text__004f4b40
 */


undefined8 FUN__text__004f4b40(long *param_1,int param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  
  uVar1 = *(int *)((long)param_1 + 0xc) + param_2;
  if (*param_1 == 0) {
    uVar4 = *(uint *)(param_1 + 1);
    lVar5 = FUN__text__00400f80(0,(ulong)uVar1 << 4);
    if (lVar5 != 0) {
      lVar6 = *param_1;
      if ((lVar6 != 0) && (lVar6 != lVar5)) {
        if (uVar4 != 0) {
          lVar6 = 0;
          do {
            puVar2 = (undefined8 *)(lVar5 + lVar6);
            *puVar2 = 0;
            puVar2[1] = 0;
            uVar3 = ((undefined8 *)(*param_1 + lVar6))[1];
            *puVar2 = *(undefined8 *)(*param_1 + lVar6);
            puVar2[1] = uVar3;
            if (*(long *)(*param_1 + lVar6 + 8) != 0) {
              FUN__text__00400fc0(2);
            }
            lVar6 = lVar6 + 0x10;
          } while ((ulong)uVar4 * 0x10 != lVar6);
          lVar6 = *param_1;
        }
        FUN__text__00400fc0(0,lVar6);
      }
      goto LAB__text__004f4c1c;
    }
  }
  else {
    lVar5 = FUN__text__00400fa0(0);
    if (lVar5 != 0) {
LAB__text__004f4c1c:
      *param_1 = lVar5;
      *(uint *)((long)param_1 + 0xc) = uVar1;
      return 1;
    }
  }
  return 0;
}


