/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0042efb0; name: FUN_.text__0042efb0
 */


undefined8 FUN__text__0042efb0(long *param_1,int param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  
  uVar2 = *(int *)((long)param_1 + 0xc) + param_2;
  if (*param_1 == 0) {
    uVar4 = *(uint *)(param_1 + 1);
    lVar5 = FUN__text__00400f80(0,(ulong)uVar2 << 2);
    if (lVar5 != 0) {
      lVar6 = *param_1;
      if ((lVar6 != 0) && (lVar6 != lVar5)) {
        if (uVar4 != 0) {
          lVar6 = 0;
          do {
            puVar3 = (undefined4 *)(lVar5 + lVar6);
            *(undefined2 *)puVar3 = 0xffff;
            *(undefined1 *)((long)puVar3 + 2) = 2;
            *(byte *)((long)puVar3 + 3) = *(byte *)((long)puVar3 + 3) & 0xfe;
            puVar1 = (undefined4 *)(*param_1 + lVar6);
            lVar6 = lVar6 + 4;
            *puVar3 = *puVar1;
          } while ((ulong)uVar4 * 4 != lVar6);
          lVar6 = *param_1;
        }
        FUN__text__00400fc0(0,lVar6);
      }
      goto LAB__text__0042f070;
    }
  }
  else {
    lVar5 = FUN__text__00400fa0(0);
    if (lVar5 != 0) {
LAB__text__0042f070:
      *param_1 = lVar5;
      *(uint *)((long)param_1 + 0xc) = uVar2;
      return 1;
    }
  }
  return 0;
}


