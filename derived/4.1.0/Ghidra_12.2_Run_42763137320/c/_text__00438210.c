/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00438210; name: FUN_.text__00438210
 */


void FUN__text__00438210(long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  uint uVar7;
  
  if ((int)param_1[1] != 0) {
    plVar6 = (long *)*param_1;
    do {
      while( true ) {
        plVar1 = (long *)(*(code *)**(undefined8 **)*plVar6)();
        if ((((((*param_3 == 0) || (*plVar1 == *param_3)) &&
              (((int)param_3[1] == 0 || ((int)plVar1[1] == (int)param_3[1])))) &&
             (((int)param_3[2] == 0 || ((int)plVar1[2] == (int)param_3[2])))) &&
            (((char)param_3[3] == -1 || ((char)plVar1[3] == (char)param_3[3])))) &&
           ((((char)param_3[4] == -1 || ((char)plVar1[4] == (char)param_3[4])) &&
            ((param_3[5] == 0 || (plVar1[5] == param_3[5])))))) break;
        plVar6 = plVar6 + 2;
        if (plVar6 == (long *)(*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x10)) {
          return;
        }
      }
      plVar3 = (long *)*param_2;
      uVar7 = *(uint *)(param_2 + 1);
      plVar1 = plVar3;
      if (uVar7 == 0) {
LAB__text__00438324:
        if (plVar1 == plVar3 + (ulong)uVar7 * 2) goto LAB__text__00438330;
      }
      else {
        lVar5 = (ulong)uVar7 << 4;
        do {
          if (*plVar1 == *plVar6) goto LAB__text__00438324;
          plVar1 = plVar1 + 2;
          lVar5 = lVar5 + -0x10;
        } while (lVar5 != 0);
LAB__text__00438330:
        *(undefined1 *)(plVar6 + 1) = *(undefined1 *)((long)param_2 + 0x11);
        uVar7 = *(uint *)(param_2 + 1);
        if (*(uint *)((long)param_2 + 0xc) <= uVar7) {
          uVar2 = FUN__text__00438430(param_2);
          if (((uVar2 & 1) == 0) || (*(uint *)((long)param_2 + 0xc) <= uVar7))
          goto LAB__text__004383a4;
          uVar7 = *(uint *)(param_2 + 1);
        }
        *(uint *)(param_2 + 1) = uVar7 + 1;
        if (*param_2 != 0) {
          plVar1 = (long *)(*param_2 + (ulong)uVar7 * 0x10);
          *plVar1 = 0;
          *(undefined1 *)(plVar1 + 1) = 0;
          lVar5 = *plVar6;
          *(char *)(plVar1 + 1) = (char)plVar6[1];
          *plVar1 = lVar5;
          *(byte *)(param_2 + 2) = *(byte *)(param_2 + 2) & 0xfe | 3 < *(byte *)(param_2 + 2);
        }
      }
LAB__text__004383a4:
      uVar7 = *(uint *)(param_1 + 1);
      lVar5 = *param_1 + (ulong)uVar7 * 0x10;
      plVar1 = (long *)(lVar5 + -0x10);
      if (plVar6 < plVar1) {
        lVar4 = *plVar1;
        *(undefined1 *)(plVar6 + 1) = *(undefined1 *)(lVar5 + -8);
        *plVar6 = lVar4;
        uVar7 = *(uint *)(param_1 + 1);
      }
      *(uint *)(param_1 + 1) = uVar7 - 1;
      *(byte *)(param_1 + 2) = *(byte *)(param_1 + 2) & 0xfe | 3 < *(byte *)(param_1 + 2);
      *(byte *)(param_2 + 2) = *(byte *)(param_2 + 2) & 0xfe | 3 < *(byte *)(param_2 + 2);
    } while (plVar6 != (long *)(*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x10));
  }
  return;
}


