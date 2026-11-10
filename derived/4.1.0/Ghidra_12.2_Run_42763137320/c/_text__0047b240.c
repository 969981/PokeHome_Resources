/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0047b240; name: FUN_.text__0047b240
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN__text__0047b240(long *param_1,int param_2)

{
  uint uVar1;
  long *plVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  uVar1 = *(int *)((long)param_1 + 0xc) + param_2;
  if (*param_1 == 0) {
    uVar3 = *(uint *)(param_1 + 1);
    lVar5 = FUN__text__00400f80(0,(ulong)uVar1 * 0x88);
    lVar4 = _DAT_008a4820;
    if (lVar5 != 0) {
      lVar6 = *param_1;
      if ((lVar6 != 0) && (lVar6 != lVar5)) {
        if (uVar3 != 0) {
          lVar6 = 0;
          do {
            plVar2 = (long *)(lVar5 + lVar6);
            *(undefined4 *)(plVar2 + 3) = 0;
            *(undefined4 *)(plVar2 + 4) = 0;
            *(undefined1 *)(plVar2 + 5) = 0xff;
            *(undefined1 *)(plVar2 + 6) = 0xff;
            *plVar2 = lVar4 + 0x10;
            plVar2[7] = 0;
            plVar2[8] = 0;
            plVar2[1] = lVar4 + 0x58;
            plVar2[2] = 0;
            plVar2[9] = 0;
            plVar2[10] = 0;
            plVar2[0xb] = 0;
            plVar2[0xc] = 0;
            plVar2[0xd] = 0;
            plVar2[0xe] = 0;
            plVar2[0xf] = 0;
            plVar2[0x10] = 0;
            FUN__text__0042c6f0(plVar2,*param_1 + lVar6);
            (*(code *)**(undefined8 **)(*param_1 + lVar6))();
            lVar6 = lVar6 + 0x88;
          } while ((ulong)uVar3 * 0x88 != lVar6);
          lVar6 = *param_1;
        }
        FUN__text__00400fc0(0,lVar6);
      }
      goto LAB__text__0047b350;
    }
  }
  else {
    lVar5 = FUN__text__00400fa0(0);
    if (lVar5 != 0) {
LAB__text__0047b350:
      *param_1 = lVar5;
      *(uint *)((long)param_1 + 0xc) = uVar1;
      return 1;
    }
  }
  return 0;
}


